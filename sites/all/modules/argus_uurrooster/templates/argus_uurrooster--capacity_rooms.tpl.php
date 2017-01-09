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

global $user, $base_url;

$color = array('#f7836c','#f4cb42','#cbf442','#42f465','#42f465','#66f');

?>

<table class="argus_uurrooster_schedule views-table sticky-enabled cols-4 tableheader-processed sticky-table" style="page-break-after: always;">
    <thead>
    	<tr>
		    <th class="views-field views-align-middle" scope="col" rowspan="2">Nr.</td>
		    <th class="views-field views-align-left" scope="col" style="text-align: left;" rowspan="2"><?php print t('NAAM'); ?></td>
		    <th class="views-field views-align-middle" scope="col" colspan="2"><?php print t('LESSEN'); ?></td>
		    <th class="views-field views-align-middle" scope="col" rowspan="2"><?php print t('CAPACITEIT'); ?><div style="font-size: 8px;">aantal stoelen</div></td>
		    <th class="views-field views-align-middle" scope="col" colspan="2"><?php print t('BEZETTING (uren)'); ?></td>
		    <th class="views-field views-align-middle" scope="col" colspan="2"><?php print t('BEZETTING (lln)'); ?></td>
		</tr>
    	<tr>
		    <th class="views-field views-align-middle" scope="col" style="font-size: 8px;">max. <?php print $periods; ?></td>
		    <th class="views-field views-align-middle" scope="col" style="font-size: 8px;">%</td>
		    <th class="views-field views-align-middle" scope="col" style="font-size: 8px;">gemiddeld</td>
		    <th class="views-field views-align-middle" scope="col" style="font-size: 8px;">%</td>
		    <th class="views-field views-align-middle" scope="col" style="font-size: 8px;">maximaal (<?php print $periods; ?> lestijden)</td>
		    <th class="views-field views-align-middle" scope="col" style="font-size: 8px;">%</td>
		</tr>
    </thead>
    <tbody>
	<?php
	
	$cntr = 1;
	foreach ($rooms as $rid => $r){
		print '<tr>';
		
		print '<td>'.($cntr++).'</td>';
		
		print '<td style="text-align: left;"><a href="'.$base_url.'/uurrooster/lokaal/'.$rid.'" target="_blank">'.$r['name'].'</a><div style="font-size: 8px">'.$r['description'].'</div></td>';

		print '<td ';
		if ($r['type'] == 'klaslokaal'){
			$total = count($r['periods']);
			$percent_periods = round(100 / $periods * $total);
			print 'style="background-color: '.$color[min(round($percent_periods/25),3)].'">'.$total.'/'.$periods.'</td>';
			print '<td style="background-color: '.$color[min(round($percent_periods/25),3)].'">'.$percent_periods.'%';
		} else {
			print '></td><td>';
		}
		print '</td>';
		
		print '<td>'.$r['capacity'].'</td>';

		print '<td ';
		if ($r['type'] == 'klaslokaal'){
			if ($r['capacity']){
				$total = array_sum($r['periods']);
				$period_total = $r['capacity'] * count($r['periods']);
				if ($period_total){
					$percent_lln = round(100 / $period_total * $total);
				} else {
					$percent_lln = 0;
				}
				print 'style="background-color: '.$color[min(round($percent_lln/25),3)].'">'.$total.'/'.$period_total.'</td>';
				print '<td style="background-color: '.$color[min(round($percent_lln/25),3)].'">'.$percent_lln.'% (op '.$percent_periods.'%)';
			} else {
				print '>onbekend</td><td>-';
			}
		} else {
			print '></td><td>';
		}
		print '</td>';

		print '<td ';
		if ($r['type'] == 'klaslokaal'){
			if ($r['capacity']){
				$total = array_sum($r['periods']);
				$period_total = $r['capacity'] * $periods;
				if ($period_total){
					$percent_lln = round(100 / $period_total * $total);
				} else {
					$percent_lln = 0;
				}
				print 'style="background-color: '.$color[min(round($percent_lln/25),3)].'">'.$total.'/'.$period_total.'</td>';
		    	print '<td style="background-color: '.$color[min(round($percent_lln/25),3)].'">'.$percent_lln.'%';
			} else {
				print '>onbekend</td><td>-';
			}
		} else {
			print '></td><td>';
		}
		print '</td>';

		print '</tr>';
	}
	
	?>
	</tbody>
</table>