<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 */
if (count ( $account->field_user_sms_geboortedatum )) {
	$birthday = new DateTime ( $account->field_user_sms_geboortedatum [LANGUAGE_NONE] [0] ['value'] );
}

$params = drupal_get_query_parameters ();
if (array_key_exists ( 'schooljaar', $params )) {
	$thisSchoolyear = $params ['schooljaar'];
} else {
	$thisSchoolyear = date ( 'Y' );
	if (date ( 'n' ) < 9)
		$thisSchoolyear = date ( 'Y' ) - 1;
}

?>

<script type="text/javascript">
<?php if (module_exists('argus_afwezigheden')){ ?>
var dataAbsencesChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['absences']['graph']); ?>);
var dataAbsencesEvolutionChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['absences']['evolutiongraph']); ?>);
var dataAbsencesWeekChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['absences']['weekgraph']); ?>);
var dataLateWeekChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['late']['weekgraph']); ?>);
<?php } ?>

<?php if (module_exists('argus_meldingen')){ ?>
var dataBehaviourChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['behaviour']['graph']); ?>);
<?php } ?>

<?php
// TODO: if (module_exists('argus_skore')){ ??
if (module_exists ( 'argus_vakken' ) && module_exists ( 'argus_uurrooster' )) { ?>
var dataStudyFailsChart = google.visualization.arrayToDataTable(<?php print json_encode($study['results']['graph']['fails']); ?>);
var dataStudyCourseTypeChart = google.visualization.arrayToDataTable(<?php print json_encode($study['results']['graph']['courseType']); ?>);
var dataStudyBirdseyeChart = google.visualization.arrayToDataTable(<?php print json_encode($study['results']['graph']['birdseye']); ?>);
<?php } ?>
</script>

<?php if (user_access('access user profiles')){ ?>
<div class="view">
	<div class="view-header profile-top">
		<p>
			<a
				href="<?php print base_path().'user/'.$user_id.'/administratief'; ?>">Bekijk
				de administratieve fiche</a><?php print argus_engine_schoolyear_selectionBox(); ?></p>
	</div>
</div>
<?php } ?>

