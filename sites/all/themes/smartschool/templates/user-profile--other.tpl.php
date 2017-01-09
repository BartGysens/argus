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

<script type="text/javascript">
</script>

<div class="view">
    <div class="view-header profile-top">
    <p><a href="<?php print base_path().'user/'.$user_id.'/administratief'; ?>">Bekijk de administratieve fiche</a></p>
    </div>
</div>
<div class="profile"<?php print $attributes; ?>>
    <div class="profile-admin">
        <div id="profile-admin" class="clearfix">
            <div id="profile-admin-left">
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Naam, voornaam:&nbsp;</div>
                    <div class="field-items"><?php print smartschool_render('user', $account, 'field_user_sms_naam'); ?>, <?php print smartschool_render('user', $account, 'field_user_sms_voornaam'); ?></div>
                </div>

                <div class="field field-label-inline clearfix">
                    <div class="field-label">Geboortegegevens:&nbsp;</div>
                    <div class="field-items"><?php if (isset($birthday)) { print ($birthday->format('d/m/Y')); } ?>, <?php print smartschool_render('user', $account, 'field_user_sms_geboorteplaats'); ?> - <?php print smartschool_render('user', $account, 'field_user_sms_geboorteland'); ?>, <?php print date_diff($birthday,new DateTime('now'))->format('%y jaar'); ?></div>
                </div>

                <div class="field field-label-inline clearfix">
                    <div class="field-label">Adres:&nbsp;</div>
                    <div class="field-items"><?php print smartschool_render('user', $account, 'field_user_sms_straat'); ?> <?php print smartschool_render('user', $account, 'field_user_sms_huisnummer'); ?> <?php print smartschool_render('user', $account, 'field_user_sms_busnummer'); ?>, <?php print smartschool_render('user', $account, 'field_user_sms_postcode'); ?> <?php print smartschool_render('user', $account, 'field_user_sms_woonplaats'); ?></div>
                </div>
            </div>

            <div id="profile-admin-right">
                <div class="field field-label-inline clearfix">
                    <div class="field-label">Telefoon:&nbsp;</div>
                    <div class="field-items"><?php print implode('&nbsp;-&nbsp;', array_filter(array(smartschool_render('user', $account, 'field_user_sms_telefoonnummer'), smartschool_render('user', $account, 'field_user_sms_mobielnummer')))); ?></div>
                </div>

                <div class="field field-label-inline clearfix">
                    <div class="field-label">E-mail:&nbsp;</div>
                    <div class="field-items"><?php print smartschool_render('user', $account, 'field_user_sms_emailadres', 0, TRUE); ?></div>
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
		                    <div class="field-items"><ul>
		                    <?php foreach($groups as $gid => $group){
	            				print '<li><a href="'.base_path().drupal_get_path_alias('node/'.$gid).'">'.$group.'</a></li>';
		                    }
	            			?></ul></div>
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
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Projectgroepen:&nbsp;</div>
                <div class="field-items">(lijst van de projecten)</div>
	        </div>
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Werkgroepen:&nbsp;</div>
                <div class="field-items">(lijst van de werkgroepen)</div>
	        </div>
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Feedbackgroepen:&nbsp;</div>
                <div class="field-items">(lijst van de projecten)</div>
	        </div>
	        
        </fieldset>

    </div>

    <hr />

    <div class="clearfix">
        <fieldset id="panel-absenteisme">
            <legend>Afwezigheden</legend>
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Absenteïsme:&nbsp;</div>
                <div class="field-items">(lijst van afwezigheden)</div>
	        </div>
	        
	        <hr />
            
            <?php if (module_exists('argus_uurrooster_vervanging')){ ?>
	            <div class="field field-label-inline clearfix">
	                <div class="field-label">Vervangingen:&nbsp;</div>
	                <div class="field-items">(totaal + lijst van de uitgevoerde vervangingen)</div>
	            </div>
	            
	            <hr />
                
            <?php } ?>
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Nascholingen:&nbsp;</div>
                <div class="field-items">(lijst van de nascholingen)</div>
	        </div>
                        
        </fieldset>

        <fieldset id="panel-nascholingen">
            <legend>HRM</legend>
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Planningsgesprekken:&nbsp;</div>
                <div class="field-items">(lijst van de gesprekken, uitnodiging + verslag)</div>
	        </div>
	        
	        <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Flitsbezoeken:&nbsp;</div>
                <div class="field-items">(lijst van de verslagen)</div>
	        </div>
	        
	        <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Klasbezoeken:&nbsp;</div>
                <div class="field-items">(lijst van de verslagen)</div>
	        </div>
	        
	        <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Functioneringsgesprekken:&nbsp;</div>
                <div class="field-items">(lijst van de gesprekken, uitnodiging + verslag)</div>
	        </div>
	        
	        <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Evaluatiegesprekken:&nbsp;</div>
                <div class="field-items">(lijst van de gesprekken, uitnodiging + verslag)</div>
	        </div>
	        
	        <hr />
	        
        </fieldset>

    </div>

    <hr />

    <div class="clearfix">
        <fieldset id="panel-emaima">
            <legend>Pedagogische activiteiten</legend>
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">EMA's / IMA's:&nbsp;</div>
                <div class="field-items">(lijst van de uitstappen)</div>
	        </div>
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Begeleider:&nbsp;</div>
                <div class="field-items">(lijst van de begeleider)</div>
	        </div>
	        
        </fieldset>

		<?php if (module_exists('argus_klasbeheer')){ ?>
	        <fieldset id="panel-ktt">
	            <legend>Klasbeheer</legend>
	            
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
		        
	        </fieldset>
	    <?php } ?>

    </div>

    <hr />

    <div class="clearfix">
        <fieldset id="panel-infra">
            <legend>Infrastructuur</legend>
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Sleutels:&nbsp;</div>
                <div class="field-items">(lijst van de uitgeleende sleutels)</div>
	        </div>
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Uitleningen:&nbsp;</div>
                <div class="field-items">(lijst van de uitleningen)</div>
	        </div>
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Technische meldingen:&nbsp;</div>
                <div class="field-items">(lijst van de meldingen)</div>
	        </div>
	        
        </fieldset>

        <fieldset id="panel-links">
            <legend>Snelle links</legend>
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Stages:&nbsp;</div>
                <div class="field-items">gegevens, stagebezoeken</div>
	        </div>
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Meldingen:&nbsp;</div>
                <div class="field-items">pedagogisch, technisch</div>
	        </div>
            
            <hr />
            
            <div class="field field-label-inline clearfix">
                <div class="field-label">Lijsten:&nbsp;</div>
                <div class="field-items">examens, GIP, werken voor derden</div>
	        </div>
	        
        </fieldset>

    </div>
</div>

<div class="view">
    <div class="view-header">
    	<p><a href="<?php print base_path().'user/'.$user_id.'/administratief'; ?>">Bekijk de administratieve fiche</a></p>
    </div>
</div>