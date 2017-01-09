<?php
/**
 * @file
 * argus_lokalen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_lokalen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_lokaal:node/add/lokaal
  $menu_links['navigation_lokaal:node/add/lokaal'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/lokaal',
    'router_path' => 'node/add/lokaal',
    'link_title' => 'Lokaal',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer je infrastructuur en je <em>lokalen</em>.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_lokaal:node/add/lokaal',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Lokaal');


  return $menu_links;
}
