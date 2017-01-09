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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
global $base_url;
?>

<form class="ctools-auto-submit-full-form ctools-auto-submit-processed">
	<div>
		<div class="views-exposed-form">
			<div class="views-exposed-widgets clearfix">

				<div class="views-exposed-widget">
	
					<label for="edit-realname">Klassen</label>
					<div class="views-widget">
						<select id="argus_afwezigheden_latecomers_classes">
				            <?php
							echo '<option value="">-</option>';
							$query = 'SELECT nid, title ' .
									'FROM {node} AS k ' .
									'INNER JOIN {field_data_field_klas_leerlingen} AS lln ON k.nid = lln.entity_id ' .
									'WHERE k.status = 1 ' .
									'ORDER BY k.title ASC';
							$classes = db_query ( $query )->fetchAllKeyed();
							if (count( $classes ) > 0) {
								foreach ( $classes as $key => $c ) {
									echo '<option value="' . $key . '"';
									if (isset ( $_GET )) {
										if (array_key_exists ( 'cid', $_GET )) {
											if ($key == $_GET ['cid']) {
												echo ' selected';
											}
										}
									}
									echo '>' . $c . '</option>';
								}
							}
							?>
			            </select>
					</div>
				</div>
	
				<div class="views-exposed-widget">
	
					<label for="edit-realname">Leerlingen</label>
					<div class="views-widget">
						<select id="argus_afwezigheden_latecomers_lln">
				            <?php
							$query = 'SELECT DISTINCT(u.uid) AS id ' .
									 'FROM {users} AS u ' . 
									 'INNER JOIN {users_roles} AS ur ON u.uid = ur.uid ' . 
									 'INNER JOIN {field_data_field_user_sms_naam} AS un ON u.uid = un.entity_id ' . 
									 'INNER JOIN {field_data_field_user_sms_voornaam} AS uv ON u.uid = uv.entity_id ' . 
									 'WHERE ur.rid IN (:rids) AND status = 1 ' . 
									 'ORDER BY un.field_user_sms_naam_value ASC, uv.field_user_sms_voornaam_value ASC';
							$users_lln = db_query ( $query, array (
									':rids' => variable_get ( 'argus_engine_roles_pupil' ) 
							) )->fetchAll ();
							echo '<option value="">-</option>';
							foreach ( $users_lln as $u ) {
								echo '<option value="' . $u->id . '"';
								if (isset ( $_GET )) {
									if (array_key_exists ( 'uid', $_GET )) {
										if ($u->id == $_GET ['uid']) {
											echo ' selected';
										}
									}
								}
								echo '>' . argus_get_user_realname ( $u->id ) . '</option>';
							}
							?>
				        </select>
					</div>
				</div>
		
				<div class="views-exposed-widget">
					<label for="edit-realname">Status</label>
					<div class="views-widget">
						<input id="argus_afwezigheden_latecomers_only_today" type="checkbox" value="1" name="st" <?php if (isset ( $_GET )) {
									if (array_key_exists ( 'st', $_GET )) {
										if ($_GET ['st'] == 'true') {
											echo ' checked="checked"';
										}
									}
								}  ?> /> <label for="argus_afwezigheden_latecomers_only_today" class="option">enkel vandaag tonen</label>
					</div>
				</div>
		
				<div class="views-exposed-widget">
					<input id="argus_afwezigheden_latecomers_reset" type="button"
						value="Opnieuw instellen" />
				</div>
			</div>
		</div>
	</div>
</form>