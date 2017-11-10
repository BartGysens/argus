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
?>

<em><?php print t('(controlelijst; check + 5 dagen na opnieuw op school = rood; vakantiedagen werden meegeteld)'); ?></em>

<div class="view-content">
    <table class="views-table sticky-enabled cols-10" >
        <thead>
            <tr>
                <th class="views-field active views-align-left" >Leerling</th>
                <th class="views-field views-align-center" >Aantal</th>
                <th class="views-field views-align-center" >Terug op school sinds</th>
                <th class="views-field views-align-left" >Datum(s) - Dagen terug op school</th>
            </tr>
        </thead>
        <tbody>
            <?php
            
            $i = 0;
            foreach ($data as $u => $d){
                print '<tr class="'.($i%2 == 0 ? "even" : "odd").' views-row-first">';
                    print '<td class="views-field views-field-counter views-align-left" >' . argus_engine_get_user_link($d['id']) . '</a></td>';
                    print '<td class="views-field views-field-counter views-align-center" >'.count($d['dates']).'</td>';
                    print '<td class="views-field views-field-counter views-align-center" >';
                    if (isset($d['back'])){
                        print date('d/m/y', strtotime($d['back']));
                    }
                    print '</td>';
                    print '<td class="views-field views-field-counter views-align-left" ><ul>';
                    foreach ($d['dates'] as $date => $status){
                        print '<li';
                        if (array_key_exists('diff', $status)){
                            if ($status['diff'] > 5){
                                print ' style="color: red;"';
                            }
                        }
                        print '>'.date('d/m/y', strtotime($date)).' : ';
                        if (isset($status['am'])){
                            print t('voormiddag');
                        }
                        if (isset($status['am']) && isset($status['pm'])){
                            print ' en ';
                        } 
                        if (isset($status['pm'])){
                            print t('namiddag');
                        }
                        if (isset($d['back']) && isset($status['diff'])){
                            print ' ('.$status['diff'].' schooldagen terug)';
                        }
                        print '</li>';
                    }
                    print '</ul></td>';
                print '</tr>';
                $i++;
            }
            
            ?>
        </tbody>
    </table>
</div>