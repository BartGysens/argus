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

  // Exported permission: 'create field_msl_volgkaart_status'.
  $permissions['create field_msl_volgkaart_status'] = array(
    'name' => 'create field_msl_volgkaart_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

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

  // Exported permission: 'edit field_msl_volgkaart_status'.
  $permissions['edit field_msl_volgkaart_status'] = array(
    'name' => 'edit field_msl_volgkaart_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_msl_volgkaart_status'.
  $permissions['edit own field_msl_volgkaart_status'] = array(
    'name' => 'edit own field_msl_volgkaart_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: 'view field_msl_volgkaart_status'.
  $permissions['view field_msl_volgkaart_status'] = array(
    'name' => 'view field_msl_volgkaart_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_msl_volgkaart_status'.
  $permissions['view own field_msl_volgkaart_status'] = array(
    'name' => 'view own field_msl_volgkaart_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
