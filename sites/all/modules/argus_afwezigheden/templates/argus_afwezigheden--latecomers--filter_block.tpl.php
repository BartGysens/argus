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
					<label for="edit-realname">Datum</label>
					<div class="views-widget">
						<input id="argus_afwezigheden_latecomers_date" class="date_picker hasDatepicker" type="text" name="d" value="<?php if (isset ( $_GET )) {
									if (array_key_exists ( 'd', $_GET )) {
										echo $_GET ['d'];
									}
								}  ?>" />
					</div>
				</div>

				<div class="views-exposed-widget">
	
					<label for="edit-realname">Klassen</label>
					<div class="views-widget">
						<select id="argus_afwezigheden_latecomers_classes">
				            <?php
							echo '<option value="">-</option>';
							
							$classes = argus_klasbeheer_get_active_classes();
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
							$users_lln = argus_engine_get_user_select_options(variable_get ( 'argus_engine_roles_pupil' ));
							echo '<option value="">-</option>';
							foreach ( $users_lln as $uid => $uname ) {
								echo '<option value="' . $uid . '"';
								if (isset ( $_GET )) {
									if (array_key_exists ( 'uid', $_GET )) {
										if ($uid == $_GET ['uid']) {
											echo ' selected';
										}
									}
								}
								echo '>' . $uname . '</option>';
							}
							?>
				        </select>
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