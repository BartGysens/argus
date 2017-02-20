<?php
/**
 * @file
 * argus_gebruikers.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_gebruikers_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu.
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: menu-modules_fotoboek:fotoboek.
  $menu_links['menu-modules_fotoboek:fotoboek'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'fotoboek',
    'router_path' => 'fotoboek',
    'link_title' => 'Fotoboek',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Maak online je eigen fotoboek.',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_photobook',
        'style' => '',
      ),
      'identifier' => 'menu-modules_fotoboek:fotoboek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_algemeen:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fotoboek');
  t('User menu');

  return $menu_links;
}
