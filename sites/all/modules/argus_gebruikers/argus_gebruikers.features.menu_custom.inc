<?php
/**
 * @file
 * argus_gebruikers.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function argus_gebruikers_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'Het <em>Management-menu</em> vind je bovenaan op de administrator-pagina\'s en bevat beheerstaken.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Het <em>Management-menu</em> vind je bovenaan op de administrator-pagina\'s en bevat beheerstaken.');
  t('Management');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');

  return $menus;
}
