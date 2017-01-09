<?php
/**
 * @file
 * argus_gebruikers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_gebruikers_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'CLB-medewerker' => 'CLB-medewerker',
      'GON-begeleider' => 'GON-begeleider',
      'administrator' => 'administrator',
      'infoscherm voor leerkrachten' => 'infoscherm voor leerkrachten',
      'infoscherm voor leerlingen' => 'infoscherm voor leerlingen',
      'personeelslid' => 'personeelslid',
    ),
    'module' => 'user',
  );

  return $permissions;
}
