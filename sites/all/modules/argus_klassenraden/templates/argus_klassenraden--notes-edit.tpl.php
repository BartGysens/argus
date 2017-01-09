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

$params = explode('/',drupal_parse_url(current_path())['path']);

?>

<div class="view-content">
	<?php if (isset($data['uid']) && (user_access('create lvs_klassenraad_notitie content') || user_access('edit any lvs_klassenraad_notitie content'))){
		
		$account = user_load($data['uid']);
		
		//dpm($data);
		
		?>
		<form action="/<?php print current_path(); ?>" method="post" id="argus_klassenraden_note_form">

			<h2><?php print argus_get_user_realname($data['uid']); ?><small class="action-links"> - <a href="<?php print url(base_path().drupal_lookup_path('alias', 'user/'.$data['uid'])); ?>" target="_blank">bekijk LVS-fiche</a></small></h2>
			
			Overzicht van de notities: <?php print $data['cm-title']; ?><br />
			
				<h3 class="study">Studiebegeleiding</h3>
		
				<fieldset class="collapsible argus_klassenraden_status study-background-light">
					<legend><span class="fieldset-legend"><a class="fieldset-title" href="#"><span class="fieldset-legend-prefix element-invisible">Verbergen</span> status</a><span class="summary"></span></span></legend>
					<div class="fieldset-wrapper">
						<table class="views-table" style="line-height: 1.1em; border: none; border-collapse: inherit;">
							<tr>
								<td style="width: 33%;">
								
								<div class="field clearfix">
					                <div class="field-label">Tekorten:&nbsp;</div>
					                <div class="field-items">
					                <?php 
									if (array_key_exists('results', $data['infopanel']['study'])){
										foreach ($data['infopanel']['study']['results'] as $periodId => $period){
											print '<br /><h5><strong>'.$period['long'].'</strong> ('.$period['aantal_vakken'].' vakken)</h5>';
											if (array_key_exists('fail', $period) || array_key_exists('success', $period)){
												if (array_key_exists('fail', $period)){
													print '<ol>';
													foreach ($period['fail'] as $fc => $fail){
														print '<li>'.$fail['vak_beschrijving'].' : '.$fail['behaald'].'/'.$fail['max'].' ('.$fail['vak_uren_week'].' u/w)</li>';
													}
													print '</ol>';
												} else {
													print '(er werden <u>geen tekorten</u> behaald)<br />';
												}
											} else {
												print '(er werden <em>nog</em> <u>geen resultaten</u> ingegeven)<br />';
											}
										}
									} else {
										print '(er werden <em>nog</em> <u>geen resultaten</u> ingegeven)<br />';
									} ?>
									</div>
								</div>
									
								</td>
								<td style="width: 33%;">
								
								<div class="field field-label-inline clearfix">
					                <div class="field-label">Meldingen:&nbsp;</div>
					                <div class="field-items"><?php print $data['infopanel']['study']['hotline']; ?></div>
					            </div>
								
								<?php if (count($data['infopanel']['study']['measure'])){ ?>
					                <br />
					                <div class="field field-label-inline clearfix">
					                    <div class="field-label">Maatregelen:&nbsp;</div>
					                    <div class="field-items">
					                        <?php
					                        foreach ($data['infopanel']['study']['measure'] as $m) {
					                            if ($m['count']>0){
					                            	print $m['count'].' x '.$m['title'].'<br />';
					                            }
					                        } ?>
					                    </div>
					                </div>
					            <?php } ?>
								
								</td>
								<td>
								
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
					                <br />
					            <?php } ?>
								
								</td>
							</tr>
						</table>
					</div>
				</fieldset>
				
				<h4>Acties</h4>
				
					<div>
						<div id="argus_klassenraden_study_actions">
						<?php
						$cntr = 0;
						if (array_key_exists('actions', $data)){
							if (array_key_exists('studiebegeleiding', $data['actions'])){
								foreach($data['actions']['studiebegeleiding'] as $aid => $action){
									print argus_klassenraden_notes_model_action($data, 'studiebegeleiding', $aid, $action['measure'], $action['executor'], $action['remark'], $cntr);
								}
							}
						}
						?>
						</div>
						<input type="button" id="argus_klassenraden_add_action_study" class="action-links argus_klassenraden_add_action_btn" value="+ voeg een actie toe" />
					</div>
				
				<h4>Opmerkingen</h4>
				
					<textarea rows="4" name="argus_klassenraden_studiebegeleiding_remarks" class="argus_klassenraden_remarks study-border"><?php
					if ($data['notes']['studiebegeleiding']){
						print $data['notes']['studiebegeleiding']->body[LANGUAGE_NONE][0]['value'];
					}
					?></textarea>
			
			<hr />
			
			<h3 class="absences">Afwezigheden</h3>
		
				<fieldset class="collapsible argus_klassenraden_status absences-background-light">
					<legend><span class="fieldset-legend"><a class="fieldset-title" href="#"><span class="fieldset-legend-prefix element-invisible">Verbergen</span> status</a><span class="summary"></span></span></legend>
					<div class="fieldset-wrapper">
						<table class="views-table" style="line-height: 1.1em; border: none; border-collapse: inherit;">
							<tr>
								<td style="width: 33%;">
								
					            <?php
					            
					            if (array_key_exists('codes', $data['infopanel']['absences'])){
						            
					            	$codes = array();
						            foreach ($data['infopanel']['absences']['codes'] as $code => $total){
						            	$unit = '';
						            	if ($code != 'L'){
						            		$unit = ' <small>halve dagen</small>';
						            	}
							            if ($data['infopanel']['absences']['codes'][$code]){
							            	$codes[] = '<div class="field field-label-inline clearfix">
            							                    <div class="field-label">'.$code.'-codes:&nbsp;</div>
            							                    <div class="field-items">'.$total.$unit.'</div>
            							                </div>';
	            						}
            						}
            						
            						print implode('<br />', $codes);
					            }
					            
					            ?>
					            
								</td>
								<td style="width: 33%;">
								
								<div class="field field-label-inline clearfix">
					                <div class="field-label">Meldingen:&nbsp;</div>
					                <div class="field-items"><?php print $data['infopanel']['absences']['hotline']; ?></div>
					            </div>
								
								<?php if (count($data['infopanel']['absences']['measure'])){ ?>
					                <br />
					                <div class="field field-label-inline clearfix">
					                    <div class="field-label">Maatregelen:&nbsp;</div>
					                    <div class="field-items">
					                        <?php
					                        foreach ($data['infopanel']['absences']['measure'] as $m) {
					                            if ($m['count']>0){
					                            	print $m['count'].' x '.$m['title'].'<br />';
					                            }
					                        } ?>
					                    </div>
					                </div>
					            <?php } ?>
					            
								</td>
								<td>
								
					            <?php
					            
					            if (array_key_exists('permission', $data['infopanel']['absences'])){
						            
						            $permissions = array();
						            if ($data['infopanel']['absences']['permission']['late']){
						            	$permissions[] = '<div class="field field-label-inline clearfix">
            							                    <div class="field-label">Toelating om te laat komen:&nbsp;</div>
            							                    <div class="field-items">'.$data['infopanel']['absences']['permission']['late'].'</div>
            							                </div>';
            						}
						            if ($data['infopanel']['absences']['permission']['early']){
						            	$permissions[] = '<div class="field field-label-inline clearfix">
            							                    <div class="field-label">Toelating om vroeger vertrekken:&nbsp;</div>
            							                    <div class="field-items">'.$data['infopanel']['absences']['permission']['early'].'</div>
            							                </div>';
            						}
						            if ($data['infopanel']['absences']['permission']['outside']){
						            	$permissions[] = '<div class="field field-label-inline clearfix">
            							                    <div class="field-label">Toelating om buiten te gaan eten \'s middags:&nbsp;</div>
            							                    <div class="field-items">'.$data['infopanel']['absences']['permission']['outside'].'</div>
            							                </div>';
            						}
            						
            						print implode('<br />', $permissions);
					            }
					            
					            ?>
					            
								</td>
							</tr>
						</table>
					</div>
				</fieldset>
				
				<h4>Acties</h4>
				
					<div>
						<div id="argus_klassenraden_absences_actions">
						<?php
						$cntr = 0;
						if (array_key_exists('actions', $data)){
							if (array_key_exists('afwezigheden', $data['actions'])){
								foreach($data['actions']['afwezigheden'] as $aid => $action){
									print argus_klassenraden_notes_model_action($data, 'afwezigheden', $aid, $action['measure'], $action['executor'], $action['remark'], $cntr);
								}
							}	
						}
						?>
						</div>
						<input type="button" id="argus_klassenraden_add_action_absences" class="action-links argus_klassenraden_add_action_btn" value="+ voeg een actie toe" />
					</div>
				
				<h4>Opmerkingen</h4>
				
					<textarea rows="4" name="argus_klassenraden_afwezigheden_remarks" class="argus_klassenraden_remarks absences-border"><?php
					if ($data['notes']['afwezigheden']){
						print $data['notes']['afwezigheden']->body[LANGUAGE_NONE][0]['value'];
					}
					?></textarea>
			
			<hr />
			
			<h3 class="behaviour">Gedrag</h3>
		
				<fieldset class="collapsible argus_klassenraden_status behaviour-background-light">
					<legend><span class="fieldset-legend"><a class="fieldset-title" href="#"><span class="fieldset-legend-prefix element-invisible">Verbergen</span> status</a><span class="summary"></span></span></legend>
					<div class="fieldset-wrapper">
						<table class="views-table" style="line-height: 1.1em; border: none; border-collapse: inherit;">
							<tr>
								<td style="width: 33%;">
								
								<div class="field field-label-inline clearfix">
					                <div class="field-label">Meldingen:&nbsp;</div>
					                <div class="field-items"><?php print $data['infopanel']['behaviour']['hotline']; ?></div>
					            </div>
								
								</td>
								<td style="width: 33%;">
								
								<?php if (count($data['infopanel']['behaviour']['measure'])){ ?>
					                <div class="field field-label-inline clearfix">
					                    <div class="field-label">Maatregelen:&nbsp;</div>
					                    <div class="field-items">
					                        <?php
					                        foreach ($data['infopanel']['behaviour']['measure'] as $m) {
					                            if ($m['count']>0){
					                            	print $m['count'].' x '.$m['title'].'<br />';
					                            }
					                        } ?>
					                    </div>
					                </div>
					            <?php } ?>
								
								</td>
								<td>
								
								<?php if (count($data['infopanel']['behaviour']['bos'])){ ?>
					                <div class="field clearfix">
					                    <div class="field-label">Begeleidingsovereenkomst(en):&nbsp;</div>
					                    <div class="field-items"><ul>
					                        <?php
					                        foreach ($data['infopanel']['behaviour']['bos'] as $b) {
					                            print '<li><a href="'.base_path().drupal_lookup_path('alias', 'node/'.$b['id']).'" target="_blank">'.strip_tags($b['reason']).'</a><br />';
					
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
								
								</td>
							</tr>
						</table>
					</div>
				</fieldset>
				
				<h4>Acties</h4>
				
					<div>
						<div id="argus_klassenraden_behaviour_actions">
						<?php
						$cntr = 0;
						if (array_key_exists('actions', $data)){
							if (array_key_exists('gedrag', $data['actions'])){
								foreach($data['actions']['gedrag'] as $aid => $action){
									print argus_klassenraden_notes_model_action($data, 'gedrag', $aid, $action['measure'], $action['executor'], $action['remark'], $cntr);
								}
							}
						}
						?>
						</div>
						<input type="button" id="argus_klassenraden_add_action_behaviour" class="action-links argus_klassenraden_add_action_btn" value="+ voeg een actie toe" />
					</div>
				
				<h4>Opmerkingen</h4>
				
					<textarea rows="4" name="argus_klassenraden_gedrag_remarks" class="argus_klassenraden_remarks behaviour-border"><?php
					if ($data['notes']['gedrag']){
						print $data['notes']['gedrag']->body[LANGUAGE_NONE][0]['value'];
					}
					?></textarea>
			
			<hr />
			
			<h3>Andere</h3>
				
				<!-- Voorlopig wordt dit vak niet getoond; evaluatie na de eerste testen.
				<fieldset class="collapsible argus_klassenraden_status other-background-light">
					<legend><span class="fieldset-legend"><a class="fieldset-title" href="#"><span class="fieldset-legend-prefix element-invisible">Verbergen</span> status</a><span class="summary"></span></span></legend>
					<div class="fieldset-wrapper">
						<table class="views-table" style="line-height: 1.1em; border: none; border-collapse: inherit;">
							<tr>
								<td style="width: 33%;">
								
								</td>
								<td style="width: 33%;">
								
								</td>
								<td>
								
								</td>
							</tr>
						</table>
					</div>
				</fieldset>
				 -->
				
				<h4>Acties</h4>
				
					<div>
						<div id="argus_klassenraden_other_actions">
						<?php
						$cntr = 0;
						if (array_key_exists('actions', $data)){
							if (array_key_exists('andere', $data['actions'])){
								foreach($data['actions']['andere'] as $aid => $action){
									print argus_klassenraden_notes_model_action($data, 'andere', $aid, $action['measure'], $action['executor'], $action['remark'], $cntr);
								}
							}
						}
						?>
						</div>
						<input type="button" id="argus_klassenraden_add_action_other" class="action-links argus_klassenraden_add_action_btn" value="+ voeg een actie toe" />
					</div>
				
				<h4>Opmerkingen</h4>
				
					<textarea rows="4" name="argus_klassenraden_andere_remarks" class="argus_klassenraden_remarks other-border"><?php
					if ($data['notes']['andere']){
						print $data['notes']['andere']->body[LANGUAGE_NONE][0]['value'];
					}
					?></textarea>
			
			<hr />
			
			<input type="submit" name="submit" value="opslaan" class="action-links" />
			<?php if (array_key_exists('uid_next',$data)){ ?> <input type="submit" name="submit" value="opslaan & volgende leerling" class="action-links" /><?php } ?>
			<input type="submit" name="submit" value="opslaan & naar het overzicht" class="action-links" />
			
	
		</form>
		
		<div id="argus_klassenraden_study_action_model" class="argus_klassenraden_action_model">
			<?php print argus_klassenraden_notes_model_action($data, 'studiebegeleiding'); ?>
		</div>
		
		<div id="argus_klassenraden_absences_action_model" class="argus_klassenraden_action_model">
			<?php print argus_klassenraden_notes_model_action($data, 'afwezigheden'); ?>
		</div>
		
		<div id="argus_klassenraden_behaviour_action_model" class="argus_klassenraden_action_model">
			<?php print argus_klassenraden_notes_model_action($data, 'gedrag'); ?>
		</div>
		
		<div id="argus_klassenraden_other_action_model" class="argus_klassenraden_action_model">
			<?php print argus_klassenraden_notes_model_action($data, 'andere'); ?>
		</div>
		
	<?php } elseif (user_access('create lvs_klassenraad_notitie content') || user_access('edit any lvs_klassenraad_notitie content')) { ?>
		<h2>Selecteer een leerling van de klas <a href="<?php print url('klas/'.$data['classname'], array('absolute' => TRUE)); ?>" target="_blank"><?php print $data['classname']; ?></a></h2>
		
		Overzicht van de notities: <?php print $data['cm-title']; ?><br />
		<table class="views-table sticky-header">
			<thead>
				<tr>
					<th class="views-field views-field-title views-align-left" style="font-weight: normal !important; width: 25%;">Leerling</th>
					<th class="views-field views-field-title views-align-center absences" style="width: 15%;">Afwezigheden</th>
					<th class="views-field views-field-title views-align-center behaviour" style="width: 15%;">Gedrag</th>
					<th class="views-field views-field-title views-align-center study" style="width: 15%;">Studie</th>
					<th class="views-field views-field-title views-align-center" style="width: 15%;">Andere</th>
					<th class="views-field views-field-title views-align-right" style="font-weight: normal !important; font-style: italic; width: 15%;">Info</th>
				</tr>
			</thead>
			<tbody>
				<?php
				
				foreach ($data['pupils'] as $u => $uid){
					print '<tr class="'.($u%2 == 0 ? "even" : "odd").' views-row-first">';
						print '<td><a href="'.url(current_path().'/'.$uid, array('absolute' => TRUE)).'">'.argus_get_user_realname($uid).'</a></td>';
						
						$lvsParts = list_allowed_values(field_info_field('field_lvs_onderdeel')); //afwezigheden, gedrag, studiebegeleiding, andere
						foreach ($lvsParts as $lvsPart){
							$query = new EntityFieldQuery();
							$query
							->entityCondition('entity_type', 'node', '=')
							->entityCondition('bundle', 'lvs_klassenraad_notitie', '=')
							->fieldCondition('field_klassenraad', 'target_id', $data['cmid'], '=')
							->fieldCondition('field_lvs_onderdeel', 'value', $lvsPart, '=')
							->fieldCondition('field_leerling', 'target_id', $uid, '=');
							$notes = $query->execute();

							print '<td class="views-field views-align-center">';
							if ($notes){
								$note = node_load(key($notes['node']));
								$status = array();
								if ($note->body[LANGUAGE_NONE][0]['value']){
									$status[] = 'x';
								}
								if ($note->field_acties){
									$status[] = count($note->field_acties[LANGUAGE_NONE]);
								}
								if (count($status)){
									print implode(' / ',$status);
								}
							}
							print '</td>';
						}
						
						print '<td class="views-align-right"><a href="'.base_path().drupal_lookup_path('alias', 'user/'.$uid).'" target="_blank">bekijk LVS-fiche</a></td>';
					print '</tr>';
				}
				
				?>
			</tbody>
		</table>
		<div style="text-align: right; font-size: smaller;">('x' = opmerking over dit onderdeel / 'cijfer' = aantal acties)</div>
		
		<hr />
		
		<a href="<?php print url('klas/'.$data['classname'], array('absolute' => TRUE)); ?>" target="_blank">Bekijk het klasbeeld van <strong><?php print $data['classname']; ?></strong></a> 
	<?php } else {
		// TODO: Redirect to read modus because not allowed in here :-)
	} ?>
</div>