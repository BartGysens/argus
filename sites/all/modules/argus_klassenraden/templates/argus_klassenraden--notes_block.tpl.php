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

$params = explode('/',drupal_parse_url(current_path())['path']);

$showContainers = FALSE;

if (array_key_exists(5, $params)){
	$modus = $params[5];
} else {
	$modus = 'read';
}

?>
<script type="text/javascript">
<!--
jQuery(document).ready(function() {
	modus = "<?php print $modus; ?>";
});
//-->
</script>
<div class="menu-block-wrapper">
	<form class="ctools-auto-submit-full-form ctools-auto-submit-processed" action="/klassenraden-notities/" method="post" id="argus_klassenraden_filter" accept-charset="UTF-8">
		<div>
			<div class="views-exposed-widget">
				<label for="schooljaar" class="inline">Schooljaar: </label>
				<?php 
				if (array_key_exists(1, $params)){
					print argus_engine_schoolyear_selectionBox($params[1], TRUE, FALSE);
				} else {
					print argus_engine_schoolyear_selectionBox(NULL, TRUE, FALSE);
				}
				?>
			</div>

			<div class="views-exposed-widget">
				<label for="klassenraad">Klassenraad</label>
				<select id="argus_klassenraden_klassenraad" class="reload-form" name="klassenraad">
					<option value="">- selecteer een klassenraad -</option>
					<?php
					foreach($classmeetings as $cmid => $cm){
						print '<option value="'.$cmid.'"';
						if (array_key_exists(2, $params)){
							if ($params[2] == $cmid){
								print ' selected="selected"';
							}
						}
 						print '>'.$cm.'</option>';
					}
					?>
				</select>
			</div>
			
			<?php if (isset($tracks)){ ?>
				<div class="views-exposed-widget">
					<label for="spoor">Spoor</label>
					<select id="argus_klassenraden_spoor" class="reload-form" name="spoor">
						<option value="">- selecteer een spoor -</option>
						<?php
						foreach($tracks as $tid => $track){
							print '<option value="'.$tid.'"';
							if (array_key_exists(3, $params)){
								if ($params[3] == $tid){
									print ' selected="selected"';
								}
							}
	 						print '>'.$track.'</option>';
						}
						?>
					</select>
				</div>
			<?php } ?>
			
			<?php if (isset($groups)){ ?>
				<div class="views-exposed-widget">
					<label for="klas">Klas</label>
					<select id="argus_klassenraden_klas" class="reload-form" name="klas">
						<option value="">- selecteer een klas -</option>
						<?php
						foreach($groups as $cid => $class){
							print '<option value="'.$cid.'"';
							if (array_key_exists(4, $params)){
								if ($params[4] == $cid){
									print ' selected="selected"';
									$showContainers = TRUE;
								}
							}
	 						print '>'.$class->title.' ('.$class->cnt_lln.')</option>';
						}
						?>
					</select>
				</div>
			<?php } ?>
			
			<?php if ($showContainers){ ?>
				
				<?php 
				
				if (user_access('create lvs_klassenraad_notitie content') || user_access('edit any lvs_klassenraad_notitie content')) {
					$overviewUrl = url(NULL, array('absolute' => TRUE)).'/klassenraden-notities/'.$params[1].'/'.$params[2].'/'.$params[3].'/'.$params[4]; ?>
					
					<div class="views-exposed-widget">
						<a href="<?php print $overviewUrl.'/edit'; ?>">bewerken</a> - 
						<a href="<?php print $overviewUrl; ?>">volledig overzicht</a>
					</div>
					
				<?php } ?>
				
				<hr />
				<div class="views-exposed-widget">
					<label for="leerlingen">Leerlingen</label>
					<div class="views-widget">
					<select id="argus_klassenraden_leerlingen">
						<option value="">- selecteer een leerling -</option>
						<?php 
						foreach ($pupils as $pid){
							print '<option value="argus_klassenraden_leerlingen_'.$pid.'"';
							if (array_key_exists(6, $params)){
								if ($params[6] == $pid){
									print ' selected="selected"';
								}
							}
							print '>'.argus_get_user_realname($pid).'<span id="argus_klassenraden_leerlingen_markup_'.$pid.'">*</span></option>';
						}
						?>
					</select>
					</div>
				</div>
				
				<?php //TODO: Activate teachers checklist presence 
				/*
				<hr />

				<div class="views-exposed-widget">
					<label for="leerkrachten">Leerkrachten</label>
					<div id="argus_klassenraden_leerkrachten" class="views-widget"></div>
				</div>
				*/ ?>
			<?php } ?>
		</div>
	
	</form>
</div>