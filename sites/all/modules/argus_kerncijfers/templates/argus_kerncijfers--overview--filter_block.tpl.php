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

/* Get years available for study */
$query = 'SELECT ((gr.field_klas_graad_value - 1)*2 + lj.field_klas_leerjaar_value) AS leerjaar, CONCAT_WS(:sep, gr.field_klas_graad_value, lj.field_klas_leerjaar_value) AS code, COUNT(DISTINCT u.uid) as total '
	. 'FROM {field_data_field_klas_leerlingen} AS l '
	. 'INNER JOIN {field_data_field_klas_leerjaar} AS lj ON l.entity_id = lj.entity_id '
	. 'INNER JOIN {field_data_field_klas_graad} AS gr ON l.entity_id = gr.entity_id '
	. 'INNER JOIN {users} AS u ON l.field_klas_leerlingen_target_id = u.uid '
	. 'WHERE u.status = 1 '
	. 'GROUP BY leerjaar '
	. 'ORDER BY leerjaar ASC';
$years = db_query($query, array(':sep' => '-'))->fetchAllAssoc('leerjaar', PDO::FETCH_ASSOC);

$query = 'SELECT s.field_klas_onderwijsvorm_value AS onderwijsvorm, COUNT(DISTINCT u.uid) as total '
	. 'FROM {field_data_field_klas_leerlingen} AS l '
	. 'INNER JOIN {field_data_field_klas_onderwijsvorm} AS s ON s.entity_id = l.entity_id '
	. 'INNER JOIN {users} AS u ON l.field_klas_leerlingen_target_id = u.uid '
	. 'WHERE u.status = 1 '
	. 'GROUP BY onderwijsvorm '
	. 'ORDER BY onderwijsvorm ASC';
$ovs = db_query($query, array())->fetchAllKeyed();												

$query = 'SELECT s.field_klas_structuuronderdeel_value AS structuuronderdeel, COUNT(DISTINCT u.uid) as total '
	. 'FROM {field_data_field_klas_leerlingen} AS l '
	. 'INNER JOIN {field_data_field_klas_structuuronderdeel} AS s ON s.entity_id = l.entity_id '
	. 'INNER JOIN {users} AS u ON l.field_klas_leerlingen_target_id = u.uid '
	. 'WHERE u.status = 1 '
	. 'GROUP BY structuuronderdeel '
	. 'ORDER BY structuuronderdeel ASC';
$structures = db_query($query, array())->fetchAllKeyed();

?>

<div class="menu-block-wrapper">
<form>

	<div class="views-exposed-widget">
		<label for="argus_kerncijfers_years">Leerjaar</label>
		<div class="views-widget">
			<select id="argus_kerncijfers_years" name="jaar">
				<option value="">-</option>
				<?php
				
				foreach($years as $cl => $result){
					print '<option value="'.$result['code'].'"';
					if (array_key_exists('jaar', $_GET)){
						if ($_GET['jaar'] == $result['code']){
							print ' selected="selected"';
						}
					}
					print '>'.$cl.'e jaar ('.$result['total'].' leerlingen)</option>';
				}
				
				?>
			</select>
		</div>
	</div>

	<div class="views-exposed-widget">
		<label for="argus_kerncijfers_ovs">Onderwijsvorm</label>
		<div class="views-widget">
			<select id="argus_kerncijfers_ovs" name="onderwijsvorm">
				<option value="">-</option>
				<?php
				
				foreach($ovs as $cl => $cntr){
					print '<option value="'.$cl.'"';
					if (array_key_exists('onderwijsvorm', $_GET)){
						if ($_GET['onderwijsvorm'] == $cl){
							print ' selected="selected"';
						}
					}
					print '>'.$cl.' ('.$cntr.' leerlingen)</option>';
				}
				
				?>
			</select>
		</div>
	</div>

	<div class="views-exposed-widget">
		<label for="argus_kerncijfers_structures">Structuuronderdeel</label>
		<div class="views-widget">
			<select id="argus_kerncijfers_structures" name="structuuronderdeel">
				<option value="">-</option>
				<?php
				
				foreach($structures as $cl => $cntr){
					print '<option value="'.$cl.'"';
					if (array_key_exists('structuuronderdeel', $_GET)){
						if ($_GET['structuuronderdeel'] == $cl){
							print ' selected="selected"';
						}
					}
					print '>'.$cl.' ('.$cntr.' leerlingen)</option>';
				}
				
				?>
			</select>
		</div>
	</div>

	<div class="views-exposed-widget views-submit-button">
		<input class="ctools-use-ajax ctools-auto-submit-click form-submit" type="submit" id="edit-submit-tkwa001-procedures" value="Toepassen">
	</div>
	<div class="views-exposed-widget views-reset-button">
		<input type="button" id="argus_kerncijfers_reset" name="op" value="Opnieuw instellen">
	</div>
	
	<div style="line-height: 1.8em; font-size: smaller;">(opmerking: deze filter heeft enkel effect op grafieken met betrekking tot leerlingen)</div>
	
	<hr />

<?php if (count($plugins)){ ?>
	<?php foreach($plugins as $pk => $pluginfolder){ ?>
        <div style="font-weight: bolder; text-decoration: underline;"><?php print ucfirst($pk); ?></div>
        <ul>
        	<?php
        	foreach($pluginfolder as $p => $plugin){
        		if (array_key_exists('title', $plugin)){
        			print '<li><a href="'.$base_url.'/kerncijfers/'.$pk.'/'.$p.'">'.$plugin['title'].'</a></li>';
        		}
			}
			?>
        </ul>
	<?php } ?>
	<hr />
	<p><a href="<?php $base_url; ?>/kerncijfers">terug naar het overzicht</a></p>
<?php } else { ?>
<div>Er werden nog geen plugins geactiveerd. Neem hiervoor contact op met je argus/Smartschool-beheerder.</div>
<?php } ?>
</form>
</div>