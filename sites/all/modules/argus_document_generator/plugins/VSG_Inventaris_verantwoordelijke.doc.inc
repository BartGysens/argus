<?php

use PhpOffice\PhpWord\TemplateProcessor;

/* 
 * Copyright (C) 2017 bartgysens
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Plugin definition -- REQUIRED --
 */
function argus_document_generator_VSG_Inventaris_verantwoordelijke_init() {
	return array(
			'cat' => 'PERS',
			'subcat' => 'VSG',
			'title' => t('Inventaris - lijst per verantwoordelijke'),
			'dependencies' => array(
					'argus_inventaris',
			),
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_VSG_Inventaris_verantwoordelijke_form($form, &$form_state) {
	$options = array();
	$query = 'SELECT DISTINCT(n.uid) AS uid '
			. 'FROM {node} AS n '
			. 'LEFT JOIN {field_data_field_inventaris_status} AS s ON s.entity_id = n.nid '
			. 'WHERE n.type = :bundle AND s.field_inventaris_status_value != :state';
	$results = db_query($query, array(':state' => 'verwijderd', ':bundle' => 'inventaris'))->fetchCol();
	foreach ($results as $uid){
		$options[$uid] = argus_get_user_realname($uid);
	}
	asort($options);
	
    $form['personeelslid'] = array(
        '#type' => 'select',
        '#title' => t('Personeelslid'),
        '#description' => t('Selecteer het personeelslid waarvoor dit document moet worden aangemaakt.'),
        '#options' => $options,
    );
    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Document downloaden (Word-formaat)'),
    );
    return $form;
}

/**
 * Page callback: Form submission
 *
 * @return array
 */
function argus_document_generator_VSG_Inventaris_verantwoordelijke_form_submit($form, &$form_state) {
    argus_document_generator_VSG_Inventaris_verantwoordelijke_document($form_state);
}

/**
 * Page callback: Form submission
 *
 * @return array
 */
function argus_document_generator_VSG_Inventaris_verantwoordelijke_document($args) {
    require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register();
	
	/* Load template */
    $document = new TemplateProcessor(argus_document_generator_get_plugin_template('VSG_Inventaris_verantwoordelijke'));
    
    /* Load user */
    $uid = $args['values']['personeelslid'];
    
    /* Start replacing values in template */
    $document->setValue('naam', argus_get_user_realname($uid));
    $document->setValue('datum', format_date(time(), 'custom', 'l, j F Y'));
    
    global $user;
    $document->setValue('directie', argus_get_user_realname($user->uid));
    

    $prefixList = '<w:p><w:pPr><w:pStyle w:val="ListParagraph"/><w:numPr><w:ilvl w:val="0"/><w:numId w:val=":k"/></w:numPr></w:pPr><w:r><w:t>';
    $suffixList = '</w:t></w:r></w:p>';
    
    $lists = array('actief', 'inactief', 'nieuw');
    foreach($lists as $k => $list){
	    $query = 'SELECT n.nid AS nid, n.title AS title, f.field_inventaris_fir_value AS fir '
	    		. 'FROM {node} AS n '
	    		. 'LEFT JOIN {field_data_field_inventaris_fir} AS f ON f.entity_id = n.nid '
	    		. 'INNER JOIN {field_data_field_inventaris_status} AS s ON s.entity_id = n.nid '
	    		. 'WHERE n.type = :bundle AND n.uid = :uid AND s.field_inventaris_status_value = :state ';
	    $results = db_query($query, array(':bundle' => 'inventaris', ':state' => $list, ':uid' => $uid))->fetchAllAssoc('nid');
	    $value = '';
	    foreach ($results as $item) {
	    	$value .= str_replace(':k',($k+9),$prefixList).htmlspecialchars($item->fir . ' - ' . $item->title).$suffixList;
	    }
	    $document->setValue($list, $value);
    }
    
    /* Generate the document and initiate download */
    $filename = '/tmp/VSG Inventaris verantwoordelijke '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.date('dmY').'.docx';
    $document->saveAs($filename);
    
    header("Pragma: public");
    header("Expires: 0");
    header("Cache-Control: must-revalidate, post-check=0, pre-check=0");
    header("Cache-Control: private",false); // required for certain browsers
    header("Content-Type: application/msword");
    header("Content-Disposition: attachment; filename=\"".substr($filename,5)."\";" );
    header("Content-Transfer-Encoding: binary");
    header("Content-Length: ".filesize($filename));
    ob_clean();
    
    readfile($filename);
    unlink($filename);
    exit;
}
