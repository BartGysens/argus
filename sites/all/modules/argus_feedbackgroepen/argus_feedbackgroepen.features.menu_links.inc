<?php
/**
 * @file
 * argus_feedbackgroepen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_feedbackgroepen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_feedbackgroepen:feedbackgroepen.
  $menu_links['menu-modules_feedbackgroepen:feedbackgroepen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'feedbackgroepen',
    'router_path' => 'feedbackgroepen',
    'link_title' => 'Feedbackgroepen',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_feedbackgroepen:feedbackgroepen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_:node/add.
  $menu_links['navigation_:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => '',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'navigation_:node/add',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Feedbackgroepen');

  return $menu_links;
}
