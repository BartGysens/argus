<?php
/*
 * Copyright (C) 2014 bartgysens
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
global $base_url;
?>

<div id="smscMain" class="cf ">

	<div id="authLeftPane">
		<div class="authLeftPaneCentering">
			<div class="authLeftPaneMargin">
				<div class="smscContainer" id="tipContainer">
					<div id="smsctip">
                        <?php
						if (variable_get ( 'argus_login_ad_image' )) {
							if (variable_get ( 'argus_login_ad_url' )) {
								print '<a href="' . variable_get ( 'argus_login_ad_url' ) . '" target="_blank">';
							}
							
							print '<img id="smsctipimg" border="0" src="' . file_create_url ( file_load ( variable_get ( 'argus_login_ad_image' ) )->uri ) . '" alt="' . variable_get ( 'argus_login_ad_tooltip' ) . '" title="' . variable_get ( 'argus_login_ad_tooltip' ) . '">';
							
							if (variable_get ( 'argus_login_ad_url' )) {
								print '</a>';
							}
						}
						?>
                    </div>
				</div>
				<div class="smscContainer" id="statusContainer">
					<div id="statusOK" class="status ok">
						<div>Vul uw gebruikersnaam en wachtwoord in.</div>
					</div>
					<div id="statusNoUsername" class="status notok">
						<div>Geef een gebruikersnaam op.</div>
					</div>
					<div id="statusNoPassword" class="status notok">
						<div>Geef een paswoord op.</div>
					</div>
					<div id="statusStep1" class="status step1">
						<div>Succesvol ingelogd, we halen uw gegevens op.</div>
					</div>
					<div id="statusNotOK" class="status notok">
						<div>Uw login en paswoord komen niet overeen of u heeft geen geldige Smartschool-account.</div>
					</div>
					<div id="statusCheck" class="status register">
						<div>Uw gegevens worden nagekeken, even geduld...</div>
					</div>
					<div id="statusFailargus" class="status register failed">
						<div>argus is momenteel niet beschikbaar. Probeer het later	opnieuw.</div>
					</div>
					<div id="statusFailSMS" class="status register failed">
						<div>Smartschool is momenteel niet beschikbaar. Probeer het later opnieuw.</div>
					</div>
				</div>
			</div>
		</div>
	</div>
	<div id="authRightPane">
		<div id="authRightPaneCurl">
			<a href="http://www.kta1-hasselt.be/" target="_blank"></a>
		</div>
		<div id="authRightPaneLogo"></div>
		<div id="authRightPaneImage" class="autumn"></div>
		<div id="authRightPaneLogin" class="largeLogin">
			<div id="authLeftPaneLoginFadeDiv" style="display: block;">
				<div id="schoolname"><?php print variable_get('argus_login_context_line1'); ?></div>
				<div id="schoolplace"><?php print variable_get('argus_login_context_line2'); ?></div>
				<div id="smsLogin">
					<?php if (variable_get('argus_login_drupal_active')){
                    	$form = drupal_get_form('user_login');
						print drupal_render($form);
                    } ?>
                    
                    <?php if (variable_get('argus_login_sms_active')){ ?>
	                    <p>
							<a href="<?php print variable_get('argus_login_sms_oauth_url')?>?client_id=<?php print variable_get('argus_login_sms_client_id'); ?>&redirect_uri=<?php print $base_url; ?>/argus_login.sms.oauth2callback&response_type=code&scope=userinfo"><img
							src="<?php print $base_url; ?>/<?php print drupal_get_path('module', 'argus_login'); ?>/images/btn_smartschool.png" /></a>
						</p>
                    <?php } ?>
                    
                    <?php if (variable_get('argus_login_google_active')){ ?>
	                    <p>
							<a href="https://accounts.google.com/o/oauth2/auth?scope=email&redirect_uri=<?php print $base_url; ?>/argus_login.google.oauth2callback&response_type=code&client_id=<?php print variable_get('argus_login_google_client_id')?>"><img
							src="<?php print $base_url; ?>/<?php print drupal_get_path('module', 'argus_login'); ?>/images/btn_google.png" /></a>
						</p>
                    <?php } ?>
                </div>
				<div id="smsLostPassword">
					<p>Je wachtwoord kan je opnieuw aanvragen via je eigen Smartschool-platform.</p>
                    <?php if (variable_get('argus_sms_url')){ ?>
	                    <p>
						Ga naar :<br />
						<a href="<?php print variable_get('argus_sms_url'); ?>" target="_blank"><?php print variable_get('argus_sms_url'); ?></a>
						</p>
                    <?php } ?>
                </div>
			</div>
		</div>
		<div id="authRightPaneOptions" class="">
			<div id="recover">Wachtwoord vergeten?</div>
			<div id="smsLoginpage">Aanmelden &raquo;</div>
		</div>
	</div>
</div>