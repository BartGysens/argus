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
 * Retrieve information for this plugin: title
 */
function argus_kerncijfers_plugin_personeel_per_deelgemeente_title(){
	return t('per (deel-)gemeente');
}

/**
 * Retrieve information for this plugin: description
 */
function argus_kerncijfers_plugin_personeel_per_deelgemeente_description(){
	return t('De totalen worden weergegeven per (deel-)gemeente. Hoe donkerder de kleur, hoe meer personeelsleden in de overeenkomstige (deel-)gemeente. Beweeg over elk punt om de juiste cijfers te krijgen. Deze kaart zoekt de juiste locatie van elke (deel-)gemeente, dit kan soms even duren.');
}

/**
 * Retrieve information for this plugin: type
 */
function argus_kerncijfers_plugin_personeel_per_deelgemeente_type(){
	return t('landkaart');
}

/**
 * Retrieve information for this plugin: width
 */
function argus_kerncijfers_plugin_personeel_per_deelgemeente_width(){
	return t('100%');
}

/**
 * Retrieve information for this plugin: height
 */
function argus_kerncijfers_plugin_personeel_per_deelgemeente_height(){
	return t('400px');
}

/**
 * Retrieve information for this plugin: package
 * more details at https://developers.google.com/chart/interactive/docs/gallery
 * 
 * module: one of Google packages
 * command: function request when building chart, var chart = new google.visualization.(...)
 */
function argus_kerncijfers_plugin_personeel_per_deelgemeente_package(){
	return array('module' => 'geochart', 'command' => 'GeoChart');
}

/**
 * Retrieve information for this plugin: data
 */
function argus_kerncijfers_plugin_personeel_per_deelgemeente_data(){
	$data = array(
		array( '(Deel-)gemeente', 'Aantal personeelsleden', 'Procent')
	);
	
	$query = 'SELECT wp.field_user_sms_woonplaats_value AS woonplaats, wpd.field_user_sms_woonplaats___deel_value AS deelgemeente, CONCAT_WS({:sep},wp.field_user_sms_woonplaats_value,wpd.field_user_sms_woonplaats___deel_value) AS grouper, COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_woonplaats___deel} AS wpd '
		. 'INNER JOIN {field_data_field_user_sms_woonplaats} AS wp ON wpd.entity_id = wp.entity_id '
		. 'INNER JOIN {users} AS u ON wp.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.uid '
		. 'WHERE u.status = 1 AND r.rid = :role '
		. 'GROUP BY woonplaats,deelgemeente '
		. 'ORDER BY total DESC, woonplaats ASC, deelgemeente ASC';
	$results = db_query($query, array(':sep' => ',', ':role' => variable_get('argus_engine_roles_workers')))->fetchAllAssoc('grouper', PDO::FETCH_ASSOC);
	
	$query = 'SELECT COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_woonplaats} AS wp '
		. 'INNER JOIN {users} AS u ON wp.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.uid '
		. 'WHERE u.status = 1 AND r.rid = :role ';
	$total = db_query($query, array(':role' => variable_get('argus_engine_roles_workers')))->fetchCol()[0];
	
	foreach($results as $c => $result){
		if (isset($result['deelgemeente'])){
			$city = $result['deelgemeente'].' ('.$result['woonplaats'].')';
		} else {
			$city = $result['woonplaats'];
		}
		if ($city){
			$data[] = array( $city, (int) $result['total'], round( 100 * $result['total'] / $total, 2 ) );
		}
	}
	
	return json_encode($data);
}

/**
 * Retrieve information for this plugin: options
 */
function argus_kerncijfers_plugin_personeel_per_deelgemeente_options($max = 1){
	$query = 'SELECT wp.field_user_sms_woonplaats_value AS woonplaats, wpd.field_user_sms_woonplaats___deel_value AS deelgemeente, CONCAT_WS({:sep},wp.field_user_sms_woonplaats_value,wpd.field_user_sms_woonplaats___deel_value) AS grouper, COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_woonplaats___deel} AS wpd '
		. 'INNER JOIN {field_data_field_user_sms_woonplaats} AS wp ON wpd.entity_id = wp.entity_id '
		. 'INNER JOIN {users} AS u ON wp.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.rid '
		. 'WHERE u.status = 1 AND r.rid != :role '
		. 'GROUP BY woonplaats,deelgemeente '
		. 'ORDER BY total DESC, woonplaats ASC, deelgemeente ASC LIMIT 1';
	$results = db_query($query, array(':sep' => ',', ':role' => variable_get('argus_engine_roles_pupil')))->fetchAllAssoc('grouper', PDO::FETCH_ASSOC);
	
	$query = 'SELECT COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_woonplaats} AS wp '
		. 'INNER JOIN {users} AS u ON wp.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.rid '
		. 'WHERE u.status = 1 AND r.rid != :role ';
	$total = db_query($query, array(':role' => variable_get('argus_engine_roles_pupil')))->fetchCol()[0];
	
	$options = array(
		'region' => 'BE',
		'displayMode' => 'markers',
		'resolution' => 'provinces',
        'sizeAxis' => array( 'minValue' => 0, 'maxValue' => round( 100 * $results[key($results)]['total'] / $total, 2 ) ),
		'colorAxis' => array( 'colors' => array( '#ffbcdc', '#b00057' ) )
	);
	
	return json_encode($options);
}