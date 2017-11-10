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
function argus_document_generator_VSG_Verslag_Hoor_en_inzagerecht_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'VSG',
			'title' => t ( 'Verslag - Hoor- en inzagerecht tuchtdossier - ILB' ) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_VSG_Verslag_Hoor_en_inzagerecht_form($form, &$form_state) {
	$form ['leerling'] = array (
			'#type' => 'select',
			'#title' => t ( 'Leerling' ),
			'#description' => t ( 'Selecteer de leerling waarvoor dit document moet worden aangemaakt.' ),
			'#options' => argus_engine_get_user_select_options ( 'leerling' ),
			'#required' => false 
	);
	
	$form ['date_hi'] = array (
			'#type' => 'date_select',
			'#title' => t ( 'Datum van het hoor- en inzagerecht (te bespreken met de directeur)' ),
			'#description' => t ( 'Geef het tijdstip wanneer de ouders of meerderjarige leerling het dossier kunnen komen inkijken en bespreken.' ),
			'#default_value' => date_now (),
			'#date_increment' => 10,
			'#date_year_range' => '-1:+1',
			'#date_format' => 'd/m/Y H:i',
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
require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';

use PhpOffice\PhpWord\Autoloader;
use PhpOffice\PhpWord\Settings;

Autoloader::register ();
Settings::loadConfig ();
function argus_document_generator_VSG_Verslag_Hoor_en_inzagerecht_form_submit($form, &$form_state) {
	/* New Word-document */
	$PHPWord = new \PhpOffice\PhpWord\PhpWord ();
	
	/* Load template */
	$document = new \PhpOffice\PhpWord\TemplateProcessor ( argus_document_generator_get_plugin_template ( 'VSG_Verslag_Hoor_en_inzagerecht' ) );
	
	/* Load user (student/pupil) */
	$uid = $form_state ['values'] ['leerling'];
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
		$document->setValue ( 'ouders', 'De ouders,' );
	}
	
	$document->setValue ( 'datum_hoorinzage', date ( 'd/m/Y', strtotime ( $form_state ['values'] ['date_hi'] ) ) );
	$document->setValue ( 'uur_hoorinzage', date ( 'H:i', strtotime ( $form_state ['values'] ['date_hi'] ) ) );
	
	/* Generate the document and initiate download */
	$filename = '/tmp/VSG Verslag Hoor- en inzagerecht ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_klasbeheer_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY', strtotime ( $form_state ['values'] ['date_hi'] ) ) . '.docx';
	$document->saveAs ( $filename );
	
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
