<?php

/**
 * @file
 * This template checks the view requested and diverts to specific template
 */

$modus = NULL;

$params = explode('/',current_path());
if (array_key_exists(2,$params)){
    $modus = $params[2];
}

if ($modus == 'administratief'){
    include('node--beleidsplan-administration.tpl.php');
} elseif ($modus == 'actieplan'){
    include('node--beleidsplan-actieplan.tpl.php');
} else {
    include('node--beleidsplan-overview.tpl.php');
}