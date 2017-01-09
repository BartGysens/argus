<?php
/**
 * @file
 * argus_organisaties.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_organisaties_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create organisatie content'.
  $permissions['create organisatie content'] = array(
    'name' => 'create organisatie content',
    'roles' => array(
      'GIP-coördinator' => 'GIP-coördinator',
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create organisatie content on assigned domains'.
  $permissions['create organisatie content on assigned domains'] = array(
    'name' => 'create organisatie content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any organisatie content'.
  $permissions['delete any organisatie content'] = array(
    'name' => 'delete any organisatie content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
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

  // Exported permission: 'delete organisatie content on assigned domains'.
  $permissions['delete organisatie content on assigned domains'] = array(
    'name' => 'delete organisatie content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own organisatie content'.
  $permissions['delete own organisatie content'] = array(
    'name' => 'delete own organisatie content',
    'roles' => array(
      'GIP-coördinator' => 'GIP-coördinator',
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organisatie content'.
  $permissions['edit any organisatie content'] = array(
    'name' => 'edit any organisatie content',
    'roles' => array(
      'GIP-coördinator' => 'GIP-coördinator',
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organisatie content'.
  $permissions['edit own organisatie content'] = array(
    'name' => 'edit own organisatie content',
    'roles' => array(
      'GIP-coördinator' => 'GIP-coördinator',
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'stagebegeleider' => 'stagebegeleider',
      'stagecoördinator' => 'stagecoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update organisatie content on assigned domains'.
  $permissions['update organisatie content on assigned domains'] = array(
    'name' => 'update organisatie content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
