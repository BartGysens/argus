<?php
/**
 * @file
 * argus_aankoopdossiers.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_aankoopdossiers_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_aankoopdossiers:aankoopdossiers.
  $menu_links['menu-modules_aankoopdossiers:aankoopdossiers'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'aankoopdossiers',
    'router_path' => 'aankoopdossiers',
    'link_title' => 'Aankoopdossiers',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'style' => 'icon_aankoopdossiers',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_aankoopdossiers',
        'style' => '',
      ),
      'identifier' => 'menu-modules_aankoopdossiers:aankoopdossiers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_infrastructuur:node/38828',
  );
  // Exported menu link: navigation_aankoopdossier:node/add/aankoopdossier.
  $menu_links['navigation_aankoopdossier:node/add/aankoopdossier'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/aankoopdossier',
    'router_path' => 'node/add/aankoopdossier',
    'link_title' => 'Aankoopdossier',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer de <em>aankoopdossiers</em> voor investeringen, kapitaalsaankopen en ander diensten en materialen.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_aankoopdossier:node/add/aankoopdossier',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aankoopdossier');
  t('Aankoopdossiers');

  return $menu_links;
}
