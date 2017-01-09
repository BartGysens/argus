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

if ($order == 'DESC'){
	$order = 'ASC';
	$orderImg = '<img typeof="foaf:Image" src="'.$base_url.'/misc/arrow-asc.png" width="13" height="13" alt="'.t('oplopend sorteren').'" title="'.t('oplopend sorteren').'">';
} else {
	$order = 'DESC';
	$orderImg = '<img typeof="foaf:Image" src="'.$base_url.'/misc/arrow-desc.png" width="13" height="13" alt="'.t('aflopend sorteren').'" title="'.t('aflopend sorteren').'">';
}

?>

<table class="views-table sticky-enabled tableheader-processed sticky-table argus_hrm" style="page-break-after: always;">
    <thead style="font-weight: bold;">
    	<tr>
		    <th class="views-field views-align-middle" scope="col" rowspan="2">Nr.</td>
		    <th class="views-field views-align-left" scope="col" rowspan="2"><a href="<?php print $base_url.'/hrm/workload?s=name&order='.$order; ?>"><?php print t('NAAM'); if ($orderBy == 'name'){ print $orderImg; } ?></a></td>
		    <?php if (module_exists('argus_uurrooster')){ ?>
			    <th class="views-field views-align-middle" scope="col" rowspan="2"><?php print t('PERMANENTIE'); ?></td>
			    <th class="views-field views-align-middle" scope="col" colspan="4"><?php print t('TOEZICHTEN'); ?></td>
			    <th class="views-field views-align-middle" scope="col" rowspan="2" title="<?php print t('SPRINGUREN'); ?>"><a href="<?php print $base_url.'/hrm/workload?s=springuren&order='.$order; ?>"><?php print t('+UREN'); if ($orderBy == 'springuren'){ print $orderImg; } ?></a></td>
			    <th class="views-field views-align-middle" scope="col" rowspan="2" title="<?php print t('PLAGE-UREN'); ?>"><a href="<?php print $base_url.'/hrm/workload?s=plage-uren&order='.$order; ?>"><?php print t('PLAGE'); if ($orderBy == 'plage-uren'){ print $orderImg; } ?></a></td>
		    <?php } ?>
		    
			<?php if (module_exists('argus_klasbeheer')){ ?>
			    <th class="views-field views-align-middle" scope="col" colspan="2"><?php print t('KLASTITULARIS'); ?></td>
			<?php } ?>
		    
			<?php if (module_exists('argus_stages')){ ?>
			    <th class="views-field views-align-middle" scope="col" rowspan="2"><a href="<?php print $base_url.'/hrm/workload?s=stages&order='.$order; ?>"><?php print t('STAGES'); if ($orderBy == 'stages'){ print $orderImg; } ?></a></td>
			<?php } ?>
			
		    <th class="views-field views-align-middle" scope="col" rowspan="2"><a href="<?php print $base_url.'/hrm/workload?s=roles&order='.$order; ?>"><?php print t('ROLLEN'); if ($orderBy == 'roles'){ print $orderImg; } ?></a></td>
		    <th class="views-field views-align-middle" scope="col" rowspan="2"><a href="<?php print $base_url.'/hrm/workload?s=score&order='.$order; ?>"><?php print t('SCORE'); if ($orderBy == 'score'){ print $orderImg; } ?></a></td>
		</tr>
		<tr>
			<?php if (module_exists('argus_uurrooster')){ ?>
				<th class="views-field views-align-middle" scope="col" style="font-size: 8px;">kort<br/>effectief</td>
				<th class="views-field views-align-middle" scope="col" style="font-size: 8px;">kort<br/>vervanger</td>
				<th class="views-field views-align-middle" scope="col" style="font-size: 8px;">lang<br/>effectief</td>
				<th class="views-field views-align-middle" scope="col" style="font-size: 8px;">lang<br/>vervanger</td>
			<?php } ?>
		    
			<?php if (module_exists('argus_klasbeheer')){ ?>
			    <th class="views-field views-align-middle" scope="col" rowspan="2"><a href="<?php print $base_url.'/hrm/workload?s=ktt_lln&order='.$order; ?>"><?php print t('KTT'); if ($orderBy == 'ktt_lln'){ print $orderImg; } ?></a></td>
			    <th class="views-field views-align-middle" scope="col" rowspan="2"><a href="<?php print $base_url.'/hrm/workload?s=hktt_lln&order='.$order; ?>"><?php print t('HKTT'); if ($orderBy == 'hktt_lln'){ print $orderImg; } ?></a></td>
			<?php } ?>
		</tr>
    </thead>
    <tbody>
	<?php
	
	$cntr = 1;
	foreach ($users as $uid => $u){
		print '<tr>';
		
		print '<td>'.($cntr++).'</td>';
		
		print '<td ';
		if ($orderBy == 'name'){
			print ' class="active"';
		}
		print 'style="text-align: left; padding-left: 8px;"><a href="'.base_path().drupal_lookup_path('alias', 'user/'.$uid).'" target="_blank">'.$u['name'].'</a></td>';
		
		// Data related to module 'argus - Uurroosters'
		if (module_exists('argus_uurrooster')){
			print '<td>';
			if ($u['substitute']){
				print 'x';
			} elseif (in_array($uid, $availableSubstitutes)){
				print '-';
			}
			print '</td>';
			
			print '<td>';
			if ($u['supervision_kort-effectief']){
				print $u['supervision_kort-effectief'];
			} elseif (in_array($uid, $availableSupervisors)){
				print '-';
			}
			print '</td>';
			
			print '<td>';
			if ($u['supervision_kort-vervanger']){
				print $u['supervision_kort-vervanger'];
			} elseif (in_array($uid, $availableSupervisors)){
				print '-';
			}
			print '</td>';
			
			print '<td>';
			if ($u['supervision_lang-effectief']){
				print $u['supervision_lang-effectief'];
			} elseif (in_array($uid, $availableSupervisors)){
				print '-';
			}
			print '</td>';
			
			print '<td>';
			if ($u['supervision_lang-vervanger']){
				print $u['supervision_lang-vervanger'];
			} elseif (in_array($uid, $availableSupervisors)){
				print '-';
			}
			print '</td>';
			
			print '<td';
			if ($orderBy == 'springuren'){
				print ' class="active"';
			}
			print '>';
			if ($u['springuren'] > 0){
				print $u['springuren'];
			}
			print '</td>';
			
			print '<td';
			if ($orderBy == 'plage-uren'){
				print ' class="active"';
			}
			print '>';
			if ($u['plage-uren'] > 0){
				print $u['plage-uren'];
			}
			print '</td>';
		}

		// Data related to module 'argus - Klasbeheer'
		if (module_exists('argus_klasbeheer')){
			print '<td ';
			if ($orderBy == 'ktt_lln'){
				print ' class="active"';
			}
			print '>';
			if ($u['ktt'] > 0){
				print $u['ktt'].'<div style="font-size: 0.7em;">'.$u['ktt_lln'].' lln</div>';
			}
			print '</td>';
			
			print '<td ';
			if ($orderBy == 'hktt_lln'){
				print ' class="active"';
			}
			print '>';
			if ($u['hktt'] > 0){
				print $u['hktt'].'<div style="font-size: 0.7em;">'.$u['hktt_lln'].' lln</div>';
			}
			print '</td>';
		}

		// Data related to module 'argus - Stages'
		if (module_exists('argus_stages')){
			print '<td ';
			if ($orderBy == 'stages'){
				print ' class="active"';
			}
			print '>';
			if ($u['stages'] > 0){
				print $u['stages'].' lln';
			}
			print '</td>';
		}
		
		print '<td ';
		if ($orderBy == 'roles'){
			print ' class="active"';
		}
		print 'style="text-align: left; padding-left: 8px;">';
		if (count($u['roles'])){
			print '<ol><li>'.implode('</li><li>',$u['roles']).'</li></ol>';
		}
		print '</td>';
		
		print '<td ';
		if ($orderBy == 'score'){
			print ' class="active"';
		}
		print 'style="text-align: center;">'.$u['score'].'</td>';
		
		print '</tr>';
	}
	
	?>
	</tbody>
