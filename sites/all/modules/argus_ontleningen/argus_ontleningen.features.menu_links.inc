<?php
/**
 * @file
 * argus_ontleningen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_ontleningen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_ontlening:node/add/ontlening.
  $menu_links['navigation_ontlening:node/add/ontlening'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ontlening',
    'router_path' => 'node/add/ontlening',
    'link_title' => 'Ontlening',
    'options' => array(
      'attributes' => array(
        'title' => 'Gebruik <em>ontlening</em> om als gebruiker, eigendommen van de school te ontlenen',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_ontlening:node/add/ontlening',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ontlening');

  return $menu_links;
}
