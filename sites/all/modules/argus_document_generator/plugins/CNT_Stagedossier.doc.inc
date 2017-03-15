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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Plugin definition -- REQUIRED --
 */
function argus_document_generator_CNT_Stagedossier_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'CNT',
			'title' => t ( 'Contract - Stagedossier - TA' ),
			'dependencies' => array (
					'argus_gebruikers',
					'argus_stages',
					'argus_klasbeheer' 
			),
			'files' => array (
					'handtekening_arbeidsgeneesheer' => array (
							'png',
							'handtekening arbeidsgeneesheer' 
					),
					'handtekening_interne_preventie_adviseur' => array (
							'png',
							'handtekening interne preventie adviseur' 
					),
					'logo_GO' => array (
							'png',
							'logo onderwijskoepel' 
					),
					'risicoanalyse_Auto' => array (
							'docx',
							'risicoanalyse: afdeling Auto' 
					),
					'risicoanalyse_Carrosserie' => array (
							'docx',
							'risicoanalyse: afdeling Carrosserie' 
					),
					'risicoanalyse_Drukken en Afwerken' => array (
							'docx',
							'risicoanalyse: afdeling Drukken en Afwerken' 
					),
					'risicoanalyse_Elektrische installaties' => array (
							'docx',
							'risicoanalyse: afdeling Elektrische installaties' 
					),
					'risicoanalyse_Elektromechanica' => array (
							'docx',
							'risicoanalyse: afdeling Elektromechanica' 
					),
					'risicoanalyse_Grafische Communicatie en Media' => array (
							'docx',
							'risicoanalyse: afdeling Grafische communicatie en media' 
					),
					'risicoanalyse_Hout' => array (
							'docx',
							'risicoanalyse: afdeling Hout' 
					),
					'risicoanalyse_Industriële wetenschappen' => array (
							'docx',
							'risicoanalyse: afdeling Industriële wetenschappen' 
					),
					'risicoanalyse_Informaticabeheer' => array (
							'docx',
							'risicoanalyse: afdeling Informaticabeheer' 
					),
					'risicoanalyse_Multimedia' => array (
							'docx',
							'risicoanalyse: afdeling Multimedia' 
					),
					'risicoanalyse_Werktuigmachines' => array (
							'docx',
							'risicoanalyse: afdeling Werktuigmachines' 
					),
					'werkpostfiche_Auto' => array (
							'docx',
							'werkpostfiche: afdeling Auto' 
					),
					'werkpostfiche_Carrosserie' => array (
							'docx',
							'werkpostfiche: afdeling Carrosserie' 
					),
					'werkpostfiche_Drukken en Afwerken' => array (
							'docx',
							'werkpostfiche: afdeling Drukken en Afwerken' 
					),
					'werkpostfiche_Elektrische installaties' => array (
							'docx',
							'werkpostfiche: afdeling Elektrische installaties' 
					),
					'werkpostfiche_Elektromechanica' => array (
							'docx',
							'werkpostfiche: afdeling Elektromechanica' 
					),
					'werkpostfiche_Grafische Communicatie en Media' => array (
							'docx',
							'werkpostfiche: afdeling Grafische communicatie en media' 
					),
					'werkpostfiche_Hout' => array (
							'docx',
							'werkpostfiche: afdeling Hout' 
					),
					'werkpostfiche_Industriële wetenschappen' => array (
							'docx',
							'werkpostfiche: afdeling Industriële wetenschappen' 
					),
					'werkpostfiche_Informaticabeheer' => array (
							'docx',
							'werkpostfiche: afdeling Informaticabeheer' 
					),
					'werkpostfiche_Multimedia' => array (
							'docx',
							'werkpostfiche: afdeling Multimedia' 
					),
					'werkpostfiche_Werktuigmachines' => array (
							'docx',
							'werkpostfiche: afdeling Werktuigmachines' 
					) 
			) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_CNT_Stagedossier_form($form, &$form_state) {
	$query = 'SELECT n.nid AS id, n.title AS title ';
	$query .= 'FROM {node} AS n ';
	$query .= 'INNER JOIN {field_data_field_leerling} AS l ON l.entity_id = n.nid ';
	$query .= 'INNER JOIN {users} AS u ON u.uid = l.field_leerling_target_id ';
	$query .= 'INNER JOIN {field_data_field_stage_periode} AS sp ON l.entity_id = sp.entity_id ';
	$query .= 'RIGHT JOIN {field_data_field_stagegever} AS sg ON l.entity_id = sg.entity_id ';
	$query .= 'INNER JOIN {field_data_field_user_sms_naam} AS an ON u.uid = an.entity_id ';
	$query .= 'INNER JOIN {field_data_field_user_sms_voornaam} AS vn ON u.uid = vn.entity_id ';
	$query .= 'WHERE u.status = 1 AND sg.field_stagegever_target_id ';
	$query .= 'ORDER BY an.field_user_sms_naam_value ASC, vn.field_user_sms_voornaam_value ASC, sp.field_stage_periode_target_id DESC';
	$items = db_query ( $query, array () )->fetchAllKeyed ();
	
	$form ['stage'] = array (
			'#type' => 'select',
			'#title' => t ( 'Stage' ),
			'#description' => t ( 'Selecteer de stage waarvoor dit document moet worden aangemaakt.' ),
			'#options' => $items,
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
function argus_document_generator_CNT_Stagedossier_form_submit($form, &$form_state) {
	argus_document_generator_CNT_Stagedossier_document ( $form_state );
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_CNT_Stagedossier_document($args) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register ();
	
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/tbszip_2.16/tbszip.php';
	
	/* Load stage data */
	$stage = node_load ( $args ['values'] ['stage'] );
	$stageperiode = node_load ( $stage->field_stage_periode [LANGUAGE_NONE] [0] ['target_id'] );
	$stagegever = node_load ( $stage->field_stagegever [LANGUAGE_NONE] [0] ['target_id'] );
	$stagebegeleider = user_load ( $stage->field_leerkracht [LANGUAGE_NONE] [0] ['target_id'] );
	
	/* Load user (student/pupil) */
	$uid = $stage->field_leerling [LANGUAGE_NONE] [0] ['target_id'];
	$u = user_load ( $uid );
	
	/* Load template */
	$document = new TemplateProcessor ( argus_document_generator_get_plugin_template ( 'CNT_Stagedossier' ) );
	
	/* Process different parts of this document (located in separate files) */
	$zip = new clsTbsZip ();
	
	/* Process document 1: 'risicoanalyse' */
	$zip->Open ( argus_document_generator_get_plugin_template ( 'CNT_Stagedossier', 'risicoanalyse_' . argus_get_user_class ( $uid, 'structuuronderdeel' ) ) );
	$docRisicoanalyse = $zip->FileRead ( 'word/document.xml' );
	$zip->Close ();
	
	$p = strpos ( $docRisicoanalyse, '<w:body' );
	if ($p === false)
		exit ( "Tag <w:body> not found in document Risicoanalyse." );
	$p = strpos ( $docRisicoanalyse, '>', $p );
	$docRisicoanalyse = substr ( $docRisicoanalyse, $p + 1 );
	$p = strpos ( $docRisicoanalyse, '</w:body>' );
	if ($p === false)
		exit ( "Tag </w:body> not found in document Risicoanalyse." );
	$docRisicoanalyse = substr ( $docRisicoanalyse, 0, $p );
	
	$document->setValue ( 'risicoanalyse', $docRisicoanalyse );
	
	$document->setImg ( 'logo_GO', array (
			'src' => argus_document_generator_get_plugin_template ( 'CNT_Stagedossier', 'logo_GO', 'png' ),
			'swh' => '125' 
	) );
	$document->setImg ( 'handtekening_arbeidsgeneesheer', array (
			'src' => argus_document_generator_get_plugin_template ( 'CNT_Stagedossier', 'handtekening_arbeidsgeneesheer', 'png' ),
			'swh' => '125' 
	) );
	$document->setImg ( 'handtekening_interne_preventie_adviseur', array (
			'src' => argus_document_generator_get_plugin_template ( 'CNT_Stagedossier', 'handtekening_interne_preventie_adviseur', 'png' ),
			'swh' => '125' 
	) );
	
	/* Process document 2: 'werkpostfiche' */
	$zip->Open ( argus_document_generator_get_plugin_template ( 'CNT_Stagedossier', 'werkpostfiche_' . argus_get_user_class ( $uid, 'structuuronderdeel' ) ) );
	$docWerkpostfiche = $zip->FileRead ( 'word/document.xml' );
	$zip->Close ();
	
	$p = strpos ( $docWerkpostfiche, '<w:body' );
	if ($p === false)
		exit ( "Tag <w:body> not found in document Werkpostfiche." );
	$p = strpos ( $docWerkpostfiche, '>', $p );
	$docWerkpostfiche = substr ( $docWerkpostfiche, $p + 1 );
	$p = strpos ( $docWerkpostfiche, '</w:body>' );
	if ($p === false)
		exit ( "Tag </w:body> not found in document Werkpostfiche." );
	$docWerkpostfiche = substr ( $docWerkpostfiche, 0, $p );
	
	$document->setValue ( 'werkpostfiche', $docWerkpostfiche );
	
	$document->setImg ( 'logo_GO', array (
			'src' => argus_document_generator_get_plugin_template ( 'CNT_Stagedossier', 'logo_GO', 'png' ),
			'swh' => '90' 
	) );
	$document->setImg ( 'handtekening_arbeidsgeneesheer', array (
			'src' => argus_document_generator_get_plugin_template ( 'CNT_Stagedossier', 'handtekening_arbeidsgeneesheer', 'png' ),
			'swh' => '125' 
	) );
	
	/* Start replacing values in template */
	$document->setValue ( 'naam', htmlspecialchars ( argus_get_user_realname ( $uid ) ) );
	$document->setValue ( 'klas', htmlspecialchars ( argus_get_user_class ( $uid, 'title' ) ) );
	
	if (count ( $u->field_user_sms_geboortedatum )) {
		$birthday = new DateTime ( $u->field_user_sms_geboortedatum [LANGUAGE_NONE] [0] ['value'] );
	}
	if (isset ( $birthday )) {
		$age = date_diff ( $birthday, new DateTime ( 'now' ) )->format ( '%y' );
	}
	$value = '';
	if ($age < 18) {
		$value = 'Ouder / Wettelijke vertegenwoordig(st)er';
	}
	$document->setValue ( 'vertegenwoordiger', htmlspecialchars ( $value ) );
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_straat )) {
		$value = $u->field_user_sms_straat [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisnummer )) {
		$value .= ' ' . $u->field_user_sms_huisnummer [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_busnummer )) {
		$value .= ' ' . $u->field_user_sms_busnummer [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'straat_nummer', htmlspecialchars ( $value ) );
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_postcode )) {
		$value = $u->field_user_sms_postcode [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_woonplaats )) {
		$value .= ' ' . $u->field_user_sms_woonplaats [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'postnummer_gemeente', htmlspecialchars ( $value ) );
	
	if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboortedatum )) {
		$document->setValue ( 'geboortedatum', htmlspecialchars ( format_date ( strtotime ( $u->field_user_sms_geboortedatum [LANGUAGE_NONE] [0] ['value'] ), 'custom', 'd-m-Y' ) ) );
	}
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telefoonnummer )) {
		$value = $u->field_user_sms_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_mobielnummer ) && ! $value) {
		$value = $u->field_user_sms_mobielnummer [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'telefoonnummer', htmlspecialchars ( $value ) );
	
	$document->setValue ( 'afdeling', htmlspecialchars ( argus_get_user_class ( $uid, 'onderwijsvorm' ) . ' ' . argus_get_user_class ( $uid, 'structuuronderdeel' ) ) );
	$document->setValue ( 'leerjaar', htmlspecialchars ( argus_get_user_class ( $uid, 'leerjaar_graad' ) . ' (' . argus_get_user_class ( $uid, 'title' ) . ')' ) );
	
	$document->setValue ( 'schooljaar', htmlspecialchars ( implode ( '-', argus_schoolyear ( 0, 'Y' ) ) ) );
	$document->setValue ( 'datum', htmlspecialchars ( format_date ( time (), 'custom', 'l, j F Y' ) ) );
	
	$document->setValue ( 'datum_start', htmlspecialchars ( format_date ( strtotime ( $stageperiode->field_tijdstip [LANGUAGE_NONE] [0] ['value'] ), 'custom', 'l, j F Y' ) ) );
	$document->setValue ( 'datum_eind', htmlspecialchars ( format_date ( strtotime ( $stageperiode->field_tijdstip [LANGUAGE_NONE] [0] ['value2'] ), 'custom', 'l, j F Y' ) ) );
	
	$document->setValue ( 'organisatie_naam', htmlspecialchars ( $stagegever->title ) );
	
	$value_adres1 = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_straat )) {
		$value_adres1 .= $stagegever->field_straat [LANGUAGE_NONE] [0] ['value'] . ' ';
	}
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_huisnummer )) {
		$value_adres1 .= $stagegever->field_huisnummer [LANGUAGE_NONE] [0] ['value'] . ' ';
	}
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_busnummer )) {
		$value_adres1 .= $stagegever->field_busnummer [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'organisatie_straat_huisnummer', htmlspecialchars ( $value_adres1 ) );
	
	$value_adres2 = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_postcode )) {
		$value_adres2 .= $stagegever->field_postcode [LANGUAGE_NONE] [0] ['value'] . ' ';
	}
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_huisnummer )) {
		$value_adres2 .= $stagegever->field_gemeente [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'organisatie_postcode_gemeente', htmlspecialchars ( $value_adres2 ) );
	
	$document->setValue ( 'organisatie_adres', htmlspecialchars ( $value_adres1 . ' ' . $value_adres2 ) );
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_telefoonnummer )) {
		$value .= $stagegever->field_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'organisatie_telefoonnummer', htmlspecialchars ( $value ) );
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_faxnummer )) {
		$value .= $stagegever->field_faxnummer [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'organisatie_faxnummer', htmlspecialchars ( $value ) );
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_email )) {
		$value .= $stagegever->field_email [LANGUAGE_NONE] [0] ['email'];
	}
	$document->setValue ( 'organisatie_email', htmlspecialchars ( $value ) );
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_kbo_nummer )) {
		$value .= $stagegever->field_kbo_nummer [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'organisatie_kbonummer', htmlspecialchars ( $value ) );
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_paritair_comit_ )) {
		$value .= $stagegever->field_paritair_comit_ [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'organisatie_paritair_comite', htmlspecialchars ( $value ) );
	
	$contact = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_contact_naam )) {
		$contact = $stagegever->field_org_contact_naam [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_contact_voornaam )) {
		$contact .= ', ' . $stagegever->field_org_contact_voornaam [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'stagegever_naam', htmlspecialchars ( $contact ) );
	
	$mentor = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_stagementor_naam )) {
		$mentor = $stagegever->field_org_stagementor_naam [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_stagementor_voornaam )) {
		$mentor .= ', ' . $stagegever->field_org_stagementor_voornaam [LANGUAGE_NONE] [0] ['value'];
	}
	if (! $mentor) {
		$mentor = $contact;
	}
	$document->setValue ( 'mentor_naam', htmlspecialchars ( $mentor ) );
	
	$value = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_stagementor_functie )) {
		$value = htmlspecialchars ( $stagegever->field_org_stagementor_functie [LANGUAGE_NONE] [0] ['value'] );
	}
	$document->setValue ( 'mentor_functie', $value );
	
	$telefoonnummer = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_stagementor_telefoon )) {
		$telefoonnummer = $stagegever->field_org_stagementor_telefoon [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_contact_telefoonnummer ) && ! $telefoonnummer) {
		$telefoonnummer = $stagegever->field_org_contact_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_telefoonnummer ) && ! $telefoonnummer) {
		$telefoonnummer = $stagegever->field_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'mentor_telefoonnummer', htmlspecialchars ( $telefoonnummer ) );
	
	$document->setValue ( 'begeleider_naam', htmlspecialchars ( argus_get_user_realname ( $stagebegeleider->uid ) ) );
	
	$telefoonnummer = '';
	if (array_key_exists ( LANGUAGE_NONE, $stagebegeleider->field_user_sms_mobielnummer )) {
		$telefoonnummer = $stagebegeleider->field_user_sms_mobielnummer [LANGUAGE_NONE] [0] ['value'];
	}
	if (array_key_exists ( LANGUAGE_NONE, $stagebegeleider->field_user_sms_telefoonnummer ) && ! $telefoonnummer) {
		$telefoonnummer = $stagebegeleider->field_user_sms_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
	}
	$document->setValue ( 'begeleider_telefoonnummer', htmlspecialchars ( $telefoonnummer ) );
	
	/* Bijlage 2: werkpostfiche */
	// Inserted at start of processing for replacing template values
	
	/* Bijlage 3: risicoanalyse */
	// Inserted at start of processing for replacing template values
	
	/* Bijlage 4: activiteitenlijst */
	$query = 'SELECT sa.delta AS id, sa.field_stageactiviteit_value AS activiteit ' . 'FROM {field_data_field_stageactiviteit} AS sa ' . 'INNER JOIN {field_data_field_klas} AS k ON k.entity_id = sa.entity_id ' . 'WHERE k.field_klas_target_id = :cid';
	$stageactviteitenlijst = db_query ( $query, array (
			':cid' => argus_get_user_class ( $uid ) 
	) )->fetchAllKeyed ();
	$prefixList = '<w:p><w:pPr><w:pStyle w:val="ListParagraph"/><w:numPr><w:ilvl w:val="0"/><w:numId w:val="9"/></w:numPr></w:pPr><w:r><w:t>';
	$suffixList = '</w:t></w:r></w:p>';
	$value = '';
	foreach ( $stageactviteitenlijst as $activiteit ) {
		$value .= $prefixList . htmlspecialchars ( $activiteit ) . $suffixList;
	}
	$document->setValue ( 'activiteitenlijst', $value );
	
	/* Bijlage 5a: stagerooster */
	$prefixList = '<w:p><w:pPr><w:pStyle w:val="ListParagraph"/><w:numPr><w:ilvl w:val="0"/><w:numId w:val="10"/></w:numPr></w:pPr><w:r><w:t>';
	$suffixList = '</w:t></w:r></w:p>';
	$value = '';
	foreach ( $stageperiode->field_stagedagen [LANGUAGE_NONE] as $stagedag ) {
		$value .= $prefixList . htmlspecialchars ( format_date ( strtotime ( $stagedag ['value'] ), 'custom', 'l, j F Y' ) ) . $suffixList;
	}
	$document->setValue ( 'stagerooster', $value );
	
	/* Bijlage 5b: uurrooster */
	$document->setValue ( 'uurrooster', htmlspecialchars ( $stageperiode->field_stage_uren [LANGUAGE_NONE] [0] ['value'] ) );
	
	/* Generate the document and initiate download */
	$filename = '/tmp/CNT Stagedossier ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY' ) . '.docx';
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