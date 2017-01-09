<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 */

if (count($account->field_user_sms_geboortedatum)){
    $birthday = new DateTime($account->field_user_sms_geboortedatum[LANGUAGE_NONE][0]['value']);
}

$thisSchoolyear = date('Y');
if (date('n')<9) $thisSchoolyear = date('Y')-1;

?>

<script type="text/javascript">
var dataAbsencesChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['absences']['graph']); ?>);
var dataAbsencesEvolutionChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['absences']['evolutiongraph']); ?>);
var dataAbsencesWeekChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['absences']['weekgraph']); ?>);

var dataLateWeekChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['late']['weekgraph']); ?>);

var dataBehaviourChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['behaviour']['graph']); ?>);

var dataStudyFailsChart = google.visualization.arrayToDataTable(<?php print json_encode($study['results']['graph']['fails']); ?>);
var dataStudyCourseTypeChart = google.visualization.arrayToDataTable(<?php print json_encode($study['results']['graph']['courseType']); ?>);
var dataStudyBirdseyeChart = google.visualization.arrayToDataTable(<?php print json_encode($study['results']['graph']['birdseye']); ?>);
</script>

<div class="profile"<?php print $attributes; ?>>
    <div class="profile-admin">
        <div class="clearfix">
            <table class="profile-table">
                <tr>
                    <td>
                        <div class="field field-label-inline clearfix">
                            <div class="field-label">Naam, voornaam:&nbsp;</div>
                            <div class="field-items"><?php print klassenraad_render('user', $account, 'field_user_sms_naam'); ?>, <?php print klassenraad_render('user', $account, 'field_user_sms_voornaam'); ?><?php if (isset($user_class)){ ?> - <a href="<?php print base_path(); ?>klassen/overzicht/<?php print $user_class; ?>"><?php print $user_class; ?></a><?php } ?></div>
                        </div>
                    </td>
                    <td>
                        <div class="field field-label-inline clearfix">
                            <div class="field-label">Geboortegegevens:&nbsp;</div>
                            <div class="field-items"><?php if (isset($birthday)) { print ($birthday->format('d/m/Y')); } ?>, <?php print klassenraad_render('user', $account, 'field_user_sms_geboorteplaats'); ?> - <?php print klassenraad_render('user', $account, 'field_user_sms_geboorteland'); ?>, <span style="color: red"><?php print date_diff($birthday,new DateTime('now'))->format('%y jaar'); ?></span></div>
                        </div>
                    </td>
                    <td>
                        <div class="field field-label-inline clearfix">
                            <div class="field-label">Adres:&nbsp;</div>
                            <div class="field-items"><?php print klassenraad_render('user', $account, 'field_user_sms_straat'); ?> <?php print klassenraad_render('user', $account, 'field_user_sms_huisnummer'); ?> <?php print klassenraad_render('user', $account, 'field_user_sms_busnummer'); ?>, <?php print klassenraad_render('user', $account, 'field_user_sms_postcode'); ?> <?php print klassenraad_render('user', $account, 'field_user_sms_woonplaats'); ?> - <?php print klassenraad_render('user', $account, 'field_user_sms_gezinssituatie'); ?></div>
                        </div>
                    </td>
                </tr>
            </table>
        </div>

        <?php
        if (variable_get('user_pictures', 0)){
            if ($account->picture){
                if (!empty($account->picture->uri)) {
                    $filepath = $account->picture->uri;
                }
                if (isset($filepath)) {
                    $profile_url = file_create_url($filepath);
                    print '<div id="profile-admin-photo"><img src="'.$profile_url.'" /></div>';
                    print '<div id="profile-admin-photo-full"><img src="'.$profile_url.'" /></div>';
                }
            }
        }
        ?>
    </div>
    
    <hr />
    
    <div class="clearfix">
        <fieldset id="panel-afwezigheden">
            <legend>Afwezigheden</legend>
            <div class="field field-label-inline clearfix">
                <div class="field-label">Meldingen:&nbsp;</div>
                <div class="field-items"><?php print $hotline['absences']['total']; ?></div>
            </div>
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Status:&nbsp;</div>
                <div class="field-items"><strong><?php print $hotline['absences']['totals']['present']; ?></strong> aanwezig vs. <strong><?php print $hotline['absences']['totals']['absent']; ?></strong> afwezig (<strong style="color: red;"><?php print round(100/$hotline['absences']['totals']['registered']*$hotline['absences']['totals']['absent']); ?>%</strong>)</div>
            </div>
            
            <hr />
            
            <?php if ($hotline['absences']['totals']['B']>11){ ?>
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Aantal B-codes:&nbsp;</div>
                    <div class="field-items"><?php
                        print $hotline['absences']['totals']['B'];

                        if ($hotline['absences']['totals']['B'] > 29) {
                            print ' (<strong style="color: red">problematisch</strong>)';
                        }
                        elseif ($hotline['absences']['totals']['B'] > 11) {
                            print ' (<strong style="color: orange">bespreking op cel</strong>)';
                        }
                        ?></div>
                </div>
                <hr />
            <?php } ?>
            
            <?php
            if (module_exists('argus_afwezigheden')){
                $dates = argus_afwezigheden_justification($user_id);
                if (count($dates)){
                    $dates = reset($dates); ?>
                    <div class="field clearfix">
                        <div class="field-label">Openstaande afwezigheden:&nbsp;</div>
                        <div class="field-items">
                            <ol>
                            <?php
                            foreach ($dates['dates'] as $date => $status){
                                print '<li';
                                if (array_key_exists('diff', $status)){
                                    if ($status['diff'] > 10){
                                        print ' style="color: red;"';
                                    }
                                }
                                print '>'.date('d/m/y', strtotime($date)).' : ';
                                if (isset($status['am'])){
                                    print t('voormiddag');
                                }
                                if (isset($status['am']) && isset($status['pm'])){
                                    print ' en ';
                                } 
                                if (isset($status['pm'])){
                                    print t('namiddag');
                                }
                                if (isset($dates['back']) && isset($status['diff'])){
                                    print ' (+'.$status['diff'].' dagen)';
                                }
                                print '</li>';
                            }
                            ?>
                            </ol>
                            <?php
                            if (isset($dates['back'])){
                                print '<div style="text-align: right; font-style: italic;"><small>(terug sinds '.date('d/m/y', strtotime($dates['back'])).')</small></div>';
                            } ?>
                        </div>
                    </div>
                <?php }
            }
            ?>
            
            <!-- mogelijkheid toevoegen doktersattesten + motivatie in argus? oplijsting dokters die attest schrijven! //-->
            
            <?php if (count($hotline['absences']['graph'])>1){ ?>
                <div id="absenses_chart_totals" style="width: 98%; height: 200px;"></div>
            <?php } ?>
            
            <div id="absenses_chart_evolution" style="width: 98%; height: 200px;"></div>
            
            <div id="absenses_chart_week" style="width: 98%; height: 200px;"></div>
            
            <hr />
            
            <?php if ($hotline['absences']['totals']['oa_sticker']){ ?>
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Aantal x te laat:&nbsp;</div>
                    <div class="field-items"><strong><?php print $hotline['absences']['totals']['L']; ?></strong> > rode stickers: <strong><?php print $hotline['absences']['totals']['oa_sticker']; ?></strong></div>
                </div>
            <?php } ?>
            
            <div id="late_chart_week" style="width: 98%; height: 200px;"></div>
            
        </fieldset>

        <fieldset id="panel-gedrag">
            <legend>Gedrag</legend>
            <div class="field field-label-inline clearfix">
                <div class="field-label">Meldingen:&nbsp;</div>
                <div class="field-items">positief gedrag <strong><?php print count($hotline['behaviour']['positive']); ?></strong> vs. negatief <strong><?php print count($hotline['behaviour']['negative']); ?></strong></div>
            </div>
            
            <hr />
            
            <script text="text/javascript">maxReportsBehaviour = <?php print $hotline['behaviour']['maxReports']; ?>;</script>
            <div id="behaviour_chart_evolution" style="width: 98%; height: 200px;"></div>
            
            <?php if (count($hotline['behaviour']['measure'])>4){ ?>
                <div class="field clearfix">
                    <div class="field-label">Maatregelen bij Schending van de Leefregels:&nbsp;</div>
                    <div class="field-items"><ul>
                        <?php
                        foreach ($hotline['behaviour']['measure'] as $m) {
                            if ($m['title']){
                                if ($m['isTitle']){
                                    if ($m['count']>1){
                                        print '</li><li><h5>'.$m['title'].'</h5>';
                                    }
                                } else {
                                    print $m['count'].' x '.$m['title'].'<br />';
                                }
                            }
                        } ?>
                        </ul>
                    </div>
                </div>
            <?php } ?>
            
            <?php if (count($hotline['behaviour']['bos'])){ ?>
                <div class="field clearfix">
                    <div class="field-label">Begeleidingsovereenkomst(en):&nbsp;</div>
                    <div class="field-items"><ul>
                        <?php
                        foreach ($hotline['behaviour']['bos'] as $b) {
                            print '<li>'.strip_tags($b['reason']).'<br />';

                            if (isset($b['endDate'])){
                                print '<span style="color: green;">';
                            } else {
                                print '<span style="color: red;">';
                            }
                            $bdate = new DateTime($b['startDate']);
                            print '<small>'.$bdate->format('d/m/Y').' - ';
                            if (isset($b['endDate'])){
                                $edate = new DateTime($b['endDate']);
                                print $edate->format('d/m/Y');
                            } else {
                                print '(nog lopend)';
                            }
                            if ($b['cms']){
                                print ' , op basis van <strong>'.$b['cms'].'</strong> meldingen';
                            }
                            print '</small></span></li>';
                        } ?>
                        </ul>
                    </div>
                </div>
            <?php } ?>
            
            <?php if ($hotline['behaviour']['vks']){ ?>
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Volgkaart(en):&nbsp;</div>
                    <div class="field-items"><?php print $hotline['behaviour']['vks'].' volgkaarten gehad'; ?></div>
                </div>
            <?php } ?>
            
            <?php if (count($hotline['behaviour']['negative']) || count($hotline['behaviour']['positive'])){ ?>
                <div class="field clearfix">
                    <div class="field-label">Overzicht van de meldingen:&nbsp;</div>
                    <div class="field-items"><ul>
                        <?php if (count($hotline['behaviour']['negative'])){ ?>
                            <li><h5>Negatief gedrag</h5>
                                <ol>
                                <?php
                                foreach ($hotline['behaviour']['negative'] as $r => $report){
                                    print '<li>'.date('d/m/y', strtotime($report['factdate'])).' : <a class="behaviourReportTitle" title="Melding van '.$report['author'].'&#13;--------------------------------&#13;'.htmlentities(str_replace('<br />',chr(13),nl2br($report['report']))).'">';
                                    if ($report['private']){
                                        print '<i>'.t('privé-melding').'</i>';
                                    } else {
                                        print $report['title'];
                                    }
                                    print '</a></li>';
                                } ?>
                                </ol>
                            </li>
                        <?php } ?>
                        <?php if (count($hotline['behaviour']['positive'])){ ?>
                            <li><h5>Positief gedrag</h5>
                                <ol>
                                <?php
                                foreach ($hotline['behaviour']['positive'] as $r => $report){
                                    print '<li>'.date('d/m/y', strtotime($report['factdate'])).' : <a class="behaviourReportTitle" title="Melding van '.$report['author'].'&#13;--------------------------------&#13;'.htmlentities(str_replace('<br />',chr(13),nl2br($report['report']))).'">';
                                    if ($report['private']){
                                        print '<i>'.t('privé-melding').'</i>';
                                    } else {
                                        print $report['title'];
                                    }
                                    print '</a></li>';
                                } ?>
                                </ol>
                            </li>
                        <?php } ?>
                        </ul>
                    </div>
                </div>
            <?php } ?>
        </fieldset>

        <fieldset id="panel-studiebegeleiding">
            <legend>Studiebegeleiding</legend>
            <div class="field field-label-inline clearfix">
                <div class="field-label">Meldingen:&nbsp;</div>
                <div class="field-items"><?php print $hotline['study']['total']; ?></div>
            </div>
            
            <hr />
            
            <?php if (array_key_exists('fails', $study['results'])){ ?>
                <div class="field clearfix">
                    <div class="field-label">Vogelperspectief (tekorten ifv uurpakket):&nbsp;</div>
                    <div class="field-items">
                        <div id="study_chart_birdseye" style="width: 98%; height: 200px;"></div>
                    </div>
                </div>

                <hr />
            <?php } ?>
            
            <?php if (count($hotline['study']['measure'])){ ?>
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Maatregelen:&nbsp;</div>
                    <div class="field-items">
                        <?php
                        foreach ($hotline['study']['measure'] as $m) {
                            if ($m['title']){
                                if ($m['isTitle']){
                                    if ($m['count']>1){
                                        print '<h5>'.$m['title'].'</h5>';
                                    }
                                } else {
                                    print $m['count'].' x '.$m['title'].'<br />';
                                }
                            }
                        } ?>
                    </div>
                </div>
                <hr />
            <?php } ?>
            
            <?php
                $studyProblems = '';
                $fieldAsOptions = argus_sms_fieldsAsArrays(variable_get('argus_sms_data_accounts_sync_fieldmap_options'));
                $studyProbs = array('Dyslexie','Dyscalculie','ADHD','NLD (non-verbale leerstoornis)','ASS (Autisme Spectrum Stoornis)','GON','Buitengewoon onderwijs');
                foreach ($studyProbs as $f){
                    $field = argus_sms_uniform_field($f, 'field_user_sms_');
                    eval("\$value = \$account->".$field."[LANGUAGE_NONE][0]['value'];");
                    $fieldOptions = (array) $fieldAsOptions[$field];
                    foreach ($fieldOptions as $fk => $fo){
                        if ($fk == $value){
                            if ($fo == 'Ja'){
                                $studyProblems .= '<li>'.$f.'</li>';
                            }
                            break;
                        }
                    }
                }
            
            if ($studyProblems){ ?>
                <div class="field clearfix">
                    <div class="field-label">Leerproblemen:&nbsp;</div>
                    <div class="field-items"><ul><?php print $studyProblems; ?></ul></div>
                </div>
                <hr />
            <?php } ?>
            
            <?php if (array_key_exists('fails', $study['results'])){ ?>
                <div class="field clearfix">
                    <div class="field-label">Tekorten per periode:&nbsp;</div>
                    <div class="field-items">
                        <div id="study_chart_fails" style="width: 98%; height: 200px;"></div>
                        <ul>
                            <?php
                            foreach ($study['results']['fails']['periods'] as $p => $fails){
                                print '<li><h5>'.$p.'</h5><ol class="detailList">';
                                foreach ($fails as $f => $result){
                                    print '<li>'.$result['vak'].': <span style="color: red;">'.$result['behaald'].'/'.$result['max'].'</span></li>';
                                }
                                print '</ol></li>';
                            }
                            ?>
                        </ul>
                    </div>
                </div>
                <script text="text/javascript">maxFails = <?php print $study['results']['maxCourses']; ?>;</script>
                
                <hr />

                <div class="field clearfix">
                    <div class="field-label">Tekorten per lesgedeelte (op jaarbasis):&nbsp;</div>
                    <div class="field-items">
                        <div id="study_chart_course_type" style="width: 98%; height: 200px;"></div>
                    </div>
                </div>

                <hr />
            <?php } ?>
            
            <?php if (count($study['deliberations']) || count($study['results'])){ ?>
                <div class="field clearfix">
                    <div class="field-label">Rapporten, deliberaties & adviezen:&nbsp;</div>
                    <div class="field-items">
                        <div id="resultsSelect">
                            <select id="selectResults">
                                <optgroup label="Rapporten (dit schooljaar)">
                                    <?php
                                    $cntr = 0;
                                    if (isset($study['results']['periods'])){
                                        foreach ($study['results']['periods'] as $p => $period){
                                            print '<option value="'.($cntr++).'">'.$period['long'].'</option>';
                                        }
                                    }
                                    ?>
                                </optgroup>
                                <optgroup label="Deliberaties (vorige schooljaren)">
                                    <?php
                                    foreach ($study['deliberations'] as $schoolyear => $d){
                                        $class = node_load($d['klas']);
                                        print '<option value="'.($cntr++).'">'.t('Schooljaar').' '.$schoolyear.' - '.$class->title.'</option>';
                                    }
                                    ?>
                                </optgroup>
                            </select>
                        </div>
                        <?php
                        $cntr = 0;
                        if (isset($study['results']['periods'])){
                            foreach ($study['results']['periods'] as $p => $period){
                                print '<div id="results'.($cntr++).'" class="results"><ul class="detailList">';

                                if (array_key_exists('results',$period)){
                                    foreach ($period['results'] as $course => $result){
                                        print '<li>'.$result['vak_beschrijving'].': <span';
                                        if ($result['percent']<50) {
                                            print ' style="color: red;"';
                                        }
                                        print '>'.$result['behaald'].'/'.$result['max'].' ('.$result['percent'].'%)</span></li>';
                                    }
                                } else {
                                    print '(nog geen resultaten)';
                                }

                                print '</ul></div>';
                            }
                        }
                        foreach ($study['deliberations'] as $schoolyear => $d){
                            print '<div id="results'.($cntr++).'" class="results"><ul>';
                            
                            if ($d['attest']){
                                if ($d['attest']!='geen'){
                                    print '<li>';
                                    if ($d['attest_uitgesteld']){
                                        print t('Attest, <u>na uitgesteld</u>').': <span style="color: red; font-weight: bold;">'.$d['attest_uitgesteld'].'</span></li>';
                                    } else {
                                        print t('Attest').': <span style="color: red; font-weight: bold;">'.$d['attest'].'</span>';
                                    }
                                    if (isset($d['gedelibereerd'])){
                                        print ' ('.t('gedelibereerd').')';
                                    }
                                    print '</li>';
                                }
                            }
                            
                            if ($d['diplomas']){
                                print '<li><h5>'.t('behaalde diploma\'s').'</h5><ul class="detailList">';
                                foreach ($d['diplomas'] as $item){
                                    print '<li>'.trim($item['safe_value']).'</li>';
                                }
                                print '</ul></li>';
                            }
                            
                            if ($d['vakantietaken']){
                                print '<li><h5>'.t('vakantietaken').'</h5><ul>';
                                foreach ($d['vakantietaken'] as $item){
                                    $result = explode(':',trim(str_replace(': ',':',$item['safe_value'])));
                                    $result[count($result)-1] = str_replace('.',',', $result[count($result)-1]);
                                    if ($result[count($result)-1]<50){
                                        $result[count($result)-1] = '<span style="color:red;">'.$result[count($result)-1].'</span>';
                                    }
                                    print '<li>'.implode(': ',$result).'</li>';
                                }
                                print '</ul></li>';
                            }
                            
                            if ($d['waarschuwingen']){
                                print '<li><h5>'.t('waarschuwingen').'</h5><ul>';
                                foreach ($d['waarschuwingen'] as $item){
                                    $result = explode(':',trim(str_replace(': ',':',$item['safe_value'])));
                                    $result[count($result)-1] = str_replace('.',',', $result[count($result)-1]);
                                    if ($result[count($result)-1]<50){
                                        $result[count($result)-1] = '<span style="color:red;">'.$result[count($result)-1].'</span>';
                                    }
                                    print '<li>'.implode(': ',$result).'</li>';
                                }
                                print '</ul></li>';
                            }
                            
                            if (count($d['vakresultaten'])>0){
                                print '<li><h5>'.t('vakresultaten').'</h5><ul class="detailList">';
                                foreach ($d['vakresultaten'] as $item){
                                    $result = explode(':',trim(str_replace(': ',':',$item)));
                                    $result[count($result)-1] = str_replace('.',',', $result[count($result)-1]);
                                    if ($result[count($result)-1]<50){
                                        $result[count($result)-1] = '<span style="color:red;">'.$result[count($result)-1].'</span>';
                                    }
                                    print '<li>'.implode(': ',$result).'</li>';
                                }
                                print '</ul></li>';
                            }
                            
                            print '</ul></div>';
                        }
                        ?>
                    </div>
                </div>
            <?php } ?>
            
            <?php if ($account->field_user_sms_sl_schooljaar[LANGUAGE_NONE][0]['safe_value'] || $account->field_user_sms_sl2_schooljaar[LANGUAGE_NONE][0]['safe_value']){?>
                <div class="field clearfix">
                    <div class="field-label">Schoolloopbaan:&nbsp;</div>
                    <div class="field-items"><ul>
                        <?php

                        $trajectTitle = '';
                        $traject = '';
                        if ($account->field_user_sms_sl_schooljaar[LANGUAGE_NONE][0]['safe_value']){
                            $trajectTitle = '<h5>'.klassenraad_render('user', $account, 'field_user_sms_sl_schooljaar').'</h5>';
                        }
                        if ($account->field_user_sms_sl_school[LANGUAGE_NONE][0]['safe_value']){
                            $traject .= '<li>'.klassenraad_render('user', $account, 'field_user_sms_sl_school');
                            if ($account->field_user_sms_sl_stad_school[LANGUAGE_NONE][0]['safe_value']){
                                $traject .= ' ('.klassenraad_render('user', $account, 'field_user_sms_sl_stad_school').')';
                            }
                            $traject .= '</li>';
                        }
                        if ($account->field_user_sms_sl_leerjaar_en_st[LANGUAGE_NONE][0]['safe_value']){
                            $traject .= '<li>'.klassenraad_render('user', $account, 'field_user_sms_sl_leerjaar_en_st').'</li>';
                        }
                        if ($account->field_user_sms_sl_attest[LANGUAGE_NONE][0]['safe_value']){
                            $traject .= '<li><strong>'.klassenraad_render('user', $account, 'field_user_sms_sl_attest').'</strong> behaald</li>';
                        }
                        if ($account->field_user_sms_sl_clausulering[LANGUAGE_NONE][0]['safe_value']){
                            $traject .= '<li><u>clausule</u>: '.klassenraad_render('user', $account, 'field_user_sms_sl_clausulering').'</li>';
                        }
                        if ($traject){
                            print '<li>'.$trajectTitle.'<ul>'.$traject.'</ul></li>';
                        }

                        $trajectTitle = '';
                        $traject = '';
                        if ($account->field_user_sms_sl2_schooljaar[LANGUAGE_NONE][0]['safe_value']){
                            $trajectTitle = '<h5>'.klassenraad_render('user', $account, 'field_user_sms_sl2_schooljaar').'</h5>';
                        }
                        if ($account->field_user_sms_sl2_school[LANGUAGE_NONE][0]['safe_value']){
                            $traject .= '<li>'.klassenraad_render('user', $account, 'field_user_sms_sl2_school');
                            if ($account->field_user_sms_sl2_stad_school[LANGUAGE_NONE][0]['safe_value']){
                                $traject .= ' ('.klassenraad_render('user', $account, 'field_user_sms_sl2_stad_school').')';
                            }
                            $traject .= '</li>';
                        }
                        if ($account->field_user_sms_sl2_leerjaar_en_s[LANGUAGE_NONE][0]['safe_value']){
                            $traject .= '<li>'.klassenraad_render('user', $account, 'field_user_sms_sl2_leerjaar_en_s').'</li>';
                        }
                        if ($account->field_user_sms_sl2_attest[LANGUAGE_NONE][0]['safe_value']){
                            $traject .= '<li><strong>'.klassenraad_render('user', $account, 'field_user_sms_sl2_attest').'</strong> behaald</li>';
                        }
                        if ($traject){
                            print '<li>'.$trajectTitle.'<ul>'.$traject.'</ul></li>';
                        }

                        ?></ul>
                    </div>
                </div>
            <?php } ?>
        </fieldset>
    </div>
</div>