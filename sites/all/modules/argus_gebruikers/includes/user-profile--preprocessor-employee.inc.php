<?php
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
 * @file
 * Contains all prepocessor instructions for generating user profile pages
 */
drupal_add_js ( "https://www.google.com/jsapi?autoload={'modules':[{'name':'visualization','version':'1','packages':['corechart']}]}" );
drupal_add_js ( drupal_get_path ( 'module', 'argus_gebruikers' ) . '/js/user-profile.js' );
drupal_add_js ( drupal_get_path ( 'module', 'argus_gebruikers' ) . '/js/user-profile--employee.js' );

drupal_add_css ( drupal_get_path ( 'module', 'argus_gebruikers' ) . '/css/user-profile.css' );
drupal_add_css ( drupal_get_path ( 'module', 'argus_gebruikers' ) . '/css/user-profile--employee.css' );

$today = new DateTime ( 'NOW' );

/* Filter data only for this schoolyear (active schoolyear) */
$params = drupal_get_query_parameters ();
if (array_key_exists ( 'schooljaar', $params )) {
	$thisSchoolyear = $params ['schooljaar'];
} else {
	$thisSchoolyear = 0;
}
$schoolyear = ( array ) argus_schoolyear ( $thisSchoolyear );

$account = $variables ['elements'] ['#account'];
$accountArray = ( array ) $account;
$variables ['account'] = $account;

$uid = $account->uid;
$variables ['user_id'] = $uid;

/**
 * -----------------------------------------------------------------------------
 * Data about ASSIGNEMENT
 * -----------------------------------------------------------------------------
 */

/* ---------- FETCH STATUS UURROOSTER ---------- */

if (module_exists ( 'argus_uurrooster' )) {
	$variables ['current_lesson'] = argus_uurrooster_get_current_lesson ( $uid );
	// Only fetch the first of the array
	if (count ( $variables ['current_lesson'] )) {
		$variables ['current_lesson'] ['room'] = node_load ( $variables ['current_lesson'] [key ( $variables ['current_lesson'] )] ['lid'] )->title;
		$groups = explode ( ',', $variables ['current_lesson'] [key ( $variables ['current_lesson'] )] ['groups'] );
		foreach ( $groups as $gid ) {
			$variables ['current_lesson'] ['group'] [] = node_load ( $gid )->title;
		}
	}
	
	$variables ['courses'] = array ();
	$courses = argus_uurrooster_get_courses ( $uid );
	foreach ( $courses as $cid => $c ) {
		$c = node_load ( $cid );
		$variables ['courses'] [$cid] = $c->field_vak_beschrijving [LANGUAGE_NONE] [0] ['value'];
	}
	asort ( $variables ['courses'] );
	
	$variables ['groups'] = array ();
	if (argus_uurrooster_get_groups ( $uid )) {
		$groups = explode ( ',', argus_uurrooster_get_groups ( $uid ) [key ( argus_uurrooster_get_groups ( $uid ) )] );
		foreach ( $groups as $gid ) {
			$g = node_load ( $gid );
			$variables ['groups'] [$gid] = $g->title;
		}
		asort ( $variables ['groups'] );
	}
	
	$variables ['supervisions'] = argus_uurrooster_get_supervisions ( $uid );
	sort ( $variables ['supervisions'] );
	
	$variables ['substitutions'] = argus_uurrooster_get_substitutions ( $uid );
	sort ( $variables ['substitutions'] );
}

/**
 * -----------------------------------------------------------------------------
 * Data about AFWEZIGHEDEN
 * -----------------------------------------------------------------------------
 */

/* ---------- FETCH STATUS ABSENTEISME ---------- */

