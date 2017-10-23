<?php

/* 
 * Copyright (C) 2015 bartgysens
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
$query = 'SELECT DISTINCT(u.uid) AS id, c.entity_id AS cid '
		. 'FROM {users} AS u '
		. 'INNER JOIN {users_roles} AS ur ON u.uid = ur.uid '
		. 'INNER JOIN {field_data_field_user_sms_naam} AS un ON u.uid = un.entity_id '
		. 'INNER JOIN {field_data_field_user_sms_voornaam} AS uv ON u.uid = uv.entity_id '
		. 'LEFT JOIN {field_data_field_klas_leerlingen} AS c ON c.field_klas_leerlingen_target_id = u.uid '
		. 'WHERE ur.rid IN (:rids) AND status = 1 '
		. 'ORDER BY un.field_user_sms_naam_value ASC, uv.field_user_sms_voornaam_value ASC';
$users_lln = db_query($query, array(':rids' => variable_get('argus_engine_roles_pupil')))->fetchAll();
?>

<div class="menu-block-wrapper">
    <form>
        <strong>Klassen</strong><br />
            <select id="argus_soda_change_classes">
            <?php 
            $query = 'SELECT nid, title ' .
					'FROM {node} AS k ' .
					'INNER JOIN {field_data_field_klas_leerlingen} AS lln ON k.nid = lln.entity_id ' .
					'WHERE k.status = 1 ' .
					'ORDER BY k.title ASC';
			$classes = db_query ( $query )->fetchAllKeyed();
			if (count( $classes ) > 0) {
                foreach ($classes as $key => $c) {
                    echo '<option value="'.$key.'"';
                    if (isset($cid)) {
                        if ($key == $cid || $c == $cid) {
                            echo ' selected';
                        }
                    } elseif (array_keys($classes)[0] == $key) {
                    	echo ' selected';
                    }
                    echo '>'.$c.'</option>';
                }
            } ?>
            </select><br />

        <strong>Leerlingen</strong><br />
            <select id="argus_soda_change_user_lln">
            <?php 
            echo '<option value="">-</option>';
            foreach ($users_lln as $u) {
                echo '<option value="'.$u->cid.'"';
                if (isset($uid)) {
                    if ($u->id == $uid) {
                        echo ' selected';
                    }
                }
                echo '>'.argus_get_user_realname($u->id).'</option>';
            } ?>
            </select><br />
    </form>
</div>