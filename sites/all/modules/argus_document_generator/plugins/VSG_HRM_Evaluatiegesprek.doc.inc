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
 * Plugin definition -- REQUIRED --
 */
function argus_document_generator_VSG_HRM_Evaluatiegesprek_init() {
	return array(
			'cat' => 'PERS',
			'subcat' => 'VSG',
			'title' => t('Verslag - Evaluatiegesprek - PSEC/DIR'),
			'dependencies' => array(
					'argus_hrm',
			),
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_VSG_HRM_Evaluatiegesprek_form($form, &$form_state) {
	$query = ' SELECT n.nid AS id, n.title AS title ' .
			'FROM {node} AS n ' .
			'WHERE type = :type ' .
			'ORDER BY n.title';
	$options = db_query($query, array(':type' => 'hrm_evaluatiegesprek'))->fetchAllKeyed();
	$form['id'] = array(
        '#type' => 'select',
        '#title' => t('Evaluatiegesprek'),
        '#description' => t('Selecteer het evaluatiegesprek waarvoor dit document moet worden aangemaakt.'),
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
function argus_document_generator_VSG_HRM_Evaluatiegesprek_form_submit($form, &$form_state) {
    argus_document_generator_VSG_HRM_Evaluatiegesprek_document($form_state);
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_VSG_HRM_Evaluatiegesprek_document($args) {
	require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register();
	
	/* Load node */
    $nid = $args['values']['id'];
    $node = (array) node_load($nid);
    
    /* Load user */
    $uid = $node['field_personeelslid'][LANGUAGE_NONE][0]['target_id'];
    $u = user_load($uid);
    
    /* Load template */
	$document = new TemplateProcessor(argus_document_generator_get_plugin_template('VSG_HRM_Evaluatiegesprek'));
	
	/* Start replacing values in template */
	$document->setValue('evaluator', argus_get_user_realname($node['uid']));
	
	$document->setValue('naam', argus_get_user_realname($uid));
	$document->setValue('stamnr', $u->field_user_sms_stamboeknummer[LANGUAGE_NONE][0]['value']);
	
	//TODO: Velden in Smartschool
	$document->setValue('diploma', $u->field_user_sms_hrm___diploma[LANGUAGE_NONE][0]['value']);
	$document->setValue('statuut', $u->field_user_sms_hrm___statuut[LANGUAGE_NONE][0]['value']);
	$document->setValue('aggregaat', $u->field_user_sms_hrm___aggregaat_g[LANGUAGE_NONE][0]['value']);
	
	$options = field_info_field('field_user_sms_basisrol');
	$document->setValue('ambt', $options['settings']['allowed_values'][$u->field_user_sms_basisrol[LANGUAGE_NONE][0]['value']]);
	
	$document->setValue('vakken', implode(', ', argus_uurrooster_get_courses($uid)));
	
	if (module_exists('argus_uurrooster')){
		$assignment = argus_uurrooster_get_assignment($uid);
		
		$opdracht = array();
		foreach($assignment['factor'] as $f => $t){
			if ($t){
				$opdracht[] = $t . '/' . $f;
			}
		}
		$document->setValue('opdracht', implode(' + ', $opdracht));
	} else {
		$document->setValue('opdracht', '.../...');
	}
	
	$document->setValue('datum', format_date(time(), 'custom', 'l, j F Y'));
	$document->setValue('datum_gesprek', format_date(strtotime($node['field_tijdstip'][LANGUAGE_NONE][0]['value']), 'custom', 'l, j F Y'));
	
	$document->setValue('start', format_date(strtotime($node['field_datum'][LANGUAGE_NONE][0]['value']), 'custom', 'd/m/Y'));
	$document->setValue('eind', format_date(strtotime($node['field_datum'][LANGUAGE_NONE][0]['value2']), 'custom', 'd/m/Y'));
	
	for ($x = 1; $x < 10; $x++){
		$document->setValue('p'.$x, str_replace(chr(13), '<w:br/>', $node['field_eg'.$x.'_positieve_observaties'][LANGUAGE_NONE][0]['value']));
		$document->setValue('w'.$x, str_replace(chr(13), '<w:br/>', $node['field_eg'.$x.'_werkpunten_afspraken'][LANGUAGE_NONE][0]['value']));
	}
	
	$document->setValue('eindconclusie', str_replace(chr(13), '<w:br/>', $node['field_eg_eindconclusie'][LANGUAGE_NONE][0]['value']));
	$document->setValue('beoordeling', str_replace(chr(13), '<w:br/>', $node['field_eg_beoordeling'][LANGUAGE_NONE][0]['value']));
	
	/* Generate the document and initiate download */
	$filename = '/tmp/VSG Evaluatiegesprek '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.argus_klasbeheer_get_user_class($uid, 'title').' '.date('dmY').'.docx';
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