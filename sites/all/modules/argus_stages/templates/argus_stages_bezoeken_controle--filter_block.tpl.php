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
 
global $base_url;

/* Select user based upon the role selected */
$query = 'SELECT DISTINCT(n.nid) AS id, n.title AS title '
		. 'FROM {field_data_field_leerling} AS u '
		. 'INNER JOIN {field_data_field_klas_leerlingen} AS k ON u.field_leerling_target_id = k.field_klas_leerlingen_target_id '
		. 'INNER JOIN {node} AS n ON k.entity_id = n.nid '
		. 'WHERE u.bundle = :bundle '
		. 'ORDER BY n.title ASC';
$classes = db_query($query, array(':bundle' => 'stage'))->fetchAllKeyed();

$query = 'SELECT DISTINCT(u.field_leerkracht_target_id) AS id '
		. 'FROM {field_data_field_leerkracht} AS u '
		. 'INNER JOIN {field_data_field_user_sms_naam} AS un ON u.field_leerkracht_target_id = un.entity_id '
		. 'INNER JOIN {field_data_field_user_sms_voornaam} AS uv ON u.field_leerkracht_target_id = uv.entity_id '
		. 'WHERE u.bundle = :bundle '
		. 'ORDER BY un.field_user_sms_naam_value ASC, uv.field_user_sms_voornaam_value ASC';
$users_lkr = db_query($query, array(':bundle' => 'stage'))->fetchAll();

$query = 'SELECT DISTINCT(u.field_leerling_target_id) AS id '
		. 'FROM {field_data_field_leerling} AS u '
		. 'INNER JOIN {field_data_field_user_sms_naam} AS un ON u.field_leerling_target_id = un.entity_id '
		. 'INNER JOIN {field_data_field_user_sms_voornaam} AS uv ON u.field_leerling_target_id = uv.entity_id '
		. 'WHERE u.bundle = :bundle '
		. 'ORDER BY un.field_user_sms_naam_value ASC, uv.field_user_sms_voornaam_value ASC';
$users_lln = db_query($query, array(':bundle' => 'stage'))->fetchAll();

?>

<div class="menu-block-wrapper">
    <form>
        <strong>Klassen</strong><br />
            <select id="argus_stages_change_classes">
            <?php 
            echo '<option value="">-</option>';
            if (count( $classes ) > 0) {
                foreach ($classes as $key => $c) {
                    echo '<option value="'.$key.'"';
                    if (isset($cid)) {
                        if ($key == $cid) {
                            echo ' selected';
                        }
                    }
                    echo '>'.$c.'</option>';
                }
            } ?>
            </select><br />

        <strong>Stagebegeleiders</strong><br />
            <select id="argus_stages_change_user_lkr">
            <?php 
            echo '<option value="">-</option>';
            foreach ($users_lkr as $u) {
            	echo '<option value="'.$u->id.'"';
                if (isset($lkrid)) {
                    if ($u->id == $lkrid) {
                        echo ' selected';
                    }
                }
            	echo '>'.argus_get_user_realname($u->id).'</option>';
            } ?>
            </select><br />

        <strong>Leerlingen</strong><br />
            <select id="argus_stages_change_user_lln">
            <?php 
            echo '<option value="">-</option>';
            foreach ($users_lln as $u) {
                echo '<option value="'.$u->id.'"';
                if (isset($llnid)) {
                    if ($u->id == $llnid) {
                        echo ' selected';
                    }
                }
                echo '>'.argus_get_user_realname($u->id).'</option>';
            } ?>
            </select>
    </form>
</div>