</table>
<p><!-- pagebreak --></p> 
<h3>Parameters</h3>

	<h4>Rollen</h4>
	<ul>
		<?php
		$roles = user_roles();
		foreach($roles as $rid => $role){
			$skore = variable_get('argus_hrm_workload_role-'.$rid, 0);
			if ($skore){
				$role = user_role_load($rid);
				print '<li>'.$role->name.': '.$skore.' minuten</li>';
			}
		}
		?>
	</ul>

<?php if (module_exists('argus_uurrooster')){ ?>
	<h4>Uurroosters</h4>
	<ul>
		<li>Aantal minuten dat een springuur telt: <?php print variable_get('argus_hrm_workload_springuren'); ?> minuten</li>
		<li>Aantal minuten die een hulpklastitularis nodig heeft per leerling: <?php print variable_get('argus_hrm_workload_hktt'); ?> minuten</li>
	</ul>
	
	<h4>Permanenties</h4>
	<ul>
		<li>Aantal minuten dat een permanentie telt: <?php print variable_get('argus_hrm_workload_substitute'); ?> minuten</li>
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
			<em><u>Opmerkingen</u>:<br />
			<?php print variable_get('argus_uurrooster_substitutions_exemptions_remarks'); ?></em>
		</li>
	</ul>
	
	<h4>Toezichten</h4>
	<ul>
		<li>Aantal minuten dat een kort, effectief toezicht telt: <?php print variable_get('argus_hrm_workload_toezicht-kort-effectief'); ?> minuten</li>
		<li>Aantal minuten dat een kort, vervangend toezicht telt: <?php print variable_get('argus_hrm_workload_toezicht-kort-vervanger'); ?> minuten</li>
		<li>Aantal minuten dat een lang, effectief toezicht telt: <?php print variable_get('argus_hrm_workload_toezicht-lang-effectief'); ?> minuten</li>
		<li>Aantal minuten dat een lang, vervangend toezicht telt: <?php print variable_get('argus_hrm_workload_toezicht-lang-vervanger'); ?> minuten</li>
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
			<em><u>Opmerkingen</u>:<br />
			<?php print variable_get('argus_uurrooster_supervisions_exemptions_remarks'); ?></em>
		</li>
	</ul>
<?php } ?>

<?php if (module_exists('argus_klasbeheer')){ ?>
	<h4>Klastitularissen en hulpklastitularissen</h4>
	<ul>
		<li>Aantal minuten die een klastitularis nodig heeft per leerling: <?php print variable_get('argus_hrm_workload_ktt'); ?> minuten</li>
		<li>Aantal minuten die een hulpklastitularis nodig heeft per leerling: <?php print variable_get('argus_hrm_workload_hktt'); ?> minuten</li>
	</ul>
<?php } ?>

<?php if (module_exists('argus_stages')){ ?>
	<h4>Stages</h4>
	<ul>
		<li>Aantal minuten die een stagebegeleider nodig heeft per leerling: <?php print variable_get('argus_hrm_workload_stages'); ?> minuten</li>
	</ul>
<?php } ?>