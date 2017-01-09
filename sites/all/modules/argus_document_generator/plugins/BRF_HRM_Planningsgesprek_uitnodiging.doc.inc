<?php

use PhpOffice\PhpWord\TemplateProcessor;
/* 
 * Copyright (C) 2016 bartgysens
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
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_BRF_HRM_Planningsgesprek_uitnodiging_form($form, &$form_state) {
	$query = ' SELECT n.nid AS id, n.title AS title ' .
			'FROM {node} AS n ' .
			'WHERE type = :type ' .
			'ORDER BY n.title';
	$options = db_query($query, array(':type' => 'hrm_planningsgesprek'))->fetchAllKeyed();
	$form['id'] = array(
        '#type' => 'select',
        '#title' => t('Planningsgesprek'),
        '#description' => t('Selecteer het planningsgesprek waarvoor dit document moet worden aangemaakt.'),
        '#options' => $options,
        '#required' => true,
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
function argus_document_generator_BRF_HRM_Planningsgesprek_uitnodiging_form_submit($form, &$form_state) {
    argus_document_generator_BRF_HRM_Planningsgesprek_uitnodiging_document($form_state);
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_BRF_HRM_Planningsgesprek_uitnodiging_document($args) {
	require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register();
	
	/* Load node */
    $nid = $args['values']['id'];
    $node = node_load($nid);
    
    /* Load user */
    $uid = $node->field_personeelslid[LANGUAGE_NONE][0]['target_id'];
    $u = user_load($uid);
    
    /* Load template */
	$document = new TemplateProcessor(drupal_get_path('module', 'argus_document_generator') . '/plugins/docs/BRF_HRM_Planningsgesprek_uitnodiging.docx');
	
	/* Start replacing values in template */
	$document->setValue('evaluator', argus_get_user_realname($node->uid));
	
	$document->setValue('naam', argus_get_user_realname($uid));
	
	$document->setValue('datum', format_date(time(), 'custom', 'j F Y'));
	
	$document->setValue('datum_gesprek', format_date(strtotime($node->field_tijdstip[LANGUAGE_NONE][0]['value']), 'custom', 'l, j F Y'));
	$document->setValue('uur_gesprek', format_date(strtotime($node->field_tijdstip[LANGUAGE_NONE][0]['value']), 'custom', 'H:i'));
	
	if ($u->field_user_sms_geslacht[LANGUAGE_NONE][0]['value'] == 'm'){
		$document->setValue('geslacht', 'de heer');
	} else {
		$document->setValue('geslacht', 'mevrouw');
	}
	
	
	/* Generate the document and initiate download */
	$filename = '/tmp/BRF Planningsgesprek - uitnodiging '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.argus_get_user_class($uid, 'title').' '.date('dmY').'.docx';
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