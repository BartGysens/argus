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

print '<h1>A-attesten = <strong>'.$data['A'].'</strong> - B-attesten = <strong>'.$data['B'].'</strong></h1>';
	
foreach ( $data ['D'] as $c => $attesten ) {
	print '<h2><a href="' . base_path () . drupal_get_path_alias ( 'klas/' . $c ) . '" target="_blank">' . $c . '</a></h2>';
	
	print '<table class="argus_uurrooster_schedule views-table sticky-enabled cols-4 tableheader-processed sticky-table" style="page-break-after: always;">';
	print '<thead>';
	
	print '<tr>';
	print '<th class="views-field views-align-center" scope="col">Nr.</th>';
	print '<th class="views-field views-align-left" scope="col">' . t ( 'Leerling' ) . '</th>';
	print '<th class="views-field views-align-center" scope="col">' . t ( 'Rapport' ) . '</th>';
	if (module_exists ( 'argus_meldingen' )) {
		print '<th class="views-field views-align-left" scope="col">' . t ( 'Details <strong>attitude</strong>' ) . '</th>';
	}
	print '</tr>';
	
	print '</thead>';
	
	print '<tbody>';
	
	$cntr = 1;
	
	foreach ( $data ['D'][$c] as $leerling => $attest ) {
		print '<tr class="' . ($cntr % 2 == 0 ? "odd" : "even") . ' views-row-first">';
		print '<td class="views-field views-align-center">' . ($cntr ++) . '</td>';
		print '<td class="views-field views-align-left"><a href="' . base_path () . drupal_get_path_alias ( 'user/' . $attest['uid'] ) . '" target="_blank">' . argus_get_user_realname ( $attest['uid'] ) . '</a></td>';
		print '<td>' . argus_soda_show_report($attest['uid'], true) . '</td>';
	
		if (module_exists ( 'argus_meldingen' )) {
			print '<td class="views-field views-align-left">';
			for($x = 1; $x < 5; $x ++) {
				if (count($attest ['tickets'][$x]['ticketing'])){
					print '<h4>' . $attest ['tickets'][$x]['title'] . '</strong></h4><ol>';
					foreach ( $attest ['tickets'][$x]['ticketing'] as $ticket ) {
						print '<li><a href="' . base_path () . drupal_get_path_alias ( 'node/' . $ticket->id ) . '" target="_blank">'.format_date(strtotime($ticket->factdate), 'custom', 'd-m-y').': '.$ticket->title.' ('.argus_get_user_realname($ticket->author).')</a></li>';
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
}