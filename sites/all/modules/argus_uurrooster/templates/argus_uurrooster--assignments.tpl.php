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

if ($order == 'DESC'){
	$order = 'ASC';
	$orderImg = '<img typeof="foaf:Image" src="'.$base_url.'/misc/arrow-asc.png" width="13" height="13" alt="'.t('oplopend sorteren').'" title="'.t('oplopend sorteren').'">';
} else {
	$order = 'DESC';
	$orderImg = '<img typeof="foaf:Image" src="'.$base_url.'/misc/arrow-desc.png" width="13" height="13" alt="'.t('aflopend sorteren').'" title="'.t('aflopend sorteren').'">';
}

?>

<table class="views-table sticky-enabled tableheader-processed sticky-table argus_uurrooster_schedule" style="page-break-after: always;">
    <thead style="font-weight: bold;">
    	<tr>
		    <th class="views-field views-align-middle" scope="col" rowspan="2">Nr.</td>
		    <th class="views-field views-align-left" scope="col" rowspan="2"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=name&order='.$order; ?>"><?php print t('NAAM'); if ($orderBy == 'name'){ print $orderImg; } ?></a></td>
		    <th class="views-field views-align-middle" scope="col" rowspan="2"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=total&order='.$order; ?>"><?php print t('TOTAAL'); if ($orderBy == 'total'){ print $orderImg; } ?></a></td>
		    <th class="views-field views-align-middle" scope="col" colspan="8"><?php print t('DETAIL'); ?></td>
		    <th class="views-field views-align-middle" scope="col" rowspan="2"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=index&order='.$order; ?>"><?php print t('INDEX'); if ($orderBy == 'index'){ print $orderImg; } ?></a></td>
		    
		    <?php if (variable_get('argus_uurrooster_show_plage')){ ?>
			    <th class="views-field views-align-middle" scope="col" rowspan="2"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=plage&order='.$order; ?>"><?php print t('PLAGE'); if ($orderBy == 'plage'){ print $orderImg; } ?></a></td>
			<?php } ?>
		</tr>
		<tr>
			<th class="views-field views-align-middle" scope="col" style="font-size: 8px;"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=A&order='.$order; ?>">AV<?php if ($orderBy == 'A'){ print $orderImg; } ?></a></td>
			<th class="views-field views-align-middle" scope="col" style="font-size: 8px;"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=C&order='.$order; ?>">CV<?php if ($orderBy == 'C'){ print $orderImg; } ?></a></td>
			<th class="views-field views-align-middle" scope="col" style="font-size: 8px;"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=T&order='.$order; ?>">TV<?php if ($orderBy == 'T'){ print $orderImg; } ?></a></td>
			<th class="views-field views-align-middle" scope="col" style="font-size: 8px;"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=P&order='.$order; ?>">PV<?php if ($orderBy == 'P'){ print $orderImg; } ?></a></td>
			<th class="views-field views-align-middle" scope="col" style="font-size: 8px;"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=S&order='.$order; ?>">ST<?php if ($orderBy == 'S'){ print $orderImg; } ?></a></td>
			<th class="views-field views-align-middle" scope="col" style="font-size: 8px;"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=RBPT&order='.$order; ?>">BPT<?php if ($orderBy == 'RBPT'){ print $orderImg; } ?></a></td>
			<th class="views-field views-align-middle" scope="col" style="font-size: 8px;"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=RGOK&order='.$order; ?>">GOK<?php if ($orderBy == 'RGOK'){ print $orderImg; } ?></a></td>
			<th class="views-field views-align-middle" scope="col" style="font-size: 8px;"><a href="<?php print $base_url.'/uurrooster/ambtsbevoegdheden?s=RICT&order='.$order; ?>">ICT<?php if ($orderBy == 'RICT'){ print $orderImg; } ?></a></td>
		</tr>
    </thead>
    <tbody>
	<?php
	
	$cntr = 1;
	foreach ($users as $uid => $u){
		print '<tr>';
		
		print '<td>'.($cntr++).'</td>';
		
		print '<td ';
		if ($orderBy == 'name'){
			print ' class="active"';
		}
		print 'style="text-align: left; padding-left: 8px;"><a href="'.base_path().drupal_lookup_path('alias', 'user/'.$uid).'" target="_blank">'.$u['name'].'</a></td>';

		print '<td';
		if ($orderBy == 'total'){
			print ' class="active"';
		}
		print '>';
		if ($u['detail']['total']['real'] > 0){
			print $u['detail']['total']['indexed'].'<div style="font-size: 0.7em;">('.$u['detail']['total']['real'].')</div>';
		}
		print '</td>';
		
		print '<td';
		if ($orderBy == 'A'){
			print ' class="active"';
		}
		print '>';
		if (array_sum($u['detail']['real']['A']) > 0){
			print array_sum($u['detail']['real']['A']);
		}
		print '</td>';

		print '<td';
		if ($orderBy == 'C'){
			print ' class="active"';
		}
		print '>';
		if (array_sum($u['detail']['real']['C']) > 0){
			print array_sum($u['detail']['real']['C']);
		}
		print '</td>';
		
		print '<td';
		if ($orderBy == 'T'){
			print ' class="active"';
		}
		print '>';
		if (array_sum($u['detail']['real']['T']) > 0){
			print array_sum($u['detail']['real']['T']);
		}
		print '</td>';
		
		print '<td';
		if ($orderBy == 'P'){
			print ' class="active"';
		}
		print '>';
		if (array_sum($u['detail']['real']['P']) > 0){
			print array_sum($u['detail']['real']['P']);
		}
		print '</td>';
		
		print '<td';
		if ($orderBy == 'S'){
			print ' class="active"';
		}
		print '>';
		if (array_sum($u['detail']['real']['S']) > 0){
			print array_sum($u['detail']['real']['S']);
		}
		print '</td>';
		
		print '<td';
		if ($orderBy == 'RBPT'){
			print ' class="active"';
		}
		print '>';
		if (array_sum($u['detail']['real']['RBPT']) > 0){
			print array_sum($u['detail']['indexed']['RBPT']).'<div style="font-size: 0.7em;">('.array_sum($u['detail']['real']['RBPT']).')</div>';
		}
		print '</td>';
		
		print '<td';
		if ($orderBy == 'RGOK'){
			print ' class="active"';
		}
		print '>';
		if (array_sum($u['detail']['real']['RGOK']) > 0){
			print array_sum($u['detail']['indexed']['RGOK']).'<div style="font-size: 0.7em;">('.array_sum($u['detail']['real']['RGOK']).')</div>';
		}
		print '</td>';
		
		print '<td';
		if ($orderBy == 'RICT'){
			print ' class="active"';
		}
		print '>';
		if (array_sum($u['detail']['real']['RICT']) > 0){
			print array_sum($u['detail']['indexed']['RICT']).'<div style="font-size: 0.7em;">('.array_sum($u['detail']['real']['RICT']).')</div>';
		}
		print '</td>';
		
		print '<td';
		if ($orderBy == 'index'){
			print ' class="active"';
		}
		print '>';
		if ($u['detail']['index'] > 0){
			print round($u['detail']['index'], 5);
			
			print '<div style="font-size: 0.7em;">';
			
			foreach($u['detail']['factor'] as $f => $t){
				if ($t > 0){
					print $t.'/'.$f.' ';
				}
			}
			
			print '</div>';
		}
		print '</td>';


		if (variable_get('argus_uurrooster_show_plage')){
			print '<td';
			if ($orderBy == 'plage'){
				print ' class="active"';
			}
			print '>';
			if ($u['detail']['plage'] > 0){
				print $u['detail']['plage'];
			}
			print '</td>';
		}
		
		print '</tr>';
	}
	
	?>
	</tbody>
	<?php if (variable_get('argus_uurrooster_show_totals')){ ?>
		<tfooter>
			<td></td>
			<td></td>
			<td><?php print $totals['total']['indexed'].'<div style="font-size: 0.7em;">('.$totals['total']['real'].')</div>'; ?></td>
			<td><?php print $totals['A']; ?></td>
			<td><?php print $totals['C']; ?></td>
			<td><?php print $totals['T']; ?></td>
			<td><?php print $totals['P']; ?></td>
			<td><?php print $totals['S']; ?></td>
			<td><?php print $totals['RBPT']['indexed'].'<div style="font-size: 0.7em;">('.$totals['RBPT']['real'].')</div>'; ?></td>
			<td><?php print $totals['RGOK']['indexed'].'<div style="font-size: 0.7em;">('.$totals['RGOK']['real'].')</div>'; ?></td>
			<td><?php print $totals['RICT']['indexed'].'<div style="font-size: 0.7em;">('.$totals['RICT']['real'].')</div>'; ?></td>
			<td></td>
			<?php if (variable_get('argus_uurrooster_show_plage')){ ?>
				<td><?php print $totals['plage']; ?></td>
			<?php } ?>
		</tfooter>
	<?php } ?>
</table>