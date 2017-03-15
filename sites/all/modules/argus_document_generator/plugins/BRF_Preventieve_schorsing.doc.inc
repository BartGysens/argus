<?php

/*
 * Copyright (C) 2015 bartgysens
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Plugin definition -- REQUIRED --
 */
function argus_document_generator_BRF_Preventieve_schorsing_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'BRF',
			'title' => t ( 'Brief - Preventieve schorsing - ILB' ) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_BRF_Preventieve_schorsing_form($form, &$form_state) {
	$form ['leerling'] = array (
			'#type' => 'select',
			'#title' => t ( 'Leerling' ),
			'#description' => t ( 'Selecteer de leerling waarvoor dit document moet worden aangemaakt.' ),
			'#options' => argus_get_user_select_options ( 'leerling' ),
			'#required' => false 
	);
	
	$form ['motivation'] = array (
			'#type' => 'textarea',
			'#title' => t ( 'Motivatie voor deze schorsing' ),
			'#description' => t ( 'Beschrijf de reden(en) om deze preventieve schorsing uit te voeren.' ),
			'#required' => true 
	);
	
	$form ['period'] = array (
			'#type' => 'textfield',
			'#title' => t ( 'Dagen of periode dat de schorsing wordt uitgevoerd' ),
			'#description' => t ( 'Beschrijf de periode ofwel met een dag ("op ...") ofwel met een periode - maximaal 10 dagen - ("vanaf ..." of "van ... tot ...").' ),
			'#required' => true 
	);
	
	$form ['submit'] = array (
			'#type' => 'submit',
			'#value' => t ( 'Document downloaden (Word-formaat)' ) 
	);
	return $form;
}

/**
 * Page callback: Form submission
 *
 * @return array
 */
function argus_document_generator_BRF_Preventieve_schorsing_form_submit($form, &$form_state) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord_0.6.2_Beta/PHPWord.php';
	
	/* New Word-document */
	$PHPWord = new PHPWord ();
	
	/* Load template */
	$document = $PHPWord->loadTemplate ( argus_document_generator_get_plugin_template ( 'BRF_Preventieve_schorsing' ) );
	
	/* Load user (student/pupil) */
	$uid = $form_state ['values'] ['leerling'];
	$u = user_load ( $uid );
	
	/* Determine age of pupil */
	if ($u) {
		if (count ( $u->field_user_sms_geboortedatum )) {
			$birthday = new DateTime ( $u->field_user_sms_geboortedatum [LANGUAGE_NONE] [0] ['value'] );
		}
	}
	$age = 0;
	if (isset ( $birthday )) {
		$age = date_diff ( $birthday, new DateTime ( 'now' ) )->format ( '%y' );
	}
	
	/* Start replacing values in template */
	if ($age > 17) {
		$document->setValue ( 'aanhef', argus_get_user_realname ( $uid ) );
	} else {
		$document->setValue ( 'aanhef', t ( 'de ouders van ' ) . argus_get_user_realname ( $uid ) );
	}
	
	$document->setValue ( 'straat_hnr', argus_render ( 'user', $u, 'field_user_sms_straat' ) . ' ' . argus_render ( 'user', $u, 'field_user_sms_huisnummer' ) . ' ' . argus_render ( 'user', $u, 'field_user_sms_busnummer' ) );
	$document->setValue ( 'postcode_woonplaats', argus_render ( 'user', $u, 'field_user_sms_postcode' ) . ' ' . argus_render ( 'user', $u, 'field_user_sms_woonplaats' ) );
	
	$document->setValue ( 'datum_vandaag', date ( 'd/m/Y' ) );
	
	$salutation = '';
	if ($age > 17) {
		$salutation = t ( 'u' );
	} else {
		if ($u) {
			if ($u->field_user_sms_geslacht [LANGUAGE_NONE] [0] ['value'] == 'm') {
				$salutation = t ( 'uw zoon' );
			} else {
				$salutation = t ( 'uw dochter' );
			}
		}
	}
	$document->setValue ( 'aanspreking', $salutation );
	
	$document->setValue ( 'motivatie', str_replace ( chr ( 13 ), '<w:br/>', $form_state ['values'] ['motivation'] ) );
	
	$document->setValue ( 'dagen_schorsing', str_replace ( chr ( 13 ), '<w:br/>', $form_state ['values'] ['period'] ) );
	
	/* Generate the document and initiate download */
	$filename = '/tmp/BRF Preventieve schorsing ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY' ) . '.docx';
	$document->save ( $filename );
	
	header ( "Pragma: public" );
	header ( "Expires: 0" );
	header ( "Cache-Control: must-revalidate, post-check=0, pre-check=0" );
	header ( "Cache-Control: private", false ); // required for certain browsers
	header ( "Content-Type: application/msword" );
	header ( "Content-Disposition: attachment; filename=\"" . substr ( $filename, 5 ) . "\";" );
	header ( "Content-Transfer-Encoding: binary" );
	header ( "Content-Length: " . filesize ( $filename ) );
	ob_clean ();
	
	readfile ( $filename );
	unlink ( $filename );
	exit ();
}
