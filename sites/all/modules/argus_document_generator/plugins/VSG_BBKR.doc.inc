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
function argus_document_generator_VSG_BBKR_init() {
	return array(
			'cat' => 'LLN',
			'subcat' => 'VSG',
			'title' => t('Verslag - (Bijzondere) Begeleidende Klassenraad - ILB'),
	);
}

/**
 * Page callback: Generate Word-document
 *
 * @return array
 */
function argus_document_generator_VSG_BBKR_form($form, &$form_state) {    
    $form['leerling'] = array(
        '#type' => 'select',
        '#title' => t('Leerling'),
        '#description' => t('Selecteer de leerling waarvoor dit document moet worden aangemaakt.'),
        '#options' => argus_get_user_select_options('leerling'),
        '#required' => true,
    );
    $form['datetime'] = array(
        '#type' => 'date_select',
        '#title' => t('Datum & uur'),
        '#description' => t('Geef het tijdstip op wanneer deze begeleidende klassenraad zal plaatsvinden.'),
        '#default_value' => date_now(),
        '#date_increment' => 10,
        '#required' => true,
    );
    $form['fact'] = array(
        '#type' => 'textarea',
        '#title' => t('Feit dat aanleiding geeft tot deze (bijzondere) begeleidende klassenraad'),
        '#description' => t('Beschrijf kort het feit of de feiten; verwijs naar eventuele meldingen of andere acties.'),
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
function argus_document_generator_VSG_BBKR_form_submit($form, &$form_state) {
    require_once drupal_get_path('module','argus_document_generator').'/includes/PHPWord_0.6.2_Beta/PHPWord.php';
    
    /* New Word-document */
    $PHPWord = new PHPWord();
    
    /* Load template */
    $document = $PHPWord->loadTemplate(argus_document_generator_get_plugin_template('VSG_BBKR'));
    
    /* Load user (student/pupil) */
    $uid = $form_state['values']['leerling'];
    $u = user_load($uid);
    
    /* Start replacing values in template */
    $document->setValue('datum', date('d/m/Y',strtotime($form_state['values']['datetime'])));
    $document->setValue('uur', date('H:i',strtotime($form_state['values']['datetime'])));
    $document->setValue('leerling', argus_get_user_realname($uid));
    $document->setValue('klas', argus_get_user_class($uid, 'title'));
    
    $document->setValue('feit', str_replace(chr(13), '<w:br/>', $form_state['values']['fact']));
    
    $overview = '';
    if (count($u->field_user_sms_geboortedatum)){
        $birthday = new DateTime($u->field_user_sms_geboortedatum[LANGUAGE_NONE][0]['value']);
    }
    if (isset($birthday)){
        $overview .= t('geboortedatum').' : '.$birthday->format('d/m/Y').' ('.(date_diff($birthday,new DateTime('now'))->format('%y jaar')).') - ';
    }
    $overview .= t('woonplaats').' : '.smartschool_render('user', $u, 'field_user_sms_woonplaats').' - ';
    $overview .= smartschool_render('user', $u, 'field_user_sms_gezinssituatie');
    $document->setValue('schets_algemeen', $overview);
    
    /* Retrieve details for this pupil */
    $userDetails = argus_get_pupil_details($uid);
    
    /* Handle details about: behaviour */
    $measures = array();
    foreach ($userDetails['behaviour']['phases'] as $phase){
        foreach ($phase as $m){
            $measures[] = $m['count'].' x '.$m['title'];
        }
    }
    if (count($measures)){
        $overview = implode(', ',$measures);
    } else {
        $overview = t('geen opmerkingen');
    }
    $document->setValue('schets_gedrag', $overview.' ('.$userDetails['behaviour']['totals']['negative'].' negatieve meldingen vs. '.$userDetails['behaviour']['totals']['positive'].' positieve)');
    
    /* Handle details about: absences */
    if (count($userDetails['absences']['totals'])){
        $absences = array();
        foreach ($userDetails['absences']['totals'] as $a){
            $absences[] = $a['count'].' x '.$a['code'];
        }
        $overview = implode(', ',$absences);
    } else {
        $overview = t('geen opmerkingen');
    }
    $document->setValue('schets_afwezigheden', $overview);
    
    /* Handle details about: study */
    if (count($userDetails['study']['fails'])){
        $fails = array();
        foreach ($userDetails['study']['fails'] as $p => $fs){
            $fails[] = $p.' ('.count($fs).' tekorten)';
        }
        $overview = implode(', ',$fails);
    } else {
        $overview = t('geen opmerkingen');
    }
    $document->setValue('schets_studie', $overview);
    
    /* Retrieve teachers for this pupil and generate signature list */
    $teachers = array( 'left' => '', 'middle' => '', 'right' => '');
    foreach (argus_get_class_teachers(argus_get_user_class($uid)) as $t => $teacher){
        switch ($t % 3) {
            case 0: $teachers['left'] .= argus_get_user_realname($teacher->id).'<w:br/><w:br/>'; break;
            case 1: $teachers['middle'] .= argus_get_user_realname($teacher->id).'<w:br/><w:br/>'; break;
            case 2: $teachers['right'] .= argus_get_user_realname($teacher->id).'<w:br/><w:br/>'; break;
        }
    }
    $document->setValue('leerkrachten_links', $teachers['left']);
    $document->setValue('leerkrachten_midden', $teachers['middle']);
    $document->setValue('leerkrachten_rechts', $teachers['right']);
    
    /* Generate the document and initiate download */
    $filename = '/tmp/VSG BBKR '.str_replace(', ', ' ', argus_get_user_realname($uid)).' '.argus_get_user_class($uid, 'title').' '.date('dmY',strtotime($form_state['values']['datetime'])).'.docx';
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
