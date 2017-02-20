<?php
/**
 * @file
 * argus_feedbackgroepen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_feedbackgroepen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_feedbackgroepen:feedbackgroepen.
  $menu_links['menu-modules_feedbackgroepen:feedbackgroepen'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'feedbackgroepen',
    'router_path' => 'feedbackgroepen',
    'link_title' => 'Feedbackgroepen',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_feedbackgroepen:feedbackgroepen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_wie-is-wie:wie-is-wie',
  );
  // Exported menu link: navigation_feedbackgroep:node/add/feedbackgroep.
  $menu_links['navigation_feedbackgroep:node/add/feedbackgroep'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/feedbackgroep',
    'router_path' => 'node/add/feedbackgroep',
    'link_title' => 'Feedbackgroep',
    'options' => array(
      'attributes' => array(
        'title' => 'De <em>feedbackgroep</em> heeft als doelstelling om op afroep reflexie te geven op allerlei vragen.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_feedbackgroep:node/add/feedbackgroep',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Feedbackgroep');
  t('Feedbackgroepen');

  return $menu_links;
}
