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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

?>

<h2>Status van de inventaris <span style='color: red'><?php print $data['maintenance']; ?></span></h2>

<div class="view-content">

    <table class="argus_inventaris views-table sticky-enabled cols-10" >
        <thead>
            <tr>
                <th class="views-field active views-align-left">Inventarisnr. (FIR)</th>
                <th class="views-field views-align-left">Omschrijving</th>
                <th class="views-field views-align-left">Locatie</th>
                <th class="views-field views-align-right">Status</th>
            </tr>
        </thead>
        <tbody>
            <?php
            
            $i = 0;
            foreach ($data['items'] as $k => $d){
                print '<tr class="'.$d->status.' '.($i%2 == 0 ? "even" : "odd").' views-row-first">';
                    print '<td class="views-field views-field-counter views-align-left" ><a href="'.base_path().drupal_lookup_path('alias', 'node/'.$k).'">'.$d->fir.'</a></td>';
                    print '<td class="views-field views-field-counter views-align-left" ><a href="'.base_path().drupal_lookup_path('alias', 'node/'.$k).'">'.$d->title.'</a></td>';
                    print '<td class="views-field views-field-counter views-align-left" >'.$d->location.'</td>';
                    print '<td class="views-field views-field-counter views-align-right" >';
                    	
                    	if ($data['maintenance']){
                    		print '<span id="argus_inventaris_item_waiter_'.$k.'" class="argus_inventaris_item_waiter"></span> ';
		                    print '<select id="argus_inventaris_item_'.$k.'" class="argus_inventaris_item"><option>-</option>';
		                    	if (user_access('edit any inventaris content')){
			                    	$states = array('nieuw', 'actief', 'inactief', 'verwijderd');
		                    	} else {
		                    		$states = array('actief', 'inactief');
		                    	}
		                    	foreach ($states as $state){
		                    		print '<option ';
		                    		if ($d->status == $state){
		                    			print ' selected';
		                    		}
		                    		print '>'.$state.'</option>';
		                    	}
		                    print '</select>';
                    	} else {
                    		print $d->status;
                    	}
                    	
                    print '</td>';
                    print '</tr>';
                $i++;
            }
            
            ?>
        </tbody>
    </table>

</div>