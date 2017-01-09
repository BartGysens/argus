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
$query = 'SELECT DISTINCT(u.uid) AS id '
		. 'FROM {users} AS u '
		. 'INNER JOIN {field_data_field_user_sms_naam} AS un ON u.uid = un.entity_id '
		. 'INNER JOIN {field_data_field_user_sms_voornaam} AS uv ON u.uid = uv.entity_id '
		. 'LEFT JOIN {field_data_field_uurrooster_les_leerkracht} AS l ON l.field_uurrooster_les_leerkracht_target_id = u.uid '
		. 'LEFT JOIN {field_data_field_uurrooster_perm_vervanger} AS p ON p.field_uurrooster_perm_vervanger_target_id = u.uid '
		. 'LEFT JOIN {field_data_field_uurrooster_toez_toezichter} AS t ON t.field_uurrooster_toez_toezichter_target_id = u.uid '
		. 'LEFT JOIN {field_data_field_gebruiker} AS g ON g.field_gebruiker_target_id = u.uid '
		. 'WHERE status = 1 '
		. 'AND (g.bundle IN (:bundle) OR l.bundle IN (:bundle) OR p.bundle IN (:bundle) OR t.bundle IN (:bundle)) '
		. 'ORDER BY un.field_user_sms_naam_value ASC, uv.field_user_sms_voornaam_value ASC';
$users_lkr = db_query($query, array(':bundle' => array('uurrooster_vervanging', 'uurrooster_permanentie', 'uurrooster_les', 'uurrooster_toezicht')))->fetchAll();

$query = 'SELECT DISTINCT(u.uid) AS id '
		. 'FROM {users} AS u '
		. 'INNER JOIN {users_roles} AS ur ON u.uid = ur.uid '
		. 'INNER JOIN {field_data_field_user_sms_naam} AS un ON u.uid = un.entity_id '
		. 'INNER JOIN {field_data_field_user_sms_voornaam} AS uv ON u.uid = uv.entity_id '
		. 'WHERE ur.rid IN (:rids) AND status = 1 '
		. 'ORDER BY un.field_user_sms_naam_value ASC, uv.field_user_sms_voornaam_value ASC';
$users_lln = db_query($query, array(':rids' => variable_get('argus_engine_roles_pupil')))->fetchAll();
?>

<div class="menu-block-wrapper">
    <form>
        <strong>Klassen</strong><br />
            <select id="argus_uurrooster_change_classes">
            <?php 
            echo '<option value="">-</option>';
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
                        if ($key == $cid) {
                            echo ' selected';
                        }
                    }
                    echo '>'.$c.'</option>';
                }
            } ?>
            </select><br />

        <strong>Leerkrachten / opvoeders</strong><br />
            <select id="argus_uurrooster_change_user_lkr">
            <?php 
            echo '<option value="">-</option>';
            foreach ($users_lkr as $u) {
            	echo '<option value="'.$u->id.'"';
                if (isset($uid)) {
                    if ($u->id == $uid) {
                        echo ' selected';
                    }
                }
            	echo '>'.argus_get_user_realname($u->id).'</option>';
            } ?>
            </select><br />

        <strong>Leerlingen</strong><br />
            <select id="argus_uurrooster_change_user_lln">
            <?php 
            echo '<option value="">-</option>';
            foreach ($users_lln as $u) {
                echo '<option value="'.$u->id.'"';
                if (isset($uid)) {
                    if ($u->id == $uid) {
                        echo ' selected';
                    }
                }
                echo '>'.argus_get_user_realname($u->id).'</option>';
            } ?>
            </select><br />

        <strong>Lokalen</strong><br />
            <select id="argus_uurrooster_change_rooms">
            <?php 
            echo '<option value="">-</option>';
            $query = new EntityFieldQuery();
            $query->entityCondition('entity_type', 'node')
                ->entityCondition('bundle', 'lokaal')
                ->propertyCondition('status', NODE_PUBLISHED)
                ->propertyOrderBy('title', 'ASC');
            $rooms = $query->execute();
            if (isset($rooms)) {
                foreach ($rooms['node'] as $key => $r) {
                    $r = (array) node_load($key);
                    echo '<option value="'.$key.'"';
                    if (isset($rid)) {
                        if ($key == $rid) {
                            echo ' selected';
                        }
                    }
                    echo '>'.$r['title'].'</option>';
                }
            } ?>
            </select>
		<hr />
		<h4>Andere roosters:</h4>
		<ul>
			<li><a href="<?php print $base_url; ?>/uurrooster/permanentierooster">Permanentierooster</a></li>
			<li><a href="<?php print $base_url; ?>/uurrooster/toezichtenrooster">Toezichtenrooster</a></li>
			<?php if (module_exists('argus_uurrooster_vervanging')) { ?>
				<li><a href="<?php print $base_url; ?>/uurrooster/vervangingen">Vervangingen</a></li>
			<?php } ?>
			<li><a href="<?php print $base_url; ?>/uurrooster/beschikbare-leerkrachten">Beschikbare leerkrachten</a></li>
			<li><a href="<?php print $base_url; ?>/uurrooster/beschikbare-lokalen">Vrije lokalen</a></li>
			<li><a href="<?php print $base_url; ?>/uurrooster/lokaalbezetting">Lokaalbezetting</a></li>
		</ul>
		
		<?php 
		if( taxonomy_get_term_by_name('uurrooster')){
			echo '<div style="font-size: smaller; text-align: right;"><a href="'.$base_url.'/tags/uurrooster">meer over uurroosters</a></div>';
		}
		?>
    </form>
</div>