if (module_exists ( 'argus_personeel_afwezigheden' )) {
	$variables ['absences'] = array (
			'graph' => array (
					array (
							'Schooljaar',
							'Aantal',
							array (
									'role' => 'annotation' 
							) 
					) 
			),
			'max' => 0,
			'total' => 0 
	);
	
	$query = 'SELECT g.entity_id AS id, t.field_tijdstip_value AS firstdate ' 
			. 'FROM {field_data_field_gebruiker} AS g ' 
			. 'JOIN {field_data_field_tijdstip} AS t ON t.entity_id = g.entity_id ' 
			. 'JOIN {field_data_field_pers_afwezigheid_reden} AS r ON r.entity_id = g.entity_id ' 
			. 'WHERE g.field_gebruiker_target_id = :uid AND g.bundle = :bundle AND r.field_pers_afwezigheid_reden_value IN (:reason) ' 
			. 'ORDER BY t.field_tijdstip_value ASC';
	$firstdate = db_query ( $query, array (
			':uid' => $uid,
			':bundle' => 'personeel_afwezigheid',
			':reason' => array (
					'ziekte',
					'omstandigheidsverlof',
					'verlof wegens overmacht',
					'andere' 
			) 
	) )->fetchField ( 1 );
	
	$total = 0;
	if ($firstdate) {
		$d = new DateTime( argus_schoolyear( 0, 'Y-m-d', $firstdate )['start'] );
		$now = new DateTime ();
		while ( $d < $now ) {
			$this_sy = argus_schoolyear ( 0, 'Y-m-d', $d->format ( 'Y-m-d' ) );
			
			$query = 'SELECT g.entity_id AS id, t.field_tijdstip_value AS start, t.field_tijdstip_value2 AS end ' 
					. 'FROM {field_data_field_gebruiker} AS g ' 
					. 'JOIN {field_data_field_tijdstip} AS t ON t.entity_id = g.entity_id ' 
					. 'JOIN {field_data_field_pers_afwezigheid_reden} AS r ON r.entity_id = g.entity_id ' 
					. 'WHERE g.field_gebruiker_target_id = :uid AND g.bundle = :bundle AND r.field_pers_afwezigheid_reden_value IN (:reason) AND t.field_tijdstip_value BETWEEN :startdate AND :enddate';
			$result = db_query ( $query, array (
					':uid' => $uid,
					':bundle' => 'personeel_afwezigheid',
					':reason' => array (
							'ziekte',
							'omstandigheidsverlof',
							'verlof wegens overmacht',
							'andere' 
					),
					':startdate' => $this_sy ['start'],
					':enddate' => $this_sy ['end'] 
			) )->fetchAllAssoc ( 'id' );
			
			$days = 0;
			foreach ( $result as $ab ) {
				$start = new DateTime ( $ab->start );
				$end = new DateTime ( $ab->end );
				$days += $start->diff ( $end )->days + 1;
			}
			
			if ($days > $variables ['absences'] ['max']) {
				$variables ['absences'] ['max'] = $days;
			}
			
			$label = argus_schoolyear ( 0, 'y', $d->format ( 'Y-m-d' ) );
			$variables ['absences'] ['graph'] [] = array (
					implode ( '-', $label ),
					$days,
					$days 
			);
			
			$total += $days;
			
			$d->modify ( '+ 1 year' );
		}
	}
	$variables ['absences'] ['total'] = $total;
}

/* ---------- FETCH STATUS VERVANGINGEN ---------- */

if (module_exists ( 'argus_uurrooster_vervanging' )) {
	$variables ['substitutions_executed'] = array (
			'graph' => array (
					array (
							'Maand',
							'Aantal',
							array (
									'role' => 'annotation' 
							) 
					) 
			),
			'max' => 0,
			'total' => 0 
	);
	
	$query = 'SELECT g.entity_id AS id '
			. 'FROM {field_data_field_gebruiker} AS g '
			. 'WHERE g.field_gebruiker_target_id = :uid AND g.bundle = :bundle';
	$variables ['substitutions_executed'] ['total'] = db_query ( $query, array (
			':uid' => $uid,
			':bundle' => 'uurrooster_vervanging'
	) )->rowCount();
	
	for($x = 0; $x < 12; $x ++) {
		$date = new DateTime ( '-' . $x . ' months' );
		
		$query = 'SELECT g.entity_id AS id ' 
				. 'FROM {field_data_field_gebruiker} AS g ' 
				. 'JOIN {node} AS n ON n.nid = g.entity_id ' 
				. 'JOIN {field_data_field_tijdstip} AS t ON t.entity_id = g.entity_id ' 
				. 'WHERE g.field_gebruiker_target_id = :uid AND g.bundle = :bundle AND MONTH(FROM_UNIXTIME(n.created)) = :month AND YEAR(FROM_UNIXTIME(n.created)) = :year';
		$result = db_query ( $query, array (
				':uid' => $uid,
				':bundle' => 'uurrooster_vervanging',
				':month' => $date->format ( 'n' ),
				':year' => $date->format ( 'Y' ) 
		) )->rowCount();
		
		if ($result > $variables ['substitutions_executed'] ['max']) {
			$variables ['substitutions_executed'] ['max'] = $result;
		}
		
		$variables ['substitutions_executed'] ['graph'] [$x + 1] = array (
				t ( $date->format ( 'M' ) ),
				$result,
				$result 
		);
	}
}

