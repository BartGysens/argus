<?php
/**
 * @file
 * argus_projectgroepen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_projectgroepen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_projectgroepen:projectgroepen.
  $menu_links['menu-modules_projectgroepen:projectgroepen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'projectgroepen',
    'router_path' => 'projectgroepen',
    'link_title' => 'Projectgroepen',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_projectgroepen:projectgroepen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_projectgroep:node/add/projectgroep.
  $menu_links['navigation_projectgroep:node/add/projectgroep'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/projectgroep',
    'router_path' => 'node/add/projectgroep',
    'link_title' => 'Projectgroep',
    'options' => array(
      'attributes' => array(
        'title' => 'Breng mensen samen in een groep; deze structuur steunt op het werken rond een <em>project</em>.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_projectgroep:node/add/projectgroep',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Projectgroep');
  t('Projectgroepen');

  return $menu_links;
}
