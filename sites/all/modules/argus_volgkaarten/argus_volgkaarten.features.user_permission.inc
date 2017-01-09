<?php
/**
 * @file
 * argus_volgkaarten.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_volgkaarten_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create msl_volgkaart content'.
  $permissions['create msl_volgkaart content'] = array(
    'name' => 'create msl_volgkaart content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any msl_volgkaart content'.
  $permissions['delete any msl_volgkaart content'] = array(
    'name' => 'delete any msl_volgkaart content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own msl_volgkaart content'.
  $permissions['delete own msl_volgkaart content'] = array(
    'name' => 'delete own msl_volgkaart content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any msl_volgkaart content'.
  $permissions['edit any msl_volgkaart content'] = array(
    'name' => 'edit any msl_volgkaart content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own msl_volgkaart content'.
  $permissions['edit own msl_volgkaart content'] = array(
    'name' => 'edit own msl_volgkaart content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
