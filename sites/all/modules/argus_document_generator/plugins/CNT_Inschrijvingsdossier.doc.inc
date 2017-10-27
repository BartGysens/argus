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
function argus_document_generator_CNT_Inschrijvingsdossier_init() {
	return array (
			'cat' => 'LLN',
			'subcat' => 'CNT',
			'title' => t ( 'Contract - Inschrijvingsdossier - LSEC' ) 
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_CNT_Inschrijvingsdossier_form($form, &$form_state) {
	$form ['leerling'] = array (
			'#type' => 'select',
			'#title' => t ( 'Leerling' ),
			'#description' => t ( 'Selecteer de leerling waarvoor dit document moet worden aangemaakt.' ),
			'#options' => argus_get_user_select_options ( 'leerling', false ),
			'#required' => false 
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
function argus_document_generator_CNT_Inschrijvingsdossier_form_submit($form, &$form_state) {
	argus_document_generator_CNT_Inschrijvingsdossier_document ( $form_state );
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_CNT_Inschrijvingsdossier_document($args) {
	require_once drupal_get_path ( 'module', 'argus_document_generator' ) . '/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register ();
	
	/* Include parameters */
	if (module_exists ( 'argus_gebruikersregistratie' )) {
		require_once drupal_get_path ( 'module', 'argus_gebruikersregistratie' ) . '/includes/argus_gebruikersregistratie_options_nationaliteit.inc.php';
		$optionsNationality = argus_gebruikersregistratie_form_field_nationality ();
		
		require_once drupal_get_path ( 'module', 'argus_gebruikersregistratie' ) . '/includes/argus_gebruikersregistratie_options_religion.inc.php';
		$optionsReligion = argus_gebruikersregistratie_form_field_religion ();
	}
	
	/* Load user (student/pupil) */
	$uid = $args ['values'] ['leerling'];
	$u = user_load ( $uid );
	
	/* Load template */
	$document = new TemplateProcessor ( argus_document_generator_get_plugin_template ( 'CNT_Inschrijvingsdossier' ) );
	
	/* Start replacing values in template */
	$document->setValue ( 'naam', argus_get_user_realname ( $uid ) );
	
	if ($u) {
		$value = $u->field_user_tmp_reg_class [LANGUAGE_NONE] [0] ['value'];
	} else {
		$value = '';
	}
	$document->setValue ( 'klas', $value );
	$result = db_query ( 'SELECT n.nid FROM {node} n WHERE n.title = :title AND n.type = :type', array (
			':title' => $value,
			':type' => 'klas' 
	) );
	$currentClass = $result->fetchField ();
	if ($currentClass) {
		$currentClass = node_load ( $currentClass );
		$value = '';
		if (array_key_exists ( $currentClass->language, $currentClass->field_klas_leerjaar )) {
			$value .= $currentClass->field_klas_leerjaar [$currentClass->language] [0] ['value'] . 'e jaar';
		}
		if (array_key_exists ( $currentClass->language, $currentClass->field_klas_graad ) && array_key_exists ( $currentClass->language, $currentClass->field_klas_leerjaar )) {
			$value .= ' van de ';
		}
		if (array_key_exists ( $currentClass->language, $currentClass->field_klas_graad )) {
			$value .= $currentClass->field_klas_graad [$currentClass->language] [0] ['value'] . 'e graad';
		}
		$document->setValue ( 'leerjaar', $value );
		
		$value = '';
		if (array_key_exists ( LANGUAGE_NONE, $currentClass->field_klas_onderwijsvorm )) {
			$value = $currentClass->field_klas_onderwijsvorm [LANGUAGE_NONE] [0] ['value'];
		}
		$document->setValue ( 'onderwijsvorm', $value );
		
		$value = '';
		if (array_key_exists ( LANGUAGE_NONE, $currentClass->field_klas_structuuronderdeel )) {
			$value = $currentClass->field_klas_structuuronderdeel [LANGUAGE_NONE] [0] ['value'];
		}
		$document->setValue ( 'structuuronderdeel', $value );
	}
	
	$document->setValue ( 'datum', format_date ( time (), 'custom', 'l, j F Y' ) );
	$document->setValue ( 'dag', format_date ( time (), 'custom', 'j' ) );
	$document->setValue ( 'maand', format_date ( time (), 'custom', 'm' ) );
	$document->setValue ( 'jaar', format_date ( time (), 'custom', 'Y' ) );
	
	if ($u) {
		$value = $u->field_user_sms_ingeschreven_door [LANGUAGE_NONE] [0] ['value'];
	} else {
		$value = '';
	}
	$document->setValue ( 'inschrijver', $value );
	
	// Aanhef
	$value = '';
	
	if ($u) {
		if (count ( $u->field_user_sms_geboortedatum )) {
			$birthday = new DateTime ( $u->field_user_sms_geboortedatum [LANGUAGE_NONE] [0] ['value'] );
		}
	}
	$age = 0;
	if (isset ( $birthday )) {
		$age = date_diff ( $birthday, new DateTime ( 'now' ) )->format ( '%y' );
	}
	
	$value = '';
	if ($u) {
		if ($age < 18) {
			if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_naam_coaccount1 )) {
				$value = $u->field_user_sms_naam_coaccount1 [LANGUAGE_NONE] [0] ['value'];
			}
			if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_voornaam_coac1 )) {
				$value .= ' ' . $u->field_user_sms_voornaam_coac1 [LANGUAGE_NONE] [0] ['value'];
			}
			
			if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_type_coaccount1 )) {
				$value .= ', ' . strtolower ( $u->field_user_sms_type_coaccount1 [LANGUAGE_NONE] [0] ['value'] ) . ' van ' . argus_get_user_realname ( $uid );
			}
		} else {
			$value = $u->field_user_sms_naam [LANGUAGE_NONE] [0] ['value'] . ' ' . $u->field_user_sms_voornaam [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'aanhef_ouder', $value );
	
	// ALGEMENE GEGEVENS
	
	if ($u) {
		$value = $u->field_user_sms_naam [LANGUAGE_NONE] [0] ['value'];
	} else {
		$value = '';
	}
	$document->setValue ( 'achternaam', $value );
	if ($u) {
		$value = $u->field_user_sms_voornaam [LANGUAGE_NONE] [0] ['value'];
	} else {
		$value = '';
	}
	$document->setValue ( 'voornaam', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_extravoornamen )) {
			$value = $u->field_user_sms_extravoornamen [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'extravoornamen', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_intern_extern_ )) {
			$value = $u->field_user_sms_intern_extern_ [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'intern_extern', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_internaat )) {
			$value = 'Vestigingsplaats: ' . $u->field_user_sms_internaat [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'internaat', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_taal_met_moeder )) {
			$value = $u->field_user_sms_taal_met_moeder [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'taal', $value );
	
	$gender = '';
	if ($u) {
		if ($u->field_user_sms_geslacht [LANGUAGE_NONE] [0] ['value'] == 'm') {
			$gender = t ( 'mannelijk' );
			$document->setValue ( 'aanhef_kind', 'zoon' );
		} else {
			$gender = t ( 'vrouwelijk' );
			$document->setValue ( 'aanhef_kind', 'dochter' );
		}
	} else {
		$document->setValue ( 'aanhef_kind', '' );
	}
	$document->setValue ( 'geslacht', $gender );
	
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
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboortedatum )) {
			$birthday = new DateTime ( $u->field_user_sms_geboortedatum [LANGUAGE_NONE] [0] ['value'] );
			$value = $birthday->format ( 'd-m-Y' );
			$value .= ' (' . date_diff ( $birthday, new DateTime ( 'now' ) )->format ( '%y jaar' ) . ')';
		}
	}
	$document->setValue ( 'geboortedatum', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboorteplaats )) {
			$value = $u->field_user_sms_geboorteplaats [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'geboorteplaats', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboorteland )) {
			$value = $u->field_user_sms_geboorteland [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'geboorteland', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_nationaliteit ) && isset ( $optionsNationality )) {
			$value = $optionsNationality [$u->field_user_sms_nationaliteit [LANGUAGE_NONE] [0] ['value']];
		}
	}
	$document->setValue ( 'nationaliteit', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_rijksregisternumm )) {
			$value = $u->field_user_sms_rijksregisternumm [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'rijksregisternummer', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telefoonnummer )) {
			$value = $u->field_user_sms_telefoonnummer [LANGUAGE_NONE] [0] ['value'] . ' ';
		}
	}
	$document->setValue ( 'telefoonnummer', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_mobielnummer ) && ! $value) {
			$value = $u->field_user_sms_mobielnummer [LANGUAGE_NONE] [0] ['value'] . ' ';
		}
	}
	$document->setValue ( 'mobielnummer', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_emailadres )) {
			$value = $u->field_user_sms_emailadres [LANGUAGE_NONE] [0] ['email'];
		}
	}
	$document->setValue ( 'emailadres', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_algemene_opmerkin )) {
			$value = $u->field_user_sms_algemene_opmerkin [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'opmerkingen', $value );
	
	// VROEGERE STUDIES
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl_schooljaar )) {
			$value = $u->field_user_sms_sl_schooljaar [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'SL1_schj', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl_leerjaar_en_st )) {
			$value = $u->field_user_sms_sl_leerjaar_en_st [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'SL1_lj_r', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl_attest )) {
			$value = $u->field_user_sms_sl_attest [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl_clausulering )) {
			$value .= ' (' . $u->field_user_sms_sl_clausulering [LANGUAGE_NONE] [0] ['value'] . ')';
		}
	}
	$document->setValue ( 'SL1_attest', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl_school )) {
			$value = $u->field_user_sms_sl_school [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl_stad_school )) {
			$value .= ' (' . $u->field_user_sms_sl_stad_school [LANGUAGE_NONE] [0] ['value'] . ')';
		}
	}
	$document->setValue ( 'SL1_sch_gem', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl2_schooljaar )) {
			$value = $u->field_user_sms_sl2_schooljaar [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'SL2_schj', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl2_leerjaar_en_s )) {
			$value = $u->field_user_sms_sl2_leerjaar_en_s [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'SL2_lj_r', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl2_attest )) {
			$value = $u->field_user_sms_sl2_attest [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'SL2_attest', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl2_school )) {
			$value = $u->field_user_sms_sl2_school [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_sl2_stad_school )) {
			$value .= ' (' . $u->field_user_sms_sl2_stad_school [LANGUAGE_NONE] [0] ['value'] . ')';
		}
	}
	$document->setValue ( 'SL2_sch_gem', $value );
	
	// FAMILIALE GEGEVENS
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_gezinssituatie )) {
			$value = $u->field_user_sms_gezinssituatie [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'gezinssituatie', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_gezinshoofd )) {
			$value = $u->field_user_sms_gezinshoofd [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'gezinshoofd', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_aantal_broers )) {
			$value = $u->field_user_sms_aantal_broers [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'aantal_broers', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_aantal_zussen )) {
			$value = $u->field_user_sms_aantal_zussen [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'aantal_zussen', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_aantal_zussen_bro )) {
			$value = $u->field_user_sms_aantal_zussen_bro [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'aantal_zussen_broers_reeds_op_school', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_rekeningnummer_ge )) {
			$value = $u->field_user_sms_rekeningnummer_ge [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'rekeningnummer', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_type_coaccount1 )) {
			$value = $u->field_user_sms_type_coaccount1 [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'type_coaccount1', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_naam_coaccount1 )) {
			$value = $u->field_user_sms_naam_coaccount1 [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_voornaam_coac1 )) {
			$value .= ' ' . $u->field_user_sms_voornaam_coac1 [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'naam_coaccount1', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telnummer_coac1 )) {
			$value = $u->field_user_sms_telnummer_coac1 [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_mobielnr_coac1 ) && array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telnummer_coac1 )) {
			$value .= ' - ';
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_mobielnr_coac1 )) {
			$value .= $u->field_user_sms_mobielnr_coac1 [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'tel_coaccount1', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_email_coaccount1 )) {
			$value = $u->field_user_sms_email_coaccount1 [LANGUAGE_NONE] [0] ['email'];
		}
	}
	$document->setValue ( 'email_coaccount1', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_type_coaccount1 )) {
			switch ($u->field_user_sms_type_coaccount1 [LANGUAGE_NONE] [0] ['value']) {
				case 'Vader' :
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telefoon_werk_vad )) {
						$value = $u->field_user_sms_telefoon_werk_vad [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'tel_werk_coaccount1', $value );
					
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_nationaliteit_vad )) {
						$value = $u->field_user_sms_nationaliteit_vad [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'nationaliteit_coaccount1', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboortedatum_vad )) {
						$value = date ( 'd/m/Y', strtotime ( $u->field_user_sms_geboortedatum_vad [LANGUAGE_NONE] [0] ['value'] ) );
					}
					$document->setValue ( 'gebdat_coaccount1', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_straat_vader )) {
						$value = $u->field_user_sms_straat_vader [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisnummer_vader )) {
						$value .= ' ' . $u->field_user_sms_huisnummer_vader [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_busnummer_vader )) {
						$value .= ' ' . $u->field_user_sms_busnummer_vader [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'adres_coaccount1', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_postcode_vader )) {
						$value = $u->field_user_sms_postcode_vader [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_stad_gemeente_vad )) {
						$value .= ' ' . $u->field_user_sms_stad_gemeente_vad [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'gemeente_coaccount1', $value );
					
					break;
				case 'Moeder' :
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telefoon_werk_moe )) {
						$value = $u->field_user_sms_telefoon_werk_moe [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'tel_werk_coaccount1', $value );
					
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_nationaliteit_moe )) {
						$value = $u->field_user_sms_nationaliteit_moe [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'nationaliteit_coaccount1', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboortedatum_moe )) {
						$value = date ( 'd/m/Y', strtotime ( $u->field_user_sms_geboortedatum_moe [LANGUAGE_NONE] [0] ['value'] ) );
					}
					$document->setValue ( 'gebdat_coaccount1', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_straat_moeder )) {
						$value = $u->field_user_sms_straat_moeder [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisnummer_moeder )) {
						$value .= ' ' . $u->field_user_sms_huisnummer_moeder [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_busnummer_moeder )) {
						$value .= ' ' . $u->field_user_sms_busnummer_moeder [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'adres_coaccount1', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_postcode_moeder )) {
						$value = $u->field_user_sms_postcode_moeder [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_stad_gemeente_moe )) {
						$value .= ' ' . $u->field_user_sms_stad_gemeente_moe [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'gemeente_coaccount1', $value );
					
					break;
				case 'Voogd' :
					$document->setValue ( 'tel_werk_coaccount1', '' );
					$document->setValue ( 'nationaliteit_coaccount1', '' );
					$document->setValue ( 'gebdat_coaccount1', '' );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_adres_ouder_voogd )) {
						$value = $u->field_user_sms_adres_ouder_voogd [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisnummer_ouder_ )) {
						$value .= ' ' . $u->field_user_sms_huisnummer_ouder_ [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'adres_coaccount1', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_postcode_ouder_vo )) {
						$value = $u->field_user_sms_postcode_ouder_vo [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'gemeente_coaccount1', $value );
					
					break;
			}
		}
	}
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_type_coaccount2 )) {
			$value = $u->field_user_sms_type_coaccount2 [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'type_coaccount2', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_naam_coaccount2 )) {
			$value = $u->field_user_sms_naam_coaccount2 [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_voornaam_coac2 )) {
			$value .= ' ' . $u->field_user_sms_voornaam_coac2 [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'naam_coaccount2', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telnummer_coac2 )) {
			$value = $u->field_user_sms_telnummer_coac2 [LANGUAGE_NONE] [0] ['value'];
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_mobielnr_coac2 ) && array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telnummer_coac1 )) {
			$value .= ' - ';
		}
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_mobielnr_coac2 )) {
			$value .= $u->field_user_sms_mobielnr_coac2 [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'tel_coaccount2', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_email_coaccount2 )) {
			$value = $u->field_user_sms_email_coaccount2 [LANGUAGE_NONE] [0] ['email'];
		}
	}
	$document->setValue ( 'email_coaccount2', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_type_coaccount2 )) {
			switch ($u->field_user_sms_type_coaccount2 [LANGUAGE_NONE] [0] ['value']) {
				case 'Vader' :
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telefoon_werk_vad )) {
						$value = $u->field_user_sms_telefoon_werk_vad [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'tel_werk_coaccount2', $value );
					
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_nationaliteit_vad )) {
						$value = $u->field_user_sms_nationaliteit_vad [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'nationaliteit_coaccount2', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboortedatum_vad )) {
						$value = date ( 'd/m/Y', strtotime ( $u->field_user_sms_geboortedatum_vad [LANGUAGE_NONE] [0] ['value'] ) );
					}
					$document->setValue ( 'gebdat_coaccount2', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_straat_vader )) {
						$value = $u->field_user_sms_straat_vader [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisnummer_vader )) {
						$value .= ' ' . $u->field_user_sms_huisnummer_vader [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_busnummer_vader )) {
						$value .= ' ' . $u->field_user_sms_busnummer_vader [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'adres_coaccount2', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_postcode_vader )) {
						$value = $u->field_user_sms_postcode_vader [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_stad_gemeente_vad )) {
						$value .= ' ' . $u->field_user_sms_stad_gemeente_vad [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'gemeente_coaccount2', $value );
					
					break;
				case 'Moeder' :
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telefoon_werk_moe )) {
						$value = $u->field_user_sms_telefoon_werk_moe [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'tel_werk_coaccount2', $value );
					
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_nationaliteit_moe )) {
						$value = $u->field_user_sms_nationaliteit_moe [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'nationaliteit_coaccount2', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_geboortedatum_moe )) {
						$value = date ( 'd/m/Y', strtotime ( $u->field_user_sms_geboortedatum_moe [LANGUAGE_NONE] [0] ['value'] ) );
					}
					$document->setValue ( 'gebdat_coaccount2', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_straat_moeder )) {
						$value = $u->field_user_sms_straat_moeder [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisnummer_moeder )) {
						$value .= ' ' . $u->field_user_sms_huisnummer_moeder [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_busnummer_moeder )) {
						$value .= ' ' . $u->field_user_sms_busnummer_moeder [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'adres_coaccount2', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_postcode_moeder )) {
						$value = $u->field_user_sms_postcode_moeder [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_stad_gemeente_moe )) {
						$value .= ' ' . $u->field_user_sms_stad_gemeente_moe [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'gemeente_coaccount2', $value );
					
					break;
				case 'Voogd' :
					$document->setValue ( 'tel_werk_coaccount2', '' );
					$document->setValue ( 'nationaliteit_coaccount2', '' );
					$document->setValue ( 'gebdat_coaccount2', '' );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_adres_ouder_voogd )) {
						$value = $u->field_user_sms_adres_ouder_voogd [LANGUAGE_NONE] [0] ['value'];
					}
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisnummer_ouder_ )) {
						$value .= ' ' . $u->field_user_sms_huisnummer_ouder_ [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'adres_coaccount2', $value );
					$value = '';
					if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_postcode_ouder_vo )) {
						$value = $u->field_user_sms_postcode_ouder_vo [LANGUAGE_NONE] [0] ['value'];
					}
					$document->setValue ( 'gemeente_coaccount2', $value );
					
					break;
			}
		}
	}
	
	// DIVERSE GEGEVENS
	
	$document->setValue ( 'aanmeldingsuur', date ( 'H:i' ) );
	
	if (date ( 'Ymd' ) > date ( 'Y0901' )) {
		$document->setValue ( 'inschrijvingsdatum', date ( 'd-m-Y' ) );
	} else {
		$document->setValue ( 'inschrijvingsdatum', date ( '01-09-Y' ) );
	}
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_godsdienstkeuze )) {
			$value = $u->field_user_sms_godsdienstkeuze [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'godsdienstkeuze', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_vervoersmiddel )) {
			$value = $u->field_user_sms_vervoersmiddel [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'vervoer', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_afstand_naar_huis )) {
			$value = $u->field_user_sms_afstand_naar_huis [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'afstand', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_huisdokter )) {
			$value = $u->field_user_sms_huisdokter [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'huisdokter', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_telefoon_huisdokt )) {
			$value = $u->field_user_sms_telefoon_huisdokt [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'tel_huisdokter', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_tmp_reg_payment )) {
			$value = $u->field_user_tmp_reg_payment [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'betalingswijze', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_s_middags_buiten_ )) {
			if ($u->field_user_sms_s_middags_buiten_ [LANGUAGE_NONE] [0] ['value'] == 'Nee') {
				$value = 'geen ';
			}
		}
	}
	$document->setValue ( 'toelating_middag', $value );
	
	// GODSDIENSTKEUZE
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_godsdienstkeuze ) && isset ( $optionsReligion )) {
			$value = $u->field_user_sms_godsdienstkeuze [LANGUAGE_NONE] [0] ['value'];
			foreach ( $optionsReligion as $option ) {
				$key = argus_gebruikersregistratie_key_field_religion ( $option );
				if ($value == $option) {
					if (in_array ( $key, array (
							9999,
							52,
							63 
					) )) {
						$set = 'x ' . $option;
					} else {
						$set = 'x';
					}
				} else {
					if (in_array ( $key, array (
							9999,
							52,
							63 
					) )) {
						$set = '';
					} else {
						$set = 'o';
					}
				}
				$document->setValue ( 'gd_' . $key, $set );
			}
		}
	}
	
	// INFORMATIEKANALEN
	
	$optionsContact = array (
			'adver',
			'clb',
			'famil',
			'opend',
			'schoo',
			'tv',
			'websi',
			'_ande' 
	);
	if ($u) {
		foreach ( $optionsContact as $key => $option ) {
			eval ( "\$field = \$u->field_user_sms_contact_via_" . $option . ";" );
			$set = '';
			if (array_key_exists ( LANGUAGE_NONE, $field )) {
				$value = $field [LANGUAGE_NONE] [0] ['value'];
				if ($value == 'Ja') {
					$set = 'x';
				} else {
					$set = 'o';
				}
			}
			$document->setValue ( 'contact' . $key, $set );
		}
	}
	
	// MEDISCHE PROBLEMATIEK
	
	$options = array (
			'allergie',
			'astma',
			'concentratieprobl',
			'diabetes',
			'epilepsie' 
	);
	if ($u) {
		foreach ( $options as $option ) {
			eval ( "\$field = \$u->field_user_sms_" . $option . ";" );
			$set = '';
			if (array_key_exists ( LANGUAGE_NONE, $field )) {
				$value = $field [LANGUAGE_NONE] [0] ['value'];
				if ($value == 'Ja') {
					$set = 'x';
				} else {
					$set = 'o';
				}
			}
			$document->setValue ( $option, $set );
		}
	}
	$fields = array (
			'diagnose_speciali',
			'specialist',
			'opvolging_voorzie',
			'doktersattest_',
			'da_voor_hoe_lang_',
			'medicatie_',
			'welke_en_hoeveel_',
			'ingeent_tegen_kle',
			'wanneer_ingeent_t',
			'aandachtspunten_p',
			'ondersteunende_ma',
			'attest_lo_',
			'andere_mp' 
	);
	if ($u) {
		foreach ( $fields as $f ) {
			eval ( "\$field = \$u->field_user_sms_" . $f . ";" );
			$value = '';
			if (array_key_exists ( LANGUAGE_NONE, $field )) {
				$value = $field [LANGUAGE_NONE] [0] ['value'];
			}
			$document->setValue ( $f, $value );
		}
	}
	
	// LEERSTOORNISSEN
	
	$options = array (
			'dyslexie',
			'dyscalculie',
			'adhd',
			'nld__non_verbale_',
			'ass__autisme_spec' 
	);
	if ($u) {
		foreach ( $options as $option ) {
			eval ( "\$field = \$u->field_user_sms_" . $option . ";" );
			$set = '';
			if (array_key_exists ( LANGUAGE_NONE, $field )) {
				$value = $field [LANGUAGE_NONE] [0] ['value'];
				if ($value == 'Ja') {
					$set = 'x';
				} else {
					$set = 'o';
				}
			}
			$document->setValue ( $option, $set );
		}
	}
	$fields = array (
			'andere_ls_j_n',
			'andere_ls',
			'diagnose_deskundi',
			'deskundige',
			'attest_leerstoorn',
			'ingeent_tegen_kle',
			'wanneer_ingeent_t',
			'aandachtspunten_p',
			'attest_lo_',
			'andere_mp' 
	);
	if ($u) {
		foreach ( $fields as $f ) {
			eval ( "\$field = \$u->field_user_sms_" . $f . ";" );
			$value = '';
			if (array_key_exists ( LANGUAGE_NONE, $field )) {
				$value = $field [LANGUAGE_NONE] [0] ['value'];
			}
			$document->setValue ( $f, $value );
		}
	}
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_attest_leerstoorn )) {
			$value = $u->field_user_sms_attest_leerstoorn [LANGUAGE_NONE] [0] ['value'];
			if ($value == 'Ja') {
				$value = 'Zo ja, werd het attest ingeleverd? ';
				if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_attest_ingeleverd )) {
					$value .= $u->field_user_sms_attest_ingeleverd [LANGUAGE_NONE] [0] ['value'];
				}
			} else {
				$value = '';
			}
		}
	}
	$document->setValue ( 'attest_ingeleverd', $value );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_gon )) {
			$value = $u->field_user_sms_gon [LANGUAGE_NONE] [0] ['value'];
			if ($value == 'Ja') {
				$document->setValue ( 'gon_ja', 'x' );
				$document->setValue ( 'gon_nee', 'o' );
				if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_gon_begeleider )) {
					$value = 'GON-begeleider: ' . $u->field_user_sms_gon_begeleider [LANGUAGE_NONE] [0] ['value'];
				} else {
					$value = '';
				}
			} else {
				$document->setValue ( 'gon_ja', 'o' );
				$document->setValue ( 'gon_nee', 'x' );
				$value = '';
			}
		}
	}
	$document->setValue ( 'gon_begeleider', $value );
	$document->setValue ( 'gon_begeleiding__', $value );
	
	$value_school = '';
	$value_periode = '';
	$value_type = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_buitengewoon_onde )) {
			$value = $u->field_user_sms_buitengewoon_onde [LANGUAGE_NONE] [0] ['value'];
			if ($value == 'Ja') {
				$document->setValue ( 'buso_ja', 'x' );
				$document->setValue ( 'buso_nee', 'o' );
				if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_school_buo )) {
					$value_school = 'School: ' . $u->field_user_sms_school_buo [LANGUAGE_NONE] [0] ['value'];
				}
				if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_periode_buo )) {
					$value_periode = 'Periode: ' . $u->field_user_sms_periode_buo [LANGUAGE_NONE] [0] ['value'];
				}
				if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_type_buo )) {
					$value_type = 'Type: ' . $u->field_user_sms_type_buo [LANGUAGE_NONE] [0] ['value'];
				}
			} else {
				$document->setValue ( 'buso_ja', 'o' );
				$document->setValue ( 'buso_nee', 'x' );
			}
		}
	}
	$document->setValue ( 'buso_school', $value_school );
	$document->setValue ( 'buso_periode', $value_periode );
	$document->setValue ( 'buso_type', $value_type );
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_verslag_clb )) {
			$value = $u->field_user_sms_verslag_clb [LANGUAGE_NONE] [0] ['value'];
			if ($value == 'Ja') {
				$document->setValue ( 'verslag_clb_ja', 'x' );
				$document->setValue ( 'verslag_clb_nee', 'o' );
			} else {
				$document->setValue ( 'verslag_clb_ja', 'o' );
				$document->setValue ( 'verslag_clb_nee', 'x' );
			}
		}
	}
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_sms_inschrijving_onde )) {
			$value = $u->field_user_sms_inschrijving_onde [LANGUAGE_NONE] [0] ['value'];
			if ($value == 'Ja') {
				$document->setValue ( 'inschrijving_onde_ja', 'x' );
				$document->setValue ( 'inschrijving_onde_nee', 'o' );
			} else {
				$document->setValue ( 'inschrijving_onde_ja', 'o' );
				$document->setValue ( 'inschrijving_onde_nee', 'x' );
			}
		}
	}
	
	// LOGIN DATA
	if ($u) {
		$document->setValue ( 'gebruikersnaam', $u->name );
	}
	
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_tmp_pwhfd )) {
			$value = $u->field_user_tmp_pwhfd [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'pw_lln', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_tmp_pwco1 )) {
			$value = $u->field_user_tmp_pwco1 [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'pw_co1', $value );
	$value = '';
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_tmp_pwco2 )) {
			$value = $u->field_user_tmp_pwco2 [LANGUAGE_NONE] [0] ['value'];
		}
	}
	$document->setValue ( 'pw_co2', $value );
	
	// GET LESSONTABLE
	
	$courseTable = '';
	$courseTotal = '';
	if (module_exists ( 'argus_uurrooster' )) {
		if ($u) {
			if (array_key_exists ( LANGUAGE_NONE, $u->field_user_tmp_reg_class )) {
				$class = $u->field_user_tmp_reg_class [LANGUAGE_NONE] [0] ['value'] . '%';
				$query = 'SELECT DISTINCT p.nid AS id, v.title AS title, COUNT(v.nid) AS total, vb.field_vak_beschrijving_value AS name FROM {node} AS k LEFT JOIN {field_data_field_uurrooster_les_klassen} AS lk ON lk.field_uurrooster_les_klassen_target_id = k.nid LEFT JOIN {field_data_field_uurrooster_les_vak} AS lv ON lv.entity_id = lk.entity_id LEFT JOIN {field_data_field_uurrooster_les_periode} AS lp ON lp.entity_id = lk.entity_id INNER JOIN {field_data_field_uurrooster_les_id_untis} AS liu ON liu.entity_id = lk.entity_id LEFT JOIN {node} AS v ON v.nid = lv.field_uurrooster_les_vak_target_id LEFT JOIN {field_data_field_vak_beschrijving} AS vb ON vb.entity_id = lv.field_uurrooster_les_vak_target_id RIGHT JOIN {node} AS p ON p.nid = lp.field_uurrooster_les_periode_target_id WHERE k.title LIKE :class AND liu.field_uurrooster_les_id_untis_value NOT IN (:lius) AND vb.field_vak_beschrijving_value NOT LIKE :course1 AND vb.field_vak_beschrijving_value NOT LIKE :course2 GROUP BY liu.field_uurrooster_les_id_untis_value ORDER BY vb.field_vak_beschrijving_value ASC';
				$result = db_query ( $query, array (
						':class' => $class,
						':lius' => array (
								35401,
								211403,
								240500,
						),
						':course1' => '%odsdienst%',
						':course2' => '%edenleer%',
				) )->fetchAllAssoc ( 'id', PDO::FETCH_ASSOC );
				
				$prefixList = '<w:p><w:pPr><w:spacing w:line="320" w:lineRule="auto"/><w:tabs><w:tab w:val="right" w:pos="8500"/></w:tabs><w:rPr><w:rFonts w:ascii="Calibri" w:hAnsi="Calibri"/><w:sz w:val="28"/><w:szCs w:val="28"/></w:rPr></w:pPr><w:r><w:rPr><w:rFonts w:ascii="Calibri" w:hAnsi="Calibri"/><w:sz w:val="28"/><w:szCs w:val="28"/></w:rPr><w:t>';
				$tab = '</w:t></w:r><w:r w:rsidRPr="003B6BFD"><w:rPr><w:sz w:val="28"/><w:szCs w:val="28"/></w:rPr><w:tab/><w:t>';
				$suffixList = '</w:t></w:r></w:p>';
				
				// This one must be added manual: 'levensbeschouwelijk vak'
				$courseTable .= $prefixList . 'Levensbeschouwelijk vak (godsdienst, zedenleer, ...)' . $tab . '2' . $suffixList;
				$courseTotal = 2;
				foreach ( $result as $key => $course ) {
					$courseTable .= $prefixList . htmlspecialchars ( $course ['name'] ) . $tab . $course ['total'] . $suffixList;
					$courseTotal += $course ['total'];
				}
			}
		}
	}
	$document->setValue ( 'lt_courses', $courseTable );
	$document->setValue ( 'lt_total', $courseTotal );
	
	// GET SCHOOLCOSTS
	$courseTable = '';
	$courseTotal = 0;
	// TODO: uncommenten als module klaar is
	// if (module_exists ( 'argus_schoolkosten' )) {
	if ($u) {
		if (array_key_exists ( LANGUAGE_NONE, $u->field_user_tmp_reg_class )) {
			$class = $u->field_user_tmp_reg_class [LANGUAGE_NONE] [0] ['value'] . '%';
			$query = 'SELECT vb.field_vak_beschrijving_value AS name, sk.title AS schoolkost, skt.field_schoolkost_item_type_tid AS type, ltp.field_schoolkost_totaalprijs_value AS price ' . 'FROM {node} AS k ' . 'LEFT JOIN {field_data_field_schoolkost_klassen} AS lk ON lk.field_schoolkost_klassen_target_id = k.nid ' . 'LEFT JOIN {field_data_field_schoolkost_vakken} AS lv ON lv.entity_id = lk.entity_id ' . 'LEFT JOIN {field_data_field_schoolkost_schoolkost_item} AS lsi ON lsi.entity_id = lk.entity_id ' . 'LEFT JOIN {node} AS sk ON sk.nid = lsi.field_schoolkost_schoolkost_item_target_id ' . 'LEFT JOIN {field_data_field_schoolkost_totaalprijs} AS ltp ON ltp.entity_id = lk.entity_id ' . 'LEFT JOIN {field_data_field_schoolkost_item_type} AS skt ON skt.entity_id = sk.nid ' . 'LEFT JOIN {field_data_field_vak_beschrijving} AS vb ON vb.entity_id = lv.field_schoolkost_vakken_target_id ' . 'WHERE k.title LIKE :class AND lsi.entity_id ' . 'ORDER BY vb.field_vak_beschrijving_value ASC';
			$result = db_query ( $query, array (
					':class' => $class 
			) )->fetchAllAssoc ( 'schoolkost', PDO::FETCH_ASSOC );
			
			$prefixList = '<w:p w14:paraId="73B37D4E" w14:textId="77777777" w:rsidR="00EF0E8A" w:rsidRPr="00483428" w:rsidRDefault="00483428" w:rsidP="00483428"><w:pPr><w:tabs><w:tab w:val="left" w:pos="3686"/><w:tab w:val="right" w:pos="9064"/></w:tabs><w:spacing w:line="320" w:lineRule="auto"/><w:rPr><w:sz w:val="20"/><w:szCs w:val="20"/></w:rPr></w:pPr><w:r w:rsidRPr="00483428"><w:rPr><w:sz w:val="20"/><w:szCs w:val="20"/></w:rPr><w:t>';
			$tab = '</w:t></w:r><w:r w:rsidRPr="00483428"><w:rPr><w:sz w:val="20"/><w:szCs w:val="20"/></w:rPr><w:tab/><w:t>';
			$suffixList = '</w:t></w:r></w:p>';
			
			foreach ( $result as $key => $course ) {
				$addCourse = true;
				
				if (stristr ( strtolower ( $course ['name'] ), 'godsdienst' ) || stristr ( strtolower ( $course ['name'] ), 'zedenleer' )) {
					
					if (! stristr ( strtolower ( $course ['name'] ), strtolower ( $u->field_user_sms_godsdienstkeuze [LANGUAGE_NONE] [0] ['value'] ) )) {
						$addCourse = false;
					}
				}
				
				if ($addCourse) {
					$courseTable .= $prefixList . htmlspecialchars ( $course ['schoolkost'] ) . $tab . htmlspecialchars ( $course ['name'] ) . $tab . $course ['price'] . $suffixList;
					$courseTotal += $course ['price'];
				}
			}
		}
	}
	// }
	$document->setValue ( 'sk_courses', $courseTable );
	$document->setValue ( 'sk_total', $courseTotal );
	
	/* Generate the document and initiate download */
	$filename = '/tmp/CNT Inschrijvingsdossier ' . str_replace ( ', ', ' ', argus_get_user_realname ( $uid ) ) . ' ' . argus_get_user_class ( $uid, 'title' ) . ' ' . date ( 'dmY' ) . '.docx';
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
