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

?>

<table class="argus_uurrooster_schedule" style="page-break-after: always;">
    <thead style="font-weight: bold;">
    	<tr>
		    <td rowspan="2" style="text-align: left; padding-left: 8px;"><?php print t('NAAM'); ?></td>
		    <td rowspan="2"><?php print t('PERMANENTIE'); ?></td>
		    <td colspan="4" style="border-bottom: none;"><?php print t('TOEZICHTEN'); ?></td>
		</tr>
		<tr>
			<td style="border-top: none;">kort - effectief</td>
			<td style="border-top: none;">kort - vervanger</td>
			<td style="border-top: none;">lang - effectief</td>
			<td style="border-top: none;">lang - vervanger</td>
		</tr>
    </thead>
    <tbody>
	<?php
	
	foreach ($users as $uid => $uname){
		print '<tr>';
		print '<td style="text-align: left; padding-left: 8px;">'.$uname.'</td>';
		
		print '<td>';
		if (in_array($uid, $substitutes)){
			print 'x';
		} elseif (in_array($uid, $availableSubstitutes)){
			print '-';
		}
		print '</td>';
		
		print '<td>';
		if (in_array($uid, array_keys($supervisions['kort']['effectief']))){
			print $supervisions['kort']['effectief'][$uid]['amount'];
		} elseif (in_array($uid, $availableSupervisors)){
			print '-';
		}
		print '</td>';
		
		print '<td>';
		if (in_array($uid, array_keys($supervisions['kort']['vervanger']))){
			print $supervisions['kort']['vervanger'][$uid]['amount'];
		} elseif (in_array($uid, $availableSupervisors)){
			print '-';
		}
		print '</td>';
		
		print '<td>';
		if (in_array($uid, array_keys($supervisions['lang']['effectief']))){
			print $supervisions['lang']['effectief'][$uid]['amount'];
		} elseif (in_array($uid, $availableSupervisors)){
			print '-';
		}
		print '</td>';
		
		print '<td>';
		if (in_array($uid, array_keys($supervisions['lang']['vervanger']))){
			print $supervisions['lang']['vervanger'][$uid]['amount'];
		} elseif (in_array($uid, $availableSupervisors)){
			print '-';
		}
		print '</td>';
		
		print '</tr>';
	}
	
	?>
	</tbody>
</table>
<p><!-- pagebreak --></p> 
<h3>Instellingen</h3>

<h4>Permanenties</h4>
<ul>
	<li>Maximaal aantal permanenties: <?php print variable_get('argus_uurrooster_substitutions_maximum'); ?></li>
	<li>Groep(en) waaruit vervangers worden geselecteerd: 
		<?php
		
		$roles = array();
		foreach (variable_get('argus_uurrooster_substitutions_roles') as $rid){
			$role = user_role_load($rid);
			$roles[] =  $role->name;
		}
		print implode(', ', $roles);
		
		?>
	</li>
	<li>Personen die niet in de selectie mogen worden opgenomen (wegens <?php print variable_get('argus_uurrooster_substitutions_exemptions_reason'); ?>):<br />
		<ul>
		<?php
		
		foreach (variable_get('argus_uurrooster_substitutions_exemptions') as $uid){
			print '<li style="line-height: 1.2em;">'.argus_get_user_realname($uid).'</li>';
		}
		
		?>
		</ul>
	</li>
	<li>
		<em><span style="underline">Opmerkingen</span>:<br />
		<?php print variable_get('argus_uurrooster_substitutions_exemptions_remarks'); ?></em>
	</li>
</ul>

<h4>Toezichten</h4>
<ul>
	<li>Maximaal aantal korte toezichten: <?php print variable_get('argus_uurrooster_supervisions_short_maximum'); ?></li>
	<li>Maximaal aantal lange toezichten: <?php print variable_get('argus_uurrooster_supervisions_long_maximum'); ?></li>
	<li>Groep(en) waaruit toezichters worden geselecteerd: 
		<?php
		
		$roles = array();
		foreach (variable_get('argus_uurrooster_supervisions_roles') as $rid){
			$role = user_role_load($rid);
			$roles[] =  $role->name;
		}
		print implode(', ', $roles);
		
		?>
	</li>
	<li>Personen die niet in de selectie mogen worden opgenomen (wegens <?php print variable_get('argus_uurrooster_supervisions_exemptions_reason'); ?>):<br />
		<ul>
		<?php
		
		foreach (variable_get('argus_uurrooster_supervisions_exemptions') as $uid){
			print '<li style="line-height: 1.2em;">'.argus_get_user_realname($uid).'</li>';
		}
		
		?>
		</ul>
	</li>
	<li>
		<em><span style="underline">Opmerkingen</span>:<br />
		<?php print variable_get('argus_uurrooster_supervisions_exemptions_remarks'); ?></em>
	</li>
</ul>