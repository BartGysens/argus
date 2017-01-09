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

if ($modus == 'administratief'){
    include('user-profile--administration.tpl.php');
} else {
    if (in_array('leerling', $user_roles)){
        include('user-profile--pupil.tpl.php');
    } else {
        include('user-profile--other.tpl.php');
    }
}