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

<h2>Verwerking voor de verantwoordelijken <span style='color: red'><?php print $data['maintenance']; ?></span></h2>

<div class="view-content">

    <table class="argus_inventaris views-table sticky-enabled cols-10" >
        <thead>
            <tr>
                <th class="views-field active views-align-left" rowspan="2">Verantwoordelijke</th>
                <th class="views-field views-align-center" colspan="4">Inventaris</th>
                <th class="views-field views-align-right" rowspan="2">Acties</th>
            </tr>
            <tr>
                <th class="views-field views-align-center"><small>Nieuw</small></th>
                <th class="views-field views-align-center"><small>Actief</small></th>
                <th class="views-field views-align-center"><small>Inactief</small></th>
                <th class="views-field views-align-center"><small>Verwijderd</small></th>
            </tr>
        </thead>
        <tbody>
            <?php
            
            $i = 0;
            foreach ($data['users'] as $k => $d){
                print '<tr class="'.($i%2 == 0 ? "even" : "odd").' views-row-first">';
                    print '<td class="views-field views-field-counter views-align-left" >' . argus_engine_get_user_link( $k, null, '_blank' ) . '</td>';
                    
                    print '<td class="views-field views-field-counter views-align-center" >'.$d['status']['new'].'</td>';
                    print '<td class="views-field views-field-counter views-align-center" >'.$d['status']['active'].'</td>';
                    print '<td class="views-field views-field-counter views-align-center" >'.$d['status']['inactive'].'</td>';
                    print '<td class="views-field views-field-counter views-align-center" >'.$d['status']['deleted'].'</td>';
                    
                    print '<td class="views-field views-field-counter views-align-right" >'.implode(' - ', $d['actions']).'</td>';
                    print '</tr>';
                $i++;
            }
            
            ?>
        </tbody>
    </table>

</div>