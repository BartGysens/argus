<?php
/**
 * @file
 * argus_sleutelbeheer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_sleutelbeheer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_sleutelbeheer:sleutelbeheer/overzicht.
  $menu_links['menu-modules_sleutelbeheer:sleutelbeheer/overzicht'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'sleutelbeheer/overzicht',
    'router_path' => 'sleutelbeheer/overzicht',
    'link_title' => 'Sleutelbeheer',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer de sleutels in je sleutelkast.',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-modules_sleutelbeheer:sleutelbeheer/overzicht',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-modules_:sleutelbeheer',
  );
  // Exported menu link: navigation_sleutel:node/add/sleutel.
  $menu_links['navigation_sleutel:node/add/sleutel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sleutel',
    'router_path' => 'node/add/sleutel',
    'link_title' => 'Sleutel',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer de <em>sleutels</em> van lokalen, kasten, poorten, ...',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_sleutel:node/add/sleutel',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -16,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sleutel');
  t('Sleutelbeheer');

  return $menu_links;
}
