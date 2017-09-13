<?php
/* 
 * Copyright (C) 2014 bartgysens
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

global $user, $base_url;

?>

<table class="views-table sticky-enabled tableheader-processed sticky-table argus_hrm" style="page-break-after: always;">
    <thead style="font-weight: bold;">
    	<tr>
		    <th class="views-field views-align-middle" scope="col">Nr.</th>
		    <th class="views-field views-align-left" scope="col">NAAM</th>
		    
		    <?php for ($x = 0; $x < $max; $x++){ ?>
		    	<th class="views-field views-align-middle" scope="col"></th>
			<?php } ?>
		    
		    <th class="views-field views-align-middle argus_hrm_pop_pg" scope="col" title="Planningsgesprekken">Pg</th>
		    <th class="views-field views-align-middle argus_hrm_pop_fg" scope="col" title="Functioneringsgesprekken">Fg</th>
		    <th class="views-field views-align-middle argus_hrm_pop_eg" scope="col" title="Evaluatiegesprekken">Eg</th>
		    <th class="views-field views-align-middle argus_hrm_pop_kb" scope="col" title="Klasbezoeken">Kb</th>
		    <th class="views-field views-align-middle argus_hrm_pop_fb" scope="col" title="Flitsbezoeken">Fb</th>
		</tr>
    </thead>
    <tbody>
	<?php
	
	$cntr = 1;
	
	foreach ($users as $uid => $u){
		
		$counted = count( $u['register'] );
		
		print '<tr>';
		
		print '<td>'.($cntr++).'</td>';
		
		print '<td style="text-align: left; padding-left: 8px;"><a href="'.base_path().drupal_lookup_path('alias', 'user/'.$uid).'" target="_blank">'.$u['name'].'</a></td>';
		
		foreach ($u['register'] as $id => $t){
			print '<td class="views-field views-align-middle argus_hrm_pop_' . $t['type'] . '" scope="col" title="' . $types[ $t['type'] ] . '"><a href="' . $base_url . '/' . drupal_get_path_alias( 'node/' . $t['id'] ) . '">' . format_date( strtotime( $id ), 'custom', 'd/m/y' ) . '</a></td>';
		}
		
		for ($x = 0; $x < ( $max - $counted ); $x++){
			print '<td></td>';
		}
		
		foreach ($types as $t => $tp){
			print '<td>' . count( $u['phases'] [$t] ) . '</td>';
		}
		
		print '</tr>';
	}
	
	?>
	</tbody>
</table>