/* ---------- FETCH STATUS NASCHOLINGEN ---------- */

if (module_exists ( 'argus_nascholingen' )) {
	$variables ['cvt'] = array (
			'graph' => array (
					array (
							'Schooljaar',
							'Toegestaan',
							array (
									'role' => 'annotation'
							),
							'Geannuleerd'
					)
			),
			'max' => 0,
			'total' => 0
	);
	
	$query = 'SELECT n.nid AS id, t.field_ev_datum_value AS firstdate '
			. 'FROM {node} AS n '
			. 'JOIN {field_data_field_ev_datum} AS t ON t.entity_id = n.nid '
			. 'WHERE n.uid = :uid AND n.type = :bundle '
			. 'ORDER BY t.field_ev_datum_value ASC';
	$firstdate = db_query ( $query, array (
			':uid' => $uid,
			':bundle' => 'event_nascholing'
	) )->fetchField ( 1 );
	
	$total = 0;
	if ($firstdate) {
		$d = new DateTime( argus_schoolyear( 0, 'Y-m-d', $firstdate )['start'] );
		$now = new DateTime ();
		while ( $d < $now ) {
			$this_sy = argus_schoolyear ( 0, 'Y-m-d', $d->format ( 'Y-m-d' ) );
			
			// CVT : approved
			$query = 'SELECT n.nid AS id, t.field_ev_datum_value AS start, t.field_ev_datum_value2 AS end '
					. 'FROM {node} AS n '
					. 'JOIN {field_data_field_ev_datum} AS t ON t.entity_id = n.nid '
					. 'JOIN {field_data_field_ev_goedkeuring} AS g ON g.entity_id = n.nid '
					. 'WHERE n.uid = :uid AND n.type = :bundle '
					. 'AND g.field_ev_goedkeuring_value = :approval '
					. 'AND t.field_ev_datum_value BETWEEN :startdate AND :enddate';
			$result = db_query ( $query, array (
					':uid' => $uid,
					':bundle' => 'event_nascholing',
					':approval' => 'Toegestaan',
					':startdate' => $this_sy ['start'],
					':enddate' => $this_sy ['end']
			) )->fetchAllAssoc ( 'id' );
			
			$days_approved = 0;
			foreach ( $result as $cvt ) {
				$start = new DateTime ( $cvt->start );
				
				if ($cvt->end){
					$end = new DateTime ( $cvt->end );
				} else {
					$end = $start;
				}
				$days_approved += $start->diff ( $end )->days + 1;
			}
			
			if ($days_approved > $variables ['cvt'] ['max']) {
				$variables ['cvt'] ['max'] = $days_approved;
			}
			
			// CVT : disapproved
			$query = 'SELECT n.nid AS id, t.field_ev_datum_value AS start, t.field_ev_datum_value2 AS end '
					. 'FROM {node} AS n '
					. 'JOIN {field_data_field_ev_datum} AS t ON t.entity_id = n.nid '
					. 'JOIN {field_data_field_ev_goedkeuring} AS g ON g.entity_id = n.nid '
					. 'WHERE n.uid = :uid AND n.type = :bundle '
					. 'AND g.field_ev_goedkeuring_value = :approval '
					. 'AND t.field_ev_datum_value BETWEEN :startdate AND :enddate';
			$result = db_query ( $query, array (
					':uid' => $uid,
					':bundle' => 'event_nascholing',
					':approval' => 'Geannuleerd',
					':startdate' => $this_sy ['start'],
					':enddate' => $this_sy ['end']
			) )->fetchAllAssoc ( 'id' );
				
			$days_disapproved = 0;
			foreach ( $result as $cvt ) {
				$start = new DateTime ( $cvt->start );
			
				if ($cvt->end){
					$end = new DateTime ( $cvt->end );
				} else {
					$end = $start;
				}
				$days_disapproved += $start->diff ( $end )->days + 1;
			}
				
			if ($days_disapproved > $variables ['cvt'] ['max']) {
				$variables ['cvt'] ['max'] = $days_disapproved;
			}
			
			// Set graph
			$label = argus_schoolyear ( 0, 'y', $d->format ( 'Y-m-d' ) );
			$variables ['cvt'] ['graph'] [] = array (
					implode ( '-', $label ),
					$days_approved,
					$days_approved,
					$days_disapproved
			);
				
			$total += $days_approved + $days_disapproved;
			
			$d->modify ( '+ 1 year' );
		}
	}
	$variables ['cvt'] ['total'] = $total;
}

