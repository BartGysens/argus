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
function argus_document_generator_VSG_Stageverslag_init() {
	return array(
			'cat' => 'LLN',
			'subcat' => 'VSG',
			'title' => t('Verslag - Stagebezoek - LKR/STAGEBEGELEIDER/TA'),
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
function argus_document_generator_VSG_Stageverslag_form($form, &$form_state) {
	$query = 'SELECT n.nid AS id, n.title AS title ';
	$query .= 'FROM {node} AS n ';
	$query .= 'INNER JOIN {field_data_field_leerling} AS l ON l.entity_id = n.nid ';
	$query .= 'INNER JOIN {users} AS u ON u.uid = l.field_leerling_target_id ';
	$query .= 'INNER JOIN {field_data_field_stage_periode} AS sp ON l.entity_id = sp.entity_id ';
    $query .= 'INNER JOIN {field_data_field_user_sms_naam} AS an ON u.uid = an.entity_id ';
    $query .= 'INNER JOIN {field_data_field_user_sms_voornaam} AS vn ON u.uid = vn.entity_id ';
	$query .= 'WHERE u.status = 1 ';
	$query .= 'ORDER BY sp.field_stage_periode_target_id DESC, an.field_user_sms_naam_value ASC, vn.field_user_sms_voornaam_value ASC ';
	$items = db_query($query, array())->fetchAllKeyed();
	
    $form['stage'] = array(
        '#type' => 'select',
        '#title' => t('Stage'),
        '#description' => t('Selecteer de stage waarvoor dit document moet worden aangemaakt.'),
        '#options' => $items,
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
function argus_document_generator_VSG_Stageverslag_form_submit($form, &$form_state) {
    argus_document_generator_VSG_Stageverslag_document($form_state);
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_VSG_Stageverslag_document($args) {
	require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register();
	
	/* Load stage data */
	$stage = node_load($args['values']['stage']);
	$stagegever = node_load($stage->field_stagegever[LANGUAGE_NONE][0]['target_id']);
	$stagebegeleider = user_load($stage->field_leerkracht[LANGUAGE_NONE][0]['target_id']);
	
	/* Load user (student/pupil) */
	$uid = $stage->field_leerling[LANGUAGE_NONE][0]['target_id'];
	$u = user_load($uid);
	
	/* Load template */
	$document = new TemplateProcessor(argus_document_generator_get_plugin_template('VSG_Stageverslag'));
	
	/* Start replacing values in template */
	$document->setValue('naam', argus_get_user_realname($uid));
	$document->setValue('klas', argus_get_user_class($uid, 'title'));
	
	$document->setValue('schooljaar', implode('-', argus_schoolyear(0, 'Y')));
	$document->setValue('datum', format_date(time(), 'custom', 'l, j F Y'));
	
	$document->setValue('organisatie_naam', $stagegever->title);
	$contact = '';
	if (array_key_exists(LANGUAGE_NONE, $stagegever->field_org_contact_naam)){
		$contact = $stagegever->field_org_contact_naam[LANGUAGE_NONE][0]['value'];
	}
	if (array_key_exists(LANGUAGE_NONE, $stagegever->field_org_contact_voornaam)){
		$contact .= ', '.$stagegever->field_org_contact_voornaam[LANGUAGE_NONE][0]['value'];
	}
	
	$mentor = '';
	if (array_key_exists(LANGUAGE_NONE, $stagegever->field_org_stagementor_naam)){
		$mentor = $stagegever->field_org_stagementor_naam[LANGUAGE_NONE][0]['value'];
	}
	if (array_key_exists(LANGUAGE_NONE, $stagegever->field_org_stagementor_voornaam)){
		$mentor .= ', '.$stagegever->field_org_stagementor_voornaam[LANGUAGE_NONE][0]['value'];
	}
	if (!$mentor)
	{
		$mentor = $contact;
	}
	$document->setValue('mentor_naam', $mentor);
	
	$document->setValue('begeleider_naam', argus_get_user_realname($stagebegeleider->uid));
	
	global $user;
	$document->setValue('auteur', argus_get_user_realname($user->uid));
	
	/* Generate the document and initiate download */
	$filename = '/tmp/VSG Stageverslag '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.argus_get_user_class($uid, 'title').' '.date('dmY').'.docx';
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