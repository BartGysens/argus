<?php
/**
 * @file
 * argus_wachtwoorden.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_wachtwoorden_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_wachtwoorden:wachtwoorden.
  $menu_links['menu-modules_wachtwoorden:wachtwoorden'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'wachtwoorden',
    'router_path' => 'wachtwoorden',
    'link_title' => 'Wachtwoorden',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_wachtwoorden:wachtwoorden',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_ict---account:node/add/ict-account.
  $menu_links['navigation_ict---account:node/add/ict-account'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ict-account',
    'router_path' => 'node/add/ict-account',
    'link_title' => 'ICT - Account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'navigation_ict---account:node/add/ict-account',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ICT - Account');
  t('Wachtwoorden');

  return $menu_links;
}
