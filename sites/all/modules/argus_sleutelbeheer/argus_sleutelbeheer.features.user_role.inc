<?php
/**
 * @file
 * argus_sleutelbeheer.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function argus_sleutelbeheer_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: andere.
  $roles['andere'] = array(
    'name' => 'andere',
    'weight' => 57,
  );

  // Exported role: leerkracht.
  $roles['leerkracht'] = array(
    'name' => 'leerkracht',
    'weight' => 71,
  );

  // Exported role: leerling.
  $roles['leerling'] = array(
    'name' => 'leerling',
    'weight' => 126,
  );

  return $roles;
}
