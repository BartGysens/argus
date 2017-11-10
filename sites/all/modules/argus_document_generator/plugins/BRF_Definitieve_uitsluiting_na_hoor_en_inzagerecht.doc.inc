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
function argus_document_generator_BRF_Definitieve_uitsluiting_na_hoor_en_inzagerecht_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'BRF',
			'title' => t ( 'Brief - Definitieve uitsluiting (fase 2 na het Hoor- en inzagerecht) - ILB' ),
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_BRF_Definitieve_uitsluiting_na_hoor_en_inzagerecht_form($form, &$form_state) {
	$form ['leerling'] = array (
			'#type' => 'select',
			'#title' => t ( 'Leerling' ),
			'#description' => t ( 'Selecteer de leerling waarvoor dit document moet worden aangemaakt.' ),
			'#options' => argus_engine_get_user_select_options ( 'leerling' ),
			'#required' => false 
	);
	
	$form ['date_hi'] = array (
			'#type' => 'date_select',
			'#title' => t ( 'Datum van het hoor- en inzagerecht' ),
			'#description' => t ( 'Geef het tijdstip wanneer de ouders en/of (meerderjarige) leerling het dossier konden komen inkijken en bespreken.' ),
			'#default_value' => date_now (),
			'#date_increment' => 10,
			'#date_year_range' => '-1:+1',
			'#date_format' => 'd/m/Y H:i',
			'#required' => true 
	);
	
	$form ['presence'] = array (
			'#type' => 'checkbox',
			'#title' => t ( 'De ouders en/of de (meerderjarige) leerling waren aanwezig op het hoor- en inzagerecht' ),
			'#description' => t ( 'Vink dit veld aan indien de genodigden gebruik gemaakt hebben van hun hoor- en inzagerecht.' ) 
	);
	
	$form ['date_start'] = array (
			'#type' => 'date_select',
			'#title' => t ( 'Datum dat de definitieve uitsluiting ingaat' ),
			'#description' => t ( 'Geef het tijdstip wanneer definitieve uitsluiting wettelijk wordt doorgegeven.' ),
			'#default_value' => date_now (),
			'#date_increment' => 10,
			'#date_year_range' => '-1:+1',
			'#date_format' => 'd/m/Y',
			'#required' => true 
	);
	
	$form ['alternatives'] = array (
			'#type' => 'textarea',
			'#title' => t ( 'Alternatieve scholen (enkel verplicht voor minderjarige leerlingen)' ),
			'#description' => t ( 'Selecteer de scholen met behulp van de <a href="http://www.onderwijskiezer.be/" target="_blank">Onderwijskiezer</a> of <a href="http://data-onderwijs.vlaanderen.be/onderwijsaanbod/" target="_blank">databank van de Vlaamse Overheid</a> en kopieer de naam en het adres van minimaal <strong>twee scholen</strong>.' ) 
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
function argus_document_generator_BRF_Definitieve_uitsluiting_na_hoor_en_inzagerecht_form_submit($form, &$form_state) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord_0.6.2_Beta/PHPWord.php';
	
	/* New Word-document */
	$PHPWord = new PHPWord ();
	
	/* Load template */
	$document = $PHPWord->loadTemplate ( argus_document_generator_get_plugin_template ( 'BRF_Definitieve_uitsluiting_na_hoor_en_inzagerecht' ) );
	
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
	
	$document->setValue ( 'datum_hoorinzage', date ( 'd/m/Y', strtotime ( $form_state ['values'] ['date_hi'] ) ) );
	$document->setValue ( 'uur_hoorinzage', date ( 'H:i', strtotime ( $form_state ['values'] ['date_hi'] ) ) );
	
	if ($form_state ['values'] ['presence']) {
		$document->setValue ( 'aanwezigheid', '' );
	} else {
		$document->setValue ( 'aanwezigheid', t ( 'geen' ) );
	}
	
	$document->setValue ( 'datum_ingang', date ( 'd/m/Y', strtotime ( $form_state ['values'] ['date_start'] ) ) );
	
	if ($form_state ['values'] ['alternatives']) {
		$alternative = '<w:p><w:rPr><w:u w:val="single"/></w:rPr><w:t>' . t ( 'Onderstaande alternatieve scholen werden reeds met u besproken:' ) . '</w:t></w:p><w:p><w:rPr><w:i/></w:rPr><w:t>' . str_replace ( chr ( 13 ), '<w:br/>', $form_state ['values'] ['alternatives'] ) . '</w:t></w:p>';
	} else {
		$alternative = '';
	}
	$document->setValue ( 'alternatieve_scholen', $alternative );
	
	/*
	 * <w:p w14:paraId = "3DCDD3B8" w14:textId = "77777777" w:rsidR = "00B961D6" w:rsidRDefault = "00450E42">
	 * <w:pPr>
	 * <w:rPr>
	 * <w:u w:val = "single"/>
	 * </w:rPr>
	 * </w:pPr>
	 * <w:r w:rsidRPr = "00450E42">
	 * <w:rPr>
	 * <w:u w:val = "single"/>
	 * </w:rPr>
	 * <w:t>TEST</w:t>
	 * </w:r>
	 * </w:p>
	 * <w:p w14:paraId = "1C401136" w14:textId = "77777777" w:rsidR = "009F3F28" w:rsidRPr = "009F3F28" w:rsidRDefault = "009F3F28">
	 * <w:r w:rsidRPr = "009F3F28">
	 * <w:t>NOLINE</w:t>
	 * </w:r>
	 * </w:p >
	 * /* Generate the document and initiate download
	 */
	$filename = '/tmp/BRF Definitieve uitsluiting na hoor- en inzagerecht ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_klasbeheer_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY' ) . '.docx';
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