<div class="profile" <?php print $attributes; ?>>
	<div class="profile-admin">
		<div id="profile-admin" class="clearfix">
			<div id="profile-admin-left">
				<div class="field field-label-inline clearfix">
					<div class="field-label">Naam, voornaam:&nbsp;</div>
					<div class="field-items"><?php print argus_render('user', $account, 'field_user_sms_naam'); ?>, <?php print argus_render('user', $account, 'field_user_sms_voornaam'); ?><?php if (isset($user_class)){ ?> - <a
							href="<?php print base_path(); ?>klas/<?php print $user_class['title']; ?>"><?php print $user_class['title']; ?></a><?php } ?></div>
				</div>

				<div class="field field-label-inline clearfix">
					<div class="field-label">Geboortegegevens:&nbsp;</div>
					<div class="field-items"><?php if (isset($birthday)) { print ($birthday->format('d/m/Y')); } ?>, <?php print argus_render('user', $account, 'field_user_sms_geboorteplaats'); ?> - <?php print argus_render('user', $account, 'field_user_sms_geboorteland'); ?>, <span
							style="color: red"><?php print date_diff($birthday,new DateTime('now'))->format('%y jaar'); ?></span>
					</div>
				</div>

				<div class="field field-label-inline clearfix">
					<div class="field-label">Adres:&nbsp;</div>
					<div class="field-items"><?php print argus_render('user', $account, 'field_user_sms_straat'); ?> <?php print argus_render('user', $account, 'field_user_sms_huisnummer'); ?> <?php print argus_render('user', $account, 'field_user_sms_busnummer'); ?>, <?php print argus_render('user', $account, 'field_user_sms_postcode'); ?> <?php print argus_render('user', $account, 'field_user_sms_woonplaats'); ?> - <?php print argus_render('user', $account, 'field_user_sms_gezinssituatie'); ?></div>
				</div>

				<div class="field field-label-inline clearfix">
					<div class="field-label">Klastitularis:&nbsp;</div>
					<div class="field-items"><?php print argus_engine_get_user_link($user_class['ktt'], null, '_blank' ); ?></div>
				</div>
			</div>

			<div id="profile-admin-right">
				<div class="field field-label-inline clearfix">
					<div class="field-label">Telefoon:&nbsp;</div>
					<div class="field-items"><?php print implode('&nbsp;-&nbsp;', array_filter(array(argus_render('user', $account, 'field_user_sms_telefoonnummer'), argus_render('user', $account, 'field_user_sms_mobielnummer')))); ?></div>
				</div>

				<div class="field field-label-inline clearfix">
					<div class="field-label"><?php print $coaccounts[1]['type']; ?>&nbsp;</div>
					<div class="field-items"><?php print implode(' - ', array_filter($coaccounts[1]['value'])); ?></div>
				</div>

				<div class="field field-label-inline clearfix">
					<div class="field-label"><?php print $coaccounts[2]['type']; ?>&nbsp;</div>
					<div class="field-items"><?php print implode(' - ', array_filter($coaccounts[2]['value'])); ?></div>
				</div>

				<div class="field field-label-inline clearfix">
					<div class="field-label">Hulpklastitularis:&nbsp;</div>
					<div class="field-items"><?php print argus_engine_get_user_link($user_class['hktt'], null, '_blank' ); ?></div>
				</div>
			</div>

            <?php
												if (variable_get ( 'user_pictures', 0 )) {
													if ($account->picture) {
														if (! empty ( $account->picture->uri )) {
															$filepath = $account->picture->uri;
															if (! file_exists ( $filepath )) {
																unset ( $filepath );
															}
														}
														if (! isset ( $filepath )) {
															$filepath = 'public://styles/square_thumbnail/public/pictures/' . $account->picture->filename;
															if (! file_exists ( $filepath )) {
																unset ( $filepath );
															}
														}
														if (isset ( $filepath )) {
															$profile_url = file_create_url ( $filepath );
															print '<div id="profile-admin-photo"><img src="' . $profile_url . '" /></div>';
															print '<div id="profile-admin-photo-full"><img src="' . $profile_url . '" /></div>';
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

				<fieldset id="panel-afwezigheden">
					<legend>Afwezigheden</legend>
					<div class="field field-label-inline clearfix">
						<div
							style="font-size: 8px; color: red; position: relative; float: right;">
							(eenheden in <strong>halve dagen</strong>)
						</div>

						<div class="field-label">Meldingen:&nbsp;</div>
						<div class="field-items"><?php print $hotline['absences']['total']; ?></div>
					</div>

					<hr />

					<div class="field field-label-inline clearfix">
						<div class="field-label">Status:&nbsp;</div>
						<div class="field-items">
							<strong><?php print $hotline['absences']['totals']['present']; ?></strong>
							aanwezig vs. <strong><?php print $hotline['absences']['totals']['absent']; ?></strong> afwezig<?php if ($hotline['absences']['totals']['registered']) { ?> (<strong
								style="color: red;"><?php print round(100/$hotline['absences']['totals']['registered']*$hotline['absences']['totals']['absent']); ?>%</strong>)<?php } ?></div>
					</div>

					<hr />
		
		            <?php
														if (module_exists ( 'argus_leerplichtbegeleiding' )) {
															if (count ( $hotline ['absences'] ['leerplichtbegeleiding'] )) {
																?>
		                    <div class="field clearfix">
						<div class="field-label">Leerplichtbegeleiding:&nbsp;</div>
						<div class="field-items">
							<ol>
		                            <?php
																foreach ( $hotline ['absences'] ['leerplichtbegeleiding'] as $nid => $date ) {
																	print '<li>Start dossier - eerste melding: <a href="' . base_path () . drupal_lookup_path ( 'alias', 'node/' . $nid ) . '">' . date ( 'd/m/y', $date ) . '</a></li>';
																}
																?>
		                            </ol>
						</div>
					</div>

					<hr />
		                <?php
															}
														}
														?>
		
		            <?php if ($hotline['absences']['totals']['B']>11){ ?>
		                <div class="field field-label-inline clearfix">
						<div class="field-label">Aantal B-codes:&nbsp;</div>
						<div class="field-items"><?php
															print $hotline ['absences'] ['totals'] ['B'];
															
															if ($hotline ['absences'] ['totals'] ['B'] > 29) {
																print ' (<strong style="color: red">problematisch</strong>)';
															} elseif ($hotline ['absences'] ['totals'] ['B'] > 11) {
																print ' (<strong style="color: orange">bespreking op cel</strong>)';
															}
															?></div>
					</div>
					<hr />
		            <?php } ?>
		
		            <?php
														if (module_exists ( 'argus_afwezigheden' )) {
															$dates = argus_afwezigheden_justification ( $user_id );
															if (count ( $dates )) {
																$dates = reset ( $dates );
																?>
		                    <div class="field clearfix">
						<div class="field-label">Openstaande afwezigheden:&nbsp;</div>
						<div class="field-items">
							<ol>
		                            <?php
																foreach ( $dates ['dates'] as $date => $status ) {
																	print '<li';
																	if (array_key_exists ( 'diff', $status )) {
																		if ($status ['diff'] > 10) {
																			print ' style="color: red;"';
																		}
																	}
																	print '>' . date ( 'd/m/y', strtotime ( $date ) ) . ' : ';
																	if (isset ( $status ['am'] )) {
																		print t ( 'voormiddag' );
																	}
																	if (isset ( $status ['am'] ) && isset ( $status ['pm'] )) {
																		print ' en ';
																	}
																	if (isset ( $status ['pm'] )) {
																		print t ( 'namiddag' );
																	}
																	if (isset ( $dates ['back'] ) && isset ( $status ['diff'] )) {
																		print ' (' . $status ['diff'] . ' dagen te laat)';
																	}
																	print '</li>';
																}
																?>
		                            </ol>
		                            <?php
																if (isset ( $dates ['back'] )) {
																	print '<div style="text-align: right; font-style: italic;"><small>(terug sinds ' . date ( 'd/m/y', strtotime ( $dates ['back'] ) ) . ')</small></div>';
																}
																?>
		                        </div>
					</div>
		                <?php
															}
														}
														?>
		
		            <!-- mogelijkheid toevoegen doktersattesten + motivatie in argus? oplijsting dokters die attest schrijven! //-->
		            <?php
					// TODO: if (module_exists('argus_skore')){ ??
					if (module_exists ( 'argus_vakken' ) && module_exists ( 'argus_uurrooster' )) { ?>
		            <?php if (count($hotline['absences']['graph'])>1){ ?>
		                <div id="absenses_chart_totals"
						style="width: 98%; height: 200px;"></div>
		            <?php } ?>
		            
		            <?php if (count($hotline['absences']['periodgraph'])>1){ ?>
		                <div id="absenses_chart_periods"
						style="width: 98%; height: 200px;"></div>
					<script>
		                	var dataAbsencesPeriodsChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['absences']['periodgraph']); ?>);
		                	maxAbsences = <?php print $hotline['absences']['periodgraph_maxAbsences']; ?>;
		                </script>
		            <?php } ?>
		
		            <div id="absenses_chart_evolution"
						style="width: 98%; height: 200px;"></div>

					<div id="absenses_chart_week" style="width: 98%; height: 200px;"></div>

					<hr />
		
		            <?php if (isset($hotline['late']['permission'])){ ?>
		                <div class="field field-label-inline clearfix">
						<div class="field-label">Toestemming om te laat te komen:&nbsp;</div>
						<div class="field-items">ja</div>
					</div>
		            <?php } ?>
		
		            <?php if ($hotline['absences']['totals']['oa_sticker']){ ?>
		                <div class="field field-label-inline clearfix">
						<div class="field-label">Aantal x te laat:&nbsp;</div>
						<div class="field-items">
							<strong><?php print $hotline['absences']['totals']['L']; ?></strong>
							> rode stickers: <strong><?php print $hotline['absences']['totals']['oa_sticker']; ?></strong>
						</div>
					</div>
		            <?php } ?>
					
		            <div id="late_chart_week"
						style="width: 98%; height: 200px;"></div>
		            <?php } ?>

				</fieldset>

			</div>


			<!-- ------------------------------ MIDDLE COLUMN ------------------------------ -->


			<div>

				<fieldset id="panel-gedrag">
					<legend>Gedrag</legend>
					<div class="field field-label-inline clearfix">
						<div class="field-label">Meldingen:&nbsp;</div>
						<div class="field-items">
							positief gedrag <strong><?php print count($hotline['behaviour']['positive']); ?></strong>
							vs. negatief <strong><?php print count($hotline['behaviour']['negative']); ?></strong>
						</div>
					</div>

					<hr />
					
					<?php if (module_exists ( 'argus_soda' )) { ?>
					<div class="field field-label-inline clearfix">
						<div class="field-label">S(tiptheid) O(rde) D(iscipline) A(ttitude):&nbsp;</div>
						<div class="field-items" style="width: 100%;">
							<?php print argus_soda_show_report($user_id, false); ?>
						</div>
					</div>

					<hr />
		            <?php } ?>
		
		            <?php
					
					if (isset ( $hotline ['behaviour'] ['first-T-code'] )) {
						$dateTcode = new DateTime ( $hotline ['behaviour'] ['first-T-code'] );
						?>
		                <div class="field field-label-inline clearfix">
						<div class="field-label">Start tuchtdossier (1e T-code):&nbsp;</div>
						<div class="field-items"><?php print $dateTcode->format('d/m/Y'); ?></div>
					</div>

					<hr />
		            <?php } ?>
					
					<?php if (module_exists ( 'argus_meldingen' )) { ?>
		            <script>maxReportsBehaviour = <?php print $hotline['behaviour']['maxReports']; ?>;</script>
					<div id="behaviour_chart_evolution"
						style="width: 98%; height: 200px;"></div>
					<?php } ?>
		
		            <?php if (count($hotline['behaviour']['measure'])>4){ ?>
		                <div class="field clearfix">
						<div class="field-label">Maatregelen bij Schending van de
							Leefregels:&nbsp;</div>
						<div class="field-items">
							<ul>
		                        <?php
															foreach ( $hotline ['behaviour'] ['measure'] as $m ) {
																if ($m ['title']) {
																	if ($m ['isTitle']) {
																		if ($m ['count'] > 1) {
																			print '</li><li><h5>' . $m ['title'] . '</h5>';
																		}
																	} else {
																		$reports = '';
																		foreach ( explode ( '|', $m ['reports'] ) as $r ) {
																			$r = explode ( '*', $r );
																			if (count ( $r ) == 4) {
																				$r [1] = new DateTime ( $r [1] );
																				$reports .= '<li>' . $r [1]->format ( 'd/m/Y' ) . ' : <a class="behaviourReportTitle" title="Melding van ' . argus_get_user_realname ( $r [0] ) . '&#13;--------------------------------&#13;' . htmlentities ( str_replace ( '<br />', chr ( 13 ), nl2br ( $r [2] ) ) ) . '">' . $r [3] . '</a></li>';
																			}
																		}
																		print $m ['count'] . ' x ' . $m ['title'] . '<br /><ul style="font-size: 0.8em; line-height: 1.8em;">' . $reports . '</ul>';
																	}
																}
															}
															?>
		                        </ul>
						</div>
					</div>
		            <?php } ?>
		
		            <?php if (count($hotline['behaviour']['bos'])){ ?>
		                <div class="field clearfix">
						<div class="field-label">Begeleidingsovereenkomst(en):&nbsp;</div>
						<div class="field-items">
							<ul>
		                        <?php
															foreach ( $hotline ['behaviour'] ['bos'] as $b ) {
																print '<li><a href="' . base_path () . drupal_lookup_path ( 'alias', 'node/' . $b ['id'] ) . '">' . strip_tags ( $b ['reason'] ) . '</a><br />';
																
																if (isset ( $b ['endDate'] )) {
																	print '<span style="color: green;">';
																} else {
																	print '<span style="color: red;">';
																}
																$bdate = new DateTime ( $b ['startDate'] );
																print '<small>' . $bdate->format ( 'd/m/Y' ) . ' - ';
																if (isset ( $b ['endDate'] )) {
																	$edate = new DateTime ( $b ['endDate'] );
																	print $edate->format ( 'd/m/Y' );
																} else {
																	print '(nog lopend)';
																}
																if ($b ['cms']) {
																	print ' , op basis van <strong>' . $b ['cms'] . '</strong> meldingen';
																}
																print '</small></span></li>';
															}
															?>
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
						<div class="field-items">
							<ul>
		                        <?php if (count($hotline['behaviour']['negative'])){ ?>
		                            <li><h5>Negatief gedrag</h5>
									<ol>
		                                <?php
																foreach ( $hotline ['behaviour'] ['negative'] as $r => $report ) {
																	print '<li>' . date ( 'd/m/y', strtotime ( $report ['factdate'] ) ) . ' : <a class="behaviourReportTitle" title="Melding van ' . $report ['author'] . '&#13;--------------------------------&#13;' . htmlentities ( str_replace ( '<br />', chr ( 13 ), nl2br ( $report ['report'] ) ) ) . '">';
																	if ($report ['private']) {
																		print '<i>' . t ( 'privé-melding' ) . '</i>';
																	} else {
																		print $report ['title'];
																	}
																	print '</a></li>';
																}
																?>
		                                </ol></li>
		                        <?php } ?>
		                        <?php if (count($hotline['behaviour']['positive'])){ ?>
		                            <li><h5>Positief gedrag</h5>
									<ol>
		                                <?php
																foreach ( $hotline ['behaviour'] ['positive'] as $r => $report ) {
																	print '<li>' . date ( 'd/m/y', strtotime ( $report ['factdate'] ) ) . ' : <a class="behaviourReportTitle" title="Melding van ' . $report ['author'] . '&#13;--------------------------------&#13;' . htmlentities ( str_replace ( '<br />', chr ( 13 ), nl2br ( $report ['report'] ) ) ) . '">';
																	if ($report ['private']) {
																		print '<i>' . t ( 'privé-melding' ) . '</i>';
																	} else {
																		print $report ['title'];
																	}
																	print '</a></li>';
																}
																?>
		                                </ol></li>
		                        <?php } ?>
		                        </ul>
						</div>
					</div>
		            <?php } ?>
		        </fieldset>
		        
			    <?php if (module_exists('argus_stages')) { ?>
			    
				    <?php if ($hotline['stage']['total']) { ?>
				        <fieldset id="panel-stages">

					<legend>Stages</legend>

					<div class="field field-label-inline clearfix">
						<div
							style="font-size: 8px; color: red; position: relative; float: right;">
							(eenheden in <strong>halve dagen</strong>)
						</div>

						<div class="field-label">Aantal stageplaatsen:&nbsp;</div>
						<div class="field-items"><?php print $hotline['stage']['total']; ?></div>
					</div>

					<hr />
				            
				            <?php if (count($hotline['stage']['periodgraph'])>1){ ?>
				                
				                <div id="stage_chart_periods"
						style="width: 98%; height: 200px;"></div>

					<script>
				                	var dataStagePeriodsChart = google.visualization.arrayToDataTable(<?php print json_encode($hotline['stage']['periodgraph']); ?>);
				                	maxAbsencesStage = <?php print $hotline['stage']['periodgraph_maxAbsences']; ?>;
				                </script>

					<hr />
				                
				            <?php } ?>
					        
						    <?php if ($hotline['stage']['gevers']) { ?>
						            
					            <div class="field field-label-inline clearfix">
						<div class="field-label">Stageplaatsen / periode:&nbsp;</div>
						<div class="field-items">
							<ul>
			                            <?php foreach ($hotline['stage']['stageperiodes'] as $sp_id => $stageperiode){ ?>
					                		<li><h5><?php print 'van '.format_date(strtotime($stageperiode['data']->field_tijdstip[LANGUAGE_NONE][0]['value']), 'custom', 'd/m/y').' tot '.format_date(strtotime($stageperiode['data']->field_tijdstip[LANGUAGE_NONE][0]['value2']), 'custom', 'd/m/y'); ?></h5>
									<ol>
				                            <?php
											foreach ( $stageperiode ['gevers'] as $sg_id => $gever ) {
												print '<li><a href="' . base_path () . drupal_lookup_path ( 'alias', 'node/' . $sg_id ) . '">' . $gever . '</a></li>';
											}
											?>
				                            </ol></li>
										<?php } ?>
										</ul>
						</div>
					</div>
					            
				            <?php } ?>
				        
				        </fieldset>
		            <?php } ?>
		            
	            <?php } ?>
			
			</div>

			<!-- ------------------------------ RIGHT COLUMN ------------------------------ -->

			<div>

				<fieldset id="panel-studiebegeleiding">

					<legend>Studiebegeleiding</legend>

					<div class="field field-label-inline clearfix">
						<div class="field-label">Meldingen:&nbsp;</div>
						<div class="field-items"><?php print $hotline['study']['total']; ?></div>
					</div>

					<hr />
		
		            <?php if (array_key_exists('fails', $study['results'])){ ?>
		                <div class="field clearfix">
						<div class="field-label">Vogelperspectief (tekorten ifv
							uurpakket):&nbsp;</div>
						<div class="field-items">
							<div id="study_chart_birdseye" style="width: 98%; height: 200px;"></div>
						</div>
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
															foreach ( $study ['results'] ['fails'] ['periods'] as $p => $fails ) {
																print '<li><h5>' . $p . '</h5><ol class="detailList">';
																foreach ( $fails as $f => $result ) {
																	print '<li>' . $result ['vak'] . ': <span style="color: red;">' . $result ['behaald'] . '/' . $result ['max'] . '</span></li>';
																}
																print '</ol></li>';
															}
															?>
		                        </ul>
						</div>
					</div>
					<script>maxFails = <?php print $study['results']['maxCourses']; ?>;</script>

					<hr />

					<div class="field clearfix">
						<div class="field-label">Tekorten per lesgedeelte (op
							jaarbasis):&nbsp;</div>
						<div class="field-items">
							<div id="study_chart_course_type"
								style="width: 98%; height: 200px;"></div>
						</div>
					</div>

					<hr />
		            <?php } ?>
		            
		            <?php if (count($hotline['study']['measure'])>0){ ?>
		                <div class="field field-label-inline clearfix">
						<div class="field-label">Maatregelen:&nbsp;</div>
						<div class="field-items">
		                        <?php
															foreach ( $hotline ['study'] ['measure'] as $m ) {
																if ($m ['title']) {
																	if ($m ['isTitle']) {
																		if ($m ['count'] > 1) {
																			print '<h5>' . $m ['title'] . '</h5>';
																		}
																	} else {
																		print $m ['count'] . ' x ' . $m ['title'] . '<br />';
																	}
																}
															}
															?>
		                    </div>
					</div>
					<hr />
		            <?php } ?>
		
		            <?php
														if (count ( $study ['remediations'] ) > 0) {
															?>
		                <div class="field clearfix">
						<div class="field-label">Remediëringstraject:&nbsp;</div>
						<div class="field-items">
							<ol>
		                    <?php
															
															foreach ( $study ['remediations'] as $remediation ) {
																print '<li>' . format_date ( strtotime ( $remediation ['tijdstip'] ), 'custom', 'd/m/y' ) . ' : <a class="behaviourReportTitle" title="Melding van ' . argus_get_user_realname ( $remediation ['author'] ) . '&#13;--------------------------------&#13;' . htmlentities ( str_replace ( '<br />', chr ( 13 ), nl2br ( $remediation ['report'] ) ) ) . '">';
																if ($remediation ['prive']) {
																	print '<i>' . t ( 'privé-melding' ) . '</i>';
																} else {
																	print $remediation ['onderwerp'];
																}
																print '</a></li>';
															}
															?>
		                    </ol>
						</div>
					</div>
					<hr />
		            <?php } ?>
		
		            <?php
														$studyProblems = '';
														$fieldAsOptions = argus_gebruikers_fieldsAsArrays ( variable_get ( 'argus_sms_data_accounts_sync_fieldmap_options' ) );
														$studyProbs = array (
																'Dyslexie',
																'Dyscalculie',
																'ADHD',
																'NLD (non-verbale leerstoornis)',
																'ASS (Autisme Spectrum Stoornis)',
																'GON',
																'Buitengewoon onderwijs' 
														);
														foreach ( $studyProbs as $f ) {
															$field = argus_gebruikers_uniform_field ( $f, 'field_user_sms_' );
															eval ( "\$value = \$account->" . $field . ";" );
															if (array_key_exists ( LANGUAGE_NONE, $value )) {
																$value = $value [LANGUAGE_NONE] [0] ['value'];
																if (array_key_exists ( $field, $fieldAsOptions )) {
																	$fieldOptions = ( array ) $fieldAsOptions [$field];
																	foreach ( $fieldOptions as $fk => $fo ) {
																		if ($fk == $value) {
																			if ($fo == 'Ja') {
																				$studyProblems .= '<li>' . $f . '</li>';
																			}
																			break;
																		}
																	}
																}
															}
														}
														if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_andere_ls )) {
															if ($value = argus_render ( 'user', $account, 'field_user_sms_andere_ls' )) {
																$studyProblems .= '<li>' . $value . '</li>';
															}
														}
														
														if ($studyProblems) {
															?>
		                <div class="field clearfix">
						<div class="field-label">Leerproblemen:&nbsp;</div>
						<div class="field-items">
							<ul><?php print $studyProblems; ?></ul>
						</div>
					</div>
					<hr />
		            <?php } ?>
		
		            <?php
														$medicalProblems = '';
														$fieldAsOptions = argus_gebruikers_fieldsAsArrays ( variable_get ( 'argus_sms_data_accounts_sync_fieldmap_options' ) );
														$medicalProbs = array (
																'Astma',
																'Allergie',
																'Epilepsie',
																'Diabetes',
																'Concentratieproblemen' 
														);
														foreach ( $medicalProbs as $f ) {
															$field = argus_gebruikers_uniform_field ( $f, 'field_user_sms_' );
															eval ( "\$value = \$account->" . $field . ";" );
															if (array_key_exists ( LANGUAGE_NONE, $value )) {
																$value = $value [LANGUAGE_NONE] [0] ['value'];
																if (array_key_exists ( $field, $fieldAsOptions )) {
																	$fieldOptions = ( array ) $fieldAsOptions [$field];
																	foreach ( $fieldOptions as $fk => $fo ) {
																		if ($fk == $value) {
																			if ($fo == 'Ja') {
																				$medicalProblems .= '<li>' . $f . '</li>';
																			}
																			break;
																		}
																	}
																}
															}
														}
														if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_andere_mp )) {
															if ($value = argus_render ( 'user', $account, 'field_user_sms_andere_mp' )) {
																$medicalProblems .= '<li>' . $value . '</li>';
															}
														}
														
														if ($medicalProblems) {
															?>
		                <div class="field clearfix">
						<div class="field-label">Medische problemen:&nbsp;</div>
						<div class="field-items">
							<ul><?php print $medicalProblems; ?></ul>
						</div>
					</div>
					<hr />
		            <?php } ?>
		            
		            <?php
														if (count ( $study ['ptas'] )) {
															?>
		                <div class="field clearfix">
						<div class="field-label">Oudercontacten:&nbsp;</div>
						<div class="field-items">
							<ul>
		                    <?php
															foreach ( $study ['ptas'] as $pta ) {
																if ($pta ['status']) {
																	$status = '<span class="colorGreen">aanwezig</span>';
																} else {
																	$status = '<span class="colorRed">niet aanwezig</span>';
																}
																
																print '<li>' . format_date ( strtotime ( $pta ['tijdstip'] ) ) . ': ' . $status . '</li>';
															}
															?>
		                    </ul>
						</div>
					</div>
					<hr />
		            <?php } ?>
		
		            <?php if (count($study['deliberations']) || count($study['results'])){ ?>
		                <div class="field clearfix">
						<div class="field-label">Rapporten, deliberaties &amp;
							adviezen:&nbsp;</div>
						<div class="field-items">
							<div id="resultsSelect">
								<select id="selectResults">
									<optgroup label="Rapporten (dit schooljaar)">
		                                    <?php
															$cntr = 0;
															if (isset ( $study ['results'] ['periods'] )) {
																foreach ( $study ['results'] ['periods'] as $p => $period ) {
																	print '<option value="' . ($cntr ++) . '">' . $period ['long'] . '</option>';
																}
															}
															?>
		                                </optgroup>
									<optgroup label="Deliberaties (vorige schooljaren)">
		                                    <?php
															foreach ( $study ['deliberations'] as $schoolyear => $d ) {
																$class = node_load ( $d ['klas'] );
																print '<option value="' . ($cntr ++) . '">' . t ( 'Schooljaar' ) . ' ' . $schoolyear . ' - ' . $class->title . '</option>';
															}
															?>
		                                </optgroup>
								</select>
							</div>
		                        <?php
															$cntr = 0;
															if (isset ( $study ['results'] ['periods'] )) {
																foreach ( $study ['results'] ['periods'] as $p => $period ) {
																	print '<div id="results' . ($cntr ++) . '" class="results"><ul class="detailList">';
																	
																	if (array_key_exists ( 'results', $period )) {
																		foreach ( $period ['results'] as $course => $result ) {
																			print '<li>' . $result ['vak_beschrijving'] . ': <span';
																			if ($result ['percent'] < 50) {
																				print ' style="color: red;"';
																			}
																			print '>' . $result ['behaald'] . '/' . $result ['max'] . ' (' . $result ['percent'] . '%)</span></li>';
																		}
																	} else {
																		print '(nog geen resultaten)';
																	}
																	
																	print '</ul></div>';
																}
															}
															
															foreach ( $study ['deliberations'] as $schoolyear => $d ) {
																print '<div id="results' . ($cntr ++) . '" class="results"><ul>';
																
																if ($d ['attest']) {
																	if ($d ['attest'] != 'geen') {
																		print '<li>';
																		if ($d ['attest_uitgesteld']) {
																			print t ( 'Attest, <u>na uitgesteld</u>' ) . ': <span style="color: red; font-weight: bold;">' . $d ['attest_uitgesteld'] . '</span></li>';
																		} else {
																			print t ( 'Attest' ) . ': <span style="color: red; font-weight: bold;">' . $d ['attest'] . '</span>';
																		}
																		if (isset ( $d ['gedelibereerd'] )) {
																			print ' (' . t ( 'gedelibereerd' ) . ')';
																		}
																		print '</li>';
																	}
																}
																
																if ($d ['diplomas']) {
																	print '<li><h5>' . t ( 'behaalde diploma\'s' ) . '</h5><ul class="detailList">';
																	foreach ( $d ['diplomas'] as $item ) {
																		print '<li>' . trim ( $item ['safe_value'] ) . '</li>';
																	}
																	print '</ul></li>';
																}
																
																if ($d ['vakantietaken']) {
																	print '<li><h5>' . t ( 'vakantietaken' ) . '</h5><ul>';
																	foreach ( $d ['vakantietaken'] as $item ) {
																		$result = explode ( ':', trim ( str_replace ( ': ', ':', $item ['safe_value'] ) ) );
																		$result [count ( $result ) - 1] = str_replace ( '.', ',', $result [count ( $result ) - 1] );
																		if ($result [count ( $result ) - 1] < 50) {
																			$result [count ( $result ) - 1] = '<span style="color:red;">' . $result [count ( $result ) - 1] . '</span>';
																		}
																		print '<li>' . implode ( ': ', $result ) . '</li>';
																	}
																	print '</ul></li>';
																}
																
																if ($d ['waarschuwingen']) {
																	print '<li><h5>' . t ( 'waarschuwingen' ) . '</h5><ul>';
																	foreach ( $d ['waarschuwingen'] as $item ) {
																		$result = explode ( ':', trim ( str_replace ( ': ', ':', $item ['safe_value'] ) ) );
																		$result [count ( $result ) - 1] = str_replace ( '.', ',', $result [count ( $result ) - 1] );
																		if ($result [count ( $result ) - 1] < 50) {
																			$result [count ( $result ) - 1] = '<span style="color:red;">' . $result [count ( $result ) - 1] . '</span>';
																		}
																		print '<li>' . implode ( ': ', $result ) . '</li>';
																	}
																	print '</ul></li>';
																}
																
																if (count ( $d ['vakresultaten'] ) > 0) {
																	print '<li><h5>' . t ( 'vakresultaten' ) . '</h5><ul class="detailList">';
																	foreach ( $d ['vakresultaten'] as $item ) {
																		$result = explode ( ':', trim ( str_replace ( ': ', ':', $item ) ) );
																		$result [count ( $result ) - 1] = str_replace ( '.', ',', $result [count ( $result ) - 1] );
																		if ($result [count ( $result ) - 1] < 50) {
																			$result [count ( $result ) - 1] = '<span style="color:red;">' . $result [count ( $result ) - 1] . '</span>';
																		}
																		print '<li>' . implode ( ': ', $result ) . '</li>';
																	}
																	print '</ul></li>';
																}
																
																print '</ul></div>';
															}
															?>
		                    </div>
					</div>
		            <?php } ?>
		
		            <?php
														$show = false;
														if (count ( $account->field_user_sms_sl_schooljaar )) {
															if ($account->field_user_sms_sl_schooljaar [LANGUAGE_NONE] [0] ['safe_value']) {
																$show = true;
															}
														}
														if (count ( $account->field_user_sms_sl2_schooljaar )) {
															if ($account->field_user_sms_sl2_schooljaar [LANGUAGE_NONE] [0] ['safe_value']) {
																$show = true;
															}
														}
														if ($show) {
															?>
		                <div class="field clearfix">
						<div class="field-label">Schoolloopbaan:&nbsp;</div>
						<div class="field-items">
							<ul>
		                        <?php
															
															if (count ( $account->field_user_sms_sl_schooljaar )) {
																$trajectTitle = '';
																$traject = '';
																
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl_schooljaar )) {
																	if ($account->field_user_sms_sl_schooljaar [LANGUAGE_NONE] [0] ['safe_value']) {
																		$trajectTitle = '<h5>' . argus_render ( 'user', $account, 'field_user_sms_sl_schooljaar' ) . '</h5>';
																	}
																}
																
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl_school )) {
																	if ($account->field_user_sms_sl_school [LANGUAGE_NONE] [0] ['safe_value']) {
																		$traject .= '<li>' . argus_render ( 'user', $account, 'field_user_sms_sl_school' );
																		if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl_stad_school )) {
																			if ($account->field_user_sms_sl_stad_school [LANGUAGE_NONE] [0] ['safe_value']) {
																				$traject .= ' (' . argus_render ( 'user', $account, 'field_user_sms_sl_stad_school' ) . ')';
																			}
																		}
																		$traject .= '</li>';
																	}
																}
																
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl_leerjaar_en_st )) {
																	if ($account->field_user_sms_sl_leerjaar_en_st [LANGUAGE_NONE] [0] ['safe_value']) {
																		$traject .= '<li>' . argus_render ( 'user', $account, 'field_user_sms_sl_leerjaar_en_st' ) . '</li>';
																	}
																}
																
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl_attest )) {
																	if ($account->field_user_sms_sl_attest [LANGUAGE_NONE] [0] ['safe_value']) {
																		$traject .= '<li><strong>' . argus_render ( 'user', $account, 'field_user_sms_sl_attest' ) . '</strong> behaald</li>';
																	}
																}
																
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl_clausulering )) {
																	if ($account->field_user_sms_sl_clausulering [LANGUAGE_NONE] [0] ['safe_value']) {
																		$traject .= '<li><u>clausule</u>: ' . argus_render ( 'user', $account, 'field_user_sms_sl_clausulering' ) . '</li>';
																	}
																}
																if ($traject) {
																	print '<li>' . $trajectTitle . '<ul>' . $traject . '</ul></li>';
																}
															}
															
															if (count ( $account->field_user_sms_sl2_schooljaar )) {
																$trajectTitle = '';
																$traject = '';
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl2_schooljaar )) {
																	if ($account->field_user_sms_sl2_schooljaar [LANGUAGE_NONE] [0] ['safe_value']) {
																		$trajectTitle = '<h5>' . argus_render ( 'user', $account, 'field_user_sms_sl2_schooljaar' ) . '</h5>';
																	}
																}
																
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl2_school )) {
																	if ($account->field_user_sms_sl2_school [LANGUAGE_NONE] [0] ['safe_value']) {
																		$traject .= '<li>' . argus_render ( 'user', $account, 'field_user_sms_sl2_school' );
																		if ($account->field_user_sms_sl2_stad_school [LANGUAGE_NONE] [0] ['safe_value']) {
																			$traject .= ' (' . argus_render ( 'user', $account, 'field_user_sms_sl2_stad_school' ) . ')';
																		}
																		$traject .= '</li>';
																	}
																}
																
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl2_leerjaar_en_s )) {
																	if ($account->field_user_sms_sl2_leerjaar_en_s [LANGUAGE_NONE] [0] ['safe_value']) {
																		$traject .= '<li>' . argus_render ( 'user', $account, 'field_user_sms_sl2_leerjaar_en_s' ) . '</li>';
																	}
																}
																
																if (array_key_exists ( LANGUAGE_NONE, $account->field_user_sms_sl2_attest )) {
																	if ($account->field_user_sms_sl2_attest [LANGUAGE_NONE] [0] ['safe_value']) {
																		$traject .= '<li><strong>' . argus_render ( 'user', $account, 'field_user_sms_sl2_attest' ) . '</strong> behaald</li>';
																	}
																	if ($traject) {
																		print '<li>' . $trajectTitle . '<ul>' . $traject . '</ul></li>';
																	}
																}
															}
															?></ul>
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
		<p>
			<a
				href="<?php print base_path().'user/'.$user_id.'/administratief'; ?>">Bekijk
				de administratieve fiche</a><?php print argus_engine_schoolyear_selectionBox(); ?></p>
	</div>
</div>
<?php } ?>