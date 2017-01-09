<?php

define('DRUPAL_ROOT', getcwd().'/../../../../');
set_include_path(DRUPAL_ROOT);
/**
 * Required core files: the minimal core files
 */
require_once 'includes/bootstrap.inc';
require_once 'includes/common.inc';
require_once 'includes/module.inc';
require_once 'includes/unicode.inc';
require_once 'includes/file.inc';
require_once 'includes/theme.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_SESSION);
drupal_language_initialize();

/* Perform some necessary checks before generating some output */
/* Check security */
$servers = variable_get('argus_embeddings_hosts', '*x*'); // By default: servers need to be set for security reasons
if (getenv('SERVER_NAME') != 'localhost'){
	$requestServer = substr($_SERVER['HTTP_REFERER'], 0, strpos($_SERVER['HTTP_REFERER'],'/',8));
	if (!$requestServer){
		exit('Server request from unkown source not allowed.');
	} elseif (strpos($servers, $requestServer) === false || strpos($servers, $requestServer.'/') === false) {
	    exit('Access denied for: '.$requestServer);
	}
}

if (array_key_exists('key', $_GET)){
	$key = $_GET['key'];
	if (strpos($key, variable_get('argus_embeddings_key', '*x*')) === false){ // By default: this key must be set for security reasons.
		exit('Security-check not matching. Access denied.');
	}
	
	// Everything looks fine, so move on to generating output
	
} else {
	exit('Security-check missing. Access denied.');
}

/* Check if requested plugin is installed */
if (array_key_exists('module', $_GET)){
	$module = $_GET['module'];
	module_load_all();
	if (!module_exists($module)){
		exit('Requested module not activated, not installed or known by argus (see help for more information). Exiting.');
	}
	
	// Everything looks fine again, so move on to generating output
	
	$embedding_file = getcwd().'/../'.$module.'/embeddings/'.$module.'.php';
	if (!file_exists($embedding_file)){
		exit('No embedding found for this module. Exiting.');
	}
	
} else {
	exit('No module requested, check parameters (see help for more information). Exiting.');
}

/* Get parameters from url */
$css = '';
if (array_key_exists('css', $_GET)){
	$css = $_GET['css'];
}

$type = 'iframe';
if (array_key_exists('type', $_GET)){
	$type = $_GET['type'];
}

$security = '';
if (array_key_exists('security', $_GET)){
	$security = $_GET['security'];
}

/* Generate output */
include_once $embedding_file;
$result = embedding_get_result();

switch ($type) {
	case 'html':
		exit($result);
		break;
	case 'iframe':
	default:
		continue;
}

global $base_url;

?>
<html>
	<head>
		<meta charset="utf-8" />
		<link rel="stylesheet" href="<?php print $base_url; ?>/css/main.css" />
		<?php if ($css){
			print '<link rel="stylesheet" href="'.$base_url.'/css/'.$css.'.css" />';
		} ?>
	</head>
	<body>
		<?php print $result; ?>
	</body>
</html>
