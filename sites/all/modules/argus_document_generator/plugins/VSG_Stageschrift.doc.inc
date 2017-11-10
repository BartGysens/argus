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
function argus_document_generator_VSG_Stageschrift_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'VSG',
			'title' => t ( 'Verslag - Stageschrift - TA' ),
			'dependencies' => array (
					'argus_stages' 
			),
			'files' => array (
					'stageverslag' => array (
							'docx',
							'stageverslag (enkelvoudige template)' 
					),
					'eindverslag' => array (
							'docx',
							'eindverslag' 
					) 
			) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_VSG_Stageschrift_form($form, &$form_state) {
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
function argus_document_generator_VSG_Stageschrift_form_submit($form, &$form_state) {
	argus_document_generator_VSG_Stageschrift_document ( $form_state );
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_VSG_Stageschrift_document($args) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register ();
	
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/tbszip_2.16/tbszip.php';
	
	/* Process different parts of this document (located in separate files) */
	$zip = new clsTbsZip ();
	
	/* Load stage data */
	$stage = node_load ( $args ['values'] ['stage'] );
	$stageperiode = node_load ( $stage->field_stage_periode [LANGUAGE_NONE] [0] ['target_id'] );
	$stagegever = node_load ( $stage->field_stagegever [LANGUAGE_NONE] [0] ['target_id'] );
	$stagebegeleider = user_load ( $stage->field_leerkracht [LANGUAGE_NONE] [0] ['target_id'] );
	
	/* Load user (student/pupil) */
	$uid = $stage->field_leerling [LANGUAGE_NONE] [0] ['target_id'];
	$u = user_load ( $uid );
	
	/* Load template */
	$document = new TemplateProcessor ( argus_document_generator_get_plugin_template ( 'VSG_Stageschrift' ) );
	
	/* Start replacing values in template */
	$document->setValue ( 'naam', argus_get_user_realname ( $uid ) );
	$document->setValue ( 'klas', argus_klasbeheer_get_user_class ( $uid, 'title' ) );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_straat )) {
			$value = $u->field_user_sms_straat [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisnummer )) {
			$value .= ' ' . $u->field_user_sms_huisnummer [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_busnummer )) {
			$value .= ' ' . $u->field_user_sms_busnummer [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'straat_nummer', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_postcode )) {
			$value = $u->field_user_sms_postcode [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_woonplaats )) {
			$value .= ' ' . $u->field_user_sms_woonplaats [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'postnummer_gemeente', $value );
	
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboortedatum )) {
			$document->setValue ( 'geboortedatum', format_date ( strtotime ( $u->field_user_sms_geboortedatum [LANGUAGE_NONE] [0] ['value'] ), 'custom', 'd-m-Y' ) );
		}
	}
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telefoonnummer )) {
			$value = $u->field_user_sms_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_mobielnummer ) && ! $value) {
			$value = $u->field_user_sms_mobielnummer [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'telefoonnummer', $value );
	
	$document->setValue ( 'afdeling', argus_klasbeheer_get_user_class ( $uid, 'onderwijsvorm' ) . ' ' . argus_klasbeheer_get_user_class ( $uid, 'structuuronderdeel' ) );
	$document->setValue ( 'leerjaar', argus_klasbeheer_get_user_class ( $uid, 'leerjaar_graad' ) . ' (' . argus_klasbeheer_get_user_class ( $uid, 'title' ) . ')' );
	
	$document->setValue ( 'schooljaar', implode ( '-', argus_schoolyear ( 0, 'Y' ) ) );
	$document->setValue ( 'datum', format_date ( time (), 'custom', 'l, j F Y' ) );
	
	if ($stageperiode) {
		$document->setValue ( 'datum_start', format_date ( strtotime ( $stageperiode->field_tijdstip [LANGUAGE_NONE] [0] ['value'] ), 'custom', 'l, j F Y' ) );
		$document->setValue ( 'datum_eind', format_date ( strtotime ( $stageperiode->field_tijdstip [LANGUAGE_NONE] [0] ['value2'] ), 'custom', 'l, j F Y' ) );
	}
	
	if ($stagegever) {
		$document->setValue ( 'organisatie_naam', $stagegever->title );
	}
	$value1 = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_straat )) {
			$value1 = $stagegever->field_straat [LANGUAGE_NONE] [0] ['value'] . ' ';
		}
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_huisnummer )) {
			$value1 .= $stagegever->field_huisnummer [LANGUAGE_NONE] [0] ['value'] . ' ';
		}
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_busnummer )) {
			$value1 .= $stagegever->field_busnummer [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'organisatie_straat_huisnummer', $value1 );
	
	$value2 = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_postcode )) {
			$value2 = $stagegever->field_postcode [LANGUAGE_NONE] [0] ['value'] . ' ';
		}
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_gemeente )) {
			$value2 .= $stagegever->field_gemeente [LANGUAGE_NONE] [0] ['value'] . ' ';
		}
	}
	$document->setValue ( 'organisatie_postcode_gemeente', $value2 );
	
	$document->setValue ( 'organisatie_adres', $value1 . ' ' . $value2 );
	
	$value = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_telefoonnummer )) {
			$value = $stagegever->field_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'organisatie_telefoonnummer', $value );
	
	$value = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_faxnummer )) {
			$value = $stagegever->field_faxnummer [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'organisatie_faxnummer', $value );
	
	if ($stagegever) {
		$document->setValue ( 'organisatie_email', $stagegever->field_email ['email'] );
	}
	
	$value = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_kbo_nummer )) {
			$value = $stagegever->field_kbo_nummer [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'organisatie_kbonummer', $value );
	
	$value = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_paritair_comit_ )) {
			$value = $stagegever->field_paritair_comit_ [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'organisatie_paritair_comite', $value );
	
	$contact = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_contact_naam )) {
			$contact = $stagegever->field_org_contact_naam [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_contact_voornaam )) {
			$contact .= ', ' . $stagegever->field_org_contact_voornaam [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'stagegever_naam', $contact );
	
	$mentor = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_stagementor_naam )) {
			$mentor = $stagegever->field_org_stagementor_naam [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_stagementor_voornaam )) {
			$mentor .= ', ' . $stagegever->field_org_stagementor_voornaam [LANGUAGE_NONE] [0] ['value'];
		}
	}
	if (! $mentor) {
		$mentor = $contact;
	}
	$document->setValue ( 'mentor_naam', $mentor );
	
	$value = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_stagementor_functie )) {
			$value = $stagegever->field_org_stagementor_functie [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'mentor_functie', $value );
	
	$telefoonnummer = '';
	if ($stagegever) {
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_stagementor_telefoon )) {
			$telefoonnummer = $stagegever->field_org_stagementor_telefoon [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_org_contact_telefoonnummer ) && ! $telefoonnummer) {
			$telefoonnummer = $stagegever->field_org_contact_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $stagegever->field_telefoonnummer ) && ! $telefoonnummer) {
			$telefoonnummer = $stagegever->field_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'mentor_telefoonnummer', $telefoonnummer );
	
	if ($stagebegeleider) {
		$document->setValue ( 'begeleider_naam', argus_get_user_realname ( $stagebegeleider->uid ) );
	}
	
	$telefoonnummer = '';
	if ($stagebegeleider) {
		if (array_key_exists ( LANGUAGE_NONE, $stagebegeleider->field_user_sms_mobielnummer )) {
			$telefoonnummer = $stagebegeleider->field_user_sms_mobielnummer [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $stagebegeleider->field_user_sms_telefoonnummer ) && ! $telefoonnummer) {
			$telefoonnummer = $stagebegeleider->field_user_sms_telefoonnummer [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'begeleider_telefoonnummer', $telefoonnummer );
	
	/* Prepare checklist 'activiteitenlijst' */
	$query = 'SELECT sa.delta AS id, sa.field_stageactiviteit_value AS activiteit ' . 'FROM {field_data_field_stageactiviteit} AS sa ' . 'INNER JOIN {field_data_field_klas} AS k ON k.entity_id = sa.entity_id ' . 'WHERE k.field_klas_target_id = :cid';
	$stageactviteitenlijst = db_query ( $query, array (
			':cid' => argus_klasbeheer_get_user_class ( $uid ) 
	) )->fetchAllKeyed ();
	
	$prefixList = '<w:p><w:r w:rsidRPr="000B441D"><w:sym w:font="Wingdings" w:char="F06F"/></w:r><w:r><w:t xml:space="preserve"> </w:t></w:r><w:r w:rsidR="00674164"><w:t>';
	$suffixList = '</w:t></w:r></w:p>';
	
	$value = '';
	foreach ( $stageactviteitenlijst as $activiteit ) {
		$value .= $prefixList . $activiteit . $suffixList;
	}
	$document->setValue ( 'activiteitenlijst', $value );
	
	/* Bijlage 5a: stagerooster */
	$prefixList = '<w:p><w:pPr><w:pStyle w:val="ListParagraph"/><w:numPr><w:ilvl w:val="0"/><w:numId w:val="10"/></w:numPr></w:pPr><w:r><w:t>';
	$suffixList = '</w:t></w:r></w:p>';
	$value = '';
	
	if ($stageperiode) {
		foreach ( $stageperiode->field_stagedagen [LANGUAGE_NONE] as $stagedag ) {
			$stagedatum = format_date ( strtotime ( $stagedag ['value'] ), 'custom', 'l, j F Y' );
			
			$value .= $prefixList . $stagedatum . $suffixList;
			
			/* Process documents: 'stageverslag' */
			$zip->Open ( argus_document_generator_get_plugin_template ( 'VSG_Stageschrift', 'stageverslag' ) );
			$docStageverslag = $zip->FileRead ( 'word/document.xml' );
			$zip->Close ();
			
			$p = strpos ( $docStageverslag, '<w:body' );
			if ($p === false)
				exit ( "Tag <w:body> not found in document Stageverslag." );
			$p = strpos ( $docStageverslag, '>', $p );
			$docStageverslag = substr ( $docStageverslag, $p + 1 );
			$p = strpos ( $docStageverslag, '</w:body>' );
			if ($p === false)
				exit ( "Tag </w:body> not found in document Stageverslag." );
			$docStageverslag = substr ( $docStageverslag, 0, $p );
			
			$document->setValue ( 'stageverslag', $docStageverslag );
			$document->setValue ( 'stageverslag_datum', $stagedatum );
		}
	}
	
	$document->setValue ( 'stagerooster', $value );
	
	/* Process documents: 'eindverslag' */
	$zip->Open ( argus_document_generator_get_plugin_template ( 'VSG_Stageschrift', 'eindverslag' ) );
	$docEindverslag = $zip->FileRead ( 'word/document.xml' );
	$zip->Close ();
	
	$p = strpos ( $docEindverslag, '<w:body' );
	if ($p === false)
		exit ( "Tag <w:body> not found in document Eindverslag." );
	$p = strpos ( $docEindverslag, '>', $p );
	$docEindverslag = substr ( $docEindverslag, $p + 1 );
	$p = strpos ( $docEindverslag, '</w:body>' );
	if ($p === false)
		exit ( "Tag </w:body> not found in document Eindverslag." );
	$docEindverslag = substr ( $docEindverslag, 0, $p );
	
	$document->setValue ( 'stageverslag', $docEindverslag );
	
	/* Bijlage 5b: uurrooster */
	if ($stageperiode) {
		$document->setValue ( 'uurrooster', $stageperiode->field_stage_uren [LANGUAGE_NONE] [0] ['value'] );
	}
	
	/* Generate the document and initiate download */
	$filename = '/tmp/VSG Stageschrift ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_klasbeheer_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY' ) . '.docx';
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