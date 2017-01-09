<?php
/**
 * @file
 * argus_huisstijlhandboek.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_huisstijlhandboek_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_huisstijlhandboek:huisstijlhandboek.
  $menu_links['menu-modules_huisstijlhandboek:huisstijlhandboek'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'huisstijlhandboek',
    'router_path' => 'huisstijlhandboek',
    'link_title' => 'Huisstijlhandboek',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-modules_huisstijlhandboek:huisstijlhandboek',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  	'parent_identifier' => null,
  );
  
  // Translatables
  // Included for use with string extractors like potx.
  t('Huisstijlhandboek');

  return $menu_links;
}
