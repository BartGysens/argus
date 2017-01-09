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

/*
 * Fetch all latecomings and calculate totals
*/
$query = 'SELECT a.id, a.leerling '
		. 'FROM {argus_lvs_afwezigheden} AS a '
		. 'INNER JOIN {field_data_field_user_sms_naam} AS un ON un.entity_id = a.leerling '
		. 'INNER JOIN {field_data_field_user_sms_voornaam} AS uv ON uv.entity_id = a.leerling '
		. 'INNER JOIN {field_data_field_user_sms_toelating_te_laat} AS ut ON ut.entity_id = a.leerling '
		. 'WHERE (a.am=\'L\' OR a.pm=\'L\') '
		. 'AND a.datum LIKE :today '
		. 'AND ut.field_user_sms_toelating_te_laat_value IS NULL '
		. 'ORDER BY un.field_user_sms_naam_value ASC, uv.field_user_sms_voornaam_value ASC';
$dates_late = db_query($query, array(':today' => date('Y-m-d 00:00:00')))->fetchAll();

foreach($dates_late as $k => $d){
	$query = 'SELECT id '
			. 'FROM {argus_lvs_latecomers_rectified} '
			. 'WHERE date_late = :id';
	if (db_query($query, array(':id' => $d->id))->rowCount()){
		unset($dates_late[$k]);
	}
}

?>

<div class="menu-block-wrapper">
	<div style="font-size: 0.8em;">Volgende leerlingen moeten &eacute;&eacute;n uur nablijven tenzij er <u>voor 14u40</u> <em>(op woensdag <u>voor 10u20</u>)</em> een geldige reden wordt besproken met <u>ILB</u>:</div>
	<ul>
	<?php
	if (count($dates_late)){
		foreach($dates_late as $u){
			print '<li>'.argus_get_user_realname($u->leerling).'</li>';
		}
	} else { ?>
	
		<div style="margin: 50px 0;">iedereen is vandaag netjes op tijd</div>
		
		<div style="position: absolute; bottom: 20px; width: 28%;">
		<?php 
		/* CHECK IF ONLINE!
		
		if ()
		$url = 'http://www.comicsyndicate.org/Feed/Garfield';
		$xml = simplexml_load_file($url);
		
		print $xml->channel[0]->item[0]->description[0];
		*/
		//<img alt="ANDERTOONS.COM EDUCATION_AND_TEACHER CARTOONS" src="https://cdn.andertoons.com/syndication/education_and_teacher.png" style="border:0; width: 100%;" />
		
		?>
		</div>
	
	<?php } ?>
	</ul>
</div>