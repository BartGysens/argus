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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_CNT_Voorinschrijvingsdossier_form($form, &$form_state) {
	$form['leerling'] = array(
        '#type' => 'select',
        '#title' => t('Leerling'),
        '#description' => t('Selecteer de leerling waarvoor dit document moet worden aangemaakt.'),
        '#options' => argus_get_user_select_options('leerling', false),
        '#required' => true,
    );
    
    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Document downloaden (Word-formaat)'),
    );
    return $form;
}

/**
 * Page callback: Form submission
 *
 * @return array
 */
function argus_document_generator_CNT_Voorinschrijvingsdossier_form_submit($form, &$form_state) {
    argus_document_generator_CNT_Voorinschrijvingsdossier_document($form_state);
}

/**
 * Generator requested document and make available for downloading
 */
function argus_document_generator_CNT_Voorinschrijvingsdossier_document($args) {
	require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register();
	
	/* Load user (student/pupil) */
    $uid = $args['values']['leerling'];
    $u = user_load($uid);
    
    /* Load template */
	$document = new TemplateProcessor(drupal_get_path('module', 'argus_document_generator') . '/plugins/docs/CNT_Voorinschrijvingsdossier.docx');
	
	/* Start replacing values in template */
	$document->setValue('naam', argus_get_user_realname($uid));
	
	$document->setValue('klas', $u->field_user_tmp_reg_class[LANGUAGE_NONE][0]['value']);
		$result = db_query('SELECT n.nid FROM {node} n WHERE n.title = :title AND n.type = :type', array(':title' => $u->field_user_tmp_reg_class[LANGUAGE_NONE][0]['value'], ':type' => 'klas'));
		$currentClass = $result->fetchField();
		if ($currentClass){
			$currentClass = node_load($currentClass);
		$value = '';
            if (array_key_exists($currentClass->language, $currentClass->field_klas_leerjaar)){
            	$value .= $currentClass->field_klas_leerjaar[$currentClass->language][0]['value'] . 'e jaar';
            }
            if (array_key_exists($currentClass->language, $currentClass->field_klas_graad) && array_key_exists($currentClass->language, $currentClass->field_klas_leerjaar)){
            	$value .= ' van de ';
            }
            if (array_key_exists($currentClass->language, $currentClass->field_klas_graad)){
            	$value .= $currentClass->field_klas_graad[$currentClass->language][0]['value'] . 'e graad';
            }
			$document->setValue('leerjaar', $value);
			
			$value = '';
			if (array_key_exists(LANGUAGE_NONE, $currentClass->field_klas_onderwijsvorm)){
				$value = $currentClass->field_klas_onderwijsvorm[LANGUAGE_NONE][0]['value'];
			}
			$document->setValue('onderwijsvorm', $value);
			
			$value = '';
			if (array_key_exists(LANGUAGE_NONE, $currentClass->field_klas_structuuronderdeel)){
				$value = $currentClass->field_klas_structuuronderdeel[LANGUAGE_NONE][0]['value'];
			}
			$document->setValue('structuuronderdeel', $value);
		}
	
	$document->setValue('datum', format_date(time(), 'custom', 'l, j F Y'));
	$document->setValue('dag', format_date(time(), 'custom', 'j'));
	$document->setValue('maand', format_date(time(), 'custom', 'm'));
	$document->setValue('jaar', format_date(time(), 'custom', 'Y'));
	
	$document->setValue('inschrijver', $u->field_user_sms_ingeschreven_door[LANGUAGE_NONE][0]['value']);
	
	// Aanhef
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_naam_coaccount1)){
		$value = $u->field_user_sms_naam_coaccount1[LANGUAGE_NONE][0]['value'];
	}
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_voornaam_coac1)){
		$value .= ' '.$u->field_user_sms_voornaam_coac1[LANGUAGE_NONE][0]['value'];
	}
	
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_type_coaccount1)){
		$value .= ', '.strtolower($u->field_user_sms_type_coaccount1[LANGUAGE_NONE][0]['value']).' van '.argus_get_user_realname($uid);
	}
	$document->setValue('aanhef_ouder', $value);
	
	
	// ALGEMENE GEGEVENS
	
	$document->setValue('achternaam', $u->field_user_sms_naam[LANGUAGE_NONE][0]['value']);
	$document->setValue('voornaam', $u->field_user_sms_voornaam[LANGUAGE_NONE][0]['value']);
	
	if ($u->field_user_sms_geslacht[LANGUAGE_NONE][0]['value'] == 'm'){
		$gender = t('mannelijk');
		$document->setValue('aanhef_kind', 'zoon');
	} else {
		$gender = t('vrouwelijk');
		$document->setValue('aanhef_kind', 'dochter');
	}
	$document->setValue('geslacht', $gender);
	
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_telefoonnummer)){
		$value = $u->field_user_sms_telefoonnummer[LANGUAGE_NONE][0]['value'].' ';
	}
	$document->setValue('telefoonnummer', $value);
	
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_mobielnummer) && !$value){
		$value = $u->field_user_sms_mobielnummer[LANGUAGE_NONE][0]['value'].' ';
	}
	$document->setValue('mobielnummer', $value);
	
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_emailadres)){
		$value = $u->field_user_sms_emailadres[LANGUAGE_NONE][0]['email'];
	}
	$document->setValue('emailadres', $value);
	
	// FAMILIALE GEGEVENS

	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_gezinssituatie)){
		$value = $u->field_user_sms_gezinssituatie[LANGUAGE_NONE][0]['value'];
	}
	$document->setValue('gezinssituatie', $value);
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_gezinshoofd)){
		$value = $u->field_user_sms_gezinshoofd[LANGUAGE_NONE][0]['value'];
	}
	$document->setValue('gezinshoofd', $value);
	
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_type_coaccount1)){
		$value = $u->field_user_sms_type_coaccount1[LANGUAGE_NONE][0]['value'];
	}
	$document->setValue('type_coaccount1', $value);
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_naam_coaccount1)){
		$value = $u->field_user_sms_naam_coaccount1[LANGUAGE_NONE][0]['value'];
	}
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_voornaam_coac1)){
		$value .= ' '.$u->field_user_sms_voornaam_coac1[LANGUAGE_NONE][0]['value'];
	}
	$document->setValue('naam_coaccount1', $value);
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_telnummer_coac1)){
		$value = $u->field_user_sms_telnummer_coac1[LANGUAGE_NONE][0]['value'];
	}
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_mobielnr_coac1) && array_key_exists(LANGUAGE_NONE, $u->field_user_sms_telnummer_coac1)){
		$value .= ' - ';
	}
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_mobielnr_coac1)){
		$value .= $u->field_user_sms_mobielnr_coac1[LANGUAGE_NONE][0]['value'];
	}
	$document->setValue('tel_coaccount1', $value);
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_email_coaccount1)){
		$value = $u->field_user_sms_email_coaccount1[LANGUAGE_NONE][0]['email'];
	}
	$document->setValue('email_coaccount1', $value);
	
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_type_coaccount2)){
		$value = $u->field_user_sms_type_coaccount2[LANGUAGE_NONE][0]['value'];
	}
	$document->setValue('type_coaccount2', $value);
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_naam_coaccount2)){
		$value = $u->field_user_sms_naam_coaccount2[LANGUAGE_NONE][0]['value'];
	}
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_voornaam_coac2)){
		$value .= ' '.$u->field_user_sms_voornaam_coac2[LANGUAGE_NONE][0]['value'];
	}
	$document->setValue('naam_coaccount2', $value);
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_telnummer_coac2)){
		$value = $u->field_user_sms_telnummer_coac2[LANGUAGE_NONE][0]['value'];
	}
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_mobielnr_coac2) && array_key_exists(LANGUAGE_NONE, $u->field_user_sms_telnummer_coac1)){
		$value .= ' - ';
	}
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_mobielnr_coac2)){
		$value .= $u->field_user_sms_mobielnr_coac2[LANGUAGE_NONE][0]['value'];
	}
	$document->setValue('tel_coaccount2', $value);
	$value = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_sms_email_coaccount2)){
		$value = $u->field_user_sms_email_coaccount2[LANGUAGE_NONE][0]['email'];
	}
	$document->setValue('email_coaccount2', $value);
	
	// DIVERSE GEGEVENS
	
	$document->setValue('aanmeldingsuur', date('H:i'));
	
	if (date('Ymd')>date('Y0901')){
		$document->setValue('inschrijvingsdatum', date('d-m-Y'));
	} else {
		$document->setValue('inschrijvingsdatum', date('01-09-Y'));
	}	
	
	// GET LESSONTABLE
	
	$courseTable = '';
	$courseTotal = '';
	if (array_key_exists(LANGUAGE_NONE, $u->field_user_tmp_reg_class)){
		$class = $u->field_user_tmp_reg_class[LANGUAGE_NONE][0]['value'].'%';
		$query = 'SELECT v.title AS title, COUNT(v.nid) AS total, vb.field_vak_beschrijving_value AS name '
			. 'FROM {node} AS k '
			. 'LEFT JOIN {field_data_field_uurrooster_les_klassen} AS lk ON lk.field_uurrooster_les_klassen_target_id = k.nid '
			. 'LEFT JOIN {field_data_field_uurrooster_les_vak} AS lv ON lv.entity_id = lk.entity_id '
			. 'LEFT JOIN {node} AS v ON v.nid = lv.field_uurrooster_les_vak_target_id '
			. 'LEFT JOIN {field_data_field_vak_beschrijving} AS vb ON vb.entity_id = lv.field_uurrooster_les_vak_target_id '
			. 'WHERE k.title LIKE :class GROUP BY title';
		$result = db_query($query, array(':class' => $class))->fetchAllAssoc('title', PDO::FETCH_ASSOC);
		//<w:pPr></ w:pPr>
		$prefixList = '<w:p><w:pPr><w:spacing w:line="320" w:lineRule="auto"/><w:tabs><w:tab w:val="center" w:pos="8500"/></w:tabs><w:rPr><w:rFonts w:ascii="Calibri" w:hAnsi="Calibri"/><w:sz w:val="28"/><w:szCs w:val="28"/></w:rPr></w:pPr><w:r><w:rPr><w:rFonts w:ascii="Calibri" w:hAnsi="Calibri"/><w:sz w:val="28"/><w:szCs w:val="28"/></w:rPr><w:t>';
		$tab = '</w:t></w:r><w:r w:rsidRPr="003B6BFD"><w:rPr><w:sz w:val="28"/><w:szCs w:val="28"/></w:rPr><w:tab/><w:t>';
		$suffixList = '</w:t></w:r></w:p>';
		
		// This one must be added manual: 'levensbeschouwelijk vak'
		$courseTable .= $prefixList.'Levensbeschouwelijk vak (godsdienst, zedenleer, ...)'.$tab.'2'.$suffixList;
		$courseTotal = 2;
		foreach ($result as $key => $course){
			if (!in_array($key, array('AISLAMGO', 'AKATHOGO', 'AORTHOGO', 'AANGLIGOD', 'AISRAEGO', 'ANCZEDEN', 'APROTEGO')) && $course['name']){
				$courseTable .= $prefixList.htmlspecialchars($course['name']).$tab.$course['total'].$suffixList;
				$courseTotal += $course['total'];
			}
		}
	}
	$document->setValue('lt_courses', $courseTable);
	$document->setValue('lt_total', $courseTotal);
	
	
	/* Generate the document and initiate download */
	$filename = '/tmp/CNT Voorinschrijvingsdossier '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.argus_get_user_class($uid, 'title').' '.date('dmY').'.docx';
	$document->saveAs($filename);
	
	header("Pragma: public");
	header("Expires: 0");
	header("Cache-Control: must-revalidate, post-check=0, pre-check=0");
	header("Cache-Control: private",false); // required for certain browsers
	header("Content-Type: application/msword");
	header("Content-Disposition: attachment; filename=\"".substr($filename,5)."\";" );
	header("Content-Transfer-Encoding: binary");
	header("Content-Length: ".filesize($filename));
	ob_clean();
	
	readfile($filename);
	unlink($filename);
	exit;
}