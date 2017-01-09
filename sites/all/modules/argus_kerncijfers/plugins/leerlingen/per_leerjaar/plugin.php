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
function argus_kerncijfers_plugin_leerlingen_per_leerjaar_title(){
	return t('per leerjaar');
}

/**
 * Retrieve information for this plugin: description
 */
function argus_kerncijfers_plugin_leerlingen_per_leerjaar_description(){
	return t('De totalen worden weergegeven per leerjaar en worden berekend over alle onderwijsvormen en structuuronderdelen heen.');
}

/**
 * Retrieve information for this plugin: type
 */
function argus_kerncijfers_plugin_leerlingen_per_leerjaar_type(){
	return t('staaf');
}

/**
 * Retrieve information for this plugin: width
 */
function argus_kerncijfers_plugin_leerlingen_per_leerjaar_width(){
	return t('100%');
}

/**
 * Retrieve information for this plugin: height
 */
function argus_kerncijfers_plugin_leerlingen_per_leerjaar_height(){
	return t('400px');
}

/**
 * Retrieve information for this plugin: package
 * more details at https://developers.google.com/chart/interactive/docs/gallery
 * 
 * module: one of Google packages
 * command: function request when building chart, var chart = new google.visualization.(...)
 */
function argus_kerncijfers_plugin_leerlingen_per_leerjaar_package(){
	return array('module' => 'corechart', 'command' => 'ColumnChart');
}

/**
 * Retrieve information for this plugin: data
 */
function argus_kerncijfers_plugin_leerlingen_per_leerjaar_data(){
	$data = array(
		array( 'Leerjaar', 'Aantal leerlingen' )
	);
	
	$query = argus_kerncijfers_preprocess_query(
		  'SELECT ((gra.field_klas_graad_value - 1)*2 + lja.field_klas_leerjaar_value) AS leerjaar, COUNT(DISTINCT u.uid) as total '
		. 'FROM {field_data_field_klas_leerlingen} AS l '
		. 'INNER JOIN {field_data_field_klas_leerjaar} AS lja ON l.entity_id = lja.entity_id '
		. 'INNER JOIN {field_data_field_klas_graad} AS gra ON l.entity_id = gra.entity_id '
		. 'INNER JOIN {users} AS u ON l.field_klas_leerlingen_target_id = u.uid '
		. ' :innerjoin '
		. 'WHERE u.status = 1 :where '
		. 'GROUP BY leerjaar '
		. 'ORDER BY leerjaar ASC');
	$results = db_query($query['string'], $query['options'])->fetchAllKeyed();
	
	foreach($results as $cl => $cntr){
		$data[] = array( $cl.'e', (int) $cntr );
	}
	
	return json_encode($data);
}

/**
 * Retrieve information for this plugin: options
 */
function argus_kerncijfers_plugin_leerlingen_per_leerjaar_options(){
	$options = array(
		'legend' => 'none',
		'hAxis' => array(
			'textStyle' => array(
				'fontSize' => 9,
			),
			'slantedTextAngle' => 80,
		),
		'series' => array(
			0 => array(
				'color' => '#ffa900',
			),
		),
		'animation' => array(
			'startup' => true,
			'duration' => 1000,
		),
	);
	
	return json_encode($options);
}