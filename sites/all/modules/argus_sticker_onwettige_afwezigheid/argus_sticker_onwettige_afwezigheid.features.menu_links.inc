<?php
/**
 * @file
 * argus_sticker_onwettige_afwezigheid.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_sticker_onwettige_afwezigheid_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_sticker-onwettige-afwezigheid:sticker-onwettige-afwezigheid/overzicht.
  $menu_links['menu-modules_sticker-onwettige-afwezigheid:sticker-onwettige-afwezigheid/overzicht'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'sticker-onwettige-afwezigheid/overzicht',
    'router_path' => 'sticker-onwettige-afwezigheid/overzicht',
    'link_title' => 'Sticker onwettige afwezigheid',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'icon_stickerOA',
        'style' => '',
      ),
      'identifier' => 'menu-modules_sticker-onwettige-afwezigheid:sticker-onwettige-afwezigheid/overzicht',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_afwezigheden:afwezigheden',
  );
  // Exported menu link: navigation_sticker-onwettige-afwezigheid:node/add/msl-oa-sticker.
  $menu_links['navigation_sticker-onwettige-afwezigheid:node/add/msl-oa-sticker'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/msl-oa-sticker',
    'router_path' => 'node/add/msl-oa-sticker',
    'link_title' => 'Sticker onwettige afwezigheid',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_sticker-onwettige-afwezigheid:node/add/msl-oa-sticker',
      'attributes' => array(
        'title' => 'Bij de procedure omtrent Onwettige Afwezigheden hoort het opvolgen van de afwezigheden door middel van het plakken van een <em>rode sticker</em>. Dit past binnen de Maatregelen bij Schending van de Leefregels - MSL.',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:node/18707',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sticker onwettige afwezigheid');

  return $menu_links;
}
