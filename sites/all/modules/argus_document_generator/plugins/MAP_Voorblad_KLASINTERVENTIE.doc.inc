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
function argus_document_generator_MAP_Voorblad_KLASINTERVENTIE_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'ALG',
			'title' => t ( 'Voorblad map Klasinterventie - ILB' ),
			'dependencies' => array (
					'argus_klasbeheer' 
			) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_MAP_Voorblad_KLASINTERVENTIE_form($form, &$form_state) {
	$form ['klas'] = array (
			'#type' => 'select',
			'#title' => t ( 'Klas' ),
			'#description' => t ( 'Selecteer de klas waarvoor dit document moet worden aangemaakt.' ),
			'#options' => argus_classes_retrieve (),
			'#required' => false 
	);
	
	$form ['date_file'] = array (
			'#type' => 'date_select',
			'#title' => t ( 'Datum wanneer dit dossier werd opgemaakt' ),
			'#description' => t ( 'Geef de datum waarop je dit dossier hebt samengesteld.' ),
			'#date_increment' => 10,
			'#default_value' => date_now (),
			'#required' => true,
			'#date_year_range' => '-1:+1',
			'#date_format' => 'd/m/Y' 
	);
	
	$form ['date_start'] = array (
			'#type' => 'date_select',
			'#title' => t ( 'Startdatum voor deze klasinterventie' ),
			'#description' => t ( 'Geef de datum waarop dit dossier werd opgestart.' ),
			'#date_increment' => 10,
			'#default_value' => date_now (),
			'#required' => true,
			'#date_year_range' => '-1:+1',
			'#date_format' => 'd/m/Y' 
	);
	
	$form ['aanleiding'] = array (
			'#type' => 'textarea',
			'#title' => t ( 'Aanleiding' ),
			'#description' => t ( 'Wat is de reden voor deze klasinterventie?' ),
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
function argus_document_generator_MAP_Voorblad_KLASINTERVENTIE_form_submit($form, &$form_state) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord_0.6.2_Beta/PHPWord.php';
	
	/* New Word-document */
	$PHPWord = new PHPWord ();
	
	/* Load template */
	$document = $PHPWord->loadTemplate ( argus_document_generator_get_plugin_template ( 'MAP_Voorblad_KLASINTERVENTIE' ) );
	
	/* Load class */
	$class = node_load ( $form_state ['values'] ['klas'] );
	
	/* Start replacing values in template */
	$classTitle = '';
	if ($class) {
		$classTitle = $class->title;
	}
	$document->setValue ( 'klas', $classTitle );
	
	$document->setValue ( 'datum', date ( 'd/m/Y', strtotime ( $form_state ['values'] ['date_file'] ) ) );
	$document->setValue ( 'startdatum', date ( 'd/m/Y', strtotime ( $form_state ['values'] ['date_start'] ) ) );
	$document->setValue ( 'aanleiding', $form_state ['values'] ['aanleiding'] );
	
	/* Generate the document and initiate download */
	$filename = '/tmp/MAP Voorblad KLASINTERVENTIE ' . $classTitle . '.docx';
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
