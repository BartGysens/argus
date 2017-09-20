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
 * @file
 * Contains all prepocessor instructions for generating node pages
 */

$today = new DateTime('NOW');

/* Data variables available */
$variablesData = array(
    'absences' => array(
        'B' => 0,
        'D' => 0,
        'Z' => 0,
        'other' => 0,
        'total' => 0,
        'bo' => '',
        'L' => 0,
    ),
    'behaviour' => array(
        'neg' => 0,
        'pos' => 0,
        'bo-vk' => '',
        'ss' => 0,
        'fase1' => 0,
        'fase2' => 0,
        'bewarend' => 0,
        'tucht' => 0,
    ),
    'study' => array(
        'fails' => 0,
        'measures' => 0,
    ),
);

/* Filter data only for this schoolyear (active schoolyear) */
$params = drupal_get_query_parameters();
if (array_key_exists('schooljaar', $params)){
	$thisSchoolyear = $params['schooljaar'];
} else {
	$thisSchoolyear = 0;
}
$schoolyear = (array) argus_schoolyear($thisSchoolyear);

/* Set some global parameters */
$node = $variables['elements']['#node'];
$variables['node'] = $node;
$variables['id'] = $node->nid;

if (array_key_exists(LANGUAGE_NONE, $node->field_klas_leerlingen)){
	if (count($node->field_klas_leerlingen[LANGUAGE_NONE]) > 0){
		
		$variables['data'] = array();
		$variables['data']['max'] = $variablesData;
		
		$variables['averages'] = array(
		    'class' => $variablesData,
		    'grade' => $variablesData,
		    'type' => $variablesData,
		    'eduyear' => $variablesData,
		    'school' => $variablesData,
		);
		if (array_key_exists(LANGUAGE_NONE, $node->field_klas_graad) && array_key_exists(LANGUAGE_NONE, $node->field_klas_leerjaar)){
			$eduYear = ($node->field_klas_graad[LANGUAGE_NONE][0]['value']-1)*2+$node->field_klas_leerjaar[LANGUAGE_NONE][0]['value'];
		} else {
			$eduYear = 0;
		}
		
		/**
		 * -----------------------------------------------------------------------------
		 *  Loop through data concerning this class (where this pupil resides)
		 * -----------------------------------------------------------------------------
		 */
		$variables['averages']['class-total'] = count($node->field_klas_leerlingen[LANGUAGE_NONE]);
		foreach ($node->field_klas_leerlingen[LANGUAGE_NONE] as $student){
			if (array_key_exists('target_id', $student) && array_key_exists('entity', $student)){
				if ($student['entity']->status == 1){
					
				    // Data about ABSENCES
				    if (module_exists('argus_afwezigheden')){
						$totalCodes = 0;
					    $codes = array('B', 'D', 'Z');
					    foreach ($codes as $code){
					        $query = 'SELECT id '
					            . 'FROM {argus_lvs_afwezigheden} AS a '
					            . 'WHERE a.leerling = :uid AND a.datum BETWEEN :startdate AND :enddate AND am = :code';
					        $total = db_query($query, array(':uid' => $student['target_id'], ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					        $query = 'SELECT id '
					            . 'FROM {argus_lvs_afwezigheden} AS a '
					            . 'WHERE a.leerling = :uid AND a.datum BETWEEN :startdate AND :enddate AND pm = :code';
					        $total += db_query($query, array(':uid' => $student['target_id'], ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					        
					        if ($total) $variables['data'][$student['target_id']]['absences'][$code] = $total;
					        $totalCodes += $total;
					        if ($total > $variables['data']['max']['absences'][$code]){
					            $variables['data']['max']['absences'][$code] = $total;
					        }
					        $variables['averages']['class']['absences'][$code] += $total;
					    }
					    $codes = array('-', 'G', 'T', 'C', 'H', 'R', 'O', 'Q', 'P', 'J');
					    $query = 'SELECT id '
					        . 'FROM {argus_lvs_afwezigheden} AS a '
					        . 'WHERE a.leerling = :uid AND a.datum BETWEEN :startdate AND :enddate AND am IN (:code)';
					    $total = db_query($query, array(':uid' => $student['target_id'], ':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					    $query = 'SELECT id '
					        . 'FROM {argus_lvs_afwezigheden} AS a '
					        . 'WHERE a.leerling = :uid AND a.datum BETWEEN :startdate AND :enddate AND pm IN (:code)';
					    $total += db_query($query, array(':uid' => $student['target_id'], ':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					    if ($total) $variables['data'][$student['target_id']]['absences']['other'] = $total;
					    $totalCodes += $total;
					    if ($total > $variables['data']['max']['absences']['other']){
					        $variables['data']['max']['absences']['other'] = $total;
					    }
					    $variables['averages']['class']['absences']['other'] += $total;
					    
					    $variables['data'][$student['target_id']]['absences']['total'] = $totalCodes;
					    if ($totalCodes > $variables['data']['max']['absences']['total']){
					        $variables['data']['max']['absences']['total'] = $totalCodes;
					    }
					    $variables['averages']['class']['absences']['total'] += $totalCodes;
					    
					    $code = 'L';
					    $query = 'SELECT id '
					        . 'FROM {argus_lvs_afwezigheden} AS a '
					        . 'WHERE a.leerling = :uid AND a.datum BETWEEN :startdate AND :enddate AND am = :code';
					    $total = db_query($query, array(':uid' => $student['target_id'], ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					    $query = 'SELECT id '
					        . 'FROM {argus_lvs_afwezigheden} AS a '
					        . 'WHERE a.leerling = :uid AND a.datum BETWEEN :startdate AND :enddate AND pm = :code';
					    $total += db_query($query, array(':uid' => $student['target_id'], ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					
					    if ($total) $variables['data'][$student['target_id']]['absences'][$code] = $total;
					    if ($total > $variables['data']['max']['absences'][$code]){
					        $variables['data']['max']['absences'][$code] = $total;
					    }
					    $variables['averages']['class']['absences']['L'] += $total;
					    
					    $query = 'SELECT l.entity_id AS id '
					            . 'FROM {field_data_field_msl_bo_leerling} AS l '
					            . 'LEFT JOIN {field_data_field_msl_bo_startdatum} AS d ON l.entity_id = d.entity_id '
					            . 'LEFT JOIN {field_data_field_msl_bo_type} AS t ON l.entity_id = t.entity_id '
					            . 'WHERE l.field_msl_bo_leerling_target_id = :uid '
					            . 'AND t.field_msl_bo_type_value IN (:about) '
					            . 'AND d.field_msl_bo_startdatum_value BETWEEN :startdate AND :enddate';
					    $count = db_query($query, array(':uid' => $student['target_id'], ':about' => array('Afwezigheden','Laattijdige inschrijving'), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();    
					    if ($count) $variables['data'][$student['target_id']]['absences']['bo'] = $count;
				    }
				    
				    // Data about BEHAVIOUR / ATTITUDE
				    if (module_exists('argus_meldingen')){
					    $query = 'SELECT l.entity_id AS id '
					          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
					          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
					          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
					          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
					          . 'AND b.field_lvs_melding_betreft_value IN (:about) '
					          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
					    $count = db_query($query, array(':uid' => $student['target_id'], ':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					    $variables['data'][$student['target_id']]['behaviour']['neg'] = $count;
					    if ($count > $variables['data']['max']['behaviour']['neg']){
					        $variables['data']['max']['behaviour']['neg'] = $count;
					    }
					    $variables['averages']['class']['behaviour']['neg'] += $count;
					    
					    $query = 'SELECT l.entity_id AS id '
					          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
					          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
					          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
					          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
					          . 'AND b.field_lvs_melding_betreft_value = :about '
					          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
					    $count = db_query($query, array(':uid' => $student['target_id'], ':about' => 'positief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					    $variables['data'][$student['target_id']]['behaviour']['pos'] = $count;
					    if ($count > $variables['data']['max']['behaviour']['pos']){
					        $variables['data']['max']['behaviour']['pos'] = $count;
					    }
					    $variables['averages']['class']['behaviour']['pos'] += $count;
				    }

				    if (module_exists('argus_volgkaarten')){
					    $query = 'SELECT l.entity_id AS id '
					            . 'FROM {field_data_field_msl_bo_leerling} AS l '
					            . 'LEFT JOIN {field_data_field_msl_bo_startdatum} AS d ON l.entity_id = d.entity_id '
					            . 'LEFT JOIN {field_data_field_msl_bo_type} AS t ON l.entity_id = t.entity_id '
					            . 'WHERE l.field_msl_bo_leerling_target_id = :uid '
					            . 'AND t.field_msl_bo_type_value IN (:about) '
					            . 'AND d.field_msl_bo_startdatum_value BETWEEN :startdate AND :enddate';
					    $count = db_query($query, array(':uid' => $student['target_id'], ':about' => array('Gedrag','Pesten'), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					    if ($count){
					        $query = 'SELECT l.entity_id AS id '
					                . 'FROM {field_data_field_msl_volgkaart_leerling} AS l '
					                . 'LEFT JOIN {field_data_field_msl_volgkaart_afgehaald} AS d ON l.entity_id = d.entity_id '
					                . 'WHERE l.field_msl_volgkaart_leerling_target_id = :uid '
					                . 'AND d.field_msl_volgkaart_afgehaald_value BETWEEN :startdate AND :enddate';
					        $countVK = db_query($query, array(':uid' => $student['target_id'], ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
					        $variables['data'][$student['target_id']]['behaviour']['bo-vk'] = $count.'/'.$countVK;
					    }
				    }

				    if (module_exists('argus_meldingen')){
					    $variables['data'][$student['target_id']]['behaviour']['msl'] = array();
					    $msls = array('fase1','fase2','bewarend','tucht');
					    foreach ($msls as $msl){
					        $variables['data'][$student['target_id']]['behaviour']['msl'][$msl] = array();
					        $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_msl_'.$msl.'_target_id AS mid, COUNT(m.field_lvs_melding_msl_'.$msl.'_target_id) AS cmid, mt.title AS title '
					              . 'FROM {field_data_field_lvs_melding_leerling} AS l '
					              . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
					              . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
					              . 'LEFT JOIN {field_data_field_lvs_melding_msl_'.$msl.'} AS m ON l.entity_id = m.entity_id '
					              . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_'.$msl.'_target_id = mt.nid '
					              . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
					              . 'AND b.field_lvs_melding_betreft_value IN (:about) '
					              . 'AND mt.title IS NOT NULL '
					              . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
					              . 'GROUP BY mid';
					        $result = db_query($query, array(':uid' => $student['target_id'], ':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
					        $total = 0;
					        foreach ($result->fetchAll() as $k => $r){
					            $variables['data'][$student['target_id']]['behaviour']['msl'][$msl][$r->title] = $r->cmid;
					            $total += $r->cmid;
					        }
					        if ($total > $variables['data']['max']['behaviour'][$msl]){
					            $variables['data']['max']['behaviour'][$msl] = $total;
					        }
					        $variables['averages']['class']['behaviour'][$msl] += $total;
					    }
				    }
				    
				    if (module_exists('argus_soda')){
				    	$variables['data'][$student['target_id']]['behaviour']['soda'] = argus_soda_get_report( $student['target_id'] );
				    	$variables['averages']['class']['behaviour']['soda']='';
				    }
				    
				    // Data about STUDY
				    // TODO: if (module_exists('argus_skore')){
				    if (module_exists('argus_vakken') && db_table_exists('argus_skore_resultaten')){
					    $query = 'SELECT id, afkorting, omschrijving '
					        . 'FROM {argus_skore_periode} '
					        . 'ORDER BY volgorde ASC';
					    $periods = db_query($query)->fetchAll();
					    $variables['data'][$student['target_id']]['study']['fails'] = 0;
					    foreach ($periods as $p){
					        $query = 'SELECT r.vak, r.behaald, r.max, ca.field_vak_afkorting_value AS vak_afkorting, cb.field_vak_beschrijving_value AS vak_beschrijving '
					            . 'FROM {argus_skore_resultaten} AS r '
					            . 'LEFT JOIN {field_data_field_vak_afkorting} AS ca ON r.vak = ca.entity_id '
					            . 'LEFT JOIN {field_data_field_vak_beschrijving} AS cb ON r.vak = cb.entity_id '
					            . 'WHERE r.leerling = :uid AND r.schooljaar = :schoolyear AND r.periode = :pid '
					            . 'ORDER BY cb.field_vak_beschrijving_value ASC';
					        $results = db_query($query, array(':uid' => $student['target_id'], ':pid' => $p->id, 'schoolyear' => substr($schoolyear['start'],0,4).'-'.substr($schoolyear['end'],0,4)))->fetchAll();
					        foreach ($results as $r){
					            if (isset($r->behaald)){
					                if ((real) $r->behaald < ((real) $r->max)/2){
					                    $variables['data'][$student['target_id']]['study']['fails']++;
					                    $variables['averages']['class']['study']['fails'] += $total;
					                }
					            }
					        }
					    }
					    if ($variables['data'][$student['target_id']]['study']['fails'] > $variables['data']['max']['study']['fails']){
					        $variables['data']['max']['study']['fails'] = $variables['data'][$student['target_id']]['study']['fails'];
					    }
					    $variables['averages']['class']['study']['fails'] += $variables['data'][$student['target_id']]['study']['fails'];
				    }

				    if (module_exists('argus_meldingen')){
					    $variables['data'][$student['target_id']]['study']['measures'] = array();
					    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_studie_target_id AS mid, COUNT(m.field_lvs_melding_studie_target_id) AS cmid, mt.title AS title '
					          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
					          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
					          . 'LEFT JOIN {field_data_field_lvs_melding_studie} AS m ON l.entity_id = m.entity_id '
					          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
					          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_studie_target_id = mt.nid '
					          . 'WHERE l.field_lvs_melding_leerling_target_id = :uid '
					          . 'AND b.field_lvs_melding_betreft_value IN (:about) '
					          . 'AND mt.title IS NOT NULL '
					          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
					          . 'GROUP BY mid';
					    $measures = db_query($query, array(':uid' => $student['target_id'], ':about' => array( 'studiebegeleiding', 'orde (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
					    $total = 0;
					    foreach ($measures as $k => $r){
					        $variables['data'][$student['target_id']]['study']['measures'][$r->title] = $r->cmid;
					        $total += $r->cmid;
					    }
					    if ($total > $variables['data']['max']['study']['measures']){
					        $variables['data']['max']['study']['measures'] = $total;
					    }
					    $variables['averages']['class']['study']['measures'] += $total;
					}
				}
				
				// Teachers
				$variables['teachers'] = array();
				
			    if (module_exists('argus_uurrooster')){
					$query = new EntityFieldQuery();
					$query->entityCondition('entity_type', 'node')
					    ->entityCondition('bundle', 'uurrooster_les')
					    ->propertyCondition('status', NODE_PUBLISHED)
					    ->fieldCondition('field_uurrooster_les_klassen', 'target_id', $node->nid, '=');
					$currentLessons = $query->execute();
					foreach ($currentLessons['node'] as $l => $lesson){
					    $lesson = node_load($l);
					    if (isset($lesson->field_uurrooster_les_leerkracht[LANGUAGE_NONE]) && isset($lesson->field_uurrooster_les_vak[LANGUAGE_NONE])){
					        $tid = $lesson->field_uurrooster_les_leerkracht[LANGUAGE_NONE][0]['target_id'];
					        $cid = $lesson->field_uurrooster_les_vak[LANGUAGE_NONE][0]['target_id'];
					
					        if (!isset($variables['teachers'][$tid])){
					            $variables['teachers'][$tid] = array();
					        }
					        if (!isset($variables['teachers'][$tid][$cid])){
					            $course = node_load($cid);
					            $variables['teachers'][$tid][$cid] = array(
					                'short' => $course->title,
					                'long' => $course->field_vak_beschrijving[LANGUAGE_NONE][0]['value'],
					                'amount' => 0,
					            );
					        }
					        $variables['teachers'][$tid][$cid]['amount']++;
					    }
					}
			    }
			}
		}
		
		
		/**
		 * -----------------------------------------------------------------------------
		 *  Loop through data concerning global school
		 * -----------------------------------------------------------------------------
		 */
		
		// Calculate amount of pupils
		$query = 'SELECT DISTINCT(u.uid) '
		    . 'FROM {users_roles} AS ur '
		    . 'LEFT JOIN {users} AS u ON ur.uid = u.uid '
		    . 'WHERE ur.rid = :rid AND u.status = 1';
		$variables['averages']['school-total'] = db_query($query, array(':rid' => user_role_load_by_name('leerling')->rid))->rowCount();
		
		// Data about ABSENCES
		$totalCodes = 0;
		
		if (module_exists('argus_afwezigheden')){
			$codes = array('B', 'D', 'Z');
			foreach ($codes as $code){
			    $query = 'SELECT id '
			        . 'FROM {argus_lvs_afwezigheden} AS a '
			        . 'WHERE am = :code AND a.datum BETWEEN :startdate AND :enddate';
			    $total = db_query($query, array(':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			    $query = 'SELECT id '
			        . 'FROM {argus_lvs_afwezigheden} AS a '
			        . 'WHERE pm = :code AND a.datum BETWEEN :startdate AND :enddate';
			    $total += db_query($query, array(':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			
			    $totalCodes += $total;
			    $variables['averages']['school']['absences'][$code] = $total;
			}
			$codes = array('-', 'G', 'T', 'C', 'H', 'R', 'O', 'Q', 'P', 'J');
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE am IN (:code) AND a.datum BETWEEN :startdate AND :enddate';
			$total = db_query($query, array(':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE pm IN (:code) AND a.datum BETWEEN :startdate AND :enddate';
			$total += db_query($query, array(':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$totalCodes += $total;
			$variables['averages']['school']['absences']['other'] = $total;
			
			$variables['averages']['school']['absences']['total'] = $totalCodes;
			
			$code = 'L';
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE am = :code AND a.datum BETWEEN :startdate AND :enddate';
			$total = db_query($query, array(':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE pm = :code AND a.datum BETWEEN :startdate AND :enddate';
			$total += db_query($query, array(':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			
			$variables['averages']['school']['absences']['L'] = $total;
		}
		
		// Data about BEHAVIOUR / ATTITUDE
		if (module_exists('argus_meldingen')){
			$query = 'SELECT b.entity_id AS id '
			      . 'FROM {field_data_field_lvs_melding_betreft} AS b '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON b.entity_id = d.entity_id '
			      . 'WHERE b.field_lvs_melding_betreft_value IN (:about) '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
			$count = db_query($query, array(':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['school']['behaviour']['neg'] = $count;
			
			$query = 'SELECT b.entity_id AS id '
			      . 'FROM {field_data_field_lvs_melding_betreft} AS b '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON b.entity_id = d.entity_id '
			      . 'WHERE b.field_lvs_melding_betreft_value = :about '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
			$count = db_query($query, array(':about' => 'positief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['school']['behaviour']['pos'] = $count;
			
			foreach ($msls as $msl){
			    $query = 'SELECT b.entity_id AS id, m.field_lvs_melding_msl_'.$msl.'_target_id AS mid, COUNT(m.field_lvs_melding_msl_'.$msl.'_target_id) AS cmid, mt.title AS title '
			          . 'FROM {field_data_field_lvs_melding_betreft} AS b '
			          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON b.entity_id = d.entity_id '
			          . 'LEFT JOIN {field_data_field_lvs_melding_msl_'.$msl.'} AS m ON b.entity_id = m.entity_id '
			          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_'.$msl.'_target_id = mt.nid '
			          . 'WHERE b.field_lvs_melding_betreft_value = :about '
			          . 'AND mt.title IS NOT NULL '
			          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
			          . 'GROUP BY mid';
			    $result = db_query($query, array(':about' => 'negatief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
			    $total = 0;
			    foreach ($result->fetchAll() as $k => $r){
			        $total += $r->cmid;
			        if ($msl == 'fase2' && $r->title == 'Strafstudie'){
			            $variables['averages']['school']['behaviour']['ss'] = $r->cmid;
			        }
			    }
			    $variables['averages']['school']['behaviour'][$msl] = $total;
			}
		}
		
		// Data about STUDY
		// TODO: if (module_exists('argus_skore')){
		if (module_exists('argus_vakken') && db_table_exists('argus_skore_resultaten')){
			$query = 'SELECT id, afkorting, omschrijving '
			    . 'FROM {argus_skore_periode} '
			    . 'ORDER BY volgorde ASC';
			$periods = db_query($query)->fetchAll();
			$variables['averages']['school']['study'] = array('fails' => 0);
			foreach ($periods as $p){
			    $query = 'SELECT r.vak, r.behaald, r.max, ca.field_vak_afkorting_value AS vak_afkorting, cb.field_vak_beschrijving_value AS vak_beschrijving '
			        . 'FROM {argus_skore_resultaten} AS r '
			        . 'LEFT JOIN {field_data_field_vak_afkorting} AS ca ON r.vak = ca.entity_id '
			        . 'LEFT JOIN {field_data_field_vak_beschrijving} AS cb ON r.vak = cb.entity_id '
			        . 'WHERE r.schooljaar = :schoolyear AND r.periode = :pid '
			        . 'ORDER BY cb.field_vak_beschrijving_value ASC';
			    $results = db_query($query, array(':pid' => $p->id, 'schoolyear' => substr($schoolyear['start'],0,4).'-'.substr($schoolyear['end'],0,4)))->fetchAll();
			    foreach ($results as $r){
			        if (isset($r->behaald)){
			            if ((real) $r->behaald < ((real) $r->max)/2){
			                $variables['averages']['school']['study']['fails']++;
			            }
			        }
			    }
			}
		}
		
		if (module_exists('argus_meldingen')){
			$variables['data'][$student['target_id']]['study']['measures'] = array();
			$query = 'SELECT b.entity_id AS id, m.field_lvs_melding_studie_target_id AS mid, COUNT(m.field_lvs_melding_studie_target_id) AS cmid, mt.title AS title '
			      . 'FROM {field_data_field_lvs_melding_betreft} AS b '
			      . 'LEFT JOIN {field_data_field_lvs_melding_studie} AS m ON b.entity_id = m.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON b.entity_id = d.entity_id '
			      . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_studie_target_id = mt.nid '
			      . 'WHERE b.field_lvs_melding_betreft_value IN (:about) '
			      . 'AND mt.title IS NOT NULL '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
			      . 'GROUP BY mid';
			$measures = db_query($query, array(':about' => array( 'studiebegeleiding', 'orde (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
			$total = 0;
			foreach ($measures as $k => $r){
			    $total += $r->cmid;
			}
			$variables['averages']['school']['study']['measures'] = $total;
		}
		
		if (module_exists('argus_soda')){
			$variables['averages']['school']['behaviour']['soda']='';
		}
		
		/**
		 * -----------------------------------------------------------------------------
		 *  Loop through data concerning global grade
		 * -----------------------------------------------------------------------------
		 */
		
		// First get all users in same grade
		$pupils = array();
		if (array_key_exists(LANGUAGE_NONE, $node->field_klas_graad)){
			$query = 'SELECT lln.field_klas_leerlingen_target_id AS pupils '
			    . 'FROM {field_data_field_klas_graad} AS g '
			    . 'LEFT JOIN {field_data_field_klas_leerlingen} AS lln ON g.entity_id = lln.entity_id '
			    . 'WHERE g.field_klas_graad_value = :grade AND lln.field_klas_leerlingen_target_id';
			$pupils = db_query($query, array(':grade' => $node->field_klas_graad[LANGUAGE_NONE][0]['value']))->fetchCol();
		}
		$variables['averages']['current-grade'] = $eduYear;
		
		// Calculate amount of pupils
		$variables['averages']['grade-total'] = count($pupils);
		
		// Data about ABSENCES
		$totalCodes = 0;
		
		if (module_exists('argus_afwezigheden')){
			$codes = array('B', 'D', 'Z');
			foreach ($codes as $code){
			    $query = 'SELECT id '
			        . 'FROM {argus_lvs_afwezigheden} AS a '
			        . 'WHERE a.leerling IN (:uid) AND a.datum BETWEEN :startdate AND :enddate AND am = :code';
			    $total = db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			    $query = 'SELECT id '
			        . 'FROM {argus_lvs_afwezigheden} AS a '
			        . 'WHERE a.leerling IN (:uid) AND a.datum BETWEEN :startdate AND :enddate AND pm = :code';
			    $total += db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			
			    $variables['averages']['grade']['absences'][$code] = $total;
			    $totalCodes += $total;
			}
			$codes = array('-', 'G', 'T', 'C', 'H', 'R', 'O', 'Q', 'P', 'J');
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND a.datum BETWEEN :startdate AND :enddate AND am IN (:code)';
			$total = db_query($query, array(':uid' => $pupils, ':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND a.datum BETWEEN :startdate AND :enddate AND pm IN (:code)';
			$total += db_query($query, array(':uid' => $pupils, ':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['grade']['absences']['other'] = $total;
			$totalCodes += $total;
			
			$variables['averages']['grade']['absences']['total'] = $totalCodes;
			
			$code = 'L';
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND a.datum BETWEEN :startdate AND :enddate AND am = :code';
			$total = db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND a.datum BETWEEN :startdate AND :enddate AND pm = :code';
			$total += db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['grade']['absences']['L'] = $total;
		}
		
		// Data about BEHAVIOUR / ATTITUDE
		if (module_exists('argus_meldingen')){
			$query = 'SELECT l.entity_id AS id '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
			$count = db_query($query, array(':uid' => $pupils, ':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['grade']['behaviour']['neg'] = $count;
			
			$query = 'SELECT l.entity_id AS id '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value = :about '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
			$count = db_query($query, array(':uid' => $pupils, ':about' => 'positief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['grade']['behaviour']['pos'] = $count;
			
			$msls = array('fase1','fase2','bewarend','tucht');
			foreach ($msls as $msl){
			    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_msl_'.$msl.'_target_id AS mid, COUNT(m.field_lvs_melding_msl_'.$msl.'_target_id) AS cmid, mt.title AS title '
			          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			          . 'LEFT JOIN {field_data_field_lvs_melding_msl_'.$msl.'} AS m ON l.entity_id = m.entity_id '
			          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_'.$msl.'_target_id = mt.nid '
			          . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			          . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			          . 'AND mt.title IS NOT NULL '
			          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
			          . 'GROUP BY mid';
			    $result = db_query($query, array(':uid' => $pupils, ':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
			    $total = 0;
			    foreach ($result->fetchAll() as $k => $r){
			        $total += $r->cmid;
			        if ($msl == 'fase2' && $r->title == 'Strafstudie'){
			            $variables['averages']['grade']['behaviour']['ss'] = $r->cmid;
			        }
			    }
			    $variables['averages']['grade']['behaviour'][$msl] = $total;
			}
		}
		
		if (module_exists('argus_soda')){
			$variables['averages']['grade']['behaviour']['soda']='';
		}
		
		// Data about STUDY
		// TODO: if (module_exists('argus_skore')){
		if (module_exists('argus_vakken') && db_table_exists('argus_skore_resultaten')){
			$query = 'SELECT id, afkorting, omschrijving '
			    . 'FROM {argus_skore_periode} '
			    . 'ORDER BY volgorde ASC';
			$periods = db_query($query)->fetchAll();
			$variables['averages']['grade']['study'] = array('fails' => 0);
			foreach ($periods as $p){
			    $query = 'SELECT r.vak, r.behaald, r.max, ca.field_vak_afkorting_value AS vak_afkorting, cb.field_vak_beschrijving_value AS vak_beschrijving '
			        . 'FROM {argus_skore_resultaten} AS r '
			        . 'LEFT JOIN {field_data_field_vak_afkorting} AS ca ON r.vak = ca.entity_id '
			        . 'LEFT JOIN {field_data_field_vak_beschrijving} AS cb ON r.vak = cb.entity_id '
			        . 'WHERE r.leerling IN (:uid) AND r.schooljaar = :schoolyear AND r.periode = :pid '
			        . 'ORDER BY cb.field_vak_beschrijving_value ASC';
			    $results = db_query($query, array(':uid' => $pupils, ':pid' => $p->id, 'schoolyear' => substr($schoolyear['start'],0,4).'-'.substr($schoolyear['end'],0,4)))->fetchAll();
			    foreach ($results as $r){
			        if (isset($r->behaald)){
			            if ((real) $r->behaald < ((real) $r->max)/2){
			                $variables['averages']['grade']['study']['fails']++;
			            }
			        }
			    }
			}
		}
		
		if (module_exists('argus_meldingen')){
			$query = 'SELECT l.entity_id AS id, m.field_lvs_melding_studie_target_id AS mid, COUNT(m.field_lvs_melding_studie_target_id) AS cmid, mt.title AS title '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_studie} AS m ON l.entity_id = m.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_studie_target_id = mt.nid '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			      . 'AND mt.title IS NOT NULL '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
			      . 'GROUP BY mid';
			$measures = db_query($query, array(':uid' => $pupils, ':about' => array( 'studiebegeleiding', 'orde (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
			$total = 0;
			foreach ($measures as $k => $r){
			    $total += $r->cmid;
			}
			$variables['averages']['grade']['study']['measures'] = $total;
		}
		
		/**
		 * -----------------------------------------------------------------------------
		 *  Loop through data concerning global type
		 * -----------------------------------------------------------------------------
		 */
		
		// First get all users in same type
		$pupils = array();
		$variables['averages']['current-type'] = '';
		if (array_key_exists(LANGUAGE_NONE, $node->field_klas_onderwijsvorm)){
			$query = 'SELECT lln.field_klas_leerlingen_target_id AS pupils '
			    . 'FROM {field_data_field_klas_onderwijsvorm} AS t '
			    . 'LEFT JOIN {field_data_field_klas_leerlingen} AS lln ON t.entity_id = lln.entity_id '
			    . 'WHERE t.field_klas_onderwijsvorm_value = :type AND lln.field_klas_leerlingen_target_id';
			$pupils = db_query($query, array(':type' => $node->field_klas_onderwijsvorm[LANGUAGE_NONE][0]['value']))->fetchCol();
			$variables['averages']['current-type'] = $node->field_klas_onderwijsvorm[LANGUAGE_NONE][0]['value'];
		}
		
		// Calculate amount of pupils
		$variables['averages']['type-total'] = count($pupils);
		
		// Data about ABSENCES
		$totalCodes = 0;
		
		if (module_exists('argus_afwezigheden')){
			$codes = array('B', 'D', 'Z');
			foreach ($codes as $code){
			    $query = 'SELECT id '
			        . 'FROM {argus_lvs_afwezigheden} AS a '
			        . 'WHERE a.leerling IN (:uid) AND am = :code AND a.datum BETWEEN :startdate AND :enddate';
			    $total = db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			    $query = 'SELECT id '
			        . 'FROM {argus_lvs_afwezigheden} AS a '
			        . 'WHERE a.leerling IN (:uid) AND pm = :code AND a.datum BETWEEN :startdate AND :enddate';
			    $total += db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			
			    $variables['averages']['type']['absences'][$code] = $total;
			    $totalCodes += $total;
			}
			$codes = array('-', 'G', 'T', 'C', 'H', 'R', 'O', 'Q', 'P', 'J');
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND am IN (:code) AND a.datum BETWEEN :startdate AND :enddate';
			$total = db_query($query, array(':uid' => $pupils, ':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND pm IN (:code) AND a.datum BETWEEN :startdate AND :enddate';
			$total += db_query($query, array(':uid' => $pupils, ':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['type']['absences']['other'] = $total;
			$totalCodes += $total;
			
			$variables['averages']['type']['absences']['total'] = $totalCodes;
			
			$code = 'L';
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND am = :code AND a.datum BETWEEN :startdate AND :enddate';
			$total = db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND pm = :code AND a.datum BETWEEN :startdate AND :enddate';
			$total += db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['type']['absences']['L'] = $total;
		}
		
		// Data about BEHAVIOUR / ATTITUDE
		if (module_exists('argus_meldingen')){
			$query = 'SELECT l.entity_id AS id '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
			$count = db_query($query, array(':uid' => $pupils, ':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['type']['behaviour']['neg'] = $count;
			
			$query = 'SELECT l.entity_id AS id '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value = :about '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
			$count = db_query($query, array(':uid' => $pupils, ':about' => 'positief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['type']['behaviour']['pos'] = $count;
			
			$msls = array('fase1','fase2','bewarend','tucht');
			foreach ($msls as $msl){
			    $variables['data'][$student['target_id']]['behaviour']['msl'][$msl] = array();
			    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_msl_'.$msl.'_target_id AS mid, COUNT(m.field_lvs_melding_msl_'.$msl.'_target_id) AS cmid, mt.title AS title '
			          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			          . 'LEFT JOIN {field_data_field_lvs_melding_msl_'.$msl.'} AS m ON l.entity_id = m.entity_id '
			          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_'.$msl.'_target_id = mt.nid '
			          . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			          . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			          . 'AND mt.title IS NOT NULL '
			          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
			          . 'GROUP BY mid';
			    $result = db_query($query, array(':uid' => $pupils, ':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
			    $total = 0;
			    foreach ($result->fetchAll() as $k => $r){
			        $total += $r->cmid;
			        if ($msl == 'fase2' && $r->title == 'Strafstudie'){
			            $variables['averages']['type']['behaviour']['ss'] = $r->cmid;
			        }
			    }
			    $variables['averages']['type']['behaviour'][$msl] = $total;
			}
		}
		
		if (module_exists('argus_soda')){
			$variables['averages']['type']['behaviour']['soda']='';
		}
		
		// Data about STUDY
		// TODO: if (module_exists('argus_skore')){
		if (module_exists('argus_vakken') && db_table_exists('argus_skore_resultaten')){
			$query = 'SELECT id, afkorting, omschrijving '
			    . 'FROM {argus_skore_periode} '
			    . 'ORDER BY volgorde ASC';
			$periods = db_query($query)->fetchAll();
			$variables['averages']['type']['study'] = array('fails' => 0);
			foreach ($periods as $p){
			    $query = 'SELECT r.vak, r.behaald, r.max, ca.field_vak_afkorting_value AS vak_afkorting, cb.field_vak_beschrijving_value AS vak_beschrijving '
			        . 'FROM {argus_skore_resultaten} AS r '
			        . 'LEFT JOIN {field_data_field_vak_afkorting} AS ca ON r.vak = ca.entity_id '
			        . 'LEFT JOIN {field_data_field_vak_beschrijving} AS cb ON r.vak = cb.entity_id '
			        . 'WHERE r.leerling IN (:uid) AND r.schooljaar = :schoolyear AND r.periode = :pid '
			        . 'ORDER BY cb.field_vak_beschrijving_value ASC';
			    $results = db_query($query, array(':uid' => $pupils, ':pid' => $p->id, 'schoolyear' => substr($schoolyear['start'],0,4).'-'.substr($schoolyear['end'],0,4)))->fetchAll();
			    foreach ($results as $r){
			        if (isset($r->behaald)){
			            if ((real) $r->behaald < ((real) $r->max)/2){
			                $variables['averages']['type']['study']['fails']++;
			            }
			        }
			    }
			}
		}
		
		if (module_exists('argus_meldingen')){
			$query = 'SELECT l.entity_id AS id, m.field_lvs_melding_studie_target_id AS mid, COUNT(m.field_lvs_melding_studie_target_id) AS cmid, mt.title AS title '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_studie} AS m ON l.entity_id = m.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_studie_target_id = mt.nid '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			      . 'AND mt.title IS NOT NULL '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
			      . 'GROUP BY mid';
			$measures = db_query($query, array(':uid' => $pupils, ':about' => array( 'studiebegeleiding', 'orde (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
			$total = 0;
			foreach ($measures as $k => $r){
			    $total += $r->cmid;
			}
			$variables['averages']['type']['study']['measures'] = $total;
		}
		
		
		/**
		 * -----------------------------------------------------------------------------
		 *  Loop through data concerning global education year, same type and grade/year
		 * -----------------------------------------------------------------------------
		 */
		
		// First get all users in same type and year
		$pupils = array();
		if (array_key_exists(LANGUAGE_NONE, $node->field_klas_onderwijsvorm) && array_key_exists(LANGUAGE_NONE, $node->field_klas_leerjaar) && array_key_exists(LANGUAGE_NONE, $node->field_klas_graad)){
			$query = 'SELECT lln.field_klas_leerlingen_target_id AS pupils '
			    . 'FROM {field_data_field_klas_onderwijsvorm} AS t '
			    . 'LEFT JOIN {field_data_field_klas_leerjaar} AS j ON t.entity_id = j.entity_id '
			    . 'LEFT JOIN {field_data_field_klas_graad} AS g ON t.entity_id = g.entity_id '
			    . 'LEFT JOIN {field_data_field_klas_leerlingen} AS lln ON t.entity_id = lln.entity_id '
			    . 'WHERE t.field_klas_onderwijsvorm_value = :type '
			    . 'AND j.field_klas_leerjaar_value = :year '
			    . 'AND g.field_klas_graad_value = :grade '
			    . 'AND lln.field_klas_leerlingen_target_id';
			$pupils = db_query($query, array(
			    ':type' => $node->field_klas_onderwijsvorm[LANGUAGE_NONE][0]['value'], 
			    ':year' => $node->field_klas_leerjaar[LANGUAGE_NONE][0]['value'],
			    ':grade' => $node->field_klas_graad[LANGUAGE_NONE][0]['value'],
			))->fetchCol();
		}
		$variables['averages']['current-eduyear'] = $eduYear;
		if (array_key_exists(LANGUAGE_NONE, $node->field_klas_onderwijsvorm)) {
			$variables['averages']['current-eduyear'] .= ' '.$node->field_klas_onderwijsvorm[LANGUAGE_NONE][0]['value'];
		}
		
		// Calculate amount of pupils
		$variables['averages']['eduyear-total'] = count($pupils);
		
		// Data about ABSENCES
		$totalCodes = 0;
		
		if (module_exists('argus_afwezigheden')){
			$codes = array('B', 'D', 'Z');
			foreach ($codes as $code){
			    $query = 'SELECT id '
			        . 'FROM {argus_lvs_afwezigheden} AS a '
			        . 'WHERE a.leerling IN (:uid) AND am = :code AND a.datum BETWEEN :startdate AND :enddate';
			    $total = db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			    $query = 'SELECT id '
			        . 'FROM {argus_lvs_afwezigheden} AS a '
			        . 'WHERE a.leerling IN (:uid) AND pm = :code AND a.datum BETWEEN :startdate AND :enddate';
			    $total += db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			
			    $variables['averages']['eduyear']['absences'][$code] = $total;
			    $totalCodes += $total;
			}
			$codes = array('-', 'G', 'T', 'C', 'H', 'R', 'O', 'Q', 'P', 'J');
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND am IN (:code) AND a.datum BETWEEN :startdate AND :enddate';
			$total = db_query($query, array(':uid' => $pupils, ':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND pm IN (:code) AND a.datum BETWEEN :startdate AND :enddate';
			$total += db_query($query, array(':uid' => $pupils, ':code' => $codes, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['eduyear']['absences']['other'] = $total;
			$totalCodes += $total;
			
			$variables['averages']['eduyear']['absences']['total'] = $totalCodes;
			
			$code = 'L';
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND am = :code AND a.datum BETWEEN :startdate AND :enddate';
			$total = db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$query = 'SELECT id '
			    . 'FROM {argus_lvs_afwezigheden} AS a '
			    . 'WHERE a.leerling IN (:uid) AND pm = :code AND a.datum BETWEEN :startdate AND :enddate';
			$total += db_query($query, array(':uid' => $pupils, ':code' => $code, ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['eduyear']['absences']['L'] = $total;
		}
		
		// Data about BEHAVIOUR / ATTITUDE
		if (module_exists('argus_meldingen')){
			$query = 'SELECT l.entity_id AS id '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
			$count = db_query($query, array(':uid' => $pupils, ':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['eduyear']['behaviour']['neg'] = $count;
			
			$query = 'SELECT l.entity_id AS id '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value = :about '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate';
			$count = db_query($query, array(':uid' => $pupils, ':about' => 'positief gedrag', ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->rowCount();
			$variables['averages']['eduyear']['behaviour']['pos'] = $count;
			
			$msls = array('fase1','fase2','bewarend','tucht');
			foreach ($msls as $msl){
			    $variables['data'][$student['target_id']]['behaviour']['msl'][$msl] = array();
			    $query = 'SELECT l.entity_id AS id, m.field_lvs_melding_msl_'.$msl.'_target_id AS mid, COUNT(m.field_lvs_melding_msl_'.$msl.'_target_id) AS cmid, mt.title AS title '
			          . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			          . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			          . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			          . 'LEFT JOIN {field_data_field_lvs_melding_msl_'.$msl.'} AS m ON l.entity_id = m.entity_id '
			          . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_msl_'.$msl.'_target_id = mt.nid '
			          . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			          . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			          . 'AND mt.title IS NOT NULL '
			          . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
			          . 'GROUP BY mid';
			    $result = db_query($query, array(':uid' => $pupils, ':about' => array( 'negatief gedrag', 'discipline (SODA)', 'attitude (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']));
			    $total = 0;
			    foreach ($result->fetchAll() as $k => $r){
			        $total += $r->cmid;
			        if ($msl == 'fase2' && $r->title == 'Strafstudie'){
			            $variables['averages']['eduyear']['behaviour']['ss'] = $r->cmid;
			        }
			    }
			    $variables['averages']['eduyear']['behaviour'][$msl] = $total;
			}
		}
		
		if (module_exists('argus_soda')){
			$variables['averages']['eduyear']['behaviour']['soda']='';
		}
		
		// Data about STUDY
		// TODO: if (module_exists('argus_skore')){
		if (module_exists('argus_vakken') && db_table_exists('argus_skore_resultaten')){
			$query = 'SELECT id, afkorting, omschrijving '
			    . 'FROM {argus_skore_periode} '
			    . 'ORDER BY volgorde ASC';
			$periods = db_query($query)->fetchAll();
			$variables['averages']['eduyear']['study'] = array('fails' => 0);
			foreach ($periods as $p){
			    $query = 'SELECT r.vak, r.behaald, r.max, ca.field_vak_afkorting_value AS vak_afkorting, cb.field_vak_beschrijving_value AS vak_beschrijving '
			        . 'FROM {argus_skore_resultaten} AS r '
			        . 'LEFT JOIN {field_data_field_vak_afkorting} AS ca ON r.vak = ca.entity_id '
			        . 'LEFT JOIN {field_data_field_vak_beschrijving} AS cb ON r.vak = cb.entity_id '
			        . 'WHERE r.leerling IN (:uid) AND r.schooljaar = :schoolyear AND r.periode = :pid '
			        . 'ORDER BY cb.field_vak_beschrijving_value ASC';
			    $results = db_query($query, array(':uid' => $pupils, ':pid' => $p->id, 'schoolyear' => substr($schoolyear['start'],0,4).'-'.substr($schoolyear['end'],0,4)))->fetchAll();
			    foreach ($results as $r){
			        if (isset($r->behaald)){
			            if ((real) $r->behaald < ((real) $r->max)/2){
			                $variables['averages']['eduyear']['study']['fails']++;
			            }
			        }
			    }
			}
		}
		
		if (module_exists('argus_meldingen')){
			$query = 'SELECT l.entity_id AS id, m.field_lvs_melding_studie_target_id AS mid, COUNT(m.field_lvs_melding_studie_target_id) AS cmid, mt.title AS title '
			      . 'FROM {field_data_field_lvs_melding_leerling} AS l '
			      . 'LEFT JOIN {field_data_field_lvs_melding_betreft} AS b ON l.entity_id = b.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_studie} AS m ON l.entity_id = m.entity_id '
			      . 'LEFT JOIN {field_data_field_lvs_melding_datum_feit} AS d ON l.entity_id = d.entity_id '
			      . 'LEFT JOIN {node} AS mt ON m.field_lvs_melding_studie_target_id = mt.nid '
			      . 'WHERE l.field_lvs_melding_leerling_target_id IN (:uid) '
			      . 'AND b.field_lvs_melding_betreft_value IN (:about) '
			      . 'AND mt.title IS NOT NULL '
			      . 'AND d.field_lvs_melding_datum_feit_value BETWEEN :startdate AND :enddate '
			      . 'GROUP BY mid';
			$measures = db_query($query, array(':uid' => $pupils, ':about' => array( 'studiebegeleiding', 'orde (SODA)' ), ':startdate' => $schoolyear['start'], ':enddate' => $schoolyear['end']))->fetchAll();
			$total = 0;
			foreach ($measures as $k => $r){
			    $total += $r->cmid;
			}
			$variables['averages']['eduyear']['study']['measures'] = $total;
		}
	}
}

// Preprocess fields.
field_attach_preprocess('node', $node, $variables['elements'], $variables);