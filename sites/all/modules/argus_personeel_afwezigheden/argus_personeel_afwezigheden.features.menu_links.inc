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
    'weight' => -22,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Personeel - afwezigheid');

  return $menu_links;
}