/**
 * -----------------------------------------------------------------------------
 * Data about PEDAGOGISCHE ACTIVITEITEN
 * -----------------------------------------------------------------------------
 */

/* ---------- FETCH STATUS KTT/HKTT ---------- */

if (module_exists ( 'argus_klasbeheer' )) {
	$query = 'SELECT n.nid AS id, t.field_klas_omschrijving_value AS name ' . 'FROM {field_data_field_klas_klastitularis} AS ktt ' . 'INNER JOIN {node} AS n ON ktt.entity_id = n.nid ' . 'RIGHT JOIN {field_data_field_klas_leerlingen} AS lln ON lln.entity_id = n.nid ' . 'INNER JOIN {field_data_field_klas_omschrijving} AS t ON t.entity_id = n.nid ' . 'WHERE ktt.field_klas_klastitularis_target_id = :uid AND n.status=1';
	$variables ['ktt'] = db_query ( $query, array (
			':uid' => $uid 
	) )->fetchAllKeyed ();
	
	$query = 'SELECT n.nid AS id, t.field_klas_omschrijving_value AS name ' . 'FROM {field_data_field_klas_hulpklastitularis} AS hktt ' . 'INNER JOIN {node} AS n ON hktt.entity_id = n.nid ' . 'RIGHT JOIN {field_data_field_klas_leerlingen} AS lln ON lln.entity_id = n.nid ' . 'INNER JOIN {field_data_field_klas_omschrijving} AS t ON t.entity_id = n.nid ' . 'WHERE hktt.field_klas_hulpklastitularis_target_id = :uid AND n.status=1';
	$variables ['hktt'] = db_query ( $query, array (
			':uid' => $uid 
	) )->fetchAllKeyed ();
}

/* ---------- FETCH STATUS EMA / IMA ---------- */

