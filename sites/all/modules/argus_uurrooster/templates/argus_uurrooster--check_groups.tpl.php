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

global $user, $base_url;

?>

<table class="argus_uurrooster_schedule views-table sticky-enabled cols-4 tableheader-processed sticky-table" style="page-break-after: always;">
    <thead>
    	<tr>
		    <th class="views-field views-align-middle" scope="col">Nr.</td>
		    <th class="views-field views-align-left" scope="col" style="text-align: left; width: 10%;"><?php print t('NAAM'); ?></td>
		    <th class="views-field views-align-left" scope="col" style="text-align: left; width: 30%;"><?php print t('UURROOSTER'); ?> - Untis</td>
		    <th class="views-field views-align-left" scope="col" style="text-align: left; width: 30%;"><?php print t('GROEPEN'); ?> - Smartschool</td>
		    <th class="views-field views-align-left" scope="col" style="text-align: left; width: 30%;"><?php print t('AFWIJKING'); ?> - aanpassen in Smartschool</td>
		</tr>
    </thead>
    <tbody>
	<?php
	
	$cntr = 1;
	foreach ($users as $uid => $u){
		print '<tr>';
		
		print '<td>'.($cntr++).'</td>';
		
		print '<td style="text-align: left;">' . argus_engine_get_user_link( $uid, null, '_blank' ) . '</td>';
		
		print '<td style="text-align: left;">';
		$scheduled_groups = array();
		foreach($u['scheduled_groups'] as $gid){
			$g = node_load($gid);
			$scheduled_groups[] = $g->title;
		}
		sort($scheduled_groups);
		print implode(', ', $scheduled_groups);
		print '</td>';
		
		print '<td style="text-align: left;">';
		$assigned_groups = array();
		foreach($u['assigned_groups'] as $gid){
			$g = node_load($gid);
			$assigned_groups[] = $g->title;
		}
		sort($assigned_groups);
		print implode(', ', $assigned_groups);
		print '</td>';
		
		print '<td style="text-align: left; background-color: ';
		if ((count(array_diff($scheduled_groups, $assigned_groups)) + count(array_diff($assigned_groups, $scheduled_groups))) == 0){
			print '#E6F8E0';
		} else {
			print '#F8ECE0';
		}
		
		print ';"><div';
		
		if ($u['role'] <> 'Leerkracht'){
			print ' style="color: red; font-weight: bold;"';
		}
		print '>basisrol: ' . $u['role'] . '</div>';
		
		if (count($scheduled_groups) == 0){
			print '<div style="color: red; font-weight: bold;">UIT DIENST (als leerkracht)</div>';
		}
		
		if (count(array_diff($scheduled_groups, $assigned_groups)) > 0){
			print '<div style="color: green;">toevoegen: '.implode(', ', array_diff($scheduled_groups, $assigned_groups)) . '</div>';
		}
		if (count(array_diff($assigned_groups, $scheduled_groups)) > 0){
			print '<div style="color: red;">verwijderen: '.implode(', ', array_diff($assigned_groups, $scheduled_groups)) . '</div>';
		}
		
		print '</td>';
		
		print '</tr>';
	}
	
	?>
	</tbody>
</table>