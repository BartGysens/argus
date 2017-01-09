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

<table class="argus_uurrooster_schedule">
    <thead>
    	<tr>
		    <th></th>
		    <?php
		    $currentDays = clone $currentStartOfWeek;
		    if ($days){
			    for ($d = 0; $d < $days; $d++) {
			    	echo '<th>'.t($currentDays->format('l')).'</th>';
			    	$currentDays->modify('+1 days');
			    }
		    }
		    
			if (user_access('add any uurrooster_permanentie content') || 
				user_access('edit any uurrooster_permanentie content') || 
				user_access('delete any uurrooster_permanentie content')){
			    echo '<th style="font-style: italic;">'.t('details').'</th>';
		    }
		    ?>
		</tr>
    </thead>
<?php
$start = TRUE;
if (count($periods)){
	foreach ($periods['node'] as $p => $period) {
	    $period = (array) node_load($p);
	    echo '<tr>';
	    echo '<td style="background-color: #eee;">'.substr($period['field_uurrooster_periode_start'][LANGUAGE_NONE][0]['value'],0,2).':'.substr($period['field_uurrooster_periode_start'][LANGUAGE_NONE][0]['value'],2).'<br />-<br />'.substr($period['field_uurrooster_periode_eind'][LANGUAGE_NONE][0]['value'],0,2).':'.substr($period['field_uurrooster_periode_eind'][LANGUAGE_NONE][0]['value'],2).'</td>';
	    for ($d = 0; $d < $days; $d++) {
	        $query = new EntityFieldQuery();
	        $query->entityCondition('entity_type', 'node')
	            ->entityCondition('bundle', 'uurrooster_periode')
	            ->propertyCondition('status', NODE_PUBLISHED)
	            ->fieldCondition('field_uurrooster_periode_dag', 'value', $d+1, '=')
	            ->fieldCondition('field_uurrooster_periode_periode', 'value', $period['field_uurrooster_periode_periode'][LANGUAGE_NONE][0]['value'], '=');
	        $currentPeriod = $query->execute();
	        
	        if ($currentPeriod){
		        $query = new EntityFieldQuery();
		        $query->entityCondition('entity_type', 'node')
		            ->entityCondition('bundle', 'uurrooster_permanentie')
		            ->propertyCondition('status', NODE_PUBLISHED)
		            ->fieldCondition('field_uurrooster_perm_periode', 'target_id', key($currentPeriod['node']), '=');
		        $currentSubstitutions = $query->execute();
		        
		        echo '<td id="lesson_'.key($currentPeriod['node']).'" style="vertical-align: middle;"';
		        if (user_access('add any uurrooster_permanentie content') || 
		        	user_access('edit any uurrooster_permanentie content') || 
		        	user_access('delete any uurrooster_permanentie content')) {
		        	echo ' onclick="argus_uurrooster_getDetails('.key($currentPeriod['node']).')" class="lesson pack'.key($currentPeriod['node']);
		        }
		        
		        if (count($currentSubstitutions)>0){
		        	foreach ($currentSubstitutions['node'] as $k => $cs){
		        		$remark = '';
		        		$currentSubstitution = (array) node_load($k);
		        		$currentSubstitute = $currentSubstitution['field_uurrooster_perm_vervanger'][LANGUAGE_NONE][0]['target_id'];
		        		
		        		// Check if this substitute is not in a course
		        		$query = new EntityFieldQuery();
		        		$query->entityCondition('entity_type', 'node')
			        		->entityCondition('bundle', 'uurrooster_les')
			        		->propertyCondition('status', NODE_PUBLISHED)
			        		->fieldCondition('field_uurrooster_les_periode', 'target_id', key($currentPeriod['node']), '=')
			        		->fieldCondition('field_uurrooster_les_leerkracht', 'target_id', $currentSubstitute, '=');
		        		$cntr = $query->count()->execute();
		        		if ($cntr > 0){
		        			echo ' substituted';
		        			$remark .= '<div style="font-size: smaller; color: red;">[uurroosterconflict]</div>';
		        		}
		        		
		        		// Check if this substitute isnot added to the exemptions list
				        if (array_key_exists($currentSubstitute, variable_get('argus_uurrooster_substitutions_exemptions'))){
				        	echo ' substituted';
		        			$remark .= '<div style="font-size: smaller; color: red;">[uitzondering]</div>';
				        }
				        
		       			echo '"><a href="'.$base_url.'/uurrooster/leerkracht/'.$currentSubstitute.'">'.argus_get_user_realname($currentSubstitute).'</a>';
		       			if (user_access('add any uurrooster_permanentie content') ||
		       				user_access('edit any uurrooster_permanentie content') ||
		       				user_access('delete any uurrooster_permanentie content')) {
		       				echo '<br /><a href="#" style="font-size: smaller;">bewerken</a>';
						}
						
						echo $remark;
		            }
		        } else {
		            if (user_access('add any uurrooster_permanentie content') ||
		       			user_access('edit any uurrooster_permanentie content') ||
		       			user_access('delete any uurrooster_permanentie content')) {
		     			echo '"><a href="#" style="font-size: smaller; color: #f00;">toevoegen</a>';
					} else {
						echo '">&nbsp;';
					}
		        }
	        } else {
	        	echo '<td>';
	        }
	        echo '</td>';
	    }
	    if ($start && (user_access('add any uurrooster_permanentie content') || 
	        		   user_access('edit any uurrooster_permanentie content') || 
	        		   user_access('delete any uurrooster_permanentie content'))){
	        echo '<td id="argus_uurrooster_schedule_details" rowspan="'.count($periods['node']).'"><em>'.t('klik op een uur voor meer info').'</em></td>';
	        $start = FALSE;
	    }
	    echo '</tr>';
	}
} else {
	echo '<div style="font-weight: bold; color:red; text-align: center;">Geen roosters gevonden.</div>';
}

?>
</table>