if (module_exists ( 'argus_pedagogische_activiteiten' )) {
	$variables ['emaima'] = array (
			'graph' => array (
					array (
							'Schooljaar',
							'Toegestaan',
							array (
									'role' => 'annotation'
							),
							'Geannuleerd',
							'Begeleider',
							array (
									'role' => 'annotation'
							)
					)
			),
			'max' => 0,
			'total' => 0
	);
	
	$query = 'SELECT n.nid AS id, t.field_ev_datum_value AS firstdate '
			. 'FROM {node} AS n '
			. 'JOIN {field_data_field_ev_datum} AS t ON t.entity_id = n.nid '
			. 'WHERE n.uid = :uid AND n.type = :bundle '
			. 'ORDER BY t.field_ev_datum_value ASC';
	$firstdate = db_query ( $query, array (
			':uid' => $uid,
			':bundle' => 'event_pedagogische_activiteit'
	) )->fetchField ( 1 );
	
	$total = 0;
	if ($firstdate) {
		$d = new DateTime( argus_schoolyear( 0, 'Y-m-d', $firstdate )['start'] );
		$now = new DateTime ();
		while ( $d < $now ) {
			$this_sy = argus_schoolyear ( 0, 'Y-m-d', $d->format ( 'Y-m-d' ) );
			
			// EMA-IMA : approved (organisor)
			$query = 'SELECT n.nid AS id, t.field_ev_datum_value AS start, t.field_ev_datum_value2 AS end '
					. 'FROM {node} AS n '
					. 'JOIN {field_data_field_ev_datum} AS t ON t.entity_id = n.nid '
					. 'JOIN {field_data_field_ev_goedkeuring} AS g ON g.entity_id = n.nid '
					. 'WHERE n.uid = :uid AND n.type = :bundle '
					. 'AND g.field_ev_goedkeuring_value = :approval '
					. 'AND t.field_ev_datum_value BETWEEN :startdate AND :enddate';
			$result = db_query ( $query, array (
					':uid' => $uid,
					':bundle' => 'event_pedagogische_activiteit',
					':approval' => 'Toegestaan',
					':startdate' => $this_sy ['start'],
					':enddate' => $this_sy ['end']
			) )->fetchAllAssoc ( 'id' );
			
			$days_approved = 0;
			foreach ( $result as $r ) {
				$start = new DateTime ( $r->start );
				
				if ($r->end){
					$end = new DateTime ( $r->end );
				} else {
					$end = $start;
				}
				$days_approved += $start->diff ( $end )->days + 1;
			}
			
			if ($days_approved > $variables ['emaima'] ['max']) {
				$variables ['emaima'] ['max'] = $days_approved;
			}
			
			// EMA-IMA : disapproved (organisor)
			$query = 'SELECT n.nid AS id, t.field_ev_datum_value AS start, t.field_ev_datum_value2 AS end '
					. 'FROM {node} AS n '
					. 'JOIN {field_data_field_ev_datum} AS t ON t.entity_id = n.nid '
					. 'JOIN {field_data_field_ev_goedkeuring} AS g ON g.entity_id = n.nid '
					. 'WHERE n.uid = :uid AND n.type = :bundle '
					. 'AND g.field_ev_goedkeuring_value = :approval '
					. 'AND t.field_ev_datum_value BETWEEN :startdate AND :enddate';
			$result = db_query ( $query, array (
					':uid' => $uid,
					':bundle' => 'event_pedagogische_activiteit',
					':approval' => 'Geannuleerd',
					':startdate' => $this_sy ['start'],
					':enddate' => $this_sy ['end']
			) )->fetchAllAssoc ( 'id' );
				
			$days_disapproved = 0;
			foreach ( $result as $r ) {
				$start = new DateTime ( $r->start );
			
				if ($r->end){
					$end = new DateTime ( $r->end );
				} else {
					$end = $start;
				}
				$days_disapproved += $start->diff ( $end )->days + 1;
			}
				
			if ($days_disapproved > $variables ['emaima'] ['max']) {
				$variables ['emaima'] ['max'] = $days_disapproved;
			}
			
			// EMA-IMA : attendant
			$query = 'SELECT n.nid AS id, t.field_ev_datum_value AS start, t.field_ev_datum_value2 AS end '
					. 'FROM {node} AS n '
					. 'JOIN {field_data_field_ev_datum} AS t ON t.entity_id = n.nid '
					. 'JOIN {field_data_field_ev_goedkeuring} AS g ON g.entity_id = n.nid '
					. 'JOIN {field_data_field_ev_begeleiders} AS b ON b.entity_id = n.nid '
					. 'WHERE b.field_ev_begeleiders_target_id = :uid AND n.type = :bundle '
					. 'AND g.field_ev_goedkeuring_value = :approval '
					. 'AND t.field_ev_datum_value BETWEEN :startdate AND :enddate';
			$result = db_query ( $query, array (
					':uid' => $uid,
					':bundle' => 'event_pedagogische_activiteit',
					':approval' => 'Toegestaan',
					':startdate' => $this_sy ['start'],
					':enddate' => $this_sy ['end']
			) )->fetchAllAssoc ( 'id' );
				
			$days_attendant = 0;
			foreach ( $result as $r ) {
				$start = new DateTime ( $r->start );
			
				if ($r->end){
					$end = new DateTime ( $r->end );
				} else {
					$end = $start;
				}
				$days_attendant += $start->diff ( $end )->days + 1;
			}
				
			if ($days_attendant > $variables ['emaima'] ['max']) {
				$variables ['emaima'] ['max'] = $days_attendant;
			}
			
			// Set graph
			$label = argus_schoolyear ( 0, 'y', $d->format ( 'Y-m-d' ) );
			$variables ['emaima'] ['graph'] [] = array (
					implode ( '-', $label ),
					$days_approved,
					$days_approved,
					$days_disapproved,
					$days_attendant,
					$days_attendant
			);
				
			$total += $days_approved + $days_disapproved;
			
			$d->modify ( '+ 1 year' );
		}
	}
	$variables ['emaima'] ['total'] = $total;
}

/* ---------- FETCH STATUS PEDAGOGISCHE MELDINGEN ---------- */

if (module_exists ( 'argus_meldingen' )) {
	$variables ['pupil_reports'] = array (
			'graph' => array (
					array (
							'Maand',
							'Aantal',
							array (
									'role' => 'annotation' 
							) 
					) 
			),
			'max' => 0,
			'total' => 0 
	);
	
	$query = 'SELECT nid FROM {node} AS n WHERE n.uid = :uid AND n.type = :bundle';
	$variables ['pupil_reports'] ['total'] = db_query ( $query, array (
			':uid' => $uid,
			':bundle' => 'lvs_melding' 
	) )->rowCount ();
	
	for($x = 0; $x < 12; $x ++) {
		$date = new DateTime ( '-' . $x . ' months' );
		
		$query = 'SELECT nid FROM {node} AS n WHERE n.uid = :uid AND n.type = :bundle AND MONTH(FROM_UNIXTIME(n.created)) = :month AND YEAR(FROM_UNIXTIME(n.created)) = :year';
		$result = db_query ( $query, array (
				':uid' => $uid,
				':bundle' => 'lvs_melding',
				':month' => $date->format ( 'n' ),
				':year' => $date->format ( 'Y' ) 
		) )->rowCount ();
		
		if ($result > $variables ['pupil_reports'] ['max']) {
			$variables ['pupil_reports'] ['max'] = $result;
		}
		
		$variables ['pupil_reports'] ['graph'] [$x + 1] = array (
				t ( $date->format ( 'M' ) ),
				$result,
				$result 
		);
	}
}

