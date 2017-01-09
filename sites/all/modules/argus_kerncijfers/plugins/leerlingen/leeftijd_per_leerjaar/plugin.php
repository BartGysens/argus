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
function argus_kerncijfers_plugin_leerlingen_leeftijd_per_leerjaar_title(){
	return t('leeftijd per leerjaar');
}

/**
 * Retrieve information for this plugin: description
 */
function argus_kerncijfers_plugin_leerlingen_leeftijd_per_leerjaar_description(){
	return t('Per leerjaar wordt de gemiddelde leeftijd vergeleken met de leeftijd die een leerling normaal gezien moet hebben.');
}

/**
 * Retrieve information for this plugin: type
 */
function argus_kerncijfers_plugin_leerlingen_leeftijd_per_leerjaar_type(){
	return t('combinatie');
}

/**
 * Retrieve information for this plugin: width
 */
function argus_kerncijfers_plugin_leerlingen_leeftijd_per_leerjaar_width(){
	return t('100%');
}

/**
 * Retrieve information for this plugin: height
 */
function argus_kerncijfers_plugin_leerlingen_leeftijd_per_leerjaar_height(){
	return t('400px');
}

/**
 * Retrieve information for this plugin: package
 * more details at https://developers.google.com/chart/interactive/docs/gallery
 * 
 * module: one of Google packages
 * command: function request when building chart, var chart = new google.visualization.(...)
 */
function argus_kerncijfers_plugin_leerlingen_leeftijd_per_leerjaar_package(){
	return array('module' => 'corechart', 'command' => 'ComboChart');
}

/**
 * Retrieve information for this plugin: data
 */
function argus_kerncijfers_plugin_leerlingen_leeftijd_per_leerjaar_data(){
	$data = array(
		array( 'Leerjaar', 'Aantal leerlingen', 'Gemiddelde leeftijd', 'Normale leeftijd' )
	);
	
	$query = argus_kerncijfers_preprocess_query(
		  'SELECT ((gr2.field_klas_graad_value - 1)*2 + lj2.field_klas_leerjaar_value) AS leerjaar, COUNT(DISTINCT u.uid) as total, SUM(FLOOR(DATEDIFF(CURRENT_DATE(), g.field_user_sms_geboortedatum_value) / 365)) as leeftijd '
		. 'FROM {field_data_field_klas_leerlingen} AS l '
		. 'LEFT JOIN {field_data_field_klas_leerjaar} AS lj2 ON l.entity_id = lj2.entity_id '
		. 'LEFT JOIN {field_data_field_klas_graad} AS gr2 ON l.entity_id = gr2.entity_id '
		. 'INNER JOIN {field_data_field_user_sms_geboortedatum} AS g ON l.field_klas_leerlingen_target_id = g.entity_id '
		. 'INNER JOIN {users} AS u ON l.field_klas_leerlingen_target_id = u.uid '
		. ' :innerjoin '
		. 'WHERE u.status = 1 :where '
		. 'GROUP BY leerjaar '
		. 'ORDER BY leerjaar ASC');
	$results = db_query($query['string'], $query['options'], array())->fetchAllAssoc('leerjaar', PDO::FETCH_ASSOC);
	
	$age = 13;
	foreach($results as $cl => $result){
		$data[] = array( $cl.'e', (int) $result['total'], round($result['leeftijd']/$result['total'], 1), $age++);
	}
	
	return json_encode($data);
}

/**
 * Retrieve information for this plugin: options
 */
function argus_kerncijfers_plugin_leerlingen_leeftijd_per_leerjaar_options(){
	$options = array(
		'legend' => 'none',
		'hAxis' => array(
			'textStyle' => array(
				'fontSize' => 9,
			),
			'format' => '#',
		),
		'series' => array(
			0 => array(
				'color' => '#e1ebf2',
				'type' => 'bars',
			),
			1 => array(
				'color' => '#006830',
				'type' => 'line',
			),
			2 => array(
				'color' => '#b00057',
				'type' => 'line',
			),
		),
		'animation' => array('startup' => true,'duration' => 1000),
	);
	
	return json_encode($options);
}