<?php
/**
 * @file
 * argus_sticker_onwettige_afwezigheid.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_sticker_onwettige_afwezigheid_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create msl_oa_sticker content'.
  $permissions['create msl_oa_sticker content'] = array(
    'name' => 'create msl_oa_sticker content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any msl_oa_sticker content'.
  $permissions['delete any msl_oa_sticker content'] = array(
    'name' => 'delete any msl_oa_sticker content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own msl_oa_sticker content'.
  $permissions['delete own msl_oa_sticker content'] = array(
    'name' => 'delete own msl_oa_sticker content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any msl_oa_sticker content'.
  $permissions['edit any msl_oa_sticker content'] = array(
    'name' => 'edit any msl_oa_sticker content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own msl_oa_sticker content'.
  $permissions['edit own msl_oa_sticker content'] = array(
    'name' => 'edit own msl_oa_sticker content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
