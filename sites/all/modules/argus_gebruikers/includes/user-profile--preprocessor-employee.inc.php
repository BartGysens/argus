<?php
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
 * @file
 * Contains all prepocessor instructions for generating user profile pages
 */

drupal_add_js("https://www.google.com/jsapi?autoload={'modules':[{'name':'visualization','version':'1','packages':['corechart']}]}");
drupal_add_js(drupal_get_path('module', 'argus_gebruikers').'/js/user-profile.js');

drupal_add_css(drupal_get_path('module', 'argus_gebruikers').'/css/user_profile.css');
drupal_add_css(drupal_get_path('module', 'argus_gebruikers').'/css/employee.css');

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

$uid = $account->uid;
$variables['user_id'] = $uid;

/**
 * -----------------------------------------------------------------------------
 * Data about ASSINGMENT
 * -----------------------------------------------------------------------------
 */

if (module_exists('argus_uurrooster')){
	$variables['current_lesson'] = argus_uurrooster_get_current_lesson($uid);
	// Only fetch the first of the array
	if ($variables['current_lesson']){
		$variables['current_lesson']['room'] = node_load($variables['current_lesson'][key($variables['current_lesson'])]['lid'])->title;
		$groups = explode(',', $variables['current_lesson'][key($variables['current_lesson'])]['groups']);
		foreach ($groups as $gid){
			$variables['current_lesson']['group'][] = node_load($gid)->title;
		}
	}
	
	$variables['courses'] = array();
	$courses = argus_uurrooster_get_courses($uid);
	foreach ($courses as $cid => $c){
		$c = node_load($cid);
		$variables['courses'][$cid] = $c->field_vak_beschrijving[LANGUAGE_NONE][0]['value'];
	}
	asort($variables['courses']);
	
	$variables['groups'] = array();
	if (argus_uurrooster_get_groups($uid)){
		$groups = explode(',', argus_uurrooster_get_groups($uid)[key(argus_uurrooster_get_groups($uid))]);
		foreach ($groups as $gid){
			$g = node_load($gid);
			$variables['groups'][$gid] = $g->field_klas_omschrijving[LANGUAGE_NONE][0]['value'];
		}
		asort($variables['groups']);
	}
	
	$variables['supervisions'] = argus_uurrooster_get_supervisions($uid);
	sort($variables['supervisions']);
	
	$variables['substitutions'] = argus_uurrooster_get_substitutions($uid);
	sort($variables['substitutions']);
}

/**
 * -----------------------------------------------------------------------------
 * Data about EFFORTS
 * -----------------------------------------------------------------------------
 */

$variables['user_roles'] = $account->roles;
sort($variables['user_roles']);

$variables['baserole']['id'] = $account->field_user_sms_basisrol[LANGUAGE_NONE][0]['value'];
$f = field_info_field('field_user_sms_basisrol');
$variables['baserole']['title'] = $f['settings']['allowed_values'][$variables['baserole']['id']];

/* TODO generate module */
if (module_exists('argus_vakgroepen') || true){
	$query = 'SELECT n.entity_id AS id, n.field_vgwg_naam_value AS name '
		. 'FROM {field_data_field_vgwg_leden} AS l '
		. 'INNER JOIN {field_data_field_vgwg_naam} AS n ON l.entity_id = n.entity_id '
		. 'INNER JOIN {field_data_field_voorzitter} AS v ON l.entity_id = v.entity_id '
		. 'WHERE l.field_vgwg_leden_target_id = :uid OR v.field_voorzitter_target_id = :uid';
	$variables['vgwg'] = db_query($query, array(':uid' => $uid))->fetchAllKeyed();
}

/**
 * -----------------------------------------------------------------------------
 * Data about CLASSES
 * -----------------------------------------------------------------------------
 */

if (module_exists('argus_klasbeheer')){
	$query = 'SELECT n.nid AS id, t.field_klas_omschrijving_value AS name '
		. 'FROM {field_data_field_klas_klastitularis} AS ktt '
		. 'INNER JOIN {node} AS n ON ktt.entity_id = n.nid '
		. 'RIGHT JOIN {field_data_field_klas_leerlingen} AS lln ON lln.entity_id = n.nid '
		. 'INNER JOIN {field_data_field_klas_omschrijving} AS t ON t.entity_id = n.nid '
		. 'WHERE ktt.field_klas_klastitularis_target_id = :uid AND n.status=1';
	$variables['ktt'] = db_query($query, array(':uid' => $uid))->fetchAllKeyed();
	
	$query = 'SELECT n.nid AS id, t.field_klas_omschrijving_value AS name '
		. 'FROM {field_data_field_klas_hulpklastitularis} AS hktt '
		. 'INNER JOIN {node} AS n ON hktt.entity_id = n.nid '
		. 'RIGHT JOIN {field_data_field_klas_leerlingen} AS lln ON lln.entity_id = n.nid '
		. 'INNER JOIN {field_data_field_klas_omschrijving} AS t ON t.entity_id = n.nid '
		. 'WHERE hktt.field_klas_hulpklastitularis_target_id = :uid AND n.status=1';
	$variables['hktt'] = db_query($query, array(':uid' => $uid))->fetchAllKeyed();
}

// Preprocess fields.
if ($_SERVER['HTTP_HOST'] == 'localhost'){
	dpm($variables);
	print theme('status_messages');
}
field_attach_preprocess('user', $account, $variables['elements'], $variables);
