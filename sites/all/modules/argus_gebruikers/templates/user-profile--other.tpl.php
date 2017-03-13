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
                    <div class="field-items"><?php print ($birthday->format('d/m/Y')); ?>, <?php print argus_render('user', $account, 'field_user_sms_geboorteplaats'); ?> - <?php print argus_render('user', $account, 'field_user_sms_geboorteland'); ?>, <?php print date_diff($birthday,new DateTime('now'))->format('%y jaar'); ?></div>
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
</div>

<?php if (user_access('access user profiles')){ ?>
	<div class="view">
	    <div class="view-header">
	    	<p><a href="<?php print base_path().'user/'.$user_id.'/administratief'; ?>">Bekijk de administratieve fiche</a></p>
	    </div>
	</div>
<?php } ?>