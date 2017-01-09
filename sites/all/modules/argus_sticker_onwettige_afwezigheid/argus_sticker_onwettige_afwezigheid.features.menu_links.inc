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

  // Exported menu link: navigation_msl---sticker-onwettige-afwezigheid:node/add/msl-oa-sticker
  $menu_links['navigation_msl---sticker-onwettige-afwezigheid:node/add/msl-oa-sticker'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/msl-oa-sticker',
    'router_path' => 'node/add/msl-oa-sticker',
    'link_title' => 'MSL - Sticker onwettige afwezigheid',
    'options' => array(
      'attributes' => array(
        'title' => 'Bij de procedure omtrent Onwettige Afwezigheden hoort het opvolgen van de afwezigheden door middel van het plakken van een <em>rode sticker</em>. Dit past binnen de Maatregelen bij Schending van de Leefregels - MSL.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_msl---sticker-onwettige-afwezigheid:node/add/msl-oa-sticker',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('MSL - Sticker onwettige afwezigheid');


  return $menu_links;
}
