<?php
/**
 * @file
 * argus_uurrooster.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_uurrooster_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_uurrooster---les:node/add/uurrooster-les
  $menu_links['navigation_uurrooster---les:node/add/uurrooster-les'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/uurrooster-les',
    'router_path' => 'node/add/uurrooster-les',
    'link_title' => 'Uurrooster - les',
    'options' => array(
      'attributes' => array(
        'title' => 'Hiermee wordt een koppeling gemaakt tussen vakken, lokalen, leerkrachten en het weekschema.<br />
Op basis van deze gegevens kunnen de <em>uurroosters</em> worden samengesteld.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_uurrooster---les:node/add/uurrooster-les',
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
  // Exported menu link: navigation_uurrooster---periode:node/add/uurrooster-periode
  $menu_links['navigation_uurrooster---periode:node/add/uurrooster-periode'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/uurrooster-periode',
    'router_path' => 'node/add/uurrooster-periode',
    'link_title' => 'Uurrooster - periode',
    'options' => array(
      'attributes' => array(
        'title' => 'Voor het opstellen van de uurroosters zijn de vooraf gedefinieerde <em>periodes</em> nodig.<br />
Deze periodes kan je best niet via argus beheren, maar in je GP Untis-pakket of ander lessenroosterprogramma.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_uurrooster---periode:node/add/uurrooster-periode',
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
  t('Uurrooster - les');
  t('Uurrooster - periode');


  return $menu_links;
}
