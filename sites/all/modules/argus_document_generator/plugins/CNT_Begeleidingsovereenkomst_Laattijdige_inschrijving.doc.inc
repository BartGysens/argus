<?php

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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Plugin definition -- REQUIRED --
 */
function argus_document_generator_CNT_Begeleidingsovereenkomst_Laattijdige_inschrijving_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'CNT',
			'title' => t ( 'Begeleidingsovereenkomst - Laattijdige inschrijving - ILB' ) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_CNT_Begeleidingsovereenkomst_Laattijdige_inschrijving_form($form, &$form_state) {
	$form ['leerling'] = array (
			'#type' => 'select',
			'#title' => t ( 'Leerling' ),
			'#description' => t ( 'Selecteer de leerling waarvoor dit document moet worden aangemaakt.' ),
			'#options' => argus_engine_get_user_select_options ( 'leerling' ),
			'#required' => false 
	);
	$form ['datum_inschrijving'] = array (
			'#type' => 'date_select',
			'#title' => t ( 'Datum van de inschrijving' ),
			'#description' => t ( 'Geef het tijdstip dat deze leerling werd ingeschreven (LSEC).' ),
			'#date_increment' => 10,
			'#default_value' => date_now (),
			'#required' => true,
			'#date_year_range' => '-1:+1',
			'#date_format' => 'd/m/Y' 
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
function argus_document_generator_CNT_Begeleidingsovereenkomst_Laattijdige_inschrijving_form_submit($form, &$form_state) {
	argus_document_generator_CNT_Begeleidingsovereenkomst_Laattijdige_inschrijving_document ( $form_state );
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_CNT_Begeleidingsovereenkomst_Laattijdige_inschrijving_document($args) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord_0.6.2_Beta/PHPWord.php';
	
	/* New Word-document */
	$PHPWord = new PHPWord ();
	
	/* Load template */
	$document = $PHPWord->loadTemplate ( argus_document_generator_get_plugin_template ( 'CNT_Begeleidingsovereenkomst_Laattijdige_inschrijving' ) );
	
	/* Load user (student/pupil) */
	$uid = $args ['values'] ['leerling'];
	$u = user_load ( $uid );
	
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
	$document->setValue ( 'leerling', argus_get_user_realname ( $uid ) );
	$document->setValue ( 'klas', argus_klasbeheer_get_user_class ( $uid, 'title' ) );
	
	if ($age > 17) {
		$document->setValue ( 'ouders', '' );
	} else {
		$document->setValue ( 'ouders', '- De ouders:' );
	}
	
	if ($args ['values'] ['datum_inschrijving']) {
		$d = strtotime ( $args ['values'] ['datum_inschrijving'] );
	} else {
		if ($u) {
			$d = $u->created;
		}
	}
	$document->setValue ( 'datum_inschrijving', date ( 'd/m/Y', $d ) );
	
	/* Generate the document and initiate download */
	$filename = '/tmp/CNT Begeleidingsovereenkomst Laattijdige inschrijving ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_klasbeheer_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY' ) . '.docx';
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
