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
 * Contains all prepocessor instructions for generating user profile pages
 */

drupal_add_js("https://www.google.com/jsapi?autoload={'modules':[{'name':'visualization','version':'1','packages':['corechart']}]}");
drupal_add_js(drupal_get_path('theme', 'smartschool').'/js/user-profile.js');

$today = new DateTime('NOW');

/* Filter data only for this schoolyear (active schoolyear) */
$params = drupal_get_query_parameters();
if (array_key_exists('schooljaar', $params)){
	$thisSchoolyear = $params['schooljaar'];
} else {
	$thisSchoolyear = 0;
}
$schoolyear = (array) argus_schoolyear($thisSchoolyear);

$account = $variables['elements']['#account'];
$accountArray = (array) $account;
$variables['account'] = $account;
$variables['user_id'] = $account->uid;
$variables['user_roles'] = $account->roles;

$query = 'SELECT c.title AS title, c.nid AS id, ktt.field_klas_klastitularis_target_id AS ktt, hktt.field_klas_hulpklastitularis_target_id AS hktt '
      . 'FROM {node} AS c '
      . 'LEFT JOIN {field_data_field_klas_leerlingen} AS l ON c.nid = l.entity_id '
      . 'LEFT JOIN {field_data_field_klas_klastitularis} AS ktt ON c.nid = ktt.entity_id '
      . 'LEFT JOIN {field_data_field_klas_hulpklastitularis} AS hktt ON c.nid = hktt.entity_id '
      . 'WHERE l.field_klas_leerlingen_target_id = :uid';
$result = db_query($query, array(':uid' => $account->uid));
$class = $result->fetchAll();
if ($class){
    $variables['user_class'] = array(
        'id' => $class[0]->id,
        'title' => $class[0]->title,
        'ktt' => $class[0]->ktt,
        'hktt' => $class[0]->hktt,
    );
    $classId = $class[0]->id;
} else {
    $variables['user_class'] = array(
        'id' => NULL,
        'title' => NULL,
        'ktt' => NULL,
        'hktt' => NULL,
    );
    $classId = NULL;
}

// Co-accounts
$variables['coaccounts'] = array();
for ($x = 1; $x < 3; $x++){ //TODO: more then 2 coaccounts?
	$variables['coaccounts'][$x] = array('type' => null, 'value' => array());
	if (array_key_exists(LANGUAGE_NONE, $accountArray['field_user_sms_type_coaccount'.$x])){
		if (array_key_exists('value', $accountArray['field_user_sms_type_coaccount'.$x][LANGUAGE_NONE][0])){
			$type = smartschool_render('user', $account, 'field_user_sms_type_coaccount'.$x);
			if ($type != 'Maak uw keuze'){
				$variables['coaccounts'][$x]['type'] = $type.':';
				if (array_key_exists(LANGUAGE_NONE, $accountArray['field_user_sms_telnummer_coac'.$x])){
					if (array_key_exists('value', $accountArray['field_user_sms_telnummer_coac'.$x][LANGUAGE_NONE][0])){
						$variables['coaccounts'][$x]['value'][] = smartschool_render('user', $account, 'field_user_sms_telnummer_coac'.$x);
					}
				}
				if (array_key_exists(LANGUAGE_NONE, $accountArray['field_user_sms_mobielnr_coac'.$x])){
					if (array_key_exists('value', $accountArray['field_user_sms_mobielnr_coac'.$x][LANGUAGE_NONE][0])){
						$variables['coaccounts'][$x]['value'][] = smartschool_render('user', $account, 'field_user_sms_mobielnr_coac'.$x);
					}
				}
				if (array_key_exists(LANGUAGE_NONE, $accountArray['field_user_sms_email_coaccount'.$x])){
					if (array_key_exists('value', $accountArray['field_user_sms_email_coaccount'.$x][LANGUAGE_NONE][0])){
						$variables['coaccounts'][$x]['value'][] = smartschool_render('user', $account, 'field_user_sms_email_coaccount'.$x);
					}
				}
			}
		}
	}
}

/**
 * -----------------------------------------------------------------------------
 * Data about BEHAVIOUR / ATTITUDE
 * -----------------------------------------------------------------------------
 */
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


