<?php
/**
 * @file
 * argus_merken.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_merken_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_merk:node/add/merk.
  $menu_links['navigation_merk:node/add/merk'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/merk',
    'router_path' => 'node/add/merk',
    'link_title' => 'Merk',
    'options' => array(
      'attributes' => array(
        'title' => 'Allerlei <em>merknamen</em> voor verschillende toepassingsgebieden.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_merk:node/add/merk',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );
  // Exported menu link: navigation_merken:merken.
  $menu_links['navigation_merken:merken'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'merken',
    'router_path' => 'merken',
    'link_title' => 'Merken',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'navigation_merken:merken',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'navigation_modules-status:node/20',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Merk');
  t('Merken');

  return $menu_links;
}
