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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
drupal_add_css ( drupal_get_path ( 'module', 'argus_uurrooster' ) . '/css/argus_uurrooster.css' );
drupal_add_js ( drupal_get_path ( 'module', 'argus_uurrooster' ) . '/js/argus_uurrooster.js' );

global $user, $base_url;

if (! isset ( $uid )) {
	$uid = 0;
}
if (! isset ( $cid )) {
	$cid = 0;
}
if (! isset ( $rid )) {
	$rid = 0;
}

$query = new EntityFieldQuery ();
$query->entityCondition ( 'entity_type', 'node' )->entityCondition ( 'bundle', 'uurrooster_periode' )->propertyCondition ( 'status', NODE_PUBLISHED )->fieldCondition ( 'field_uurrooster_periode_dag', 'value', 1, '=' );
$periods = $query->execute ();

$query = new EntityFieldQuery ();
$query->entityCondition ( 'entity_type', 'node' )->entityCondition ( 'bundle', 'uurrooster_periode' )->propertyCondition ( 'status', NODE_PUBLISHED )->fieldOrderBy ( 'field_uurrooster_periode_dag', 'value', 'DESC' )->range ( 0, 1 );
$days = $query->execute ();
if (count ( $days )) {
	$days = ( array ) node_load ( key ( $days ['node'] ) );
	$days = $days ['field_uurrooster_periode_dag'] [LANGUAGE_NONE] [0] ['value'];
}

if (array_key_exists ( 's', $_GET )) {
	$start = $_GET ['s'];
	$queryStr = '?s=' . $_GET ['s'];
} else {
	$start = date ( 'd-m-Y' );
	$queryStr = '';
}
$currentStartOfWeek = new DateTime ( $start );
$currentStartOfWeek->modify ( '+1 days' );
$currentStartOfWeek->modify ( 'last monday' );

$previousStartOfWeek = clone $currentStartOfWeek;
$previousStartOfWeek = date_format ( $previousStartOfWeek->sub ( date_interval_create_from_date_string ( '7 days' ) ), 'd-m-Y' );
$nextStartOfWeek = clone $currentStartOfWeek;
$nextStartOfWeek = date_format ( $nextStartOfWeek->add ( date_interval_create_from_date_string ( '7 days' ) ), 'd-m-Y' );

?>

<h2>
<?php
if (isset ( $title )) {
	print t ( 'Uurrooster van ' ) . $title;
} else {
	print t ( 'Selecteer in de linkerbalk een uurrooster' );
}
?>
 - week van <?php print format_date($currentStartOfWeek->getTimestamp(), 'custom', 'd F Y'); ?>
</h2>

