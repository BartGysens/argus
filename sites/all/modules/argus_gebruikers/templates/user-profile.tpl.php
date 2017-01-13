<?php

/**
 * @file
 * This template checks the role of the user requested and diverts to specific template
 */

$modus = NULL;

$params = explode('/',current_path());
if (array_key_exists(2,$params)){
    $modus = $params[2];
}

$current_user_roles = -1;
if (count($account->field_user_sms_basisrol)){
	$current_user_roles = $account->field_user_sms_basisrol [LANGUAGE_NONE] [0] ['value'];
}

if ($modus == 'administratief'){
    include('user-profile--administration.tpl.php');
} else {
	switch ($current_user_roles) {
		case 1 : // leerling
			include('user-profile--pupil.tpl.php');
			break;
		case 0 : // leerkracht
		case 30 : // directie
			include('user-profile--employee.tpl.php');
			break;
		default : // andere (13)
			include('user-profile--other.tpl.php');
			break;
	}
}