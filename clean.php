<?php

/**
 * @file
 * Handles incoming requests to fire off regularly-scheduled tasks (cron jobs).
 */

/**
 * Root directory of Drupal installation.
 */
define ( 'DRUPAL_ROOT', getcwd () );

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap ( DRUPAL_BOOTSTRAP_FULL );

if ('kta1!' != $_GET ['key']) {
	argus_report ( 'Clean could not be performed because an invalid key was used.', array (), 'error' );
	drupal_access_denied ();
} elseif ($_SERVER ['SERVER_NAME'] !=='localhost' ) {
	argus_report ( 'Clean could not be performed because in online mode.', array (), 'error' );
	drupal_access_denied ();
} else {
	// Delete users (except admin)
	$mysql = 'SELECT uid,uid FROM {users} WHERE uid > :adminid LIMIT 250';
	$uids = db_query($mysql, array('adminid' => 1))->fetchAllKeyed();
	foreach ($uids as $uid){
		user_delete($uid);
		print $uid.'<br>';
	}
	
	// Delete nodes
	
	
	
	exit('Users removed: '.count($uids).'');
}
