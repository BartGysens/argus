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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Plugin definition -- REQUIRED --
 */
function argus_document_generator_VSG_Melding_definitieve_verwijdering_init() {
	return array(
			'cat' => 'LLN',
			'subcat' => 'BRF',
			'title' => t('Verslag - Melding Definitieve verwijdering - LSEC'),
	);
}


/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_VSG_Melding_definitieve_verwijdering_form($form, &$form_state) {    
    $form['leerling'] = array(
        '#type' => 'select',
        '#title' => t('Leerling'),
        '#description' => t('Selecteer de leerling waarvoor dit document moet worden aangemaakt.'),
        '#options' => argus_get_user_select_options('leerling'),
        '#required' => true,
    );
    
    $form['date_Tcode'] = array(
        '#type' => 'date_select',
        '#title' => t('Datum eerste T-code (tucht)'),
        '#description' => t('Indien het om een tuchtdossier gaat, gelieve dan bij de afwezigheden op te zoeken wanneer deze leerling een eerste keer een T-code kreeg.'),
        '#date_increment' => 10,
        '#default_value' => date_now(),
        '#required' => true,
        '#date_year_range' => '-1:+1',
        '#date_format' => 'd/m/Y',
    );
    
    $form['causes'] = array(
        '#type' => 'fieldset',
        '#title' => t('Oorzaken'),
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
        '#description' => t('Geef aan welke oorza(a)k(en) geleid hebben tot deze definitieve verwijdering.'),
    );
        $cid = 0;
        foreach (argus_document_generator_VSG_Melding_definitieve_verwijdering_causes() as $cause){
            $form['causes']['cause'.$cid++] = array(
                '#type' => 'checkbox',
                '#title' => t($cause),
            );
        }
        $form['causes']['cause-other'] = array(
            '#type' => 'textfield',
            '#title' => t('Andere oorza(a)k(en)'),
            '#description' => t('Vul aan indien van toepassing.'),
        );
    
    $form['externals'] = array(
        '#type' => 'fieldset',
        '#title' => t('Externen'),
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
        '#description' => t('Geef aan welke externe partij(en) betrokken zijn in dit tuchtdossier.'),
    );
        $eid = 0;
        foreach (argus_document_generator_VSG_Melding_definitieve_verwijdering_externals() as $external){
            $form['externals']['external'.$eid++] = array(
                '#type' => 'checkbox',
                '#title' => t($external),
            );
        }
        $form['externals']['external-other'] = array(
            '#type' => 'textfield',
            '#title' => t('Andere externe partij(en)'),
            '#description' => t('Vul aan indien van toepassing.'),
        );
    
    $form['extra'] = array(
        '#type' => 'fieldset',
        '#title' => t('Extra info / CLB'),
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
        '#description' => t('Meer informatie voor/over CLB en contactpersonen ILB.'),
    );
        $form['extra']['problem'] = array(
                '#type' => 'checkbox',
                '#title' => t('Ja, dit dossier kan als <strong>zorgwekkend</strong> beschouwd worden.'),
            );
        $form['extra']['ilb'] = array(
            '#type' => 'textfield',
            '#title' => t('Verantwoordelijke ILB'),
            '#description' => t('Geef de naam van de dossierbeheerder intern.'),
            '#required' => true,
        );
        $form['extra']['clb'] = array(
            '#type' => 'textfield',
            '#title' => t('Verantwoordelijke CLB'),
            '#description' => t('Geef de naam van de dossierbeheerder extern.'),
            '#required' => true,
        );
    
    $form['date_report'] = array(
        '#type' => 'date_select',
        '#title' => t('Datum overleg'),
        '#description' => t('Geef het tijdstip van het (laatste) overleg met ILB en/of CLB of de (bijzondere) begeleidende klassenraad.'),
        '#date_increment' => 10,
        '#default_value' => date_now(),
        '#required' => true,
        '#date_year_range' => '-1:+1',
        '#date_format' => 'd/m/Y',
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
function argus_document_generator_VSG_Melding_definitieve_verwijdering_form_submit($form, &$form_state) {
    require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord_0.6.2_Beta/PHPWord.php';
    
    /* New Word-document */
    $PHPWord = new PHPWord();
    
    /* Load template */
    $document = $PHPWord->loadTemplate(argus_document_generator_get_plugin_template('VSG_Melding_definitieve_verwijdering'));
    
    /* Load user (student/pupil) */
    $uid = $form_state['values']['leerling'];
    
    /* Start replacing values in template */
    $document->setValue('leerling', argus_get_user_realname($uid));
    $document->setValue('klas', argus_get_user_class($uid, 'title'));
    $document->setValue('datum_T', date('d/m/Y',strtotime($form_state['values']['date_Tcode'])));
    $document->setValue('datum_overleg', date('d/m/Y',strtotime($form_state['values']['date_report'])));
    $document->setValue('ilb', $form_state['values']['ilb']);
    $document->setValue('clb', $form_state['values']['clb']);
    
    /* Handle details about: causes */
    $cid = 0;
    $causes = '';
    foreach (argus_document_generator_VSG_Melding_definitieve_verwijdering_causes() as $cause){
        if ($form_state['values']['cause'.$cid++]){
            $causes .= '- '.t($cause).'<w:br/>';
        }
    }
    if ($form_state['values']['cause-other']){
        $causes .= '- '.$form_state['values']['cause-other'].'<w:br/>';
    }
    $document->setValue('oorzaken', $causes);
    
    /* Handle details about: externals */
    $eid = 0;
    $externals = '';
    foreach (argus_document_generator_VSG_Melding_definitieve_verwijdering_externals() as $external){
        if ($form_state['values']['external'.$eid++]){
            $externals .= '- '.t($external).'<w:br/>';
        }
    }
    if ($form_state['values']['external-other']){
        $externals .= '- '.$form_state['values']['external-other'].'<w:br/>';
    }
    $document->setValue('externen', $externals);
    
    /* Handle details about: problematic file */
    if ($form_state['values']['problem']){
        $problem = 'JA';
    } else {
        $problem = 'neen';
    }
    $document->setValue('zorgwekkend', t($problem));
    
    /* Generate the document and initiate download */
    $filename = '/tmp/VSG Melding - Definitieve verwijdering '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.argus_get_user_class($uid, 'title').' '.date('dmY').'.docx';
    $document->save($filename);
    
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

function argus_document_generator_VSG_Melding_definitieve_verwijdering_causes(){
    return array(
        'Zwakke motivatie',
        'Laag schools welbevinden van de leerling',
        'Schoolloopbaanproblemen',
        'Slachtoffer van pesten, steaming, geweld op school',
        'Manifeste onwil van de leerling t.a.v. de school',
        'Arbeidsmarkt',
        'Leerling is vermist of spoorloos, leerling bevindt zich in een precaire verblijfssituatie',
        'Zwangerschap leerling, tienermoeder, tienervader',
        'Verslavingsproblematiek',
        'Dixit-attesten, geantedateerde medische attesten, niet-medische attesten',
        'Niet of laattijdig ingediende medische attesten',
        'Problematische gezinssituatie',
        'Opvoedingsonmacht ouders',
        'Manifeste onwil ouders',
        'Vakantie',
        'Geen of verstoord contact ouders-school',
        'Relatieproblemen leerling-leerkrachten',
        'Samenwerking met het CLB is onvoldoende',
        'Beschikbaarheid  personeel',
        'Problemen met toezicht op de in- en uitgangen van de school, sterk verspreide leslokalen problemen met zinvolle tijdsbesteding middagpauze en speeltijden',
    );
}

function argus_document_generator_VSG_Melding_definitieve_verwijdering_externals(){
    return array(
        'CLB',
        'Samenwerkingsverbanden of overkoepelende structuren voor spijbelopvolging',
        'Familie, sociaal netwerk',
        'Justitie',
        'Het comité voor bijzondere jeugdzorg, de bemiddelingscommissie',
        '(Para-) medisch personeel',
        'Time-outproject, project zorgboerderij',
        'Openbaar centrum voor maatschappelijk welzijn',
        'Gezins- en thuisbegeleidingsdiensten, centrum voor begeleid zelfstandig wonen, gezinsvervangende tehuizen, gesloten of open gemeenschapsinstelling, onthaal-, observatie- en oriënteringscentrum, instelling bijzonder jeugdzorg',
        'Centrum voor drughulpverlening',
        'Centrum voor geestelijke gezondheidszorg',
        'Centrum voor algemeen welzijn, jongerenadviescentra, vluchthuis, opvangcentrum daklozen, straathoekwerk, buurtwerk',
        'Asielcentrum, migrantencentrum, onthaalbureau',
        'Lokaal overlegplatform',
        'Commissie leerlingenrechten',
        'Beroepscommissie',
    );
}