<?php if ($uid || $cid || $rid) { ?>

<table class="argus_uurrooster_schedule_nav">
	<tr>
		<td id="argus_uurrooster_schedule_nav_previous"><a
			href="<?php print url(current_path(), array('absolute' => TRUE)).'?s='.$previousStartOfWeek; ?>">&lt;
				vorige week</a></td>
		<td id="argus_uurrooster_schedule_nav_today"><a
			href="<?php print url(current_path(), array('absolute' => TRUE)); ?>">deze
				week</a></td>
		<td id="argus_uurrooster_schedule_nav_next"><a
			href="<?php print url(current_path(), array('absolute' => TRUE)).'?s='.$nextStartOfWeek; ?>">volgende
				week &gt;</a></td>
	</tr>
</table>

<table class="argus_uurrooster_schedule">
	<thead>
		<tr>
			<th></th>
		    <?php
	
	$currentDays = clone $currentStartOfWeek;
	if (count ( $days )) {
		for($d = 0; $d < $days; $d ++) {
			echo '<th style="width: 15%;">' . t ( $currentDays->format ( 'l' ) ) . '</th>';
			$currentDays->modify ( '+1 days' );
		}
	}
	
	echo '<th style="font-style: italic;" class="argus_uurrooster_schedule_details_TD">' . t ( 'details' ) . '</th>';
	?>
	    </tr>
	</thead>
	<tbody>
<?php
	$start = TRUE;
	if (count ( $periods )) {
		foreach ( $periods ['node'] as $p => $period ) {
			$period = ( array ) node_load ( $p );
			echo '<tr>';
			echo '<td style="background-color: #eee;">' . substr ( $period ['field_uurrooster_periode_start'] [LANGUAGE_NONE] [0] ['value'], 0, 2 ) . ':' . substr ( $period ['field_uurrooster_periode_start'] [LANGUAGE_NONE] [0] ['value'], 2 ) . '<br />-<br />' . substr ( $period ['field_uurrooster_periode_eind'] [LANGUAGE_NONE] [0] ['value'], 0, 2 ) . ':' . substr ( $period ['field_uurrooster_periode_eind'] [LANGUAGE_NONE] [0] ['value'], 2 ) . '</td>';
			for($d = 0; $d < $days; $d ++) {
				$substitution = array ();
				$supervision = NULL;
				
				$query = new EntityFieldQuery ();
				$query->entityCondition ( 'entity_type', 'node' )->entityCondition ( 'bundle', 'uurrooster_periode' )->propertyCondition ( 'status', NODE_PUBLISHED )->fieldCondition ( 'field_uurrooster_periode_dag', 'value', $d + 1, '=' )->fieldCondition ( 'field_uurrooster_periode_periode', 'value', $period ['field_uurrooster_periode_periode'] [LANGUAGE_NONE] [0] ['value'], '=' );
				$currentPeriod = $query->execute ();
				
				if ($currentPeriod) {
					$pid = key ( $currentPeriod ['node'] );
					
					$query = new EntityFieldQuery ();
					$query->entityCondition ( 'entity_type', 'node' )->entityCondition ( 'bundle', 'uurrooster_les' )->propertyCondition ( 'status', NODE_PUBLISHED )->fieldCondition ( 'field_uurrooster_les_periode', 'target_id', $pid, '=' );
					if ($cid) {
						$query->fieldCondition ( 'field_uurrooster_les_klassen', 'target_id', $cid, '=' );
						$type = 'klas';
					} elseif ($rid) {
						$query->fieldCondition ( 'field_uurrooster_les_lokaal', 'target_id', $rid, '=' );
						$type = 'lokaal';
					} else {
						// Check substitutions
						$queryS = 'SELECT DISTINCT(l.field_uurrooster_perm_vervanger_target_id) AS id ' . 'FROM {field_data_field_uurrooster_perm_vervanger} AS l ' . 'INNER JOIN {field_data_field_uurrooster_perm_periode} AS p ON p.entity_id = l.entity_id ' . 'WHERE l.field_uurrooster_perm_vervanger_target_id = :uid ' . 'AND p.field_uurrooster_perm_periode_target_id = :pid';
						$substitution = db_query ( $queryS, array (
								':uid' => $uid,
								':pid' => $pid 
						) )->fetchCol ();
						
						// Check supervisions
						$queryS = 'SELECT DISTINCT(t.entity_id) AS nid, n.title AS title ' . 'FROM {field_data_field_uurrooster_toez_toezichter} AS t ' . 'INNER JOIN {field_data_field_uurrooster_toez_locatie} AS l ON t.entity_id = l.entity_id ' . 'INNER JOIN {field_data_field_uurrooster_toez_start} AS p ON p.entity_id = l.field_uurrooster_toez_locatie_target_id ' . 'INNER JOIN {field_data_field_uurrooster_toez_dag} AS d ON d.entity_id = l.entity_id ' . 'INNER JOIN {node} AS n ON n.nid = t.entity_id ' . 'WHERE t.field_uurrooster_toez_toezichter_target_id = :uid ' . 'AND p.field_uurrooster_toez_start_target_id = :pid ' . 'AND d.field_uurrooster_toez_dag_value = :did';
						$supervision = db_query ( $queryS, array (
								':uid' => $uid,
								':did' => $d + 1,
								':pid' => $pid 
						) )->fetchAssoc ();
						
						$query->fieldCondition ( 'field_uurrooster_les_leerkracht', 'target_id', $uid, '=' );
						$type = 'leerkracht';
					}
					$currentLesson = $query->execute ();
					$cntr = $query->count ()->execute ();
					
					$thisDay = clone $currentStartOfWeek;
					$thisDay->add ( date_interval_create_from_date_string ( $d . ' day' ) );
					$startOfLesson = new DateTime ( $thisDay->format ( 'Y-m-d ' ) . ' ' . substr ( $period ['field_uurrooster_periode_start'] [LANGUAGE_NONE] [0] ['value'], 0, 2 ) . ':' . substr ( $period ['field_uurrooster_periode_start'] [LANGUAGE_NONE] [0] ['value'], 2 ) . ':00' );
					unset ( $substituteNow );
					
					$startOfBlock = $thisDay->format ( 'Y-m-d' );
					
					echo '<td';
					if (count ( $currentLesson ) > 0) {
						$currentLesson = ( array ) node_load ( key ( $currentLesson ['node'] ) );
						
						/* Check if this lesson needs substitution */
						$lessonSubstituted = '';
						$substitute = '';
						$querySubs = 'SELECT vu.field_gebruiker_target_id AS uid ' . 'FROM {field_data_field_uurr_vervanging_vervmoment} AS vm ' . 'INNER JOIN {field_data_field_gebruiker} AS vu ON vu.entity_id = vm.entity_id ' . 'INNER JOIN {field_data_field_tijdstip} AS t ON t.entity_id = vm.entity_id ' . 'WHERE vm.field_uurr_vervanging_vervmoment_target_id = :lid AND vu.bundle = :bundle ' . 'AND t.bundle = :bundle AND DATE_FORMAT(t.field_tijdstip_value,\'%Y-%m-%d\') = :start';
						$substitutions = db_query ( $querySubs, array (
								':bundle' => 'uurrooster_vervanging',
								':lid' => $currentLesson ['nid'],
								':start' => $thisDay->format ( 'Y-m-d' ) 
						) )->fetchAllAssoc ( 'uid' );
						if (count ( $substitutions ) > 0) {
							$lessonSubstituted = ' substituted';
							if (key ( $substitutions ) == 0) {
								$lessonSubstituted .= 'NotOK';
							} else {
								$substitute = '<div><a style="color: red !important; font-weight: bold;" href="' . base_path () . 'uurrooster/leerkracht/' . key ( $substitutions ) . $queryStr . '">' . argus_get_user_realname ( key ( $substitutions ) ) . '</a></div>';
							}
						}
						
						echo ' id="lesson_' . $currentLesson ['nid'] . '"' . $lessonSubstituted;
						echo ' class="lesson pack' . $currentLesson ['field_uurrooster_les_id_untis'] [LANGUAGE_NONE] [0] ['value'] . $lessonSubstituted . '"';
						echo ' onclick="argus_uurrooster_getDetails(' . $currentLesson ['nid'] . ',\'' . $type . '\')">' . $substitute;
						
						$currentSubject = '';
						if (count ( $currentLesson ['field_uurrooster_les_vak'] ) > 0) {
							$currentSubject = ( array ) node_load ( $currentLesson ['field_uurrooster_les_vak'] [LANGUAGE_NONE] [0] ['target_id'] );
							echo '<div style="font-weight: bold; font-size: 1.2em;">' . $currentSubject ['title'] . '</div>';
						}
						
						if ($cid || $rid) {
							$currentTeacher = '';
							if (count ( $currentLesson ['field_uurrooster_les_leerkracht'] ) > 0) {
								$currentTeacher = $currentLesson ['field_uurrooster_les_leerkracht'] [LANGUAGE_NONE] [0] ['target_id'];
								echo '<div style="font-size: smaller;"><a href="' . base_path () . 'uurrooster/leerkracht/' . $currentTeacher . $queryStr . '">' . argus_get_user_realname ( $currentTeacher ) . '</a></div>';
							}
						}
						
						$currentClasses = '';
						if (count ( $currentLesson ['field_uurrooster_les_klassen'] ) > 0) {
							foreach ( $currentLesson ['field_uurrooster_les_klassen'] [LANGUAGE_NONE] as $class ) {
								$currentClass = ( array ) node_load ( $class ['target_id'] );
								$currentClasses .= '<a href="' . base_path () . 'uurrooster/klas/' . $currentClass ['nid'] . $queryStr . '">' . $currentClass ['title'] . '</a> ';
							}
							echo '<div style="font-size: 1.1em;">' . $currentClasses . '</div>';
						}
						
						if ($rid == 0) {
							$currentRoom = '';
							if (count ( $currentLesson ['field_uurrooster_les_lokaal'] ) > 0) {
								$currentRoom = ( array ) node_load ( $currentLesson ['field_uurrooster_les_lokaal'] [LANGUAGE_NONE] [0] ['target_id'] );
								echo '<div><a href="' . base_path () . 'uurrooster/lokaal/' . $currentRoom ['nid'] . $queryStr . '">' . $currentRoom ['title'] . '</a></div>';
							}
						}
						
						if ($cntr > 1) {
							echo '<div style="font-size: 0.9em; font-style: italic;">nog ' . ($cntr - 1) . ' les(sen)</div>';
						}
					} elseif (count ( $substitution ) > 0 && isset ( $startOfLesson )) {
						/* Check if this substitution needs substitution */
						$needsSubstitution = '';
						$substitute = '';
						$querySubs = 'SELECT vu.field_gebruiker_target_id AS uid ' . 'FROM {field_data_field_uurr_vervanging_vervmoment} AS vm ' . 'INNER JOIN {field_data_field_uurrooster_perm_periode} AS p ON p.entity_id = vm.field_uurr_vervanging_vervmoment_target_id ' . 'INNER JOIN {field_data_field_gebruiker} AS vu ON vu.entity_id = vm.entity_id ' . 'INNER JOIN {field_data_field_tijdstip} AS t ON t.entity_id = vm.entity_id ' . 'WHERE p.field_uurrooster_perm_periode_target_id = :pid AND vu.bundle = :bundle ' . 'AND t.bundle = :bundle AND DATE_FORMAT(t.field_tijdstip_value,\'%Y-%m-%d\') = :start';
						$substitutions = db_query ( $querySubs, array (
								':bundle' => 'uurrooster_vervanging',
								':pid' => $pid,
								':start' => $thisDay->format ( 'Y-m-d' ) 
						) )->fetchAllAssoc ( 'uid' );
						if (count ( $substitutions ) > 0) {
							$needsSubstitution = ' substituted';
							if (key ( $substitutions ) == 0) {
								$needsSubstitution .= 'NotOK';
							} else {
								$substitute = '<a style="color: red !important; font-weight: bold;" href="' . base_path () . 'uurrooster/leerkracht/' . key ( $substitutions ) . $queryStr . '">' . argus_get_user_realname ( key ( $substitutions ) ) . '</a><br />';
							}
						}
						
						/* Check if there is now a substitution */
						$substituteNow = '';
						$querySubs = 'SELECT vm.field_uurr_vervanging_vervmoment_target_id ' . 'FROM {field_data_field_uurr_vervanging_vervmoment} AS vm ' . 'INNER JOIN {field_data_field_gebruiker} AS vu ON vu.entity_id = vm.entity_id ' . 'INNER JOIN {field_data_field_uurrooster_les_periode} AS lp ON lp.entity_id = vm.field_uurr_vervanging_vervmoment_target_id ' . 'INNER JOIN {field_data_field_tijdstip} AS t ON t.entity_id = vm.entity_id ' . 'WHERE lp.field_uurrooster_les_periode_target_id = :pid AND vu.field_gebruiker_target_id = :uid ' . 'AND t.bundle = :bundle AND DATE_FORMAT(t.field_tijdstip_value,\'%Y-%m-%d\') = :start';
						$substitutions = db_query ( $querySubs, array (
								':bundle' => 'uurrooster_vervanging',
								':pid' => $pid,
								':uid' => $uid,
								':start' => $thisDay->format ( 'Y-m-d' ) 
						) )->fetchCol ();
						if (count ( $substitutions ) > 0) {
							foreach ( $substitutions as $s ) {
								$currentSubstitution = node_load ( $s );
								$teacher = $currentSubstitution->field_uurrooster_les_leerkracht [LANGUAGE_NONE] [0] ['target_id'];
								$groups = array ();
								if (array_key_exists ( LANGUAGE_NONE, $currentSubstitution->field_uurrooster_les_klassen )) {
									foreach ( $currentSubstitution->field_uurrooster_les_klassen [LANGUAGE_NONE] as $group ) {
										$g = node_load ( $group ['target_id'] );
										$groups [] = $g->title;
									}
									sort ( $groups );
									$substituteNow .= '<div><a style="color: red !important; font-weight: normal; font-size: 0.9em;" href="' . base_path () . 'uurrooster/leerkracht/' . $teacher . $queryStr . '">' . argus_get_user_realname ( $teacher ) . ' (' . implode ( ',', $groups ) . ')</a></div>';
								}
							}
						}
						
						echo ' class="' . $needsSubstitution . '" style="vertical-align: middle;"><div class="substitution">' . $substitute . 'permanentie' . $substituteNow . '</div>';
					} else {
						echo '> ';
					}
					
					// if (!isset($substituteNow) && !($rid || $cid)){ > fix om toezichten te kunnen zien na permanenties
					if (! ($rid || $cid)) {
						// Check substitutions alternatives as fixed substitution
						$querySubs = 'SELECT DISTINCT(vm.field_uurr_vervanging_vervmoment_target_id) AS lid ' . 'FROM {field_data_field_uurr_vervanging_vervmoment} AS vm ' . 'INNER JOIN {field_data_field_gebruiker} AS vu ON vu.entity_id = vm.entity_id ' . 'INNER JOIN {field_data_field_tijdstip} AS t ON t.entity_id = vm.entity_id ' . 'INNER JOIN {field_data_field_uurrooster_les_periode} AS lp ON lp.entity_id = vm.field_uurr_vervanging_vervmoment_target_id ' . 'WHERE lp.field_uurrooster_les_periode_target_id = :pid ' . 'AND vu.bundle = :bundle ' . 'AND vu.field_gebruiker_target_id = :uid ' . 'AND t.bundle = :bundle ' . 'AND DATE_FORMAT(t.field_tijdstip_value,\'%Y-%m-%d\') = :start';
						$substitutions = db_query ( $querySubs, array (
								':bundle' => 'uurrooster_vervanging',
								':uid' => $uid,
								':pid' => $pid,
								':start' => $thisDay->format ( 'Y-m-d' ) 
						) )->fetchCol ();
						if (count ( $substitutions ) > 0) {
							echo '<div class="substitution" style="font-weight: normal; color: inherit;">';
							foreach ( $substitutions as $s ) {
								$currentLesson = ( array ) node_load ( $s );
								
								echo '<div id="lesson_' . $currentLesson ['nid'] . '"';
								echo ' class="lesson pack' . $currentLesson ['field_uurrooster_les_id_untis'] [LANGUAGE_NONE] [0] ['value'] . '"';
								echo ' onclick="argus_uurrooster_getDetails(' . $currentLesson ['nid'] . ',\'' . $type . '\')">';
								
								$currentSubject = '';
								if (count ( $currentLesson ['field_uurrooster_les_vak'] ) > 0) {
									$currentSubject = ( array ) node_load ( $currentLesson ['field_uurrooster_les_vak'] [LANGUAGE_NONE] [0] ['target_id'] );
									echo '<div style="font-weight: bold; font-size: 1.2em;">' . $currentSubject ['title'] . '</div>';
								}
								
								$currentTeacher = '';
								if (count ( $currentLesson ['field_uurrooster_les_leerkracht'] ) > 0) {
									$currentTeacher = $currentLesson ['field_uurrooster_les_leerkracht'] [LANGUAGE_NONE] [0] ['target_id'];
									echo '<div style="font-size: smaller;"><a href="' . base_path () . 'uurrooster/leerkracht/' . $currentTeacher . $queryStr . '">' . argus_get_user_realname ( $currentTeacher ) . '</a></div>';
								}
								
								$currentClasses = '';
								if (count ( $currentLesson ['field_uurrooster_les_klassen'] ) > 0) {
									foreach ( $currentLesson ['field_uurrooster_les_klassen'] [LANGUAGE_NONE] as $class ) {
										$currentClass = ( array ) node_load ( $class ['target_id'] );
										$currentClasses .= '<a href="' . base_path () . 'uurrooster/klas/' . $currentClass ['nid'] . $queryStr . '">' . $currentClass ['title'] . '</a> ';
									}
									echo '<div style="font-size: 1.1em;">' . $currentClasses . '</div>';
								}
								
								if ($rid == 0) {
									$currentRoom = '';
									if (count ( $currentLesson ['field_uurrooster_les_lokaal'] ) > 0) {
										$currentRoom = ( array ) node_load ( $currentLesson ['field_uurrooster_les_lokaal'] [LANGUAGE_NONE] [0] ['target_id'] );
										echo '<div><a href="' . base_path () . 'uurrooster/lokaal/' . $currentRoom ['nid'] . $queryStr . '">' . $currentRoom ['title'] . '</a></div>';
									}
								}
								
								if ($cntr > 1) {
									echo '<div style="font-size: 0.9em; font-style: italic;">nog ' . ($cntr - 1) . ' les(sen)</div>';
								}
								echo '</div>';
							}
							echo '</div>';
						}
						
						if (is_array ( $supervision ) && isset ( $startOfLesson )) {
							/* Check if this supervision needs substitution */
							$needsSubstitution = '';
							$substitute = '';
							$querySubs = 'SELECT vu.field_gebruiker_target_id AS uid ' . 'FROM {field_data_field_uurr_vervanging_vervmoment} AS vm ' . 'INNER JOIN {field_data_field_gebruiker} AS vu ON vu.entity_id = vm.entity_id ' . 'INNER JOIN {field_data_field_tijdstip} AS t ON t.entity_id = vm.entity_id ' . 'WHERE vm.field_uurr_vervanging_vervmoment_target_id = :sid AND vu.bundle = :bundle ' . 'AND t.bundle = :bundle AND DATE_FORMAT(t.field_tijdstip_value,\'%Y-%m-%d\') = :start';
							$substitutions = db_query ( $querySubs, array (
									':bundle' => 'uurrooster_vervanging',
									':sid' => $supervision ['nid'],
									':start' => $thisDay->format ( 'Y-m-d' ) 
							) )->fetchAllAssoc ( 'uid' );
							if (count ( $substitutions ) > 0) {
								$needsSubstitution = ' substituted';
								if (key ( $substitutions ) == 0) {
									$needsSubstitution .= 'NotOK';
								} else {
									$substitute = '<a style="color: red !important; font-weight: bold;" href="' . base_path () . 'uurrooster/leerkracht/' . key ( $substitutions ) . $queryStr . '">' . argus_get_user_realname ( key ( $substitutions ) ) . '</a><br />';
								}
							}
							
							echo '<div class="supervision' . $needsSubstitution . '">' . $substitute . '<strong>toezicht</strong><div style="font-size: smaller;">' . str_replace ( ' - ' . argus_get_user_realname ( $uid ), '', $supervision ['title'] ) . '</div></div>';
						}
						
						/* Check if there is now a supervision substitution */
						$querySubs = 'SELECT n.title AS title ' . 'FROM {field_data_field_uurr_vervanging_vervmoment} AS vm ' . 'INNER JOIN {field_data_field_uurrooster_toez_locatie} AS l ON vm.field_uurr_vervanging_vervmoment_target_id = l.entity_id ' . 'INNER JOIN {field_data_field_uurrooster_toez_start} AS p ON p.entity_id = l.field_uurrooster_toez_locatie_target_id ' . 'INNER JOIN {field_data_field_uurrooster_toez_dag} AS d ON d.entity_id = l.entity_id ' . 'INNER JOIN {node} AS n ON n.nid = vm.field_uurr_vervanging_vervmoment_target_id ' . 'INNER JOIN {field_data_field_gebruiker} AS vu ON vu.entity_id = vm.entity_id ' . 'INNER JOIN {field_data_field_tijdstip} AS t ON t.entity_id = vm.entity_id ' . 'WHERE vu.bundle = :bundle AND vu.field_gebruiker_target_id = :uid ' . 'AND p.field_uurrooster_toez_start_target_id = :pid ' . 'AND d.field_uurrooster_toez_dag_value = :did ' . 'AND t.bundle = :bundle AND DATE_FORMAT(t.field_tijdstip_value,\'%Y-%m-%d\') = :start';
						$substitutions = db_query ( $querySubs, array (
								':bundle' => 'uurrooster_vervanging',
								':did' => $d + 1,
								':pid' => $pid,
								':uid' => $uid,
								':start' => $thisDay->format ( 'Y-m-d' ) 
						) )->fetchAssoc ();
						if ($substitutions) {
							$supervisions = '';
							foreach ( $substitutions as $supervision ) {
								$supervisions .= $supervision;
							}
							echo '<div class="supervision"><strong style="color: red;">toezicht</strong><div style="font-size: smaller;">' . $supervisions . '</div></div>';
						}
					}
				} else {
					echo '<td>';
				}
				
				echo '</td>';
			}
			if ($start) {
				echo '<td id="argus_uurrooster_schedule_details" rowspan="' . count ( $periods ['node'] ) . '" class="argus_uurrooster_schedule_details_TD"><em>' . t ( 'klik op een uur voor meer info' ) . '</em></td>';
				$start = FALSE;
			}
			echo '</tr>';
		}
	} else {
		print '<p style="color: red; text-align: center;">Er werden nog geen periodes aangemaakt.</p>';
	}
	
	?>
</tbody>
</table>

<table class="argus_uurrooster_schedule_nav">
	<tr>
		<td id="argus_uurrooster_schedule_nav_previous"><a
			href="<?php print url(current_path(), array('absolute' => TRUE)).'?s='.$previousStartOfWeek; ?>">&lt;
				vorige week</a></td>
		<td id="argus_uurrooster_schedule_nav_today"><a
			href="<?php print url(current_path(), array('absolute' => TRUE)); ?>">deze
				week</a></td>
		<td id="argus_uurrooster_schedule_nav_next"><a
			href="<?php print url(current_path(), array('absolute' => TRUE)).'?s='.$nextStartOfWeek; ?>">volgende
				week &gt;</a></td>
	</tr>
</table>
<?php } ?>
