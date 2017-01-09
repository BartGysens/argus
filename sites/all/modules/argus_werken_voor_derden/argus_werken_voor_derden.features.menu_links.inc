<?php
/**
 * @file
 * argus_werken_voor_derden.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_werken_voor_derden_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_werken-voor-derden:werken-voor-derden.
  $menu_links['menu-modules_werken-voor-derden:werken-voor-derden'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'werken-voor-derden',
    'router_path' => 'werken-voor-derden',
    'link_title' => 'Werken voor derden',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_werken-voor-derden:werken-voor-derden',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_pedagogischdidactisch:<nolink>',
  );
  // Exported menu link: navigation_werk-voor-derden:node/add/werk-voor-derden.
  $menu_links['navigation_werk-voor-derden:node/add/werk-voor-derden'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/werk-voor-derden',
    'router_path' => 'node/add/werk-voor-derden',
    'link_title' => 'Werk voor derden',
    'options' => array(
      'attributes' => array(
        'title' => 'Binnen de organisatie kan je de <em>werken voor derden</em> met deze module volledig automatiseren.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_werk-voor-derden:node/add/werk-voor-derden',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -13,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Werk voor derden');
  t('Werken voor derden');

  return $menu_links;
}
