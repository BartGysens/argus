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

if (! isset ( $_GET ['key'] ) || 'kta1!' != $_GET ['key']) {
	argus_report ( 'Domain could not be set because an invalid key was used.', array (), 'error' );
	drupal_access_denied ();
} else {
	if (! isset ( $_GET ['id'] )) {
		$id = 1;
	} else {
		$id = $_GET ['id'];
	}
	
	if (! is_numeric($id)) {
		$id = 1;
	}
	
	$dom = db_query('SELECT * FROM {domain} WHERE domain_id=:id', array(':id' => $id))->rowCount();
	
	if ($dom<1) {
		argus_report ( 'Domain could not be set because unknown id.', array (), 'error' );
		drupal_access_denied ();
	}

	$num_false_default = db_update ( 'domain' )->fields ( array (
			'is_default' => 0
	) )
	->execute ();
	
	$num_set = db_update ( 'domain' )->fields ( array (
			'is_default' => 1 
	) )
		->condition('domain_id', $id, '=')
  		->execute ();
	
  		argus_report ( 'Domain {:id} set as default; :unset domains reset to zero as default.', array (':id' => $id, ':unset' => $num_false_default) );
}
