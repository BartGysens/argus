<?php
/**
 * @file
 * argus_deliberaties.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_deliberaties_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create lvs_deliberatie content'.
  $permissions['create lvs_deliberatie content'] = array(
    'name' => 'create lvs_deliberatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lvs_deliberatie content'.
  $permissions['delete any lvs_deliberatie content'] = array(
    'name' => 'delete any lvs_deliberatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lvs_deliberatie content'.
  $permissions['delete own lvs_deliberatie content'] = array(
    'name' => 'delete own lvs_deliberatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lvs_deliberatie content'.
  $permissions['edit any lvs_deliberatie content'] = array(
    'name' => 'edit any lvs_deliberatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lvs_deliberatie content'.
  $permissions['edit own lvs_deliberatie content'] = array(
    'name' => 'edit own lvs_deliberatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
