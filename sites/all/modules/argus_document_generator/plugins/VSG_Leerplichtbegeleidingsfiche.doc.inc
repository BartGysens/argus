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
function argus_document_generator_VSG_Leerplichtbegeleidingsfiche_init() {
	return array(
			'cat' => 'LLN',
			'subcat' => 'VSG',
			'title' => t('Verslag - Leerplichtbegeleidingsfiche - ILB'),
			'dependencies' => array(
					'argus_leerplichtbegeleiding',
			),
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_VSG_Leerplichtbegeleidingsfiche_form($form, &$form_state) {
	$query = ' SELECT n.nid AS id, n.title AS title ' .
			'FROM {node} AS n ' .
			'WHERE type = :type ' .
			'ORDER BY n.title';
	$options = db_query($query, array(':type' => 'lvs_leerplichtbegeleiding'))->fetchAllKeyed();
	$form['id'] = array(
        '#type' => 'select',
        '#title' => t('Leerplichtbegeleiding'),
        '#description' => t('Selecteer de leerplichtbegeleiding waarvoor dit document moet worden aangemaakt.'),
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
function argus_document_generator_VSG_Leerplichtbegeleidingsfiche_form_submit($form, &$form_state) {
    argus_document_generator_VSG_Leerplichtbegeleidingsfiche_document($form_state);
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_VSG_Leerplichtbegeleidingsfiche_document($args) {
	require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register();
	
	/* Load node */
    $nid = $args['values']['id'];
    $node = (array) node_load($nid);
    
    /* Load user */
    $uid = $node['field_leerling'][LANGUAGE_NONE][0]['target_id'];
    $u = user_load($uid);
    
    /* Load template */
	$document = new TemplateProcessor(argus_document_generator_get_plugin_template('VSG_Leerplichtbegeleidingsfiche'));
	
	/* Start replacing values in template */
	$document->setValue('naam', argus_get_user_realname($uid));
	$document->setValue('klas', argus_klasbeheer_get_user_class($uid, 'title'));
	
	$schoolyear = argus_schoolyear(0, 'Y');
	$document->setValue('schooljaar', $schoolyear['start'] . ' - '. $schoolyear['end']);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_ouders_datum'])){
		$value = format_date(strtotime($node['field_lb_ouders_datum'][LANGUAGE_NONE][0]['value']), 'custom', 'd/m/Y');
	} else {
		$value = '';
	}
	$document->setValue('ouders_datum', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_ouders_contact_via'])){
		$value = $node['field_lb_ouders_contact_via'][LANGUAGE_NONE][0]['value'];
	} else {
		$value = '';
	}
	$document->setValue('ouders_contact', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_ouders_afspraken'])){
		$value = str_replace(chr(13), '<w:br/>', $node['field_lb_ouders_afspraken'][LANGUAGE_NONE][0]['value']);
	} else {
		$value = '';
	}
	$document->setValue('ouders_afspraken', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_ouders_resultaten'])){
		$value = str_replace(chr(13), '<w:br/>', $node['field_lb_ouders_resultaten'][LANGUAGE_NONE][0]['value']);
	} else {
		$value = '';
	}
	$document->setValue('ouders_resultaat', $value);

	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_lln_datum'])){
		$value = format_date(strtotime($node['field_lb_lln_datum'][LANGUAGE_NONE][0]['value']), 'custom', 'd/m/Y');
	} else {
		$value = '';
	}
	$document->setValue('lln_datum', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_lln_contact_via'])){
		$value = $node['field_lb_lln_contact_via'][LANGUAGE_NONE][0]['value'];
	} else {
		$value = '';
	}
	$document->setValue('lln_contact', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_lln_afspraken'])){
		$value = str_replace(chr(13), '<w:br/>', $node['field_lb_lln_afspraken'][LANGUAGE_NONE][0]['value']);
	} else {
		$value = '';
	}
	$document->setValue('lln_afspraken', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_lln_resultaten'])){
		$value = str_replace(chr(13), '<w:br/>', $node['field_lb_lln_resultaten'][LANGUAGE_NONE][0]['value']);
	} else {
		$value = '';
	}
	$document->setValue('lln_resultaat', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_datum'])){
		$value = format_date(strtotime($node['field_datum'][LANGUAGE_NONE][0]['value']), 'custom', 'd/m/Y');
	} else {
		$value = '';
	}
	$document->setValue('datum', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_lb_clb_contact_via'])){
		$value = $node['field_lb_clb_contact_via'][LANGUAGE_NONE][0]['value'];
	} else {
		$value = '';
	}
	$document->setValue('contact_clb', $value);
	
	if (array_key_exists(LANGUAGE_NONE, $node['field_gebruiker'])){
		$value = argus_get_user_realname($node['field_gebruiker'][LANGUAGE_NONE][0]['target_id']);
	} else {
		$value = '';
	}
	$document->setValue('contactpersoon_clb', $value);
	
	/* Handle details about: absences */
	$bcodes = 0;
    $userDetails = argus_engine_get_pupil_details($uid);
	if (count($userDetails['absences']['totals'])){
		$absences = array();
		foreach ($userDetails['absences']['totals'] as $a){
			$absences[] = $a['count'].' x '.$a['code'];
			if ($a['code'] == 'B'){
				$bcodes = $a['count'];
			}
		}
		$overview = implode(', ',$absences);
	} else {
		$overview = t('geen opmerkingen');
	}
	$document->setValue('afwezigheden', $overview);

	$document->setValue('b-codes', $bcodes);
	
	/* Generate the document and initiate download */
	$filename = '/tmp/VSG Leerplichtbegeleidingsfiche '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.argus_klasbeheer_get_user_class($uid, 'title').' '.date('dmY').'.docx';
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