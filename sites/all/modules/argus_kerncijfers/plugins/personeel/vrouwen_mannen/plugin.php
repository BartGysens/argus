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
function argus_kerncijfers_plugin_personeel_vrouwen_mannen_title(){
	return t('vrouwen / mannen');
}

/**
 * Retrieve information for this plugin: description
 */
function argus_kerncijfers_plugin_personeel_vrouwen_mannen_description(){
	return t('De verhouding van het aantal mannen ten opzichte van het aantal vrouwen.');
}

/**
 * Retrieve information for this plugin: type
 */
function argus_kerncijfers_plugin_personeel_vrouwen_mannen_type(){
	return t('taart');
}

/**
 * Retrieve information for this plugin: width
 */
function argus_kerncijfers_plugin_personeel_vrouwen_mannen_width(){
	return t('100%');
}

/**
 * Retrieve information for this plugin: height
 */
function argus_kerncijfers_plugin_personeel_vrouwen_mannen_height(){
	return t('400px');
}

/**
 * Retrieve information for this plugin: package
 * more details at https://developers.google.com/chart/interactive/docs/gallery
 * 
 * module: one of Google packages
 * command: function request when building chart, var chart = new google.visualization.(...)
 */
function argus_kerncijfers_plugin_personeel_vrouwen_mannen_package(){
	return array('module' => 'corechart', 'command' => 'PieChart');
}

/**
 * Retrieve information for this plugin: data
 */
function argus_kerncijfers_plugin_personeel_vrouwen_mannen_data(){
	$data = array(
		array( 'Geslacht', 'Aantal personeelsleden')
	);
	
	$query = 'SELECT g.field_user_sms_geslacht_value AS geslacht, COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_geslacht} AS g '
		. 'INNER JOIN {users} AS u ON g.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.rid '
		. 'WHERE u.status = 1 AND r.rid != :role '
		. 'GROUP BY geslacht '
		. 'ORDER BY total DESC';
	$results = db_query($query, array( ':role' => variable_get('argus_engine_roles_pupil')))->fetchAllAssoc('geslacht', PDO::FETCH_ASSOC);
	
	$query = 'SELECT COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_user_sms_geslacht} AS g '
		. 'INNER JOIN {users} AS u ON g.entity_id = u.uid '
		. 'INNER JOIN {users_roles} AS r ON u.uid = r.rid '
		. 'WHERE u.status = 1 AND r.rid != :role ';
	$total = db_query($query, array(':role' => variable_get('argus_engine_roles_pupil')))->fetchCol()[0];
	
	foreach($results as $c => $result){
		switch ($result['geslacht']){
			case 'm': $title = t('mannen'); break;
			case 'f': $title = t('vrouwen'); break;
		}
		$data[] = array( $title, (int) $result['total'] );
	}
	
	return json_encode($data);
}

/**
 * Retrieve information for this plugin: options
 */
function argus_kerncijfers_plugin_personeel_vrouwen_mannen_options(){
	$options = array(
		'colors' => array( '#0069b5', '#b00057' )
	);
	
	return json_encode($options);
}