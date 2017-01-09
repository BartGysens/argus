<?php
/**
 * @file
 * argus_personeel_afwezigheden.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_personeel_afwezigheden_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_personeelszaken:<nolink>.
  $menu_links['menu-modules_personeelszaken:<nolink>'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Personeelszaken',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-modules_personeelszaken:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: navigation_personeel---afwezigheid:node/add/personeel-afwezigheid.
  $menu_links['navigation_personeel---afwezigheid:node/add/personeel-afwezigheid'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/personeel-afwezigheid',
    'router_path' => 'node/add/personeel-afwezigheid',
    'link_title' => 'Personeel - afwezigheid',
    'options' => array(
      'attributes' => array(
        'title' => 'Registreer de <em>afwezige personeelsleden</em> en automatiseer via deze weg allerlei vervangings- en registratiesystemen binnen de pakketten Uurrooster, Personeel en Informatieschermen.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_personeel---afwezigheid:node/add/personeel-afwezigheid',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Personeel - afwezigheid');
  t('Personeelszaken');

  return $menu_links;
}
