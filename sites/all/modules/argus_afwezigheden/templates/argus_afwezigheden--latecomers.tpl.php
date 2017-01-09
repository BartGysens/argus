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

$q = $_SERVER['QUERY_STRING'];

?>

<div class="view-content">
    <table class="views-table sticky-enabled cols-10" >
        <thead>
            <tr>
                <th rowspan="2" class="views-field active views-align-left">Nr.</th>
                <th rowspan="2" class="views-field active views-align-left">Leerling</th>
                <th rowspan="2" class="views-field views-align-center">Aantal</th>
                <th colspan="3" class="views-field views-align-center" style="font-weight: strong;">Status</th>
            </tr>
            <tr>
                <th class="views-field views-align-left" style="font-size: smaller;">Avondstudie</th>
                <th class="views-field views-align-left" style="font-size: smaller;">Gewettigd</th>
                <th class="views-field views-align-left" style="font-size: smaller;">Ongewettigd</th>
            </tr>
        </thead>
        <tbody>
            <?php
            
            $i = 0;
            $pass1 = true;
            $pass2 = true;
            foreach ($data as $uid => $dates){
            	if (isset ( $_GET )) {
            		if (array_key_exists ( 'st', $_GET )) {
            			if ($_GET ['st'] == 'true') {
			            	$pass1 = false;
			            	if (isset($dates[0])){
			            		if (in_array(date('Y-m-d 00:00:00'),$dates[0])){
			            			$pass1 = true;
			            		}
			            	}
			            	$pass2 = false;
			            	if (isset($dates[1])){
			            		if (in_array(date('Y-m-d 00:00:00'),$dates[1])){
			            			$pass2 = true;
			            		}
			            	}
		            	}
            		}
            	}
            	
            	if ($pass1 || $pass2){
	            	$total = 0;
	                if (isset($dates[0])){
	            		$total += count($dates[0]);
	            	}
	            	if (isset($dates[1])){
	            		$total += count($dates[1]);
	            	}
	            	
	                print '<tr class="'.($i%2 == 0 ? "even" : "odd").' views-row-first">';
	                    print '<td class="views-field views-field-counter views-align-left">'.($i+1).'</td>';
	                	print '<td class="views-field views-field-counter views-align-left"><a href="'.base_path().drupal_lookup_path('alias', 'user/'.$uid).'">'.argus_get_user_realname($uid).' ('.argus_get_user_class($uid, 'title').')</a></td>';
	                    print '<td class="views-field views-field-counter views-align-center">'.$total.'</td>';
	                    
	                    print '<td class="views-field views-field-counter views-align-left">';
	                    if (isset($dates[0])){
		                    if ($k = array_keys($dates[0], date('Y-m-d 00:00:00'))){
		                    	print '<a href="telaatkomers-wettiging.create/'.$k[0].'?'.$q.'">'.t('wettigen').'</a>';
		                    }
	                    }
	                    print '</td>';
	
	                    print '<td class="views-field views-field-counter views-align-left">';
	                    if (isset($dates[1])){
		                    print count($dates[1]);
	                    	print '<ul>';
		                    foreach ($dates[1] as $did => $d){
			                    print '<li>';
		                    	if (date('Y-m-d 00:00:00') == $d){
			                    	print '<a href="telaatkomers-wettiging.delete/'.$did.'?'.$q.'">';
			                    }
			                    print date('d/m/y',strtotime($d));
		                    	if (date('Y-m-d 00:00:00') == $d){
			                    	print '<div style="font-size: smaller;">'.t('wettiging ongedaan maken').'</div></a>';
			                    }
			                    print '</li>';
		                    }
		                    print '</ul>';
	                    }
	                    print '</td>';
	                    
	                    print '<td id="onw'.$uid.'" class="views-field views-field-counter views-align-left onw">';
	                    if (isset($dates[0])){
		                    print count($dates[0]);
		                    print '<div id="onw'.$uid.'_tt" class="onw_tt">';
	                    	foreach ($dates[0] as $did => $d){
		                    	print format_date(strtotime($d),'custom', 'D, d M Y').'<br />';
		                    }
		                    print '</div>';
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