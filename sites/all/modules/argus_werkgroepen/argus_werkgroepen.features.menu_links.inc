<?php
/**
 * @file
 * argus_werkgroepen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_werkgroepen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_werkgroepen:werkgroepen.
  $menu_links['menu-modules_werkgroepen:werkgroepen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'werkgroepen',
    'router_path' => 'werkgroepen',
    'link_title' => 'Werkgroepen',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_werkgroepen:werkgroepen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_wie-is-wie:wie-is-wie',
  );
  // Exported menu link: navigation_werkgroep:node/add/werkgroep.
  $menu_links['navigation_werkgroep:node/add/werkgroep'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/werkgroep',
    'router_path' => 'node/add/werkgroep',
    'link_title' => 'Werkgroep',
    'options' => array(
      'attributes' => array(
        'title' => 'Breng mensen samen in een <em>werkgroep</em>.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_werkgroep:node/add/werkgroep',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Werkgroep');
  t('Werkgroepen');

  return $menu_links;
}
