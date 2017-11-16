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

global $base_url;
$path = drupal_get_path('module', 'argus_afwezigheden');

$q = $_SERVER['QUERY_STRING'];

if (isset ( $_GET )) {
	if (array_key_exists ( 'd', $_GET )) {
		$today = date('Y-m-d 00:00:00', strtotime( $_GET['d'] ) );
	} else {
		$today = date('Y-m-d 00:00:00');
	}
}

?>

<div class="view-content">
    <table class="views-table sticky-enabled cols-10" >
        <thead>
            <tr>
                <th rowspan="2" class="views-field active views-align-left">Nr.</th>
                <th rowspan="2" class="views-field active views-align-left">Leerling</th>
                <th rowspan="2" class="views-field views-align-center">Aantal</th>
                <th colspan="2" class="views-field views-align-center">Status</th>
                <th rowspan="2" class="views-field views-align-right" style="font-weight: bold !important;">Acties voor <?php print format_date(strtotime($today),'custom', 'D, d M Y'); ?></th>
            </tr>
            <tr>
                <th class="views-field views-align-center" style="font-size: smaller;">Gewettigd</th>
                <th class="views-field views-align-center" style="font-size: smaller;">Ongewettigd</th>
            </tr>
        </thead>
        <tbody>
            <?php
            
            $reasons = implode( '</option><option>', explode( chr( 13 ), variable_get( 'argus_afwezigheden_latecomers_justification_reasons' ) ) );
            
            $i = 0;
            foreach ($data as $uid => $dates){
            	$pass = true;
            	if (isset ( $_GET )) {
            		if (array_key_exists ( 'd', $_GET )) {
            			if ( ( !in_array( $today, $dates[0] ) ) && ( !in_array( $today, $dates[1] ) ) ) {
            				$pass = false;
            			}
            		}
            	}
            	
            	if ( $pass ){
	            	$total = 0;
	                if (isset($dates[0])){
	            		$total += count($dates[0]);
	            	}
	            	if (isset($dates[1])){
	            		$total += count($dates[1]);
	            	}
	            	
	                print '<tr class="' . ( $i % 2 == 0 ? "even" : "odd" ) . ' views-row-first">';
	                    print '<td class="views-field views-align-center">' . ( $i + 1 ) . '</td>';
	                	print '<td class="views-field views-align-left">' . argus_engine_get_user_link( $uid, null, null, true ) . '</td>';
	                    print '<td class="views-field views-align-center">' . $total . '</td>';
						
	                    print '<td class="views-field views-align-center" style="font-size: smaller;">' . count($dates[1]) . '</td>';
	                    
	                    print '<td class="views-field views-align-center" style="font-size: smaller;">' . count($dates[0]) . '</td>';
	                    
	                    print '<td class="views-field views-align-right">';
	                    $waiter = false;
	                    if (isset($dates[0])){
		                    if ($k = array_keys($dates[0], $today)){
		                    	print '<div id="create_block_form_' . $k[0] . '">';
			                    	print '<select id="select_' . $k[0] . '"><option>' . $reasons . '</option></select> ';
			                    	print '<a href="#" class="argus_afwezigheden_create" id="' . $k[0] . '">' . t( 'wettigen' ) . '</a>';
			                    print '</div>';
			                    $waiter = $k[0];
		                    }
	                    }
	                    if (isset($dates[1])){
		                    if ($k = array_keys($dates[1], $today)){
		                    	$query = 'SELECT reason FROM {argus_lvs_latecomers_rectified} WHERE date_late = :id';
		                    	$reason = db_query ( $query, array (
		                    			':id' => $k[0],
		                    	) )->fetchField();
		                    	
		                    	print '<div id="delete_block_form_' . $k[0] . '">';
			                    	print '<a href="#" class="argus_afwezigheden_delete" id="' . $k[0] . '">' . t( 'wettiging ongedaan maken' ) . ' (' . $reason . ')</a>';
			                    print '</div>';
			                    $waiter = $k[0];
		                    }
	                    }
	                	if ($waiter){
	                		print '<img src="' . $base_url . '/' . $path . '/images/waiter.gif" class="argus_afwezigheden_waiter" id="waiter_' . $waiter . '" />';
	                	}
	                    print '</td>';
	                print '</tr>';
	                $i++;
            	}
            }
            
            ?>
        </tbody>
    </table>
</div>