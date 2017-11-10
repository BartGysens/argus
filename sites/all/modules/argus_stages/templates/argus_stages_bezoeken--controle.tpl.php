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
?>

<div style="text-align: right;">
	<span class="argus_stages-view-legend" style="background-color: red;"></span> verslag niet ok
	<span class="argus_stages-view-legend" style="background-color: orange;"></span> registratie na bezoek
	<span class="argus_stages-view-legend" style="background-color: green;"></span> nog uit te voeren
</div>
<table class="argus_uurrooster_schedule views-table sticky-enabled cols-4 tableheader-processed sticky-table" style="page-break-after: always;">
    <thead>
    	<tr>
		    <th class="views-field views-align-center" scope="col" rowspan="2">Nr.</td>
		    <th class="views-field views-align-left" scope="col" <?php if ($sorter == 'begeleider') print "style='font-weight: bold'"; ?>><a href="?s=begeleider"><?php print t('STAGEBEGELEIDER'); ?></a></td>
		    <th class="views-field views-align-left" scope="col" <?php if ($sorter == 'leerling') print "style='font-weight: bold'"; ?>><a href="?s=leerling"><?php print t('LEERLING'); ?></a></td>
		    <th class="views-field views-align-center" scope="col" <?php if ($sorter == 'klas') print "style='font-weight: bold'"; ?>><a href="?s=klas"><?php print t('KLAS'); ?></a></td>
		    <th class="views-field views-align-center" scope="col"><?php print t('STAGEBEZOEK'); ?></td>
		    <th class="views-field views-align-center" scope="col"><?php print t('REGISTRATIE'); ?></td>
		    <th class="views-field views-align-right" scope="col"><?php print t('ACTIES'); ?></td>
		</tr>
    </thead>
    <tbody>
	<?php
	
	$cntr = 1;
	foreach ($stagebezoeken as $sbid => $r){
		print '<tr class="'.($cntr%2 == 0 ? "odd" : "even").' views-row-first">';
		
		print '<td class="views-field views-align-center">'.($cntr++).'</td>';
		
		print '<td class="views-field views-align-left">' . argus_engine_get_user_link( $r['begeleider'], null, '_blank' ) . '</td>';

		print '<td class="views-field views-align-left">' . argus_engine_get_user_link( $$r['leerling'], null, '_blank' ) . '</td>';

		print '<td class="views-field views-align-center">'.$r['klas'].'</td>';

		$visit = new DateTime ($r['tijdstip']);
		$register = new DateTime ();
		$register->setTimestamp($r['register']);
		
		if (date_diff($register, $visit)->invert){
			$color = 'orange';
		} else {
			if (date_diff($visit, new DateTime())->invert){
				$color = 'green';
			} else {
				$color = 'red';
			}
		}
		
		print '<td class="views-field views-align-center" style="color: '.$color.'">'.format_date($visit->getTimestamp(), 'short').'</td>';
		
		print '<td class="views-field views-align-center">'.format_date($register->getTimestamp(), 'short').'</td>';
		
		print '<td class="views-field views-align-right"><a href="'.base_path().'node/'.$sbid.'/edit">'.t('bewerken').'</a></td>';

		print '</tr>';
	}
	
	?>
	</tbody>
</table>
<div style="font-size: smaller; text-align: center;"><u>Opgelet</u>: indien je je bezoek niet registreert op voorhand, dan ben je verzekeringstechnisch niet in orde! (code oranje)</div>