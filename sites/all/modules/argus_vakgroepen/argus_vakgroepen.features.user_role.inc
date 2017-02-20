<?php
/**
 * @file
 * argus_vakgroepen.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function argus_vakgroepen_user_default_roles() {
  $roles = array();

  // Exported role: voorzitter van vakgroep.
  $roles['voorzitter van vakgroep'] = array(
    'name' => 'voorzitter van vakgroep',
    'weight' => 346,
  );

  return $roles;
}
