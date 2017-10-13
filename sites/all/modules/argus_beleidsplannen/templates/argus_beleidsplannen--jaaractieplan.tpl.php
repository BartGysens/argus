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
?>

<div class="clearfix">

    <div class="content">
		<h1>Jaaractieplan</h1>
    	
    	<div>
	        <?php if (count($actions)) { ?>
	        	<table class="argus_beleidsplannen_actieplan argus_beleidsplannen_jap">
		        	<thead>
			        	<tr>
			        		<th>deadline</th>
			        		<th>actie</th>
			        		<th>uitvoerder</th>
			        		<th>status</th>
			        		<th class="views-align-left">beleidsplan</th>
			        		<th class="views-align-left">operationele doelstelling(en) / onderwijs kader - OK (Inspectie 2.0)</th>
			        	</tr>
			        </thead>
			        <tbody>
				        <?php
				        $i = 0;
				        $schoolyear = 0;
				        $all_actions = array();
				        $all_budgets = array();
				        $all_executors = array();
			        	foreach($actions as $ad => $ap) {
			        		$ad_sj_y = date('Y', strtotime($ad));
				        	$ad_sj_m = date('m', strtotime($ad));
				        	if ($ad_sj_m < 9){
				        		$ad_sj_y--;
				        	}
				        	
				        	$ad_sj = $ad_sj_y . ' - ' . ($ad_sj_y + 1);
				        	if ($schoolyear != $ad_sj){
				        		$schoolyear = $ad_sj;
				        		$i = 0;

				        		$all_actions[ $ad_sj ] = array( 'ok' => 0, 'nok' => 0 );
				        		$all_budgets[ $ad_sj ] = array( 'ok' => 0, 'nok' => 0 );
				        		$all_executors[ $ad_sj ] = array();
				        		
				        		print '<tr class="schoolyear"><td colspan="10">schooljaar ' . $schoolyear . '</td></tr>';
			        		}
				        	
				        	foreach ( $ap as $k => $d ) {
				        		if ($k == 0) {
				        			print '<tr class="'.($i%2 == 0 ? "even" : "odd").'" rowspan="'. count($ap) .'"><td>' . $d ['deadline'] . '</td>';
				        		} else {
				        			print '<tr><td></td>';
				        		}
				        	
				        		print '<td>' . $d ['description'] . '</td><td><a href="' . base_path() . drupal_get_path_alias('user/' . $d ['gebruiker']) . '">' . argus_get_user_realname($d ['gebruiker']) . '</a></td><td>' . $d ['status'] . '</td><td class="views-align-left"><a href="' . base_path() . drupal_get_path_alias( 'node/' . $d [ 'bp_id' ] ) . '">' . $d ['bp_title'] . '</a></td>';
				        		print '<td class="views-align-left">' . $d ['od'] . '<hr /><p>' . implode( '<p/><p>', $d ['rok_opt'] ) . '</p></td></tr>';
				        		
				        		$i++;
				        		
				        		if ($d [ 'status' ] == 'afgehandeld' || $d [ 'status' ] == 'geannuleerd' ){
				        			$all_actions[ $ad_sj ] [ 'ok' ]++;
				        			$all_budgets[ $ad_sj ] [ 'ok' ] += $d ['budget'];
				        		} else {
				        			$all_actions[ $ad_sj ] [ 'nok' ]++;
				        			$all_budgets[ $ad_sj ] [ 'nok' ] += $d ['budget'];
				        		}
				        		
				        		$all_executors[ $ad_sj ] [] = $d ['gebruiker'];
			        		}
			        	}
			        	
			        	?>
					</tbody>
				</table>
			<?php } else { print '<em style="font-size: smaller;">geen acties gedefinieerd</em>'; } ?>
		</div>
		
    </div>
    
</div>