/**
 * -----------------------------------------------------------------------------
 * Data about INFRASTRUCTURE
 * -----------------------------------------------------------------------------
 */

/* ---------- FETCH STATUS SLEUTELS ---------- */

if (module_exists ( 'argus_sleutelbeheer' )) {
	$query = 'SELECT n.nid AS id, sn.field_sleutel_nummer_value AS nummer, so.field_sleutel_omschrijving_value AS omschrijving ' . 'FROM {field_data_field_sleutel_uitlening_uitlener} AS suu ' . 'JOIN {field_data_field_sleutel_uitlening} AS su ON su.field_sleutel_uitlening_value = suu.entity_id ' . 'JOIN {node} AS n ON n.nid = su.entity_id ' . 'JOIN {field_data_field_sleutel_omschrijving} AS so ON so.entity_id = su.entity_id ' . 'JOIN {field_data_field_sleutel_nummer} AS sn ON sn.entity_id = su.entity_id ' . 'WHERE suu.field_sleutel_uitlening_uitlener_target_id = :uid';
	$variables ['keys'] = db_query ( $query, array (
			':uid' => $uid 
	) )->fetchAllAssoc ( 'id' );
}

/* ---------- FETCH STATUS ONTLENINGEN ---------- */

if (module_exists ( 'argus_ontleningen' )) {
	$query = 'SELECT n.nid AS id, m.field_ontleen_materiaal_value AS materiaal, i.field_ontleen_inventarisnummer_value AS inventarisnummer, t.field_ontleen_terugop_value AS status '
			. 'FROM {node} AS n '
			. 'LEFT JOIN {field_data_field_ontleen_ontlener} AS o ON o.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_ontleen_materiaal} AS m ON m.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_ontleen_inventarisnummer} AS i ON i.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_ontleen_periode} AS p ON p.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_ontleen_terugop} AS t ON t.entity_id = n.nid '
			. 'WHERE n.type = :bundle AND o.field_ontleen_ontlener_target_id = :uid '
			. 'ORDER BY p.field_ontleen_periode_value DESC';
	$variables ['ontleningen'] = db_query ( $query, array (
			':bundle' => 'ontlening',
			':uid' => $uid
	) )->fetchAllAssoc('id');
}

/* ---------- FETCH STATUS TECHNISCHE MELDINGEN ---------- */

if (module_exists ( 'argus_technische_meldingen' )) {
	$variables ['technical_reports'] = array (
			'graph' => array (
					array (
							'Maand',
							'Aantal',
							array (
									'role' => 'annotation' 
							) 
					) 
			),
			'max' => 0,
			'total' => 0 
	);
	
	$query = 'SELECT nid ' . 'FROM {node} AS n ' . 'WHERE n.uid = :uid AND n.type = :bundle';
	$variables ['technical_reports'] ['total'] = db_query ( $query, array (
			':uid' => $uid,
			':bundle' => 'technische_melding' 
	) )->rowCount ();
	
	for($x = 0; $x < 12; $x ++) {
		$date = new DateTime ( '-' . $x . ' months' );
		
		$query = 'SELECT nid ' . 'FROM {node} AS n ' . 'WHERE n.uid = :uid AND n.type = :bundle AND MONTH(FROM_UNIXTIME(n.created)) = :month AND YEAR(FROM_UNIXTIME(n.created)) = :year';
		$result = db_query ( $query, array (
				':uid' => $uid,
				':bundle' => 'technische_melding',
				':month' => $date->format ( 'n' ),
				':year' => $date->format ( 'Y' ) 
		) )->rowCount ();
		
		if ($result > $variables ['technical_reports'] ['max']) {
			$variables ['technical_reports'] ['max'] = $result;
		}
		
		$variables ['technical_reports'] ['graph'] [$x + 1] = array (
				t ( $date->format ( 'M' ) ),
				$result,
				$result 
		);
	}
}

