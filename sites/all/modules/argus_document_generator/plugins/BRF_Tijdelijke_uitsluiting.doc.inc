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
function argus_document_generator_BRF_Tijdelijke_uitsluiting_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'BRF',
			'title' => t ( 'Brief - Tijdelijke uitsluiting - ILB' ) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_BRF_Tijdelijke_uitsluiting_form($form, &$form_state) {
	$form ['leerling'] = array (
			'#type' => 'select',
			'#title' => t ( 'Leerling' ),
			'#description' => t ( 'Selecteer de leerling waarvoor dit document moet worden aangemaakt.' ),
			'#options' => argus_engine_get_user_select_options ( 'leerling' ),
			'#required' => false 
	);
	$form ['date_last_fact'] = array (
			'#type' => 'date_select',
			'#title' => t ( 'Datum van de laatste genomen dwingende maatregel (orde/bewarend/tuchtmaatregel)' ),
			'#description' => t ( 'Geef het tijdstip van de laatste actie.' ),
			'#date_increment' => 10,
			'#default_value' => date_now (),
			'#required' => true,
			'#date_year_range' => '-1:+1',
			'#date_format' => 'd/m/Y' 
	);
	$form ['fact'] = array (
			'#type' => 'textarea',
			'#title' => t ( 'Laatste dwingende maatregel die werd toegepast' ),
			'#description' => t ( 'Beschrijf kort de laatste actie die werd uitgevoerd om het gedrag bij te sturen of preventief te controleren.<br /><u>Context</u>: Op ${datum_laatste_maatregel} werd ${aanspreking} ${laatste_maatregel_en_dwingende_reden}. Daarnaast namen wij, als school, al meerdere maatregelen om het gedrag bij te sturen, ondanks deze inspanningen konden wij geen positieve evolutie constateren.' ),
			'#required' => true 
	);
	
	$form ['bbkr_fieldset'] = array (
			'#type' => 'fieldset',
			'#title' => t ( '(Bijzondere) Begeleidende Klassenraad' ),
			'#collapsible' => TRUE,
			'#collapsed' => FALSE,
			'#description' => t ( 'Gegevens met betrekking een eventuele BBKR.' ) 
	);
	$form ['bbkr_fieldset'] ['bbkr'] = array (
			'#type' => 'checkbox',
			'#title' => t ( 'Heeft er een begeleidende klassenraad plaats gevonden?' ),
			'#description' => t ( 'Indien het advies van de (bijzondere) begeleidende klassenraad werd ingewonnen, gelieve dan tevens onderstaande gegeven in te vullen.' ) 
	);
	$form ['bbkr_fieldset'] ['date_bbkr'] = array (
			'#type' => 'date_select',
			'#title' => t ( 'Datum van de begeleidende klassenraad' ),
			'#description' => t ( 'Geef het tijdstip wanneer de begeleidende klassenraad heeft plaatsgevonden.' ),
			'#default_value' => date_now (),
			'#date_increment' => 10,
			'#date_year_range' => '-1:+1',
			'#date_format' => 'd/m/Y' 
	);
	
	$form ['motivation'] = array (
			'#type' => 'textarea',
			'#title' => t ( 'Motivatie voor deze uitsluiting' ),
			'#description' => t ( 'Beschrijf de reden(en) om deze tijdelijke uitsluiting uit te voeren.' ),
			'#required' => true 
	);
	
	$form ['period'] = array (
			'#type' => 'textfield',
			'#title' => t ( 'Dagen of periode dat de uitsluiting wordt uitgevoerd' ),
			'#description' => t ( 'Beschrijf de periode ofwel met een dag ("op ...") ofwel met een periode - maximaal 10 dagen - ("vanaf ..." of "van ... tot ...").' ),
			'#required' => true 
	);
	
	$form ['presence'] = array (
			'#type' => 'checkbox',
			'#title' => t ( 'De leerling moet tijdens de tijdelijke uitsluiting op school aanwezig zijn' ),
			'#description' => t ( 'De tijdelijke uitsluiting kan ofwel op school uitgevoerd worden via alternatieve taken ofwel mag de leerling tijdens de tijdelijke uitsluiting niet aanwezig zijn.' ) 
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
function argus_document_generator_BRF_Tijdelijke_uitsluiting_form_submit($form, &$form_state) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord_0.6.2_Beta/PHPWord.php';
	
	/* New Word-document */
	$PHPWord = new PHPWord ();
	
	/* Load template */
	$document = $PHPWord->loadTemplate ( argus_document_generator_get_plugin_template ( 'BRF_Tijdelijke_uitsluiting' ) );
	
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
	$document->setValue ( 'datum_laatste_maatregel', date ( 'd/m/Y', strtotime ( $form_state ['values'] ['date_last_fact'] ) ) );
	$document->setValue ( 'laatste_maatregel_en_dwingende_reden', str_replace ( chr ( 13 ), '<w:br/>', $form_state ['values'] ['fact'] ) );
	
	if ($form_state ['values'] ['bbkr']) {
		$document->setValue ( 'bbkr', 'Op ' . date ( 'd/m/Y', strtotime ( $form_state ['values'] ['date_bbkr'] ) ) . ' heb ik de begeleidende klassenraad samengeroepen en hebben wij de situatie besproken.<w:br/>' );
		$document->setValue ( 'decision_by', t ( 'De klassenraad heeft mij geadviseerd' ) );
		$document->setValue ( 'final_decision', t ( 'het advies van de klassenraad te volgen' ) );
	} else {
		$document->setValue ( 'bbkr', '' );
		$document->setValue ( 'decision_by', t ( 'Ik heb in eerste instantie overwogen' ) );
		$document->setValue ( 'final_decision', t ( 'dat de feiten hard genoeg wegen' ) );
	}
	
	$document->setValue ( 'motivatie', str_replace ( chr ( 13 ), '<w:br/>', $form_state ['values'] ['motivation'] ) );
	
	$document->setValue ( 'dagen_uitsluiting', str_replace ( chr ( 13 ), '<w:br/>', $form_state ['values'] ['period'] ) );
	
	if ($form_state ['values'] ['presence']) {
		$document->setValue ( 'aanwezigheid', t ( 'verplicht en moet ' . $salutation . ' zich om 8u30 aanmelden op de Interne leerlingenbegeleiding. Er worden alternatieve taken voorzien' ) );
	} else {
		$document->setValue ( 'aanwezigheid', t ( 'niet toegestaan' ) );
	}
	
	/* Generate the document and initiate download */
	$filename = '/tmp/BRF Tijdelijke uitsluiting ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_klasbeheer_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY' ) . '.docx';
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
