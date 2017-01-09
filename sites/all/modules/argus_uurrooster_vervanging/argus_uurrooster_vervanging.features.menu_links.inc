<?php
/**
 * @file
 * argus_uurrooster_vervanging.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_uurrooster_vervanging_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_vervanging:node/add/uurrooster-vervanging.
  $menu_links['navigation_vervanging:node/add/uurrooster-vervanging'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/uurrooster-vervanging',
    'router_path' => 'node/add/uurrooster-vervanging',
    'link_title' => 'Vervanging',
    'options' => array(
      'attributes' => array(
        'title' => 'Beheer je <em>vervangingen</em> binnen je organisatie of laat een automatisch vervangingsrooster opmaken door het systeem, gekoppeld aan Untis.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_vervanging:node/add/uurrooster-vervanging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -22,
    'customized' => 1,
    'parent_identifier' => 'navigation_uurrooster:uurrooster',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Vervanging');

  return $menu_links;
}