/**
 * -----------------------------------------------------------------------------
 * Data about EFFORTS
 * -----------------------------------------------------------------------------
 */

/* ---------- FETCH STATUS ROLLEN ---------- */

$variables ['user_roles'] = $account->roles;
sort ( $variables ['user_roles'] );

$variables ['baserole'] ['id'] = $account->field_user_sms_basisrol [LANGUAGE_NONE] [0] ['value'];
$f = field_info_field ( 'field_user_sms_basisrol' );
$variables ['baserole'] ['title'] = $f ['settings'] ['allowed_values'] [$variables ['baserole'] ['id']];

/* ---------- FETCH STATUS VAKGROEPEN ---------- */

if (module_exists ( 'argus_vakgroepen' )) {
	$query = 'SELECT n.entity_id AS id, n.field_vgwg_naam_value AS name ' 
			. 'FROM {field_data_field_vgwg_leden} AS l ' 
			. 'INNER JOIN {field_data_field_vgwg_naam} AS n ON l.entity_id = n.entity_id ' 
			. 'INNER JOIN {field_data_field_voorzitter} AS v ON l.entity_id = v.entity_id ' 
			. 'WHERE l.field_vgwg_leden_target_id = :uid OR v.field_voorzitter_target_id = :uid';
	$variables ['vgwg'] = db_query ( $query, array (
			':uid' => $uid 
	) )->fetchAllKeyed ();
}

/* ---------- FETCH STATUS PROJECTGROEPEN ---------- */

if (module_exists ( 'argus_projectgroepen' )) {
	$query = 'SELECT n.entity_id AS id, n.field_vgwg_naam_value AS name ' 
			. 'FROM {node} AS n ' 
			. 'LEFT JOIN {field_data_field_personeelsleden} AS p ON p.entity_id = n.nid ' 
			. 'LEFT JOIN {field_data_field_voorzitter} AS v ON v.entity_id = n.nid ' 
			. 'WHERE p.field_personelleden_target_id = :uid OR v.field_voorzitter_target_id = :uid';
	$variables ['vgwg'] = db_query ( $query, array (
			':uid' => $uid 
	) )->fetchAllKeyed ();
}

/* ---------- FETCH STATUS WERKGROEPEN ---------- */

/* ---------- FETCH STATUS FEEDBACKGROEPEN ---------- */

/**
 * -----------------------------------------------------------------------------
 * Data about HRM
 * -----------------------------------------------------------------------------
 */

/* ---------- FETCH STATUS PLANNINGSGESPREKKEN ---------- */

if (module_exists ( 'argus_hrm' )) {
	$query = 'SELECT n.nid AS id, t.field_tijdstip_value AS datum '
			. 'FROM {node} AS n '
			. 'LEFT JOIN {field_data_field_personeelslid} AS p ON p.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_tijdstip} AS t ON t.entity_id = n.nid '
			. 'WHERE n.type = :bundle AND p.field_personeelslid_target_id = :uid '
			. 'ORDER BY t.field_tijdstip_value DESC';
	$variables ['hrm']['planningsgesprekken'] = db_query ( $query, array (
			':bundle' => 'hrm_planningsgesprek',
			':uid' => $uid
	) )->fetchAllKeyed ();
}

/* ---------- FETCH STATUS FLITSBEZOEKEN ---------- */

/* ---------- FETCH STATUS KLASBEZOEKEN ---------- */

/* ---------- FETCH STATUS FUNCTIONERINGSGESPREKKEN ---------- */

if (module_exists ( 'argus_hrm' )) {
	$query = 'SELECT n.nid AS id, t.field_tijdstip_value AS datum '
			. 'FROM {node} AS n '
			. 'LEFT JOIN {field_data_field_personeelslid} AS p ON p.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_tijdstip} AS t ON t.entity_id = n.nid '
			. 'WHERE n.type = :bundle AND p.field_personeelslid_target_id = :uid '
			. 'ORDER BY t.field_tijdstip_value DESC';
	$variables ['hrm']['functioneringsgesprekken'] = db_query ( $query, array (
			':bundle' => 'hrm_functioneringsgesprek',
			':uid' => $uid
	) )->fetchAllKeyed ();
}

/* ---------- FETCH STATUS EVALUATIEGESPREKKEN ---------- */

