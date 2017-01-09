<?php
/**
 * @file
 * argus_vakgroepen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_vakgroepen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_vakgroepen:vakgroepen.
  $menu_links['menu-modules_vakgroepen:vakgroepen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'vakgroepen',
    'router_path' => 'vakgroepen',
    'link_title' => 'Vakgroepen',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_vakgroepen',
        'style' => '',
      ),
      'identifier' => 'menu-modules_vakgroepen:vakgroepen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_vakken:vakken/overzicht',
  );
  // Exported menu link: navigation_vakgroep:node/add/vakgroep.
  $menu_links['navigation_vakgroep:node/add/vakgroep'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/vakgroep',
    'router_path' => 'node/add/vakgroep',
    'link_title' => 'Vakgroep',
    'options' => array(
      'attributes' => array(
        'title' => 'Lijst met vakgroepen en de daaraan gekoppelde vakken.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_vakgroep:node/add/vakgroep',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -17,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Vakgroep');
  t('Vakgroepen');

  return $menu_links;
}
