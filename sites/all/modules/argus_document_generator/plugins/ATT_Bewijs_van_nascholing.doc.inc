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
 * Plugin definition -- REQUIRED --
 */
function argus_document_generator_ATT_Bewijs_van_nascholing_init() {
	return array(
			'cat' => 'PERS',
			'subcat' => 'ALG',
			'title' => t('Bewijs van nascholing'),
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_ATT_Bewijs_van_nascholing_form($form, &$form_state) {  
    $form['personeelslid'] = array(
        '#type' => 'select',
        '#title' => t('Personeelslid'),
        '#description' => t('Selecteer het personeelslid waarvoor dit document moet worden aangemaakt.'),
        '#options' => argus_engine_get_user_select_options('personeelslid'),
    );
    
    $form['onderwerp'] = array(
        '#type' => 'textfield',
        '#title' => t('Onderwerp'),
        '#description' => t('Geef de titel van de nascholing.'),
    );
    $form['organisator'] = array(
        '#type' => 'textfield',
        '#title' => t('Organisator'),
        '#description' => t('Geef de inrichter/uitvoerder van de nascholing.'),
    );
    $form['datum'] = array(
        '#type' => 'date_select',
        '#title' => t('Datum'),
        '#description' => t('Geef de datum wanneer de nascholing heeft plaats gevonden.'),
        '#date_increment' => 10,
        '#default_value' => date_now(),
        '#date_year_range' => '-1:+1',
        '#date_format' => 'd/m/Y',
    );
    $form['tijdstip'] = array(
        '#type' => 'textfield',
        '#title' => t('Tijdstip'),
        '#description' => t('Geef op welk tijdstip de nascholing doorging; "van ... tot ..."'),
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
function argus_document_generator_ATT_Bewijs_van_nascholing_form_submit($form, &$form_state) {
    require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord-0.12.1/src/PhpWord/Autoloader.php';
	\PhpOffice\PhpWord\Autoloader::register();
	
	/* Load template */
    $document = new TemplateProcessor(argus_document_generator_get_plugin_template('ATT_Bewijs_van_nascholing'));
    
    /* Load user */
    $uid = $form_state['values']['personeelslid'];
    
    /* Start replacing values in template */
    $document->setValue('personeelslid', argus_get_user_realname($uid));
    $document->setValue('onderwerp', $form_state['values']['onderwerp']);
    $document->setValue('organisator', $form_state['values']['organisator']);
    
    $document->setValue('datum', format_date(strtotime($form_state['values']['datum']), 'custom', 'l, j F Y'));
    
    $document->setValue('tijdstip', $form_state['values']['tijdstip']);
    
    /* Generate the document and initiate download */
    $filename = '/tmp/ATT Bewijs van nascholing '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.date('dmY').'.docx';
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
