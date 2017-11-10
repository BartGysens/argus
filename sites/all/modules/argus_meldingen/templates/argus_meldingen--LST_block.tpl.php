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
?>
<div class="menu-block-wrapper right-block-wrapper">
    <?php if (isset($reports)){ ?>
        <script type="text/javascript">
        var maxReports = <?php print $graphMaxReports; ?>;
        var dataReportsChart = google.visualization.arrayToDataTable(<?php print json_encode($graph); ?>);
        </script>
        <div class="field clearfix">
            <div id="reports_chart" style="width: 98%; height: 200px;"></div>
            
            <div class="field-label">Overzicht van de meldingen:&nbsp;</div>
            <div class="field-items">
                <ul class="reports">
                <?php $cntr = 1;
                $broken = false;
                foreach ($reports as $r => $report){
                    switch ($report->about){
                        case 'positief gedrag': $about = 'positive'; break;
                        case 'negatief gedrag': $about = 'negative'; break;
                        case 'studiebegeleiding': $about = 'study'; break;
                        case 'afwezigheden': $about = 'absence'; break;
                        default: $about = 'other'; break;
                    }
                    print '<li class="report_'.$about.'">'.date('d/m/y', strtotime($report->factdate)).' : ';
                    if ($reportType != 'pupil'){
                        print argus_engine_get_user_link( $report->uid ) . ' - ';
                    }
                    print '<a class="behaviourReportTitle" title="Melding van '.argus_get_user_realname($report->author).'&#13;--------------------------------&#13;'.htmlentities(strip_tags(str_replace('<br />',chr(13),nl2br($report->report)))).'">';
                    if ($report->private){
                        print '<i>'.t('privé-melding').'</i>';
                    } else {
                        print $report->title;
                    }
                    print '</a></li>';
                    
                    $cntr++;
                    if (($cntr > 9 && $reportType == 'ktt') || 
                        ($cntr > 19 && in_array($reportType, array('staff','ilb')))){
                        $broken = true;
                        break;
                    }
                } ?>
                </ul>
                <?php if ($broken) {
                    print '<div class="more"><a href="'.base_path().'meldingen/lvs/overzicht">alle '.count($reports).' meldingen bekijken</a>';
                    if (isset($myClasses)){
                        $myClassesList = array();
                        foreach ($myClasses as $cid => $class){
                            $myClassesList[] = '<a href="'.base_path().'meldingen/lvs/overzicht?klas='.$class.'">'.$class.'</a>';
                        }
                        print ' ('.implode(' - ',$myClassesList).')';
                    }
                    print '</div>';
                } ?>
                <div class="legend" id="legend_reports">
                    <h5 style="text-align: right;">Legende</h5>
                    <ul class="reports" id="legend_reports_ul">
                        <li class="report_absence"><?php print t('afwezigheden'); ?></li>
                        <li class="report_positive"><?php print t('positief gedrag'); ?></li>
                        <li class="report_negative"><?php print t('negatief gedrag'); ?></li>
                        <li class="report_study"><?php print t('studiebegeleiding'); ?></li>
                        <li class="report_other"><?php print t('andere'); ?></li>
                    </ul>
                </div>
            </div>
        </div>
    <?php } else { ?>
    Geen meldingen.
    <?php } ?>
</div>