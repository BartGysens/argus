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

if (isset($absences) || isset($behaviour) || isset($study)) { $current = false; ?>
<div class="menu-block-wrapper right-block-wrapper">
    <ul class="block_klasbeheer_tabs-menu">
        <?php if (isset($absences)) { $current = true; ?><li class="current"><a href="#block_klasbeheer_absences">Afwezigheden</a></li><?php } ?>
        <?php if (isset($behaviour)) { ?><li<?php if (!$current) { $current = true; ?> class="current"<?php } ?>><a href="#block_klasbeheer_behaviour">Gedrag</a></li><?php } ?>
        <?php if (isset($study)) { ?><li<?php if (!$current) { $current = true; ?> class="current"<?php } ?>><a href="#block_klasbeheer_study">Studiebegeleiding</a></li><?php } ?>
    </ul>
    
    <?php $current = false; ?>
    <div class="block_klasbeheer_tab">
        <?php if (isset($absences)) { $current = true; ?>
            <div id="block_klasbeheer_absences" class="block_klasbeheer_tab-content block_klasbeheer_tab-active">
                    <?php if ($reportType == 'ktt') { ?><h4 class="absences">AFWEZIGHEDEN<span style="font-weight: normal;"> - trends in afwezig zijn (halve dagen) en te laat komen</span></h4>
                        <table class="views-table">
                            <?php foreach ($absences as $cid => $pupils) { ?>
                                <thead>
                                    <tr class="views-tr-sub">
                                        <th class="views-align-left" rowspan="2"><a href="<?php print base_path().drupal_lookup_path('alias', 'node/'.$cid); ?>" style="padding-left: 5px; font-weight: bold;"><?php print argus_get_class_name($cid); ?></a></th>
                                        <?php for ($w = 3; $w > 0; $w--) { ?>
                                            <th colspan="2">week <?php print date('W', strtotime('-'.$w.' weeks')); ?></th>
                                        <?php } ?>
                                        <th colspan="2">Totaal</th>
                                        <th colspan="2">Schooljaar</th>
                                    </tr>
                                    <tr class="views-tr-sub">
                                        <?php for ($x = 0; $x < 5; $x++) { ?>
                                            <th>A</th>
                                            <th>L</th>
                                        <?php } ?>
                                    </tr>
                                </thead>
                                <tbody>
                                    <?php $i = 1; foreach ($pupils as $pupil => $results) { ?>
                                        <tr class="<?php print ($i%2 == 0 ? "even" : "odd"); ?>">
                                            <td><?php print '<a href="'.base_path().drupal_lookup_path('alias', 'user/'.$pupil).'">'.argus_get_user_realname($pupil).'</a>'; ?></td>
                                            <?php
                                            
                                            for ($w = 3; $w > 0; $w--) {
                                            	print '<td class="views-align-center" style="border-left: solid 1px #efefef;" class="';
                                                if ($w<3){
                                                    if ($results['absence'][$w+1] < $results['absence'][$w]){
                                                        print ' colorRed';
                                                    } elseif ($results['absence'][$w+1] > $results['absence'][$w]){
                                                        print ' colorGreen';
                                                    }
                                                }
                                                print '">'.$results['absence'][$w].'</td><td class="views-align-center';
                                                if ($w<3){
                                                    if ($results['late'][$w+1] < $results['late'][$w]){
                                                        print ' colorRed';
                                                    } elseif ($results['late'][$w+1] > $results['late'][$w]){
                                                        print ' colorGreen';
                                                    }
                                                }
                                                print '">'.$results['late'][$w].'</td>';
                                            
                                            } ?>
                                            <td class="views-align-center" style="background-color: #efefef;"><?php print $results['absence']['last'].'</td><td class="views-align-center" style="background-color: #efefef;">'.$results['late']['last']; ?></td>
                                            <td class="views-align-center" style="font-weight: bold;"><?php print $results['absence']['total'].'</td><td class="views-align-center" style="font-weight: bold;">'.$results['late']['total']; ?></td>
                                        </tr>
                                    <?php $i++; } ?>
                                </tbody>
                            <?php } ?>
                        </table>
                    <?php } else { ?>
                        <h4 class="absences">AFWEZIGHEDEN<span style="font-weight: normal;"> - vandaag zijn <strong><?php print $absencesTotal; ?></strong> leerlingen afwezig</span></h4>
                        <table class="views-table">
                            <?php foreach ($absences as $cid => $pupils) { ?>
                                <thead>
                                    <tr class="views-tr-sub">
                                        <th class="views-align-left" rowspan="2"><a href="<?php print base_path().drupal_lookup_path('alias', 'node/'.$cid); ?>" style="padding-left: 5px; font-weight: bold;"><?php print argus_get_class_name($cid); ?></a></th>
                                        <th>Duur</th>
                                        <th>Schooljaar</th>
                                    </tr>
                                </thead>
                                <tbody>
                                    <?php $i = 1; foreach ($pupils as $pupil => $totals) { ?>
                                        <tr class="<?php print ($i%2 == 0 ? "even" : "odd"); ?>">
                                            <td><?php print '<a href="'.base_path().drupal_lookup_path('alias', 'user/'.$pupil).'">'.argus_get_user_realname($pupil).'</a>'; ?></td>
                                            <td class="views-align-center"><?php print $totals['length']; ?></td>
                                            <td class="views-align-center"><?php print $totals['schoolyear']; ?></td>
                                        </tr>
                                    <?php $i++; } ?>
                                </tbody>
                            <?php } ?>
                        </table>
                        
                        <h4 class="absences">TE LAAT KOMEN - <span style="font-weight: normal;"><strong><?php print $lateTotal; ?></strong> leerlingen waren te laat</span></h4>
                        <table class="views-table">
                            <?php foreach ($late as $cid => $pupils) { ?>
                                <thead>
                                    <tr class="views-tr-sub">
                                        <th class="views-align-left" rowspan="2"><a href="<?php print base_path().drupal_lookup_path('alias', 'node/'.$cid); ?>" style="padding-left: 5px; font-weight: bold;"><?php print argus_get_class_name($cid); ?></a></th>
                                        <th>Schooljaar</th>
                                    </tr>
                                </thead>
                                <tbody>
                                    <?php $i = 1; foreach ($pupils as $pupil => $totals) { ?>
                                        <tr class="<?php print ($i%2 == 0 ? "even" : "odd"); ?>">
                                            <td><?php print '<a href="'.base_path().drupal_lookup_path('alias', 'user/'.$pupil).'">'.argus_get_user_realname($pupil).'</a>'; ?></td>
                                            <td class="views-align-center"><?php print $totals['schoolyear']; ?></td>
                                        </tr>
                                    <?php $i++; } ?>
                                </tbody>
                            <?php } ?>
                        </table>
                    <?php } ?>
            </div>
        <?php } ?>

        <?php if (isset($behaviour)) { ?>
            <div id="block_klasbeheer_behaviour" class="block_klasbeheer_tab-content<?php if (!$current) { $current = true; ?> block_klasbeheer_tab-active<?php } ?>">
                <h4 class="behaviour">GEDRAG<span style="font-weight: normal;"> - trends in positief en negatief gedrag</span></h4>
                <table class="views-table">
                    <?php foreach($behaviour as $b => $reports){ 
                        if ($b) { // Drop pupils who left school ?>
                        <thead>
                            <tr class="views-tr-sub">
                                <th class="views-align-left" rowspan="2" style="vertical-align: middle;"><a href="<?php print base_path().drupal_lookup_path('alias', 'node/'.$b); ?>" style="padding-left: 5px; font-weight: bold;"><?php print argus_get_class_name($b); ?></a></th>
                                <th colspan="3">positief<div style="font-size: .8em; padding-right: 5px; margin-top: -10px;">laatste 30 d. / trend / totaal</div></th>
                                <th colspan="3">negatief<div style="font-size: .8em; padding-right: 5px; margin-top: -10px;">laatste 30 d. / trend / totaal</div></th>
                            </tr>
                        </thead>
                        <tbody>
                            <?php
                            $i = 1;
                            foreach($reports as $pupil => $report){
                                $trendPos = NULL;
                                if (isset($report['pos'])){
                                    if ($report['pos']['today']-$report['pos']['previous'] < 0){
                                        $trendPos = '<span style="color: red;">&#8664;</span>';
                                    } elseif ($report['pos']['today']-$report['pos']['previous'] > 0){
                                        $trendPos = '<span style="color: green;">&#8663;</span>';
                                    } else {
                                        $trendPos = '=';
                                    }
                                }
                                $trendNeg = NULL;
                                if (isset($report['neg'])){
                                    if ($report['neg']['today']-$report['neg']['previous'] < 0){
                                        $trendNeg = '<span style="color: green;">&#8664;</span>';
                                    } elseif ($report['neg']['today']-$report['neg']['previous'] > 0){
                                        $trendNeg = '<span style="color: red;">&#8663;</span>';
                                    } else {
                                        $trendNeg = '=';
                                    }
                                }

                                if ($reportType == 'ktt' || strpos($trendPos, 'span') || strpos($trendNeg, 'span')) { ?>
                                <tr class="<?php print ($i%2 == 0 ? "even" : "odd"); ?>">
                                    <td class="views-align-left"><?php print '<a href="'.base_path().drupal_lookup_path('alias', 'user/'.$pupil).'">'.argus_get_user_realname($pupil).'</a>'; ?></td>

                                    <!-- Positive behaviour //-->
                                    <?php if (isset($report['pos'])){ ?>
                                        <td align="center" class="border-left"><?php print $report['pos']['today']; ?></td>
                                        <td align="center"><?php print $trendPos; ?></td>
                                        <td align="center"><?php print $report['pos']['total']; ?></td>
                                    <?php } else { ?>
                                        <td align="center" class="border-left" colspan="3" style="font-style: italic; color: lightgray;">(geen meldingen)</td>
                                    <?php } ?>

                                    <!-- Negative behaviour //-->
                                    <?php if (isset($report['neg'])){ ?>
                                        <td align="center" class="border-left"><?php print $report['neg']['today']; ?></td>
                                        <td align="center"><?php print $trendNeg; ?></td>
                                        <td align="center"><?php print $report['neg']['total']; ?></td>
                                    <?php } else { ?>
                                        <td align="center" class="border-left" colspan="3" style="font-style: italic; color: lightgray;">(geen meldingen)</td>
                                    <?php } ?>
                                </tr>
                        <?php } $i++; } } ?>
                        </tbody>
                    <?php } ?>
                </table>
            </div>
        <?php } ?>

        <?php if (isset($study)) { ?>
            <div id="block_klasbeheer_study" class="block_klasbeheer_tab-content<?php if (!$current) { $current = true; ?> block_klasbeheer_tab-active<?php } ?>">
                <h4 class="study">STUDIEBEGELEIDING<span style="font-weight: normal;"> - trends in de evaluaties (percentage geslaagd)</span></h4>
                <table class="views-table">
                    <?php foreach ($study as $cid => $pupils) { ?>
                        <thead>
                            <tr class="views-tr-sub">
                                <th class="views-align-left"><a href="<?php print base_path().drupal_lookup_path('alias', 'node/'.$cid); ?>" style="padding-left: 5px; font-weight: bold;"><?php print argus_get_class_name($cid); ?></a></th>
                                <?php foreach ($periods as $p) { ?>
                                    <th><?php print $p->afkorting; ?></th>
                                <?php } ?>
                            </tr>
                            <?php $i = 1; foreach ($pupils as $pupil => $results) { ?>
                                <tr class="<?php print ($i%2 == 0 ? "even" : "odd"); ?>">
                                    <td><?php print '<a href="'.base_path().drupal_lookup_path('alias', 'user/'.$pupil).'">'.argus_get_user_realname($pupil).'</a>'; ?></td>
                                    <?php foreach ($periods as $p) { ?>
                                        <td class="views-align-center"><?php if ($results[$p->afkorting]['total']) {
                                            $percentage = round($results[$p->afkorting]['success']/$results[$p->afkorting]['total']*100);
                                            print '<div style="color: ';
                                            if ($percentage < 50) {
                                                print 'red';
                                            } else {
                                                print 'green';
                                            }
                                            print '">'.$percentage.'</div>';
                                        } ?></td>
                                    <?php } ?>
                                </tr>
                            <?php $i++; } ?>
                        </thead>
                    <?php } ?>
                </table>
            </div>
        <?php } ?>
    </div>
</div>
<?php } ?>