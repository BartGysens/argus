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
function argus_kerncijfers_plugin_personeel_per_gemeente_title(){
	return t('per gemeente');
}

/**
 * Retrieve information for this plugin: description
 */
function argus_kerncijfers_plugin_personeel_per_gemeente_description(){
	return t('De totalen worden weergegeven per gemeente. Hoe donkerder de kleur, hoe meer personeelsleden in de overeenkomstige gemeente. Beweeg over elk punt om de juiste cijfers te krijgen. Deze kaart zoekt de juiste locatie van elke gemeente, dit kan soms even duren.');
}

/**
 * Retrieve information for this plugin: type
 */
function argus_kerncijfers_plugin_personeel_per_gemeente_type(){
	return t('landkaart');
}

/**
 * Retrieve information for this plugin: width
 */
function argus_kerncijfers_plugin_personeel_per_gemeente_width(){
	return t('100%');
}

/**
 * Retrieve information for this plugin: height
 */
function argus_kerncijfers_plugin_personeel_per_gemeente_height(){
	return t('400px');
}

/**
 * Retrieve information for this plugin: package
 * more details at https://developers.google.com/chart/interactive/docs/gallery
 * 
 * module: one of Google packages
 * command: function request when building chart, var chart = new google.visualization.(...)
 */
function argus_kerncijfers_plugin_personeel_per_gemeente_package(){
	return array('module' => 'geochart', 'command' => 'GeoChart');
}

/**
 * Retrieve information for this plugin: data
 */
function argus_kerncijfers_plugin_personeel_per_gemeente_data(){
	$data = array(
		array( 'Gemeente', 'Aantal personeelsleden', 'Procent')
	);
	
	$query = 'SELECT wp.field_user_sms_woonplaats_value AS woonplaats, COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_woonplaats} AS wp '
		. 'INNER JOIN {users} AS u ON wp.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.uid '
		. 'WHERE u.status = 1 AND r.rid = :role '
		. 'GROUP BY wp.field_user_sms_woonplaats_value '
		. 'ORDER BY total DESC, woonplaats ASC';
	$results = db_query($query, array(':role' => variable_get('argus_engine_roles_workers')))->fetchAllKeyed();
	
	$query = 'SELECT COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_woonplaats} AS wp '
		. 'INNER JOIN {users} AS u ON wp.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.uid '
		. 'WHERE u.status = 1 AND r.rid = :role ';
	$total = db_query($query, array(':role' => variable_get('argus_engine_roles_workers')))->fetchCol()[0];
	
	foreach($results as $city => $cntr){
		if ($city){
			$data[] = array( $city, (int) $cntr, round( 100 * $cntr / $total, 2 ) );
		}
	}
	
	return json_encode($data);
}

/**
 * Retrieve information for this plugin: options
 */
function argus_kerncijfers_plugin_personeel_per_gemeente_options($max = 1){
	$query = 'SELECT COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_woonplaats} AS wp '
		. 'INNER JOIN {users} AS u ON wp.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.rid '
		. 'WHERE u.status = 1 AND r.rid != :role '
		. 'GROUP BY wp.field_user_sms_woonplaats_value '
		. 'ORDER BY total DESC LIMIT 1';
	$cntr = db_query($query, array(':role' => variable_get('argus_engine_roles_pupil')))->fetchCol()[0];
	
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
        'sizeAxis' => array( 'minValue' => 0, 'maxValue' => round( 100 * $cntr / $total, 2 ) ),
		'colorAxis' => array( 'colors' => array( '#ffbcdc', '#b00057' ) )
	);
	
	return json_encode($options);
}