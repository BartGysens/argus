<?php
/**
 * @file
 * argus_leerplichtbegeleiding.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_leerplichtbegeleiding_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create lvs_leerplichtbegeleiding content'.
  $permissions['create lvs_leerplichtbegeleiding content'] = array(
    'name' => 'create lvs_leerplichtbegeleiding content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lvs_leerplichtbegeleiding content'.
  $permissions['delete any lvs_leerplichtbegeleiding content'] = array(
    'name' => 'delete any lvs_leerplichtbegeleiding content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lvs_leerplichtbegeleiding content'.
  $permissions['delete own lvs_leerplichtbegeleiding content'] = array(
    'name' => 'delete own lvs_leerplichtbegeleiding content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lvs_leerplichtbegeleiding content'.
  $permissions['edit any lvs_leerplichtbegeleiding content'] = array(
    'name' => 'edit any lvs_leerplichtbegeleiding content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lvs_leerplichtbegeleiding content'.
  $permissions['edit own lvs_leerplichtbegeleiding content'] = array(
    'name' => 'edit own lvs_leerplichtbegeleiding content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
