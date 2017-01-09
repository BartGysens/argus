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
 * Returns options for field 'levenbeschouwelijk vak'
 */
function argus_gebruikersregistratie_form_field_religion() {
	$option = array();
	
	$option['Niet-confessionele zedenleer'] = 'Niet-confessionele zedenleer';
	$option['Katholieke godsdienst'] = 'Katholieke godsdienst';
	$option['Protestantse godsdienst'] = 'Protestantse godsdienst';
	$option['Israëlitische godsdienst'] = 'Israëlitische godsdienst';
	$option['Islamitische godsdienst'] = 'Islamitische godsdienst';
	$option['Orthodoxe godsdienst'] = 'Orthodoxe godsdienst';
	$option['Anglicaanse godsdienst'] = 'Anglicaanse godsdienst';
	$option['Vrijgesteld of niet van toepassing'] = 'Vrijgesteld of niet van toepassing';
	$option['Cultuurbeschouwing'] = 'Cultuurbeschouwing';
	$option['Eigen cultuur en religie'] = 'Eigen cultuur en religie';
	
	return $option;
}

/**
 * Returns key for field 'levenbeschouwelijk vak'
 */
function argus_gebruikersregistratie_key_field_religion($param) {
	$option = array();
	
	$option['Niet-confessionele zedenleer'] = '187';
	$option['Katholieke godsdienst'] = '140';
	$option['Protestantse godsdienst'] = '225';
	$option['Israëlitische godsdienst'] = '136';
	$option['Islamitische godsdienst'] = '135';
	$option['Orthodoxe godsdienst'] = '194';
	$option['Anglicaanse godsdienst'] = '418';
	$option['Vrijgesteld of niet van toepassing'] = '9999';
	$option['Cultuurbeschouwing'] = '52';
	$option['Eigen cultuur en religie'] = '63';
	
	return $option[$param];
}