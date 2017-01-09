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

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'uurrooster_periode')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->fieldCondition('field_uurrooster_periode_dag', 'value', 1, '=');
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

$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'lokaal')
    ->fieldCondition('field_lokaal_type', 'value', 'klaslokaal', '=')
    ->propertyCondition('status', NODE_PUBLISHED);
$cntAllRooms = $query->count()->execute();

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

$previousStartOfWeek = clone $currentStartOfWeek;
$previousStartOfWeek = date_format($previousStartOfWeek->sub(date_interval_create_from_date_string('7 days')), 'd-m-Y');
$nextStartOfWeek = clone $currentStartOfWeek;
$nextStartOfWeek = date_format($nextStartOfWeek->add(date_interval_create_from_date_string('7 days')), 'd-m-Y');

?>

<h2><?php print t('Beschikbare lokalen'); ?></h2>
<em><?php print t('(aantal vrije lokalen in het overzicht, klikken op een blok voor meer details; de roosters van de lokalen kan je rechts opvragen)'); ?></em>

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
		    
		    echo '<th style="font-style: italic;" class="argus_uurrooster_schedule_details_TD">'.t('details').'</th>';
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
	    echo '<td class="periode_descr" style="background-color: #eee;">'.substr($period['field_uurrooster_periode_start'][LANGUAGE_NONE][0]['value'],0,2).':'.substr($period['field_uurrooster_periode_start'][LANGUAGE_NONE][0]['value'],2).'<br />-<br />'.substr($period['field_uurrooster_periode_eind'][LANGUAGE_NONE][0]['value'],0,2).':'.substr($period['field_uurrooster_periode_eind'][LANGUAGE_NONE][0]['value'],2).'</td>';
	    for ($d = 0; $d < $days; $d++) {
	        $query = new EntityFieldQuery();
	        $query->entityCondition('entity_type', 'node')
	            ->entityCondition('bundle', 'uurrooster_periode')
	            ->propertyCondition('status', NODE_PUBLISHED)
	            ->fieldCondition('field_uurrooster_periode_dag', 'value', $d+1, '=')
	            ->fieldCondition('field_uurrooster_periode_periode', 'value', $period['field_uurrooster_periode_periode'][LANGUAGE_NONE][0]['value'], '=');
	        $currentPeriod = $query->execute();
	        
	        if ($currentPeriod){
		        $query = 'SELECT DISTINCT(l.field_uurrooster_les_lokaal_target_id) '
		               . 'FROM {field_data_field_uurrooster_les_periode} AS p '
		               . 'INNER JOIN {field_data_field_uurrooster_les_lokaal} AS l ON l.entity_id = p.entity_id '
		               . 'WHERE p.field_uurrooster_les_periode_target_id = :pid';
		        $result = db_query($query, array(':pid' => key($currentPeriod['node'])));
		        $currentRooms = count($result->fetchCol());
		        
		        echo '<td id="lesson_'.key($currentPeriod['node']).'"';
		        if ($currentRooms>0 && ($cntAllRooms - $currentRooms)) {
		            echo ' class="lesson pack'.key($currentPeriod['node']).' available" onclick="argus_uurrooster_getFreeRooms('.key($currentPeriod['node']).')">'.($cntAllRooms - $currentRooms);
		        } else {
		            echo '>';
		        }
	        } else {
	        	echo '<td>';
	        }
	        echo '</td>';
	    }
	    if ($start){
	        echo '<td id="argus_uurrooster_schedule_details" rowspan="'.count($periods['node']).'"><em>'.t('klik op een uur voor meer info').'</em></td>';
	        $start = FALSE;
	    }
	    echo '</tr>';
	}
} else {
	echo '<tr><td style="font-weight: bold; color:red; text-align: center;">Geen roosters gevonden.</td></tr>';
}

?>
</tbody>
</table>