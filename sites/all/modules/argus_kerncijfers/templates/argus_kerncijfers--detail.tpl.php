<?php
/* 
 * Copyright (C) 2016 bartgysens
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

if (!array_key_exists('title', $plugin)){ ?>
	Er werd een fout in deze plugin gevonden, contacteer je argus/Smartschool-beheerder.
<?php } else { ?>

	<h2><?php print $plugin['title']; ?></h2>
	
	<p><?php print $plugin['description']; ?></p>
	
	<?php if (count(json_decode($plugin['data']))>1){ ?>
		<h3><?php print t('Grafiek'); ?></h3>
		
		<div id="regions_div" style="width: <?php print $plugin['width']; ?>; height: <?php print $plugin['height']; ?>;">
			<div id="regions_div_waiter">(even geduld, bezig met laden...)</div>
		</div>
		
		<script type="text/javascript">
		google.setOnLoadCallback(drawRegionsMap);
		function drawRegionsMap() {
			var data = google.visualization.arrayToDataTable(<?php print $plugin['data']; ?>);
		
			var options = <?php print $plugin['options']; ?>;
		
			var chart = new google.visualization.<?php print $plugin['package']['command']; ?>(document.getElementById('regions_div'));
		
			chart.draw(data, options);
		}
		</script>
		
		<h3><?php print t('Statistische gegevens'); ?></h3>
		
		<div class="view-content">
			<table class="argus_kerncijfers views-table sticky-enabled cols-10">
			<?php 
			$data = json_decode( $plugin['data'] );
			foreach($data as $i => $row){
				$j = 1;
				if ($i == 0){ ?>
					<thead>
						<tr>
							<th></th>
							<?php foreach($row as $cel){
								print '<th class="views-field views-align-left">'.t($cel).'</th>';
							} ?>
						</tr>
					</thead>
				<?php } else { ?>
					<?php if ($i == 1){ print '<tbody>'; } ?>
					<tr class="<?php print ($i%2 == 0 ? "even" : "odd"); ?> views-row-first">
						<td class="views-field views-field-counter views-align-left"><?php print $i; ?></td>
						<?php foreach($row as $cel){
							print '<td class="views-field views-field-counter views-align-left">'.$cel.'</td>';
						} ?>
					</tr>
				<?php } ?>
				</tbody>
			<?php } ?>
			</table>
		</div>
	<?php } else { ?>
		De selectie die je maakt met de filter heeft geen resultaten opgeleverd. Probeer het met een nieuwe keuze.
	<?php } ?>
<?php } ?>