$measureTypes = array(
	array( 'field' => 'field_lvs_melding_msl_fase1', 'title' => t('Orde - Fase 1')),
	array( 'field' => 'field_lvs_melding_msl_fase2', 'title' => t('Orde - Fase 2')),
	array( 'field' => 'field_lvs_melding_msl_bewarend', 'title' => t('Bewarend')),
	array( 'field' => 'field_lvs_melding_msl_tucht', 'title' => t('Tucht')),
);
$variables['hotline']['behaviour']['measure'] = array();
foreach ($measureTypes as $mt){
	$query = 'SELECT l.entity_id AS id, m.'.$mt['field'].'_target_id AS mid, COUNT(m.'.$mt['field'].'_target_id) AS cmid, mt.title AS title, GROUP_CONCAT(CONCAT_WS(:sep2, r.uid, d.field_lvs_melding_datum_feit_value, v.field_lvs_melding_verslag_value, o.field_lvs_melding_onderwerp_value) SEPARATOR :sep1) AS reports '
	      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
	      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
	      . 'LEFT JOIN {field_data_field_lvs_melding_verslag} AS v ON l.entity_id = v.entity_id '
	      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
      	  . 'LEFT JOIN {field_data_field_lvs_melding_onderwerp} AS o ON l.entity_id = o.entity_id '
	      . 'LEFT JOIN {field_data_'.$mt['field'].'} AS m ON l.entity_id = m.entity_id '
	      . 'LEFT JOIN {node} AS mt ON m.'.$mt['field'].'_target_id = mt.nid '
	      . 'INNER JOIN {node} AS r ON l.entity_id = r.nid '
	      . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
	      . 'AND b.field_lvs_melding_betreft_value = :about '
	      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
	      . 'GROUP BY mid';
	$result = db_query($query, array(':sep1' => '|', ':sep2' => '*', ':uid' => $account->uid, ':about' => 'negatief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
	$variables['hotline']['behaviour']['measure'][] = array('title' => $mt['title'], 'count' => count($result), 'isTitle' => true);
	foreach ($result as $k => $r){
	    $variables['hotline']['behaviour']['measure'][] = array('title' => $r->title, 'count' => $r->cmid, 'reports' => $r->reports, 'isTitle' => false);
	}
}


$query = 'SELECT l.entity_id AS id, '
      . '        a.field_msl_bo_aanleiding_value AS reason, '
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
      . 'AND sd.field_msl_bo_startdatum_value BETWEEN :startdate AND :enddate '
      . 'AND t.field_msl_bo_type_value IN (:about)'
      . 'GROUP BY m.entity_id';
$result = db_query($query, array(':uid' => $account->uid, ':about' => array('Gedrag','Schoolse attitude','Pesten'), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
$variables['hotline']['behaviour']['bos'] = array();
foreach ($result->fetchAll() as $k => $r){
    $variables['hotline']['behaviour']['bos'][] = array(
        'id' => $r->id,
        'reason' => $r->reason,
        'startDate' => $r->startDate,
        'endDate' => $r->endDate,
        'cms' => $r->cms,
    );
}

$query = 'SELECT l.entity_id '
      . 'FROM {field_data_field_msl_volgkaart_leerling} AS l '
      . 'LEFT JOIN {field_data_field_msl_volgkaart_afgehaald} AS d ON l.entity_id = d.entity_id '
      . 'WHERE l.field_msl_volgkaart_leerling_target_id = :uid '
      . 'AND d.field_msl_volgkaart_afgehaald_value BETWEEN :startdate AND :enddate';
$result = db_query($query, array(':uid' => $account->uid, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
$variables['hotline']['behaviour']['vks'] = $result->rowCount();

$query = 'SELECT datum '
    . 'FROM {argus_lvs_afwezigheden} '
    . 'WHERE leerling = :uid AND (am = :code OR pm = :code) AND datum BETWEEN :startdate AND :enddate '
    . 'ORDER BY datum';
$dateTcode = db_query($query, array(':uid' => $account->uid, ':code' => 'T', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
if (count($dateTcode)){
    $variables['hotline']['behaviour']['first-T-code'] = $dateTcode[0]->datum;
}

/**
 * -----------------------------------------------------------------------------
 * Data about ABSCENCES
 * -----------------------------------------------------------------------------
 */
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

$begin = new DateTime( $schoolyear['start'] );
$end = new DateTime( $schoolyear['end'] );
$end = $end->modify( '+1 month' );
$interval = DateInterval::createFromDateString('1 month');

$period = new DatePeriod($begin, $interval, $end);

foreach($period as $dt) {
	$month = $dt->format( "m" );
	$year = $dt->format( "Y" );
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
      . 'LEFT JOIN {field_data_field_msl_oa_sticker_f1_datum} AS d ON l.entity_id = d.entity_id '
      . 'WHERE l.field_msl_oa_sticker_leerling_target_id = :uid '
      . 'AND d.field_msl_oa_sticker_f1_datum_value BETWEEN :startdate AND :enddate';
$result = db_query($query, array(':uid' => $account->uid, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
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

if (count($variables['account']->field_user_sms_toelating_te_laat)){
    $variables['hotline']['late']['permission'] = $variables['account']->field_user_sms_toelating_te_laat[LANGUAGE_NONE][0]['value'];
}

$variables['hotline']['absences']['leerplichtbegeleiding'] = array();
$sj = argus_schoolyear(null,'U');
//TODO: module aanmaken
//if (module_exists('argus_leerplichtbegeleiding')){
	$query = 'SELECT n.nid AS id, n.created AS datum '
			. 'FROM {field_data_field_leerling} AS u '
			. 'INNER JOIN {node} AS n ON n.nid = u.entity_id '
			. 'WHERE u.field_leerling_target_id = :uid AND n.type = :type AND n.created BETWEEN :startdate AND :enddate';
	$variables['hotline']['absences']['leerplichtbegeleiding'] = db_query($query, array(':uid' => $account->uid, ':type' => 'lvs_leerplichtbegeleiding', ':startdate' => $sj['start'], ':enddate' => $sj['end']))->fetchAllKeyed();
//}

/**
 * -----------------------------------------------------------------------------
 * Data about STUDY / RESULTS
 * -----------------------------------------------------------------------------
 */
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
    $variables['study']['deliberations'][smartschool_render('node', $node, 'field_lvs_deliberatie_schooljaar')] = array(
        'id' => $did->id,
        'klas' => field_get_items('node', $node, 'field_lvs_deliberatie_klas')[0]['target_id'],
        'advies' => field_get_items('node', $node, 'field_lvs_deliberatie_advies')[0]['value'],
        'attest_uitgesteld' => field_get_items('node', $node, 'field_lvs_deliberatie_at_uitgest')[0]['value'],
        'attest' => field_get_items('node', $node, 'field_lvs_deliberatie_attest')[0]['value'],
        'beslissing' => field_get_items('node', $node, 'field_lvs_deliberatie_beslissing')[0]['value'],
        'clausules' => field_get_items('node', $node, 'field_lvs_deliberatie_cluasules')[0]['value'],
        'diplomas' => field_get_items('node', $node, 'field_lvs_deliberatie_diplomas'),
        'eindresultaat' => field_get_items('node', $node, 'field_lvs_deliberatie_eindresult')[0]['value'],
        'gedelibereerd' => field_get_items('node', $node, 'field_lvs_deliberatie_gedelib')[0]['value'],
        'motief' => field_get_items('node', $node, 'field_lvs_deliberatie_motief')[0]['value'],
        'uitgesteld' => field_get_items('node', $node, 'field_lvs_deliberatie_uitgesteld')[0]['value'],
        'vakantietaken' => field_get_items('node', $node, 'field_lvs_deliberatie_vakantie'),
        'vakresultaten' => $courseResultsArray,
        'waarschuwingen' => field_get_items('node', $node, 'field_lvs_deliberatie_waarschuw'),
    );
}

// Get precense at PTA meetings
 $variables['study']['ptas'] = array();
 $query = 'SELECT t.entity_id AS id, '
 . 't.field_tijdstip_value AS time '
 . 'FROM {field_data_field_tijdstip} AS t '
 . 'WHERE t.bundle = :type '
 . 'AND t.field_tijdstip_value BETWEEN :startdate AND :enddate '
 . 'ORDER BY t.field_tijdstip_value DESC';
 $ptas = db_query($query, array(':type' => 'oudercontact', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAllAssoc('id');
 foreach($ptas as $id => $pta){
 	$variables['study']['ptas'][$id]['tijdstip'] = $pta->time;
 	
 	$query = 'SELECT l.entity_id AS id '
 			. 'FROM {field_data_field_leerlingen} AS l '
 			. 'WHERE l.bundle = :type '
 			. 'AND l.field_leerlingen_target_id = :uid '
 			. 'AND l.entity_id = :nid';
 	$status = db_query($query, array(':uid' => $account->uid, ':nid' => $id, ':type' => 'oudercontact'))->fetchAssoc();
 	
 	$variables['study']['ptas'][$id]['status'] = $status;
 }

// Preprocess fields.
field_attach_preprocess('user', $account, $variables['elements'], $variables);
