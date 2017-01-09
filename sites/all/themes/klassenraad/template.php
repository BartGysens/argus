<?php
/* 
 * Copyright (C) 2014 bartgysens
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
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function klassenraad_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  klassenraad_preprocess_html($variables, $hook);
  klassenraad_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function 
function klassenraad_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function klassenraad_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function klassenraad_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // klassenraad_preprocess_node_page() or klassenraad_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function klassenraad_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function klassenraad_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function klassenraad_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

/**
 * argus - a Smartschool extension
 * 
 * supporting functions package.
 */

/**
 * Hook preprocess for user_profile
 * 
 * @param type $variables
 */
function klassenraad_preprocess_user_profile(&$variables) {
    drupal_add_js("https://www.google.com/jsapi?autoload={'modules':[{'name':'visualization','version':'1','packages':['corechart']}]}");
    drupal_add_js(drupal_get_path('theme', 'klassenraad').'/js/user-profile.js');
    
    $today = new DateTime('NOW');
    
    /* Filter data only for this schoolyear (active schoolyear) */
    $schoolyear = (array) argus_schoolyear(0);

    $account = $variables['elements']['#account'];
    $variables['account'] = $account;
    $variables['user_id'] = $account->uid;
    $variables['user_roles'] = $account->roles;
    
    $query = 'SELECT c.title AS title, c.nid AS id '
          . 'FROM {node} AS c '
          . 'LEFT JOIN {field_data_field_klas_leerlingen} AS l ON c.nid = l.entity_id '
          . 'WHERE l.field_klas_leerlingen_target_id = :uid';
    $result = db_query($query, array(':uid' => $account->uid));
    $class = $result->fetchAll();
    if ($class){
        $variables['user_class'] = $class[0]->title;
        $classId = $class[0]->id;
    }
    
    // Data about BEHAVIOUR / ATTITUDE
    $variables['hotline']['behaviour']['graph'] = array([t('Maand'), '+', array('role' => 'certainty'), '-', array('role' => 'certainty')]);
    
    $query = 'SELECT l.entity_id AS id, '
          . 'o.field_lvs_melding_onderwerp_value AS title, '
          . 'n.uid AS author, '
          . 'd.field_lvs_melding_datum_feit_value AS factdate, '
          . 'p.field_lvs_melding_prive_value AS private, '
          . 'v.field_lvs_melding_verslag_value AS report '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_onderwerp} AS o ON l.entity_id = o.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_prive} AS p ON l.entity_id = p.entity_id  '
          . 'LEFT JOIN {field_data_field_lvs_melding_verslag} AS v ON l.entity_id = v.entity_id '
          . 'LEFT JOIN {node} AS n ON l.entity_id = n.nid '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND b.field_lvs_melding_betreft_value = :about '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'ORDER BY d.field_lvs_melding_datum_feit_value DESC';
    $reports = db_query($query, array(':uid' => $account->uid, ':about' => 'negatief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
    $variables['hotline']['behaviour']['negative'] = array();
    $variables['hotline']['behaviour']['graph']['neg'] = array();
    foreach($reports as $r => $report){
        $variables['hotline']['behaviour']['negative'][$report->id] = array(
            'factdate' => $report->factdate,
            'title' => $report->title,
            'private' => $report->private,
            'report' => $report->report,
            'author' => argus_get_user_realname($report->author),
        );
        if (isset($variables['hotline']['behaviour']['graph']['neg'][date('n',strtotime($report->factdate))])){
            $variables['hotline']['behaviour']['graph']['neg'][date('n',strtotime($report->factdate))]++;
        } else {
            $variables['hotline']['behaviour']['graph']['neg'][date('n',strtotime($report->factdate))] = 1;
        }
    }
    
    $query = 'SELECT l.entity_id AS id, '
          . 'o.field_lvs_melding_onderwerp_value AS title, '
          . 'n.uid AS author, '
          . 'd.field_lvs_melding_datum_feit_value AS factdate, '
          . 'p.field_lvs_melding_prive_value AS private, '
          . 'v.field_lvs_melding_verslag_value AS report '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_onderwerp} AS o ON l.entity_id = o.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_prive} AS p ON l.entity_id = p.entity_id  '
          . 'LEFT JOIN {field_data_field_lvs_melding_verslag} AS v ON l.entity_id = v.entity_id '
          . 'LEFT JOIN {node} AS n ON l.entity_id = n.nid '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND b.field_lvs_melding_betreft_value = :about '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'ORDER BY d.field_lvs_melding_datum_feit_value DESC';
    $reports = db_query($query, array(':uid' => $account->uid, ':about' => 'positief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
    $variables['hotline']['behaviour']['positive'] = array();
    $variables['hotline']['behaviour']['graph']['pos'] = array();
    foreach($reports as $r => $report){
        $variables['hotline']['behaviour']['positive'][$report->id] = array(
            'factdate' => $report->factdate,
            'title' => $report->title,
            'private' => $report->private,
            'report' => $report->report,
            'author' => argus_get_user_realname($report->author),
        );
        if (isset($variables['hotline']['behaviour']['graph']['pos'][date('n',strtotime($report->factdate))])){
            $variables['hotline']['behaviour']['graph']['pos'][date('n',strtotime($report->factdate))]++;
        } else {
            $variables['hotline']['behaviour']['graph']['pos'][date('n',strtotime($report->factdate))] = 1;
        }
    }
    $maxReports = 0;
    for ($m = 1; $m < 11; $m++){
        if ($m<5){
            $month = $m+8;
        } else {
            $month = $m-4;
        }
        
        if (isset($variables['hotline']['behaviour']['graph']['neg'][$month])){
            $neg = $variables['hotline']['behaviour']['graph']['neg'][$month];
        } else {
            $neg = 0;
        }
        
        if (isset($variables['hotline']['behaviour']['graph']['pos'][$month])){
            $pos = $variables['hotline']['behaviour']['graph']['pos'][$month];
        } else {
            $pos = 0;
        }
        
        if ($neg > $maxReports) $maxReports = $neg;
        if ($pos > $maxReports) $maxReports = $pos;
        
        $month = t(date('M', strtotime('2000-'.$month.'-01')));
        
        $variables['hotline']['behaviour']['graph'][] = [$month,$pos, ($month != t(date('M'))),$neg, ($month != t(date('M')))];
    }
    unset($variables['hotline']['behaviour']['graph']['neg']);
    unset($variables['hotline']['behaviour']['graph']['pos']);
    $variables['hotline']['behaviour']['maxReports'] = $maxReports;
    if ($variables['hotline']['behaviour']['maxReports'] < 5){
        $variables['hotline']['behaviour']['maxReports'] = 5;
    }
    
    $variables['hotline']['behaviour']['measure'] = array();
    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_msl_fase1_target_id AS mid, COUNT(m.field_lvs_melding_msl_fase1_target_id) AS cmid, mt.title AS title '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_msl_fase1} AS m ON l.entity_id = m.entity_id '
          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_fase1_target_id = mt.nid '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND b.field_lvs_melding_betreft_value = :about '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'GROUP BY mid';
    $result = db_query($query, array(':uid' => $account->uid, ':about' => 'negatief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
    $variables['hotline']['behaviour']['measure'][] = array('title' => 'Orde - Fase 1', 'count' => $result->rowCount(), 'isTitle' => true);
    foreach ($result->fetchAll() as $k => $r){
        $variables['hotline']['behaviour']['measure'][] = array('title' => $r->title, 'count' => $r->cmid, 'isTitle' => false);
    }
    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_msl_fase2_target_id AS mid, COUNT(m.field_lvs_melding_msl_fase2_target_id) AS cmid, mt.title AS title '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_msl_fase2} AS m ON l.entity_id = m.entity_id '
          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_fase2_target_id = mt.nid '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND b.field_lvs_melding_betreft_value = :about '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'GROUP BY mid';
    $result = db_query($query, array(':uid' => $account->uid, ':about' => 'negatief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
    $variables['hotline']['behaviour']['measure'][] = array('title' => 'Orde - Fase 2', 'count' => $result->rowCount(), 'isTitle' => true);
    foreach ($result->fetchAll() as $k => $r){
        $variables['hotline']['behaviour']['measure'][] = array('title' => $r->title, 'count' => $r->cmid, 'isTitle' => false);
    }
    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_msl_bewarend_target_id AS mid, COUNT(m.field_lvs_melding_msl_bewarend_target_id) AS cmid, mt.title AS title '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_msl_bewarend} AS m ON l.entity_id = m.entity_id '
          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_bewarend_target_id = mt.nid '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND b.field_lvs_melding_betreft_value = :about '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'GROUP BY mid';
    $result = db_query($query, array(':uid' => $account->uid, ':about' => 'negatief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
    $variables['hotline']['behaviour']['measure'][] = array('title' => 'Bewarend', 'count' => $result->rowCount(), 'isTitle' => true);
    foreach ($result->fetchAll() as $k => $r){
        $variables['hotline']['behaviour']['measure'][] = array('title' => $r->title, 'count' => $r->cmid, 'isTitle' => false);
    }
    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_msl_tucht_target_id AS mid, COUNT(m.field_lvs_melding_msl_tucht_target_id) AS cmid, mt.title AS title '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_msl_tucht} AS m ON l.entity_id = m.entity_id '
          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_tucht_target_id = mt.nid '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND b.field_lvs_melding_betreft_value = :about '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'GROUP BY mid';
    $result = db_query($query, array(':uid' => $account->uid, ':about' => 'negatief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
    $variables['hotline']['behaviour']['measure'][] = array('title' => 'Tucht', 'count' => $result->rowCount(), 'isTitle' => true);
    foreach ($result->fetchAll() as $k => $r){
        $variables['hotline']['behaviour']['measure'][] = array('title' => $r->title, 'count' => $r->cmid, 'isTitle' => false);
    }
    
    $query = 'SELECT a.field_msl_bo_aanleiding_value AS reason, '
          . '        sd.field_msl_bo_startdatum_value AS startDate, '
          . '        ed.field_msl_bo_einddatum_value AS endDate, '
          . '        COUNT(m.entity_id) AS cms '
          . 'FROM {field_data_field_msl_bo_leerling} AS l '
          . 'LEFT JOIN {field_data_field_msl_bo_aanleiding} AS a ON l.entity_id = a.entity_id '
          . 'LEFT JOIN {field_data_field_msl_bo_type} AS t ON l.entity_id = t.entity_id '
          . 'LEFT JOIN {field_data_field_msl_bo_startdatum} AS sd ON l.entity_id = sd.entity_id '
          . 'LEFT JOIN {field_data_field_msl_bo_einddatum} AS ed ON l.entity_id = ed.entity_id '
          . 'LEFT JOIN {field_data_field_msl_bo_meldingen} AS m ON l.entity_id = m.entity_id '
          . 'WHERE l.field_msl_bo_leerling_target_id = :uid '
          . 'AND t.field_msl_bo_type_value IN (:about)'
          . 'GROUP BY m.entity_id';
    $result = db_query($query, array(':uid' => $account->uid, ':about' => array('Gedrag','Schoolse attitude','Pesten')));
    $variables['hotline']['behaviour']['bos'] = array();
    foreach ($result->fetchAll() as $k => $r){
        $variables['hotline']['behaviour']['bos'][] = array(
            'reason' => $r->reason,
            'startDate' => $r->startDate,
            'endDate' => $r->endDate,
            'cms' => $r->cms,
        );
    }
    
    $query = 'SELECT l.entity_id '
          . 'FROM {field_data_field_msl_volgkaart_leerling} AS l '
          . 'WHERE l.field_msl_volgkaart_leerling_target_id = :uid';
    $result = db_query($query, array(':uid' => $account->uid));
    $variables['hotline']['behaviour']['vks'] = $result->rowCount();
    
    
    // Data about ABSCENCES
    $query = 'SELECT l.entity_id AS id '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'AND b.field_lvs_melding_betreft_value = :about';
    $result = db_query($query, array(':uid' => $account->uid, ':about' => 'afwezigheden', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
    $variables['hotline']['absences']['total'] = $result->rowCount();
    
    $totalA = 0;
    $totalP = 0;
    $variables['hotline']['absences']['evolutiongraph'] = array([t('Maand'), 'afwezig', array('role' => 'certainty'), 'aanwezig', array('role' => 'certainty')]);
    for ($m = 1; $m < 11; $m++){
        if ($m<5){
            $month = $m+8;
            $year = date('Y')-1;
        } else {
            $month = $m-4;
            $year = date('Y');
        }
        $month = substr('0'.$month,-2);
        $checkDate = new DateTime($year.$month.substr('0'.date('d'),-2));
        if ($checkDate <= $today){
            $pdate = $year.'-'.$month;

            $query = 'SELECT id '
                . 'FROM {argus_lvs_afwezigheden} AS a '
                . 'WHERE a.leerling = :uid AND a.am IN (:code) AND a.datum LIKE :date';
            $result = db_query($query, array(':uid' => $account->uid, ':code' => array('-','B','D','Z','G','C','H','R','Q','P','J'), ':date' => $pdate.'-%'));
            $stotalA = $result->rowCount();
            $query = 'SELECT id '
                . 'FROM {argus_lvs_afwezigheden} AS a '
                . 'WHERE a.leerling = :uid AND a.pm IN (:code) AND a.datum LIKE :date';
            $result = db_query($query, array(':uid' => $account->uid, ':code' => array('-','B','D','Z','G','C','H','R','Q','P','J'), ':date' => $pdate.'-%'));
            $stotalA += $result->rowCount();

            $query = 'SELECT id '
                . 'FROM {argus_lvs_afwezigheden} AS a '
                . 'WHERE a.leerling = :uid AND a.am IN (:code) AND a.datum LIKE :date';
            $result = db_query($query, array(':uid' => $account->uid, ':code' => array('|','L',NULL), ':date' => $pdate.'-%'));
            $stotalP = $result->rowCount();
            $query = 'SELECT id '
                . 'FROM {argus_lvs_afwezigheden} AS a '
                . 'WHERE a.leerling = :uid AND a.pm IN (:code) AND a.datum LIKE :date';
            $result = db_query($query, array(':uid' => $account->uid, ':code' => array('|','L',NULL), ':date' => $pdate.'-%'));
            $stotalP += $result->rowCount();

            $month = t(date('M', strtotime($pdate.'-01')));
            $variables['hotline']['absences']['evolutiongraph'][] = [$month, $stotalA, ($month != t(date('M'))), $stotalP, ($month != t(date('M')))];

            $totalA += $stotalA;
            $totalP += $stotalP;
        }
    }
    $variables['hotline']['absences']['totals']['present'] = $totalP;
    $variables['hotline']['absences']['totals']['absent'] = $totalA;
    $variables['hotline']['absences']['totals']['registered'] = $totalA + $totalP;
    
    /*
    | Aanwezig > (niet tonen)
    - Reden afwezigheid voorlopig onbekend > (niet tonen)
    B Problematisch afwezig > rood
    D Doktersattest > groen
    Z Ziekenbriefje ouders > donker groen
    L Te laat > licht rood
    G Spreiding lesprogramma > grijs
    T Tucht > oranje
    C Topsportconvenant > blauw
    H Revalidatie > licht blauw
    R Van rechtswege gewettigd > purper
    O Opvang/time-out > licht grijs
    Q Rouwperiode > zwart
    P Persoonlijke redenen > donker geel
    W Leerlingenstages > (niet tonen)
    J Moederschapsverlof > roze
     * 
     * [
         ['Element', 'Density', { role: 'style' }],
         ['Copper', 8.94, '#b87333'],            // RGB value
         ['Silver', 10.49, 'silver'],            // English color name
         ['Gold', 19.30, 'gold'],

       ['Platinum', 21.45, 'color: #e5e4e2' ], // CSS-style declaration
      ]
    */
    $variables['hotline']['absences']['graph'] = array(array(t('Code'),t('Totaal'), array('role' => 'style'), array('role' => 'annotation')));

    $codes = array(
        array('-', 'cyan'),
        array('B', 'red'),
        array('L', 'lightsalmon'),
        array('D', 'green'),
        array('Z', 'darkgreen'),
        array('G', 'gray'),
        array('T', 'orange'),
        array('C', 'blue'),
        array('H', 'lightblue'),
        array('R', 'purple'),
        array('O', 'lightgray'),
        array('Q', 'black'),
        array('P', 'lightgoldenrodyellow'),
        array('J', 'pink')
    );
    foreach ($codes as $code){
        $query = 'SELECT id '
            . 'FROM {argus_lvs_afwezigheden} AS a '
            . 'WHERE a.leerling = :uid AND am = :code AND a.datum BETWEEN :startdate AND :enddate';
        $result = db_query($query, array(':uid' => $account->uid, ':code' => $code[0], ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
        $total = $result->rowCount();
        $query = 'SELECT id '
            . 'FROM {argus_lvs_afwezigheden} AS a '
            . 'WHERE a.leerling = :uid AND pm = :code AND a.datum BETWEEN :startdate AND :enddate';
        $result = db_query($query, array(':uid' => $account->uid, ':code' => $code[0], ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
        $total += $result->rowCount();
        if ($total){
            $variables['hotline']['absences']['graph'][] = array($code[0], $total, $code[1], $total);
        }
        $variables['hotline']['absences']['totals'][$code[0]] = $total;
    }
    
    $query = 'SELECT l.entity_id AS id '
          . 'FROM {field_data_field_msl_oa_sticker_leerling} AS l '
          . 'WHERE l.field_msl_oa_sticker_leerling_target_id = :uid';
    $result = db_query($query, array(':uid' => $account->uid));
    $variables['hotline']['absences']['totals']['oa_sticker'] = $result->rowCount();
    
    $variables['hotline']['absences']['weekgraph'][0] = array('Dag', 'Totaal', array('role' => 'annotation'));
    for ($d = 0; $d < 5; $d++){
        $query = 'SELECT id '
            . 'FROM {argus_lvs_afwezigheden} AS a '
            . 'WHERE a.leerling = :uid AND a.am IN (:code) AND WEEKDAY(a.datum) = :day AND a.datum BETWEEN :startdate AND :enddate';
        $result = db_query($query, array(':uid' => $account->uid, ':code' => array('-','B','D','Z','G','C','H','R','Q','P','J'), ':day' => $d, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
        $total = $result->rowCount();
        $query = 'SELECT id '
            . 'FROM {argus_lvs_afwezigheden} AS a '
            . 'WHERE a.leerling = :uid AND a.pm IN (:code) AND WEEKDAY(a.datum) = :day AND a.datum BETWEEN :startdate AND :enddate';
        $result = db_query($query, array(':uid' => $account->uid, ':code' => array('-','B','D','Z','G','C','H','R','Q','P','J'), ':day' => $d, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
        $total += $result->rowCount();
        $variables['hotline']['absences']['weekgraph'][] = array(t(date('D', mktime(0,0,0,12,$d+1,2014))), $total, $total);
    }
    
    $variables['hotline']['late']['weekgraph'][0] = array('Dag', 'Totaal', array('role' => 'annotation'));
    for ($d = 0; $d < 5; $d++){
        $query = 'SELECT id '
            . 'FROM {argus_lvs_afwezigheden} AS a '
            . 'WHERE a.leerling = :uid AND a.am = :code AND WEEKDAY(a.datum) = :day AND a.datum BETWEEN :startdate AND :enddate';
        $result = db_query($query, array(':uid' => $account->uid, ':code' => 'L', ':day' => $d, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
        $total = $result->rowCount();
        $query = 'SELECT id '
            . 'FROM {argus_lvs_afwezigheden} AS a '
            . 'WHERE a.leerling = :uid AND a.pm = :code AND WEEKDAY(a.datum) = :day AND a.datum BETWEEN :startdate AND :enddate';
        $result = db_query($query, array(':uid' => $account->uid, ':code' => 'L', ':day' => $d, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
        $total += $result->rowCount();
        $variables['hotline']['late']['weekgraph'][] = array(t(date('D', mktime(0,0,0,12,$d+1,2014))), $total, $total);
    }
    
    // Data about STUDY / RESULTS
    $query = 'SELECT l.entity_id AS id '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'AND b.field_lvs_melding_betreft_value = :about';
    $result = db_query($query, array(':uid' => $account->uid, ':about' => 'studiebegeleiding', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
    $variables['hotline']['study']['total'] = $result->rowCount();
    
    $variables['hotline']['study']['measure'] = array();
    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_studie_target_id AS mid, COUNT(m.field_lvs_melding_studie_target_id) AS cmid, mt.title AS title '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_studie} AS m ON l.entity_id = m.entity_id '
          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_studie_target_id = mt.nid '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'AND b.field_lvs_melding_betreft_value = :about '
          . 'GROUP BY mid';
    $result = db_query($query, array(':uid' => $account->uid, ':about' => 'studiebegeleiding', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
    foreach ($result->fetchAll() as $k => $r){
        $variables['hotline']['study']['measure'][] = array('title' => $r->title, 'count' => $r->cmid, 'isTitle' => false);
    }
    
    $variables['study']['results']['graph']['fails'][0] = array('Periode', 'Geslaagd', 'Tekorten', array('role' => 'annotation'));
    $query = 'SELECT id, afkorting, omschrijving '
        . 'FROM {argus_skore_periode} '
        . 'ORDER BY volgorde ASC';
    $periods = db_query($query)->fetchAll();
    $maxCourses = 0;
    $variables['study']['results']['graph']['birdseye'][0] = array('Status', 'Percentage');
    $variables['study']['results']['graph']['birdseye'][1] = array('Tekorten', 0);
    $variables['study']['results']['graph']['birdseye'][2] = array('Geslaagd', 0);
    $missingCourses = array();
    foreach ($periods as $p){
        $query = 'SELECT r.vak, r.behaald, r.max, ca.field_vak_afkorting_value AS vak_afkorting, cu.field_vak_untis_id_value AS vak_untis_id, cb.field_vak_beschrijving_value AS vak_beschrijving '
            . 'FROM {argus_skore_resultaten} AS r '
            . 'LEFT JOIN {field_data_field_vak_afkorting} AS ca ON r.vak = ca.entity_id '
            . 'LEFT JOIN {field_data_field_vak_beschrijving} AS cb ON r.vak = cb.entity_id '
            . 'LEFT JOIN {field_data_field_vak_untis_id} AS cu ON r.vak = cu.entity_id '
            . 'WHERE r.leerling = :uid AND r.schooljaar = :schoolyear AND r.periode = :pid '
            . 'ORDER BY cb.field_vak_beschrijving_value ASC';
        $results = db_query($query, array(':uid' => $account->uid, ':pid' => $p->id, 'schoolyear' => substr($schoolyear['start'],0,4).'-'.substr($schoolyear['end'],0,4)))->fetchAll();
        $fails = 0;
        $success = 0;
        foreach ($results as $r){
            if (isset($r->behaald)){
                $query = 'SELECT v.field_uurrooster_les_vak_target_id '
                    . 'FROM {field_data_field_uurrooster_les_klassen} AS k '
                    . 'LEFT JOIN {field_data_field_uurrooster_les_vak} AS v ON k.entity_id = v.entity_id '
                    . 'WHERE k.field_uurrooster_les_klassen_target_id = :cid AND v.field_uurrooster_les_vak_target_id = :vid';
                $course_hours = db_query($query, array(':cid' => $classId, ':vid' => $r->vak))->rowCount();
                
                /* TEMPORARY SOLLUTION FOR WRONGS PARAMS IN COURSE-CODES (Untis <> Skore) [node:field-vak-afkorting] > [node:field-vak-skore-id] */
                if ($course_hours == 0){
                    $query = 'SELECT u.entity_id AS id '
                        . 'FROM {field_data_field_vak_untis_id} AS u '
                        . 'WHERE u.field_vak_untis_id_value = :course AND u.entity_id != :cid';
                    $result = db_query($query, array(':course' => $r->vak_untis_id, ':cid' => $r->vak));
                    $courseFound = $result->fetchObject();
                    if ($courseFound){
                        $query = 'SELECT v.field_uurrooster_les_vak_target_id '
                            . 'FROM {field_data_field_uurrooster_les_klassen} AS k '
                            . 'LEFT JOIN {field_data_field_uurrooster_les_vak} AS v ON k.entity_id = v.entity_id '
                            . 'WHERE k.field_uurrooster_les_klassen_target_id = :cid AND v.field_uurrooster_les_vak_target_id = :vid';
                        $course_hours = db_query($query, array(':cid' => $classId, ':vid' => $courseFound->id))->rowCount();
                    }
                }
                if ($course_hours == 0){
                    $query = 'SELECT u.entity_id AS id '
                        . 'FROM {field_data_field_vak_afkorting} AS u '
                        . 'WHERE u.field_vak_afkorting_value = :course AND u.entity_id != :cid';
                    $result = db_query($query, array(':course' => $r->vak_afkorting, ':cid' => $r->vak));
                    $courseFound = $result->fetchObject();
                    if ($courseFound){
                        $query = 'SELECT v.field_uurrooster_les_vak_target_id '
                            . 'FROM {field_data_field_uurrooster_les_klassen} AS k '
                            . 'LEFT JOIN {field_data_field_uurrooster_les_vak} AS v ON k.entity_id = v.entity_id '
                            . 'WHERE k.field_uurrooster_les_klassen_target_id = :cid AND v.field_uurrooster_les_vak_target_id = :vid';
                        $course_hours = db_query($query, array(':cid' => $classId, ':vid' => $courseFound->id))->rowCount();
                    } else {
                        $missingCourses[] = $r->vak.' = '.$r->vak_afkorting.' - '.$r->vak_beschrijving.' ('.$r->vak_untis_id.')';
                    }
                }
                /* END OF TEMPORARY CODE */

                $variables['study']['results']['periods'][$p->id]['results'][$r->vak] = array(
                    'behaald' => round($r->behaald,1),
                    'max' => round($r->max),
                    'percent' => round($r->behaald/$r->max*100,1),
                    'vak_afkorting' => $r->vak_afkorting,
                    'vak_beschrijving' => $r->vak_beschrijving,
                    'vak_uren_week' => $course_hours,
                );
                
                if ((real) $r->behaald < ((real) $r->max)/2){
                    $fails++;
                    $variables['study']['results']['fails']['periods'][$p->omschrijving][] = array(
                        'vak' => $r->vak_beschrijving,
                        'behaald' => round($r->behaald,1),
                        'max' => round($r->max),
                    );
                    $variables['study']['results']['graph']['birdseye'][1][1] += $course_hours;
                } else {
                    $success++;
                    $variables['study']['results']['graph']['birdseye'][2][1] += $course_hours;
                }
            }
        }
        if ($results){
            $variables['study']['results']['periods'][$p->id]['short'] = $p->afkorting;
            $variables['study']['results']['periods'][$p->id]['long'] = $p->omschrijving;
            $variables['study']['results']['graph']['fails'][] = array($p->afkorting, $success, $fails, $fails.'/'.($fails+$success));
        }
        if ($maxCourses < $fails + $success){
            $maxCourses = $fails + $success;
        }
    }
    if (count($missingCourses)){
        //argus_engine_mail('Vak niet gevonden', implode(' - ', $missingCourses), 'bart.gysens@gmail.com');
    }
    $variables['study']['results']['maxCourses'] = $maxCourses;
    
    $variables['hotline']['study']['measure'] = array();
    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_studie_target_id AS mid, COUNT(m.field_lvs_melding_studie_target_id) AS cmid, mt.title AS title '
          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_studie} AS m ON l.entity_id = m.entity_id '
          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_studie_target_id = mt.nid '
          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
          . 'AND b.field_lvs_melding_betreft_value = :about '
          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
          . 'GROUP BY mid';
    $measures = db_query($query, array(':uid' => $account->uid, ':about' => 'studiebegeleiding', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
    foreach ($measures as $k => $r){
        $variables['hotline']['study']['measure'][] = array('title' => $r->title, 'count' => $r->cmid, 'isTitle' => false);
    }
    
    $variables['study']['results']['graph']['courseType'][0] = array('Lesgedeelte', 'Aantal tekorten');
    $variables['study']['results']['graph']['courseType'][1] = array('AV', 0);
    $variables['study']['results']['graph']['courseType'][2] = array('TV', 0);
    $variables['study']['results']['graph']['courseType'][3] = array('PV', 0);
    $variables['study']['results']['graph']['courseType'][4] = array('GIP', 0);
    $query = 'SELECT id, afkorting, omschrijving '
        . 'FROM {argus_skore_periode} '
        . 'ORDER BY volgorde ASC';
    $periods = db_query($query)->fetchAll();
    foreach ($periods as $p){
        $query = 'SELECT r.vak, r.behaald, r.max, ca.field_vak_afkorting_value AS vak_afkorting, cb.field_vak_beschrijving_value AS vak_beschrijving '
            . 'FROM {argus_skore_resultaten} AS r '
            . 'LEFT JOIN {field_data_field_vak_afkorting} AS ca ON r.vak = ca.entity_id '
            . 'LEFT JOIN {field_data_field_vak_beschrijving} AS cb ON r.vak = cb.entity_id '
            . 'WHERE r.leerling = :uid AND r.schooljaar = :schoolyear AND r.periode = :pid '
            . 'ORDER BY cb.field_vak_beschrijving_value ASC';
        $results = db_query($query, array(':uid' => $account->uid, ':pid' => $p->id, 'schoolyear' => substr($schoolyear['start'],0,4).'-'.substr($schoolyear['end'],0,4)))->fetchAll();
        $totals = array('AV' => 0, 'TV' => 0, 'PV' => 0, 'GIP' => 0);
        foreach ($results as $r){
            if (isset($r->behaald)){
                unset($courseType);
                if (strpos($r->vak_beschrijving, 'AV') !== FALSE){
                    $courseType = 1;
                } elseif (strpos($r->vak_beschrijving, 'PV') !== FALSE){
                    $courseType = 3;
                } elseif (strpos($r->vak_beschrijving, 'TV') !== FALSE){
                    $courseType = 2;
                } elseif (strpos($r->vak_beschrijving, 'GIP') !== FALSE){
                    $courseType = 4;
                }
                
                if (isset($courseType)){
                    if ((real) $r->behaald < ((real) $r->max)/2){
                        $variables['study']['results']['graph']['courseType'][$courseType][1]++;
                    }
                }
            }
        }
    }
    
    $variables['study']['deliberations'] = array();
    $query = 'SELECT l.entity_id AS id '
          . 'FROM {field_data_field_lvs_deliberatie_leerling} AS l '
          . 'WHERE l.field_lvs_deliberatie_leerling_target_id = :uid';
    $result = db_query($query, array(':uid' => $account->uid));
    $deliberations = $result->fetchAll();
    foreach ($deliberations as $did){
        $query = 'SELECT r.field_lvs_deliberatie_vakresult_value AS result '
                . 'FROM {field_data_field_lvs_deliberatie_vakresult} AS r '
                . 'WHERE r.entity_id = :did '
                . 'ORDER BY r.field_lvs_deliberatie_vakresult_value ASC';
        $courseResult = db_query($query, array(':did' => $did->id));
        $courseResults = $courseResult->fetchAll();
        $courseResultsArray = array();
        foreach ($courseResults as $c){
            $courseResultsArray[] = $c->result;
        }
        
        $node = node_load($did->id);
        $variables['study']['deliberations'][klassenraad_render('node', $node, 'field_lvs_deliberatie_schooljaar')] = array(
            'id' => $did->id,
            'klas' => field_get_items('node', $node, 'field_lvs_deliberatie_klas')[0]['target_id'],
            'advies' => field_get_items('node', $node, 'field_lvs_deliberatie_advies')[0]['value'],
            'attest_uitgesteld' => field_get_items('node', $node, 'field_lvs_deliberatie_at_uitgest')[0]['value'],
            'attest' => field_get_items('node', $node, 'field_lvs_deliberatie_attest')[0]['value'],
            'beslissing' => field_get_items('node', $node, 'field_lvs_deliberatie_beslissing')[0]['value'],
            'clausules' => field_get_items('node', $node, 'field_lvs_deliberatie_cluasules')[0]['value'],
            'diplomas' => field_get_items('node', $node, 'field_lvs_deliberatie_diplomas'),
            'eindresultaat' => field_get_items('node', $node, 'field_lvs_deliberatie_eindresult')[0]['value'],
            'gedilibereerd' => field_get_items('node', $node, 'field_lvs_deliberatie_gedelib')[0]['value'],
            'motief' => field_get_items('node', $node, 'field_lvs_deliberatie_motief')[0]['value'],
            'uitgesteld' => field_get_items('node', $node, 'field_lvs_deliberatie_uitgesteld')[0]['value'],
            'vakantietaken' => field_get_items('node', $node, 'field_lvs_deliberatie_vakantie'),
            'vakresultaten' => $courseResultsArray,
            'waarschuwingen' => field_get_items('node', $node, 'field_lvs_deliberatie_waarschuw'),
        );
    }
    
    // Preprocess fields.
    field_attach_preprocess('user', $account, $variables['elements'], $variables);
}

/**
 * Render field values
 * 
 * @param type $ntype
 * @param type $entity
 * @param type $field
 * @param type $item
 * @return type
 */
function klassenraad_render($ntype, $entity, $field, $item = 0){
    $field = field_get_items($ntype, $entity, $field);
    return $field[$item]['safe_value'];
}