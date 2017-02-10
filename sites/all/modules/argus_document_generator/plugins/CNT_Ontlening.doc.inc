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
function argus_document_generator_CNT_Ontlening_init() {
	return array(
			'cat' => 'ALG',
			'subcat' => 'CNT',
			'title' => t('Ontlening - huurcontract'),
			'dependencies' => array(
					'argus_ontleningen',
			),
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_CNT_Ontlening_form($form, &$form_state) {
	$options = array();
	$query = 'SELECT n.nid AS nid '
			. 'FROM {node} AS n '
			. 'WHERE n.type = :bundle '
			. 'ORDER BY n.nid DESC';
	$results = db_query($query, array(':bundle' => 'ontlening'))->fetchCol();
	foreach ($results as $nid){
		$n = node_load($nid);
		$options[$nid] = $n->title;
	}
	asort($options);
	
    $form['id'] = array(
        '#type' => 'select',
        '#title' => t('Ontlening'),
        '#description' => t('Selecteer de ontlening waarvoor dit document moet worden aangemaakt.'),
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
function argus_document_generator_CNT_Ontlening_form_submit($form, &$form_state) {
    argus_document_generator_CNT_Ontlening_document($form_state);
}

/**
 * Page callback: Form submission
 *
 * @return array
 */
function argus_document_generator_CNT_Ontlening_document($args) {
    require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register();
	
	/* Load template */
    $document = new TemplateProcessor(argus_document_generator_get_plugin_template('CNT_Ontlening'));
    
    /* Load node */
    $node = node_load($args['values']['id']);
    
    /* Load user */
    $uid = $node->field_gebruiker[LANGUAGE_NONE][0]['target_id'];
    
    /* Start replacing values in template */
    $document->setValue('naam', argus_get_user_realname($uid));
    $document->setValue('datum', format_date(time(), 'custom', 'l, j F Y'));

    $value = '';
    if (array_key_exists(LANGUAGE_NONE, $node->field_ontleen_periode)){
    	$value = format_date(strtotime($node->field_ontleen_periode[LANGUAGE_NONE][0]['value']), 'custom', 'l, j F Y');
    }
    $document->setValue('datum_uit', $value);
    $value = '';
    if (array_key_exists(LANGUAGE_NONE, $node->field_ontleen_periode)){
    	$value = format_date(strtotime($node->field_ontleen_periode[LANGUAGE_NONE][0]['value2']), 'custom', 'l, j F Y');
    }
    $document->setValue('datum_in', $value);
    
    $prefixList = '<w:p><w:pPr><w:pStyle w:val="ListParagraph"/><w:numPr><w:ilvl w:val="0"/><w:numId w:val="9"/></w:numPr></w:pPr><w:r><w:t>';
    $suffixList = '</w:t></w:r></w:p>';
    
    $items = array();
    if (array_key_exists(LANGUAGE_NONE, $node->field_ontleen_materiaal)){
    	$value = $node->field_ontleen_materiaal[LANGUAGE_NONE][0]['value'];
        if (array_key_exists(LANGUAGE_NONE, $node->field_ontleen_inventarisnummer)){
	    	$value .= ' (' . $node->field_ontleen_inventarisnummer[LANGUAGE_NONE][0]['value'] . ')';
	    }
	    $items[] = $value;
    }
    
    if (array_key_exists(LANGUAGE_NONE, $node->field_inventarisitem)){
    	foreach ($node->field_inventarisitem[LANGUAGE_NONE] as $i){
    		$i = node_load($i['target_id']);
    		$value = $i->title;
    		if (array_key_exists(LANGUAGE_NONE, $i->field_inventaris_fir)){
    			$value .= ' (' . $i->field_inventaris_fir[LANGUAGE_NONE][0]['value'] . ')';
    		}
    		$items[] = $value;
    	}
    }
    
    $value = '';
    foreach ($items as $item) {
    	$value .= $prefixList.htmlspecialchars($item).$suffixList;
    }
    $document->setValue('materiaal', $value);
    
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
    $filename = '/tmp/CNT Ontlening '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.date('dmY').'.docx';
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
