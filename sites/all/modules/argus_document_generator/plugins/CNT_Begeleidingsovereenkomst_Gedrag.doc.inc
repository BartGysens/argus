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
function argus_document_generator_CNT_Begeleidingsovereenkomst_Gedrag_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'CNT',
			'title' => t ( 'Begeleidingsovereenkomst - Gedrag - ILB' ) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_CNT_Begeleidingsovereenkomst_Gedrag_form($form, &$form_state) {
	$form ['leerling'] = array (
			'#type' => 'select',
			'#title' => t ( 'Leerling' ),
			'#description' => t ( 'Selecteer de leerling waarvoor dit document moet worden aangemaakt.' ),
			'#options' => argus_engine_get_user_select_options ( 'leerling' ),
			'#required' => false,
        /*
        '#ajax' => array(
            'callback' => 'argus_document_generator_CNT_Begeleidingsovereenkomst_Gedrag_leerling_callback',
            'wrapper' => 'facts-wrapper',
            'method' => 'replace',
            'event' => 'change',
        ),
         */
    );
	/*
	 * $form['feit'] = array(
	 * '#prefix' => '<div id="facts-wrapper">',
	 * '#suffix' => '</div>',
	 * '#type' => 'select',
	 * '#title' => t('Feit dat aanleiding geeft tot deze begeleidingsovereenkomst'),
	 * '#description' => t('Selecteer de melding die als laatste feit dient.'),
	 * '#options' => array(),
	 * '#required' => true,
	 * );
	 */
	
	$form ['motivation'] = array (
			'#type' => 'textarea',
			'#title' => t ( 'Motivatie voor deze begeleidingsovereenkomst' ),
			'#description' => t ( 'Beschrijf de reden(en) om deze begeleidingsovereenkomst op te stellen.' ),
			'#required' => true 
	);
	
	$form ['submit'] = array (
			'#type' => 'submit',
			'#value' => t ( 'Document downloaden (Word-formaat)' ) 
	);
	return $form;
}

/**
 * Field callback: Leerling selection
 *
 * @return array of options
 */
function argus_document_generator_CNT_Begeleidingsovereenkomst_Gedrag_leerling_callback($form, $form_state) {
	$form ['feit'] ['#options'] = argus_meldingen_get_user_select_options ( $form ['leerling'] ['#value'], array (
			'negatief gedrag' 
	) );
	return $form ['feit'];
}

/**
 * Page callback: Form submission
 *
 * @return array
 */
function argus_document_generator_CNT_Begeleidingsovereenkomst_Gedrag_form_submit($form, &$form_state) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord_0.6.2_Beta/PHPWord.php';
	
	/* New Word-document */
	$PHPWord = new PHPWord ();
	
	/* Load template */
	$document = $PHPWord->loadTemplate ( argus_document_generator_get_plugin_template ( 'CNT_Begeleidingsovereenkomst_Gedrag' ) );
	
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
	
	/* XML-parts for structuring and formatting */
	$prefixList = '<w:p w:rsidR="007246D8" w:rsidRDefault="006141AD" w:rsidP="007246D8"><w:pPr><w:numPr><w:ilvl w:val="0"/><w:numId w:val="8"/></w:numPr><w:spacing w:after="0"/><w:rPr><w:sz w:val="20"/><w:szCs w:val="22"/></w:rPr></w:pPr><w:r><w:rPr><w:sz w:val="20"/><w:szCs w:val="22"/></w:rPr><w:t>';
	$suffixList = '</w:t></w:r></w:p>';
	
	/* Start replacing values in template */
	$document->setValue ( 'document_datum', date ( 'd/m/Y' ) );
	
	$document->setValue ( 'leerling', argus_get_user_realname ( $uid ) );
	$document->setValue ( 'klas', argus_klasbeheer_get_user_class ( $uid, 'title' ) );
	
	if ($age > 17) {
		$document->setValue ( 'ouders', '' );
	} else {
		$document->setValue ( 'ouders', '- De ouders:' );
	}
	
	/* Retrieve details for this pupil */
	$userDetails = argus_engine_get_pupil_details ( $uid );
	
	/* Handle details about: behaviour - general */
	$document->setValue ( 'schets_gedrag', $prefixList . ($userDetails ['behaviour'] ['totals'] ['negative'] + $userDetails ['behaviour'] ['totals'] ['positive']) . ' meldingen over gedrag waarvan ' . $userDetails ['behaviour'] ['totals'] ['negative'] . ' negatieve vs. ' . $userDetails ['behaviour'] ['totals'] ['positive'] . ' positieve berichten' . $suffixList );
	
	/* Handle details about: behaviour - general */
	$document->setValue ( 'feit', $prefixList . str_replace ( chr ( 13 ), '<w:br/>', $form_state ['values'] ['motivation'] ) . $suffixList );
	
	/* Handle details about: behaviour - meldingen */
	$overview = '';
	if (count ( $userDetails ['behaviour'] ['negative'] )) {
		foreach ( $userDetails ['behaviour'] ['negative'] as $report ) {
			$overview .= $prefixList . date ( 'd/m/y', strtotime ( $report ['factdate'] ) ) . ' : ' . htmlspecialchars ( $report ['subject'] );
			if ($report ['measures']) {
				$overview .= '<w:r w:rsidRPr="00804894"><w:rPr><w:sz w:val="15"/><w:szCs w:val="20"/></w:rPr><w:t><w:br/>> ' . implode ( ', ', $report ['measures'] ) . '</w:t></w:r>';
			}
			$overview .= $suffixList;
		}
	}
	if ($overview == '') {
		$overview = $prefixList . t ( '{geen meldingen - OPGELET: wettelijk gezien geen of onvoldoende kader voor dit contract!}' ) . $suffixList;
	}
	$document->setValue ( 'schets_gedrag_meldingen', $overview );
	
	/* Handle details about: behaviour - msl */
	$overview = '';
	if (count ( $userDetails ['behaviour'] ['phases'] )) {
		foreach ( $userDetails ['behaviour'] ['phases'] as $phase ) {
			foreach ( $phase as $m ) {
				$overview .= $prefixList . $m ['count'] . ' x ' . $m ['title'] . $suffixList;
			}
		}
	}
	if ($overview == '') {
		$overview = $prefixList . t ( '{er werden nog geen maatregelen getroffen - OPGELET: wettelijk gezien geen of onvoldoende kader voor dit contract!}' ) . $suffixList;
	}
	$document->setValue ( 'schets_gedrag_msl', $overview );
	
	/* Generate the document and initiate download */
	$filename = '/tmp/CNT Begeleidingsovereenkomst Gedrag ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_klasbeheer_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY' ) . '.docx';
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
