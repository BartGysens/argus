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

/*
 * Retrieve latest update information voor 'afwezigheden'
 */
$query = 'SELECT timestamp '
		. 'FROM {watchdog} AS w '
		. 'WHERE w.type = :type AND w.message LIKE :message '
				. 'ORDER BY timestamp DESC';
$result = db_query($query, array(':type' => 'argus', ':message' => '%afwezigheden%'));
$lastUpdate = $result->fetch();
if ($lastUpdate){
	$updated = '<div id="lastUpdate">Laatste update uitgevoerd op <strong>'.date('d/m/y', $lastUpdate->timestamp).'</strong> om <strong>'.date('H:i', $lastUpdate->timestamp).'</strong><div style="font-size= smaller;"><u>Opgelet</u>: het kan tot 2 dagen duren eer de gegevens uit Smartschool werden bijgewerkt.</div></div>';
} else {
	$updated = '<div id="lastUpdate" style="color: red;"><u>Opgelet</u>: deze gegevens werden reeds enige tijd niet meer bijgewerkt.</div>';
}

$prev = clone $s;
$prev->modify('-1 days');
$next = clone $s;
$next->modify('+1 days');

?>

<h2>Afwezige leerlingen op <?php print format_date($s->getTimestamp(), 'custom', 'd F Y'); ?></h2>

<?php print $updated; ?>

<table class="argus_afwezigheden_nav">
	<tbody><tr>
		<td id="argus_afwezigheden_nav_previous"><a href="<?php print $base_url.'/afwezigheden/'.$prev->format('Y-m-d'); ?>">&lt; vorige dag</a></td>
		<td id="argus_afwezigheden_nav_today"><a href="<?php print $base_url.'/afwezigheden/'; ?>">vandaag</a></td>
		<td id="argus_afwezigheden_nav_next"><a href="<?php print $base_url.'/afwezigheden/'.$next->format('Y-m-d'); ?>">volgende dag &gt;</a></td>
	</tr>
	</tbody>
</table>

<div class="view-content">

    <table class="argus_afwezigheden views-table sticky-enabled cols-10" >
        <thead>
            <tr>
                <th class="views-field active views-align-left" rowspan="2">Leerling</th>
                <th class="views-field views-align-center" colspan="2">Voormiddag</th>
                <th class="views-field views-align-center" colspan="2">Namiddag</th>
            </tr>
            <tr style="font-size: smaller;">
                <th class="views-field views-align-center absencesOK" >gewettigd</th>
                <th class="views-field views-align-center absencesNOK" >niet gewettigd</th>
                <th class="views-field views-align-center absencesOK" >gewettigd</th>
                <th class="views-field views-align-center absencesNOK" >niet gewettigd</th>
            </tr>
        </thead>
        <tbody>
            <?php
            
            $i = 0;
            foreach ($data as $u => $d){
                print '<tr class="'.($i%2 == 0 ? "even" : "odd").' views-row-first">';
                    print '<td class="views-field views-field-counter views-align-left" ><a href="'.base_path().drupal_lookup_path('alias', 'user/'.$d['id']).'">'.$d['name'].'</a> - <a href="'.base_path().'klas/'.$d['class'].'" target="_blank">'.$d['class'].'</a></td>';
                    print '<td class="views-field views-field-counter views-align-center absencesOK" >'.$d['am']['ok'].'</td>';
                    print '<td class="views-field views-field-counter views-align-center absencesNOK" >'.$d['am']['nok'].'</td>';
                    print '<td class="views-field views-field-counter views-align-center absencesOK" >'.$d['pm']['ok'].'</td>';
                    print '<td class="views-field views-field-counter views-align-center absencesNOK" >'.$d['pm']['nok'].'</td>';
                    print '</tr>';
                $i++;
            }
            
            ?>
        </tbody>
    </table>

</div>

<table class="argus_afwezigheden_nav">
	<tbody><tr>
		<td id="argus_afwezigheden_nav_previous"><a href="<?php print $base_url.'/afwezigheden/'.$prev->format('Y-m-d'); ?>">&lt; vorige dag</a></td>
		<td id="argus_afwezigheden_nav_today"><a href="<?php print $base_url.'/afwezigheden/'; ?>">vandaag</a></td>
		<td id="argus_afwezigheden_nav_next"><a href="<?php print $base_url.'/afwezigheden/'.$next->format('Y-m-d'); ?>">volgende dag &gt;</a></td>
	</tr>
	</tbody>
</table>