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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

?>

<form class="ctools-auto-submit-full-form ctools-auto-submit-processed">
	<div>
		<div class="views-exposed-form">
			<div class="views-exposed-widgets clearfix">
			
				<?php if (user_access('edit any inventaris content')){ ?>
					<div class="views-exposed-widget">
		
						<label for="edit-realname">Verantwoordelijken</label>
						<div class="views-widget">
							<select id="argus_inventaris_users">
					            <?php
								echo '<option value="">-</option>';
								foreach ( $users as $key => $u ) {
									echo '<option value="' . $key . '"';
									if (isset ( $_GET )) {
										if (array_key_exists ( 'uid', $_GET )) {
											if ($key == $_GET ['uid']) {
												echo ' selected';
											}
										}
									}
									echo '>' . $u . '</option>';
								}
								?>
				            </select>
						</div>
					</div>
				<?php } ?>
				
				<div class="views-exposed-widget">
					<label for="edit-realname">Omschrijving</label>
					<div class="views-widget">
						<input id="argus_inventaris_item" value="<?php if (array_key_exists('item', $_GET)) print $_GET ['item']?>" />
					</div>
				</div>
				
				<div class="views-exposed-widget">
					<label for="edit-realname">Inventarisnr. (FIR)</label>
					<div class="views-widget">
						<input id="argus_inventaris_fir" value="<?php if (array_key_exists('fir', $_GET)) print $_GET ['fir']?>" />
					</div>
				</div>
		
				<div class="views-exposed-widget">
					<input id="argus_inventaris_reset" type="reset"
						value="Opnieuw instellen" />
				</div>
			</div>
		</div>
	</div>
</form>