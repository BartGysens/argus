<?php
/**
 * @file
 * argus_stages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_stages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create stage content'.
  $permissions['create stage content'] = array(
    'name' => 'create stage content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create stageactiviteitenlijst content'.
  $permissions['create stageactiviteitenlijst content'] = array(
    'name' => 'create stageactiviteitenlijst content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create stagebezoek content'.
  $permissions['create stagebezoek content'] = array(
    'name' => 'create stagebezoek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create stageperiode content'.
  $permissions['create stageperiode content'] = array(
    'name' => 'create stageperiode content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stage content'.
  $permissions['delete any stage content'] = array(
    'name' => 'delete any stage content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stageactiviteitenlijst content'.
  $permissions['delete any stageactiviteitenlijst content'] = array(
    'name' => 'delete any stageactiviteitenlijst content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stagebezoek content'.
  $permissions['delete any stagebezoek content'] = array(
    'name' => 'delete any stagebezoek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stageperiode content'.
  $permissions['delete any stageperiode content'] = array(
    'name' => 'delete any stageperiode content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stage content'.
  $permissions['delete own stage content'] = array(
    'name' => 'delete own stage content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stageactiviteitenlijst content'.
  $permissions['delete own stageactiviteitenlijst content'] = array(
    'name' => 'delete own stageactiviteitenlijst content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stagebezoek content'.
  $permissions['delete own stagebezoek content'] = array(
    'name' => 'delete own stagebezoek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own stageperiode content'.
  $permissions['delete own stageperiode content'] = array(
    'name' => 'delete own stageperiode content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stage content'.
  $permissions['edit any stage content'] = array(
    'name' => 'edit any stage content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stageactiviteitenlijst content'.
  $permissions['edit any stageactiviteitenlijst content'] = array(
    'name' => 'edit any stageactiviteitenlijst content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stagebezoek content'.
  $permissions['edit any stagebezoek content'] = array(
    'name' => 'edit any stagebezoek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stageperiode content'.
  $permissions['edit any stageperiode content'] = array(
    'name' => 'edit any stageperiode content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stage content'.
  $permissions['edit own stage content'] = array(
    'name' => 'edit own stage content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stageactiviteitenlijst content'.
  $permissions['edit own stageactiviteitenlijst content'] = array(
    'name' => 'edit own stageactiviteitenlijst content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stagebezoek content'.
  $permissions['edit own stagebezoek content'] = array(
    'name' => 'edit own stagebezoek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own stageperiode content'.
  $permissions['edit own stageperiode content'] = array(
    'name' => 'edit own stageperiode content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
