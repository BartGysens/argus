<?php
/**
 * @file
 * argus_maatregelen_bij_schending_van_de_leefregels.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_msl---maatregelen:node/add/msl-maatregelen
  $menu_links['navigation_msl---maatregelen:node/add/msl-maatregelen'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/msl-maatregelen',
    'router_path' => 'node/add/msl-maatregelen',
    'link_title' => 'MSL - Maatregelen',
    'options' => array(
      'attributes' => array(
        'title' => 'Oplijsting van alle maatregelen die volgens het schoolreglement, in het kader van Maatregelen bij Schending van de Leefregels, kunnen worden toegepast. Het gaat om <em>ordemaatregelen, bewarende maatregelen en tuchtmaatregelen</em>.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_msl---maatregelen:node/add/msl-maatregelen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('MSL - Maatregelen');


  return $menu_links;
}
