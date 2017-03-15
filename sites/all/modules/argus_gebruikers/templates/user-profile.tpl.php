<?php

/**
 * @file
 * This template checks the role of the user requested and diverts to specific template
 */
$modus = NULL;

$params = explode ( '/', current_path () );
if (array_key_exists ( 2, $params )) {
	$modus = $params [2];
}

if ($modus == 'administratief') {
	include ('user-profile--administration.tpl.php');
} else {
	$u = user_load ( $params [1] );
	if (user_has_role ( key ( variable_get ( 'argus_engine_roles_workers' ) ), $u )) {
		include ('user-profile--employee.tpl.php');
	} elseif (user_has_role ( key ( variable_get ( 'argus_engine_roles_pupil' ) ), $u )) {
		include ('user-profile--pupil.tpl.php');
	} else {
		include ('user-profile--other.tpl.php');
	}
}