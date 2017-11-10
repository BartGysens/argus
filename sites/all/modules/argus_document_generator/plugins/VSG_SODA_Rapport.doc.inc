<?php
use PhpOffice\PhpWord\TemplateProcessor;

use DocxMerge\DocxMerge;

/*
 * Copyright (C) 2017 bartgysens
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
function argus_document_generator_VSG_SODA_Rapport_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'VSG',
			'title' => t ( 'SODA - Rapport' ) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_VSG_SODA_Rapport_form($form, &$form_state) {
	$form ['leerling'] = array (
			'#type' => 'select',
			'#title' => t ( 'Leerling' ),
			'#description' => t ( 'Selecteer de leerling waarvoor dit document moet worden aangemaakt.' ),
			'#options' => array (
					0 => '-' 
			) + argus_engine_get_user_select_options ( 'leerling', true ) 
	);
	
	$form ['klas'] = array (
			'#type' => 'select',
			'#title' => t ( 'Klas' ),
			'#description' => t ( 'Selecteer de klas waarvoor dit document moet worden aangemaakt.' ),
			'#options' => array (
					0 => '-' 
			) + argus_klasbeheer_get_active_classes () 
	);
	
	$form ['school'] = array (
			'#type' => 'checkbox',
			'#title' => t ( 'Volledig school - alle rapporten (<strong>' . count( $form ['leerling'] ['#options'] ) . '</strong> leerlingen)' ),
			'#description' => t ( '<u>Opgelet</u>: dit proces kan even duren en levert een groot document op.' ),
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
function argus_document_generator_VSG_SODA_Rapport_form_submit($form, &$form_state) {
	// Determine users
	if ($form_state ['values'] ['school']) {
		$users = array_keys($form ['leerling'] ['#options']);
		array_shift($users);
	} else {
		$users = array ();
		if ($form_state ['values'] ['leerling']) {
			$users [] = $form_state ['values'] ['leerling'];
		}
		if ($form_state ['values'] ['klas']) {
			$users += argus_klasbeheer_get_pupils ( $form_state ['values'] ['klas'] );
		}
	}
	
	if (count ( $users )) {
		require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
		\PhpOffice\PhpWord\Autoloader::register ();
		
		require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/tbszip_2.16/tbszip.php';
		
		/* Process different parts of this document (located in separate files) */
		$zip = new clsTbsZip ();
		
		$reports = array();
		foreach ( $users as $uid ) {
			/* Load user */
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
			
			/* Load template */
			$document = new TemplateProcessor ( argus_document_generator_get_plugin_template ( 'VSG_SODA_Rapport' ) );
			
			/* Start replacing values in template */
			$document->setValue ( 'leerling', $document->limpiarString( argus_get_user_realname ( $uid ) ) );
			$document->setValue ( 'klas', $document->limpiarString( argus_klasbeheer_get_user_class ( $uid, 'title' ) ) );
			
			if ($age > 17) {
				$document->setValue ( 'ouders', '' );
			} else {
				$document->setValue ( 'ouders', t ( 'Handtekening ouders' ) . ':' );
			}
			
			$report = argus_soda_get_report ( $uid );
			foreach ( $report as $part => $result ) {
				if (in_array ( $part [0], array (
						'S',
						'O',
						'D',
						'A',
						'c' 
				) )) {
					for($p = 1; $p < 5; $p ++) {
						$document->setValue ( $part [0] . $p, $result [$p] );
					}
				}
			}
			
			$filename = '/tmp/VSG SODA Rapport ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . date ( 'dmY' ) . '.docx';
			$document->saveAs ( $filename );
			$reports[] = $filename;
		}
		
		/* Generate the document and initiate download */
		if (count($users) == 1){
			$filename = '/tmp/VSG SODA Rapport ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . date ( 'dmY' ) . '.docx';
		} elseif ($form_state ['values'] ['school']){
			$filename = '/tmp/VSG SODA Rapport - schooljaar ' . implode(' - ', argus_schoolyear(0, 'Y')) . ' ' . date ( 'dmY' ) . '.docx';
		} elseif ($form_state ['values'] ['klas']){
			$filename = '/tmp/VSG SODA Rapport ' . argus_klasbeheer_get_class_name( $form_state ['values'] ['klas'] ) . ' ' . date ( 'dmY' ) . '.docx';
		}
		
		if (count ( $reports )>1){
			require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/DocxMerge/src/DocxMerge.php';
			require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/DocxMerge/src/DocxMerge/Docx.php';
			require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/DocxMerge/src/libraries/TbsZip.php';
			
			$dm = new DocxMerge();
			$dm->merge( $reports, $filename );
			
			foreach ($reports as $report){
				unlink($report);
			}
		} else {
			$document->saveAs ( $filename );
		}
		
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
}
