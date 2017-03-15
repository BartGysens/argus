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

?>

<?php if (user_access('access user profiles')){ ?>
	<div class="view">
	    <div class="view-header profile-top">
	    <p><a href="<?php print base_path().'user/'.$user_id.'/administratief'; ?>">Bekijk de administratieve fiche</a></p>
	    </div>
	</div>
<?php } ?>

<div class="profile"<?php print $attributes; ?>>
    <div class="profile-admin">
        <div id="profile-admin" class="clearfix">
            <div id="profile-admin-left">
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Naam, voornaam:&nbsp;</div>
                    <div class="field-items"><?php print argus_render('user', $account, 'field_user_sms_naam'); ?>, <?php print argus_render('user', $account, 'field_user_sms_voornaam'); ?></div>
                </div>

                <div class="field field-label-inline clearfix">
                    <div class="field-label">Geboortegegevens:&nbsp;</div>
                    <div class="field-items"><?php if (isset($birthday)) { print ($birthday->format('d/m/Y')); } ?>, <?php print argus_render('user', $account, 'field_user_sms_geboorteplaats'); ?> - <?php print argus_render('user', $account, 'field_user_sms_geboorteland'); ?>, <?php print date_diff($birthday,new DateTime('now'))->format('%y jaar'); ?></div>
                </div>

                <div class="field field-label-inline clearfix">
                    <div class="field-label">Adres:&nbsp;</div>
                    <div class="field-items"><?php print argus_render('user', $account, 'field_user_sms_straat'); ?> <?php print argus_render('user', $account, 'field_user_sms_huisnummer'); ?> <?php print argus_render('user', $account, 'field_user_sms_busnummer'); ?>, <?php print argus_render('user', $account, 'field_user_sms_postcode'); ?> <?php print argus_render('user', $account, 'field_user_sms_woonplaats'); ?></div>
                </div>
            </div>

            <div id="profile-admin-right">
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Telefoon:&nbsp;</div>
                    <div class="field-items"><?php print implode('&nbsp;-&nbsp;', array_filter(array(argus_render('user', $account, 'field_user_sms_telefoonnummer'), argus_render('user', $account, 'field_user_sms_mobielnummer')))); ?></div>
                </div>

                <div class="field field-label-inline clearfix">
                    <div class="field-label">E-mail:&nbsp;</div>
                    <div class="field-items"><?php print argus_render('user', $account, 'field_user_sms_emailadres', 0, TRUE); ?></div>
                </div>
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
    </div>
    
    <hr />

    <div class="clearfix">
    	
    	<div class="container">

		    <!-- ------------------------------ LEFT COLUMN ------------------------------ -->

		    <div>
			
				<fieldset id="panel-opdracht">
		            <legend>Opdracht</legend>
		            
		            <div class="field field-label-inline clearfix">
		                <div class="field-label">Basisrol:&nbsp;</div>
		                <div class="field-items"><?php print $baserole['title']; ?></div>
			        </div>
		            
		            <?php if (module_exists('argus_uurrooster') && $baserole['id'] == 0){
		            
		            	$assignment = argus_uurrooster_get_assignment($user_id);
		            	$opdracht = array();
		            	foreach($assignment['factor'] as $f => $t){
		            		if ($t){
		            			$opdracht[] = $t . '/' . $f;
		            		}
		            	}
		            	
		            	?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Ambtsbevoegdheid:&nbsp;</div>
			                <div class="field-items"><?php print implode(' + ', $opdracht); ?> (volgens uurrooster)</div>
			            </div>
			            
			            <hr />
			            
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Uurrooster:&nbsp;</div>
			                <div class="field-items"><span style="color: red">
							<?php
							if (count($current_lesson)){
								print implode(', ', $current_lesson['group']).' in '.$current_lesson['room'];
							} else {
								print "momenteel geen les";
							}
							?></span>
							 - <a href="<?php print base_path().'uurrooster/leerkracht/'.$user_id; ?>">rooster raadplegen</a></div>
			            </div>
			            
			            <hr />
						
						<?php if (count($courses)){ ?>
			                <div class="field field-label-inline clearfix">
			                    <div class="field-label">Vakken:&nbsp;</div>
			                    <div class="field-items"><ul>
			                    <?php foreach($courses as $cid => $course){
		            				print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$cid).'">'.$course.'</a></li>';
			                    }
		            			?></ul></div>
			                </div>
			                
			                <hr />
		                <?php } ?>
						
						
						<?php if (count($groups)){ ?>
			                <div class="field field-label-inline clearfix">
			                    <div class="field-label">Klassen:&nbsp;</div>
			                    <div class="field-items">
			                    <?php
			                    $data = array();
			                    foreach($groups as $gid => $group){ $data[] = '<a href="'.base_path().drupal_get_path_alias('node/'.$gid).'">'.$group.'</a>'; }
			                    print implode(', ', $data);
		            			?>
		            			</div>
			                </div>
			                
			                <hr />
		                <?php } ?>
						
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Toezichten:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($supervisions)){
								print '<ul>';
								foreach($supervisions as $sid => $s){
									print '<li>'.$s->title.'</li>';
								}
								print '</ul>';
							} else {
								print "geen vaste toezichten ingepland";
							}
							?>
							</div>
				        </div>
				        
				        <hr />
				        
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Permanenties:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($substitutions)){
								print implode(', ', $substitutions);
							} else {
								print "geen vaste permanenties ingepland";
							}
							?>
							</div>
				        </div>
		            <?php } ?>
		                        
		        </fieldset>
				
		        <fieldset id="panel-absenteisme">
		            <?php if (module_exists('argus_personeel_afwezigheden')){ ?>
		            	<div class="field field-label-inline clearfix">
			                <div class="field-label">Absenteïsme:&nbsp;</div>
			                <div class="field-items"><?php print $absences['total']; ?> dag(en)</div>
				        </div>
		            	
		            	<?php if (count($absences['graph'])>1){ ?>
			                <div id="absences_reports_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataAbsencesReportsChart = google.visualization.arrayToDataTable(<?php print json_encode($absences['graph']); ?>);
			                	maxAbsencesReports = <?php print $absences['max']; ?>;
			                </script>
				        <?php } ?>
			        	
				        <hr />
			        <?php } ?>
		            
		            <?php if (module_exists('argus_uurrooster_vervanging')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Vervangingen:&nbsp;</div>
			                <div class="field-items"><?php print $substitutions_executed['total']; ?> in totaal</div>
				        </div>
		            	
		            	<?php if (count($substitutions_executed['graph'])>1){ ?>
			                <div id="substitutions_executed_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataSubstitutionsChart = google.visualization.arrayToDataTable(<?php print json_encode($substitutions_executed['graph']); ?>);
			                	maxSubstitutions = <?php print $substitutions_executed['max']; ?>;
			                </script>
			            <?php } ?>
			            
			            <hr />
		                
		            <?php } ?>
		            
		            <?php if (module_exists('argus_nascholingen')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Nascholingen:&nbsp;</div>
			                <div class="field-items"><?php print $cvt['total']; ?> in totaal (<a href="<?php print base_path(); ?>events/nascholing?realname=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">overzicht</a>)</div>
				        </div>
		            	
		            	<?php if (count($cvt['graph'])>1){ ?>
			                <div id="cvt_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataCVTChart = google.visualization.arrayToDataTable(<?php print json_encode($cvt['graph']); ?>);
			                	maxCVT = <?php print $cvt['max']; ?>;
			                </script>
			            <?php } ?>
		                
		            <?php } ?>
		                        
		        </fieldset>
		        
		        <fieldset id="panel-emaima">
		            <legend>Pedagogische rol</legend>
		        	
			        <?php if (module_exists('argus_klasbeheer') && $baserole['id'] == 0){ ?>
			            
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Klastitularis:&nbsp;</div>
			                <div class="field-items"><ul>
				                <?php
				                if (count($ktt)){
				                	foreach ($ktt as $gid => $group){
				                		print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$gid).'">'.$group.'</a></li>';
				                	}
					            } else {
					               	print 'geen klastitularis';
			            		}
			                	?>
				            </ul></div>
				        </div>
			            
			            <hr />
			            
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Hulpklastitularis:&nbsp;</div>
			                <div class="field-items"><ul>
				                <?php
				                if (count($hktt)){
				                	foreach ($hktt as $gid => $group){
				                		print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$gid).'">'.$group.'</a></li>';
				                	}
					            } else {
					               	print 'geen hulpklastitularis';
			            		}
			                	?>
				            </ul></div>
				        </div>
			            
			            <hr />
			            
				    <?php } ?>
				    
		            <?php if (module_exists('argus_pedagogische_activiteiten')){ ?>
		            	<div class="field field-label-inline clearfix">
			                <div class="field-label">Pedagogische activiteiten:&nbsp;</div>
			                <div class="field-items"><?php print $emaima['total']; ?> in totaal (<a href="<?php print base_path(); ?>events/pedagogische_activiteit?realname=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">overzicht</a>)</div>
				        </div>
		            	
		            	<?php if (count($emaima['graph'])>1){ ?>
			                <div id="emaima_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataEMAIMAChart = google.visualization.arrayToDataTable(<?php print json_encode($emaima['graph']); ?>);
			                	maxEMAIMA = <?php print $emaima['max']; ?>;
			                </script>
				        <?php } ?>
				        
				        <hr />
				        
			        <?php } ?>
		            
		            <?php if (module_exists('argus_meldingen') && count($pupil_reports['graph'])>1){ ?>
		            	<div class="field field-label-inline clearfix">
			                <div class="field-label">Pedagogische meldingen:&nbsp;</div>
			                <div class="field-items"><?php print $pupil_reports['total']; ?> in totaal (<a href="<?php print base_path(); ?>meldingen/lvs/overzicht?name_1=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">overzicht</a>)</div>
				        </div>
		            	
		            	<?php if (count($pupil_reports['graph'])>1){ ?>
			                <div id="pupil_reports_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataPupilReportsChart = google.visualization.arrayToDataTable(<?php print json_encode($pupil_reports['graph']); ?>);
			                	maxPupilReports = <?php print $pupil_reports['max']; ?>;
			                </script>
				        <?php } ?>
				        
			        <?php } ?>
			        
		        </fieldset>
		        
		        <fieldset id="panel-infra">
		            <legend>Infrastructuur</legend>
		            
		            <?php if (module_exists('argus_sleutelbeheer')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Sleutels:&nbsp;</div>
			                <div class="field-items"><ul>
				                <?php
				                if (count($keys)){
				                	foreach ($keys as $id => $key){
				                		print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.$key->omschrijving.' - nr. '.$key->nummer.'</a></li>';
				                	}
					            } else {
					               	print 'geen sleutels geregistreerd';
			            		}
			                	?>
				            </ul></div>
				        </div>
				        
				        <hr />
				        
			        <?php } ?>
		            
		            <?php if (module_exists('argus_ontleningen')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Ontleningen:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($ontleningen)){
								print '<ul>';
								foreach($ontleningen as $id => $r){
									if ($r->status){
										$color = 'green';
									} else {
										$color = 'red';
									}
									print '<li style="color: '.$color.'">'.$r->materiaal.' (inventarisnr. '.$r->inventarisnummer.')</li>';
								}
								print '</ul>';
							} else {
								print "geen ontleningen gevonden";
			            	} ?>
							</div>
				        </div>
				        
				        <hr />
				        
			        <?php } ?>
		            
		            <?php if (module_exists('argus_technische_meldingen') && count($technical_reports['graph'])>1){ ?>
		            	<div class="field field-label-inline clearfix">
			                <div class="field-label">Technische meldingen:&nbsp;</div>
			                <div class="field-items"><?php print $technical_reports['total']; ?> in totaal (<a href="<?php print base_path(); ?>technische-meldingen?realname=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">overzicht</a>)</div>
				        </div>
		            	
		            	<?php if (count($technical_reports['graph'])>1){ ?>
			                <div id="technical_reports_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataTechnicalReportsChart = google.visualization.arrayToDataTable(<?php print json_encode($technical_reports['graph']); ?>);
			                	maxTechnicalReports = <?php print $technical_reports['max']; ?>;
			                </script>
				        <?php } ?>
			                
			        <?php } ?>
			        
		        </fieldset>
			
			</div>

		    <!-- ------------------------------ RIGHT COLUMN ------------------------------ -->

		    <div>
			
				<fieldset id="panel-inzet">
		            <legend>Inzet voor de school</legend>
		            
		            <div class="field field-label-inline clearfix">
		                <div class="field-label">Rollen:&nbsp;</div>
		                <div class="field-items">
			            <?php if (count($user_roles)){
			            	print implode(', ', $user_roles);
			            } else {
			        		print "geen rollen gevonden";
		            	} ?>
						</div>
			        </div>
		            
		            <?php if (module_exists('argus_vakgroepen')){ ?>
			            
			            <hr />
			            
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Vakgroepen:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($vgwg)){
								print '<ul>';
								foreach($vgwg as $vid => $v){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$vid).'">'.$v.'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen vakgroepen gevonden";
			            	} ?>
							</div>
				        </div>
			            
			        <?php } ?>
		            
		            <?php if (module_exists('argus_projectgroepen')){ ?>
			            
			            <hr />
			            
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Projectgroepen:&nbsp;</div>
			                <div class="field-items">
			                <?php
							if (count($projectgroups)){
								print '<ul>';
								foreach($projectgroups as $id => $r){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.$r.'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen lid van een projectgroep";
			            	} ?>
			            	</div>
				        </div>
			            
			        <?php } ?>
		            
		            <?php if (module_exists('argus_werkgroepen')){ ?>
			            
			            <hr />
			            
				        <div class="field field-label-inline clearfix">
			                <div class="field-label">Werkgroepen:&nbsp;</div>
			                <div class="field-items">
			                <?php
							if (count($workgroups)){
								print '<ul>';
								foreach($workgroups as $id => $r){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.$r.'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen lid van een werkgroep";
			            	} ?>
			            	</div>
				        </div>
			            
			        <?php } ?>
		            
		            <?php if (module_exists('argus_feedbackgroepen')){ ?>
			            
			            <hr />
			            
				        <div class="field field-label-inline clearfix">
			                <div class="field-label">Feedbackgroepen:&nbsp;</div>
			                <div class="field-items">
			                <?php
							if (count($feedbackgroups)){
								print '<ul>';
								foreach($feedbackgroups as $id => $r){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.$r.'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen lid van een feedbackgroep";
			            	} ?>
			            	</div>
				        </div>
			            
			        <?php } ?>
			        
		        </fieldset>
		        
		        <fieldset id="panel-nascholingen">
		            <legend>HRM</legend>
		            
		            <?php if (module_exists('argus_hrm')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Planningsgesprekken:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($hrm['planningsgesprekken'])){
								print '<ul>';
								foreach($hrm['planningsgesprekken'] as $id => $r){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.format_date(strtotime($r), 'long').'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen planningsgesprekken gevonden";
			            	} ?>
							</div>
				        </div>
				        
				        <hr />
			        
			        <?php } ?>
			        
		            <?php if (module_exists('argus_hrm') && $baserole['id'] == 0){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Flitsbezoeken:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($hrm['flitsbezoeken'])){
								print '<ul>';
								foreach($hrm['flitsbezoeken'] as $id => $r){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.format_date(strtotime($r), 'long').'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen flitsbezoeken gevonden";
			            	} ?>
							</div>
				        </div>
				        
				        <hr />
			        
			        <?php } ?>
			        
		            <?php if (module_exists('argus_hrm') && $baserole['id'] == 0){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Klasbezoeken:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($hrm['klasbezoeken'])){
								print '<ul>';
								foreach($hrm['klasbezoeken'] as $id => $r){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.format_date(strtotime($r), 'long').'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen klasbezoeken gevonden";
			            	} ?>
							</div>
				        </div>
				        
				        <hr />
			        
			        <?php } ?>
		            
			        <?php if (module_exists('argus_hrm')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Functioneringsgesprekken:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($hrm['functioneringsgesprekken'])){
								print '<ul>';
								foreach($hrm['functioneringsgesprekken'] as $id => $r){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.format_date(strtotime($r), 'long').'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen functioneringsgesprekken gevonden";
			            	} ?>
							</div>
				        </div>
				        
				        <hr />
			        
			        <?php } ?>
		            
			        <?php if (module_exists('argus_hrm')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Evaluatiegesprekken:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($hrm['evaluatiegesprekken'])){
								print '<ul>';
								foreach($hrm['evaluatiegesprekken'] as $id => $r){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$id).'">'.format_date(strtotime($r), 'long').'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen evaluatiegesprekken gevonden";
			            	} ?>
							</div>
				        </div>
			        
			        <?php } ?>
			        
		        </fieldset>
		        
		        <fieldset id="panel-extra">
		            <legend>Extra inspanningen</legend>
		            
		            <?php if (module_exists('argus_projecten')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Projecten:&nbsp;</div>
			                <div class="field-items">
							<?php
							if (count($projects)){
								print '<ul>';
								foreach($projects as $pid => $p){
									print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$pid).'">'.$p.'</a></li>';
								}
								print '</ul>';
							} else {
								print "geen projecten gevonden";
			            	} ?>
							</div>
				        </div>
				        
				        <hr />
			        <?php } ?>
		            
		            <?php if (module_exists('argus_werken_voor_derden') && $baserole['id'] == 0){ ?>
		            	<div class="field field-label-inline clearfix">
			                <div class="field-label">Werken voor derden:&nbsp;</div>
			                <div class="field-items"><?php print $works['total']; ?> in totaal</div>
				        </div>
		            	
		            	<?php if (count($works['graph'])>1){ ?>
			                <div id="works_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataWorksChart = google.visualization.arrayToDataTable(<?php print json_encode($works['graph']); ?>);
			                	maxWorks = <?php print $works['max']; ?>;
			                </script>
				        <?php } ?>
				        
				        <hr />
						
			        <?php } ?>
		            
		            <?php if (module_exists('argus_stages') && $baserole['id'] == 0){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Stages:&nbsp;</div>
			                <div class="field-items"><?php print $stages['attendant']['total']; ?> stagedossiers als begeleider en <?php print $stages['visits']['total']; ?> bezoeken in totaal</div>
				        </div>
		            	
		            	<?php if (count($stages['attendant']['graph'])>1){ ?>
			                <div id="stages_attendant_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataStagesAttendantChart = google.visualization.arrayToDataTable(<?php print json_encode($stages['attendant']['graph']); ?>);
			                	maxStagesAttendant = <?php print $stages['attendant']['max']; ?>;
			                </script>
				        <?php } ?>
		            	
		            	<?php if (count($stages['visits']['graph'])>1){ ?>
			                <div id="stages_visits_chart" style="width: 98%; height: 200px;"></div>
			                <script>
			                	var dataStagesVisitsChart = google.visualization.arrayToDataTable(<?php print json_encode($stages['visits']['graph']); ?>);
			                	maxStagesVisits = <?php print $stages['visits']['max']; ?>;
			                </script>
				        <?php } ?>
			        <?php } ?>
			        
		        </fieldset>
			
				<fieldset id="panel-links">
		            <legend>Snelle links - "Mijn werkruimte" & argus</legend>
		            
		            <div class="field field-label-inline clearfix">
		                <div class="field-label">argus:&nbsp;</div>
		                <div class="field-items"><?php print $argus['total']['visits']; ?> pagina's bezocht en <?php print $argus['total']['publications']; ?> bijdragen toegevoegd</div>
			        </div>
			        
		            <div id="argus_chart" style="width: 98%; height: 200px;"></div>
		            <script>
	                	var dataargusChart = google.visualization.arrayToDataTable(<?php print json_encode($argus['graph']); ?>);
	                	maxargus = <?php print $argus['max']; ?>;
	                </script>
	                
	                <hr />
		            
		            <?php if (module_exists('argus_stages') && $baserole['id'] == 0){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Stages:&nbsp;</div>
			                <div class="field-items">
			                	<a href="<?php print base_path(); ?>stages?realname_1=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">stagedossiers</a>, 
			                	<a href="<?php print base_path(); ?>stages/bezoeken?realname_1=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">stagebezoeken</a>
			                </div>
				        </div>
		            <?php } ?>
		            
		            <?php if (module_exists('argus_meldingen')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Pedagogische meldingen:&nbsp;</div>
			                <div class="field-items">
			                	<a href="<?php print base_path(); ?>meldingen/lvs/overzicht?name_1=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">persoonlijk overzicht</a>
			                </div>
				        </div>
		            <?php } ?>
		            
		            <?php if (module_exists('argus_technische-meldingen')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Technische meldingen:&nbsp;</div>
			                <div class="field-items">
			                	<a href="<?php print base_path(); ?>technische-meldingen?realname=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">mijn meldingen</a>
			                </div>
				        </div>
		            <?php } ?>
		            
		            <?php if (module_exists('argus_examens') && $baserole['id'] == 0){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Examens:&nbsp;</div>
			                <div class="field-items">
			                	<a href="<?php print base_path(); ?>evaluatie/examens/beheer?name=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">beheerscherm</a>
			                </div>
				        </div>
		            <?php } ?>
		            
		            <?php if (module_exists('argus_nascholingen')){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Nascholingen:&nbsp;</div>
			                <div class="field-items">
			                	<a href="<?php print base_path(); ?>events/nascholing?realname=<?php print argus_get_user_realname($account->uid); ?>" target="_blank">mijn gevolgde nascholingen</a>
			                </div>
				        </div>
		            <?php } ?>
		            
		            <?php if (module_exists('argus_gip') && $baserole['id'] == 0){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">GIP:&nbsp;</div>
			                <div class="field-items">
			                	<a href="<?php print base_path(); ?>GIP" target="_blank">overzicht (status)</a>
			                </div>
				        </div>
		            <?php } ?>
		            
		            <?php if (module_exists('argus_werken_voor_derden') && $baserole['id'] == 0){ ?>
			            <div class="field field-label-inline clearfix">
			                <div class="field-label">Werken voor derden:&nbsp;</div>
			                <div class="field-items">
			                	<a href="<?php print base_path(); ?>werken-voor-derden" target="_blank">overzicht (alle werken)</a>
			                </div>
				        </div>
		            <?php } ?>
			        
		        </fieldset>
	        
			</div>

	    </div>

    </div>
</div>

<?php if (user_access('access user profiles')){ ?>
	<div class="view">
	    <div class="view-header">
	    	<p><a href="<?php print base_path().'user/'.$user_id.'/administratief'; ?>">Bekijk de administratieve fiche</a></p>
	    </div>
	</div>
<?php } ?>