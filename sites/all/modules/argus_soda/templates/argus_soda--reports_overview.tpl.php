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

print '<h2><a href="' . base_path () . drupal_get_path_alias ( 'node/' . $data ['cid'] ) . '" target="_blank">' . argus_get_class_name($data ['cid']) . '</a></h2>';

print '<table class="argus_uurrooster_schedule views-table sticky-enabled cols-4 tableheader-processed sticky-table" style="page-break-after: always;">';
print '<thead>';

print '<tr>';
print '<th class="views-field views-align-center" scope="col">Nr.</th>';
print '<th class="views-field views-align-left" scope="col">' . t ( 'Leerling' ) . '</th>';
print '<th class="views-field views-align-center" scope="col">' . t ( 'Rapport' ) . '</th>';
if (module_exists ( 'argus_meldingen' )) {
	print '<th class="views-field views-align-left" scope="col">' . t ( 'Details' ) . '</th>';
}
print '</tr>';

print '</thead>';

print '<tbody>';

$cntr = 1;
foreach ( $data ['reports'] [$data ['cid']] as $uid => $report ) {
	print '<tr class="' . ($cntr % 2 == 0 ? "odd" : "even") . ' views-row-first">';
	print '<td class="views-field views-align-center"><a name="' . $uid . '"></a>' . ($cntr ++) . '</td>';
	print '<td class="views-field views-align-left"><a href="' . base_path () . drupal_get_path_alias ( 'user/' . $uid ) . '" target="_blank">' . argus_get_user_realname ( $uid ) . '</a></td>';
	print '<td>' . argus_soda_show_report( $uid, true, 'edit' ) . '</td>';
	
	if (module_exists ( 'argus_meldingen' )) {
		print '<td class="views-field views-align-left">';
		for($x = 1; $x < 5; $x ++) {
			if ($report ['tickets'][$x]['total']){
				print '<h3>' . $report ['tickets'][$x]['title'] . '</h3><ol>';
				foreach (SODA_parts as $soda_part => $title){
					if (count($report ['tickets'][$x]['ticketing'][$soda_part])){
						print '<h4>' . $title . '</h4>';
						if ($soda_part == 'stiptheid (SODA)'){
							print implode( ' - ', $report ['tickets'][$x]['ticketing'][$soda_part] );
						} else {
							print '<ol>';
							foreach ( $report ['tickets'][$x]['ticketing'][$soda_part] as $ticket ) {
								print '<li><a href="' . base_path () . drupal_get_path_alias ( 'node/' . $ticket->id ) . '" target="_blank">'.format_date(strtotime($ticket->factdate), 'custom', 'd-m-y').': '.$ticket->title.' ('.argus_get_user_realname($ticket->author).')</a></li>';
							}
							print '</ol>';
							
							if ($title == 'Attitude' && $report ['tickets'][$x]['ticketing']['positief gedrag'] != array('x')){
								print '<h4 style="color: green;">Positief gedrag</h4>';
								print '<ol>';
								foreach ( $report ['tickets'][$x]['ticketing']['positief gedrag'] as $ticket ) {
									if (is_numeric($ticket)){
										$ticket = node_load($ticket);
										print '<li><a href="' . base_path () . drupal_get_path_alias ( 'node/' . $ticket->nid ) . '" target="_blank">'.format_date(strtotime($ticket->field_lvs_melding_datum_feit[LANGUAGE_NONE][0]['value']), 'custom', 'd-m-y').': '.$ticket->field_lvs_melding_onderwerp[LANGUAGE_NONE][0]['value'].' ('.argus_get_user_realname($ticket->uid).')</a></li>';
									}
								}
								print '</ol>';
							}
						}
					}
				}
				print '</ol>';
			}
		}
		print '</td>';
	}
	
	print '</tr>';
}

print '</tbody>';

print '</table>';