if (module_exists ( 'argus_hrm' )) {
	$query = 'SELECT n.nid AS id, t.field_tijdstip_value AS datum '
			. 'FROM {node} AS n '
			. 'LEFT JOIN {field_data_field_personeelslid} AS p ON p.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_tijdstip} AS t ON t.entity_id = n.nid '
			. 'WHERE n.type = :bundle AND p.field_personeelslid_target_id = :uid '
			. 'ORDER BY t.field_tijdstip_value DESC';
	$variables ['hrm']['evaluatiegesprekken'] = db_query ( $query, array (
			':bundle' => 'hrm_evaluatiegesprek',
			':uid' => $uid
	) )->fetchAllKeyed ();
}

/**
 * -----------------------------------------------------------------------------
 * Data about EXTRA
 * -----------------------------------------------------------------------------
 */

/* ---------- FETCH STATUS PROJECTEN ---------- */

if (module_exists ( 'argus_projecten' )) {
	$query = 'SELECT n.nid AS id, n.title AS name '
			. 'FROM {node} AS n '
			. 'LEFT JOIN {field_data_field_leerkracht} AS l ON l.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_personeelsleden} AS p ON p.entity_id = n.nid '
			. 'LEFT JOIN {field_data_field_looptijd} AS t ON t.entity_id = n.nid '
			. 'WHERE n.type = :bundle AND (l.field_leerkracht_target_id = :uid OR p.field_personeelsleden_target_id = :uid) '
			. 'ORDER BY t.field_looptijd_value DESC';
	$variables ['projects'] = db_query ( $query, array (
			':bundle' => 'project',
			':uid' => $uid
	) )->fetchAllKeyed ();
}

/* ---------- FETCH STATUS WERKEN VOOR DERDEN ---------- */

if (module_exists ( 'argus_werken_voor_derden' )) {
	$variables ['works'] = array (
			'graph' => array (
					array (
							'Schooljaar',
							'Werken',
							array (
									'role' => 'annotation'
							)
					)
			),
			'max' => 0,
			'total' => 0
	);

	$query = 'SELECT n.nid AS id, t.field_aanvraagdatum_value AS firstdate '
			. 'FROM {node} AS n '
			. 'JOIN {field_data_field_leerkracht} AS l ON l.entity_id = n.nid '
			. 'JOIN {field_data_field_aanvraagdatum} AS t ON t.entity_id = n.nid '
			. 'WHERE l.field_leerkracht_target_id = :uid AND n.type = :bundle '
			. 'ORDER BY t.field_aanvraagdatum_value ASC';
	$firstdate = db_query ( $query, array (
			':uid' => $uid,
			':bundle' => 'werk_voor_derden'
	) )->fetchField ( 1 );

	$total = 0;
	if ($firstdate) {
		$d = new DateTime( argus_schoolyear( 0, 'Y-m-d', $firstdate )['start'] );
		$now = new DateTime ();
		while ( $d < $now ) {
			$this_sy = argus_schoolyear ( 0, 'Y-m-d', $d->format ( 'Y-m-d' ) );
			
			$query = 'SELECT n.nid AS id '
					. 'FROM {node} AS n '
					. 'JOIN {field_data_field_leerkracht} AS l ON l.entity_id = n.nid '
					. 'JOIN {field_data_field_aanvraagdatum} AS t ON t.entity_id = n.nid '
					. 'WHERE l.field_leerkracht_target_id = :uid AND n.type = :bundle '
					. 'AND t.field_aanvraagdatum_value BETWEEN :startdate AND :enddate';
			$result = db_query ( $query, array (
					':uid' => $uid,
					':bundle' => 'werk_voor_derden',
					':startdate' => $this_sy ['start'],
					':enddate' => $this_sy ['end']
			) )->rowCount();
			
			if ($result > $variables ['works'] ['max']) {
				$variables ['works'] ['max'] = $result;
			}
			
			// Set graph
			$label = argus_schoolyear ( 0, 'y', $d->format ( 'Y-m-d' ) );
			$variables ['works'] ['graph'] [] = array (
					implode ( '-', $label ),
					$result,
					$result
			);

			$total += $result;
				
			$d->modify ( '+ 1 year' );
		}
	}
	$variables ['works'] ['total'] = $total;
}

// Preprocess fields.
if ($_SERVER ['HTTP_HOST'] == 'localhost') {
	dpm ( $variables );
	print theme ( 'status_messages' );
}
field_attach_preprocess ( 'user', $account, $variables ['elements'], $variables );
