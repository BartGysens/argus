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
?>

<div class="menu-block-wrapper">
    <form>
        <strong>Klassen</strong><br />
            <select id="argus_uurrooster_change_classes">
            <?php 
            echo '<option value="">-</option>';
            $classes = argus_klasbeheer_get_active_classes();
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
            $users_lkr = argus_uurrooster_get_users_with_schedule(variable_get('argus_engine_roles_teacher'));
            foreach ($users_lkr as $u_id => $u_name) {
            	echo '<option value="'.$u_id.'"';
                if (isset($uid)) {
                    if ($u_id == $uid) {
                        echo ' selected';
                    }
                }
            	echo '>'.$u_name.'</option>';
            } ?>
            </select><br />

        <strong>Leerlingen</strong><br />
            <select id="argus_uurrooster_change_user_lln">
            <?php 
            echo '<option value="">-</option>';
            $users_lln = argus_engine_get_user_select_options(variable_get('argus_engine_roles_pupil'));
            foreach ($users_lln as $u_id => $u_name) {
            	echo '<option value="'.$u_id.'"';
                if (isset($uid)) {
                    if ($u_id == $uid) {
                        echo ' selected';
                    }
                }
            	echo '>'.$u_name.'</option>';
            } ?>
            </select><br />

        <strong>Lokalen</strong><br />
            <select id="argus_uurrooster_change_rooms">
            <?php 
            echo '<option value="">-</option>';
            $rooms = argus_lokalen_get_active_classrooms();
            if (isset($rooms)) {
            	if (array_key_exists('node', $rooms)){
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