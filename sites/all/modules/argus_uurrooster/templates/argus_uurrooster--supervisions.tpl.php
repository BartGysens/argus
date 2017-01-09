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

drupal_add_css(drupal_get_path('module', 'argus_uurrooster').'/css/argus_uurrooster.css');
drupal_add_js(drupal_get_path('module', 'argus_uurrooster').'/js/argus_uurrooster.js');

global $user, $base_url;

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'uurrooster_toezicht_locatie')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->fieldOrderBy('field_uurrooster_toez_gewicht', 'value', 'ASC');
$periods = $query->execute();

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'uurrooster_periode')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->fieldOrderBy('field_uurrooster_periode_dag', 'value', 'DESC')
    ->range(0,1);
$days = $query->execute();
if (count($days)){
	$days = (array) node_load(key($days['node']));
	$days = $days['field_uurrooster_periode_dag'][LANGUAGE_NONE][0]['value'];
}

$checkRoles = array(
	'add any uurrooster_toezicht content',
	'edit any uurrooster_toezicht content',
	'delete any uurrooster_toezicht content',
);

if (array_key_exists('s', $_GET)){
	$start = $_GET['s'];
	$queryStr = '?s='.$_GET['s'];
} else {
	$start = date('d-m-Y');
	$queryStr = '';
}
$currentStartOfWeek = new DateTime($start);
$currentStartOfWeek->modify('+1 days');
$currentStartOfWeek->modify('last monday');

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
		    
		    if (user_access('add any uurrooster_toezicht content') || 
		        user_access('edit any uurrooster_toezicht content') || 
		        user_access('delete any uurrooster_toezicht content')){
			    echo '<th style="font-style: italic;">'.t('details').'</th>';
		    }
		    ?>
	    </tr>
    </thead>
    <tbody>
<?php
$start = TRUE;

if (count($periods)){
	foreach ($periods['node'] as $p => $period) {
	    $period = (array) node_load($p);
	    echo '<tr>';
	    $title = str_replace($period['field_uurrooster_toez_tijdstip'][LANGUAGE_NONE][0]['value'].' - ', '', $period['title']);
	    echo '<td style="background-color: #eee;"><a href="'.$base_url.'/'.drupal_get_path_alias('node/'.$p).'" target="_blank">'.$title.'</a><div style="font-size: smaller;">'.$period['field_uurrooster_toez_tijdstip'][LANGUAGE_NONE][0]['value'].'</div></td>';
	    for ($d = 1; $d <= $days; $d++) {
	        $query = new EntityFieldQuery();
	        $query->entityCondition('entity_type', 'node')
	            ->entityCondition('bundle', 'uurrooster_toezicht')
	            ->propertyCondition('status', NODE_PUBLISHED)
	            ->fieldCondition('field_uurrooster_toez_dag', 'value', $d, '=')
	            ->fieldCondition('field_uurrooster_toez_locatie', 'target_id', $p, '=');
	        $currentSupervisions = $query->execute();
	        
	        echo '<td id="lesson_'.$d.'-'.$p.'" style="vertical-align: middle;"';
	        if (user_access('add any uurrooster_toezicht content') || 
	        	user_access('edit any uurrooster_toezicht content') || 
	        	user_access('delete any uurrooster_toezicht content')) {
	        	echo ' class="lesson pack'.$d.'-'.$p.'" onclick="argus_uurrooster_getSupervisionDetails('.$d.','.$p.')"';
	        }
	        echo '>';
	        
	        if (count($currentSupervisions)>0){
	        	foreach ($currentSupervisions['node'] as $k => $cs){
	        		$currentSupervision = (array) node_load($k);
	        		$currentSupervisor = $currentSupervision['field_uurrooster_toez_toezichter'][LANGUAGE_NONE][0]['target_id'];
	       			echo '<div';
			        if (array_key_exists($currentSupervisor, variable_get('argus_uurrooster_supervisions_exemptions'))){
			        	echo ' style="background-color: #ff9999 !important;"';
			        }
	       			echo '><a href="'.$base_url.'/uurrooster/leerkracht/'.$currentSupervisor.'">'.argus_get_user_realname($currentSupervisor).'</a>';
	       			if (user_access('add any uurrooster_toezicht content') ||
	       				user_access('edit any uurrooster_toezicht content') ||
	       				user_access('delete any uurrooster_toezicht content')) {
	       				echo '<br /><a href="#" style="font-size: smaller;">bewerken</a>';
					}
					echo '</div>';
	            }
	        } else {
	            if (user_access('add any uurrooster_toezicht content') ||
	       			user_access('edit any uurrooster_toezicht content') ||
	       			user_access('delete any uurrooster_toezicht content')) {
	     			echo '<a href="#" style="font-size: smaller; color: #f00;">toevoegen</a>';
				} else {
					echo '&nbsp;';
				}
	        }
	        echo '</td>';
	    }
	    if ($start && (user_access('add any uurrooster_toezicht content') || 
	        		   user_access('edit any uurrooster_toezicht content') || 
	        		   user_access('delete any uurrooster_toezicht content'))){
	        echo '<td id="argus_uurrooster_schedule_details" rowspan="'.count($periods['node']).'"><em>'.t('klik op een uur voor meer info').'</em></td>';
	        $start = FALSE;
	    }
	    echo '</tr>';
	}
} else {
	echo '<div style="font-weight: bold; color:red; text-align: center;">Geen roosters gevonden.</div>';
}

?>
</tbody>
</table>
