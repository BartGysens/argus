<?php
/**
 * @file
 * argus_stages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_stages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-modules_stageactiviteitenlijsten:stages/activiteitenlijsten.
  $menu_links['menu-modules_stageactiviteitenlijsten:stages/activiteitenlijsten'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'stages/activiteitenlijsten',
    'router_path' => 'stages/activiteitenlijsten',
    'link_title' => 'Stageactiviteitenlijsten',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-modules_stageactiviteitenlijsten:stages/activiteitenlijsten',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_stages:stages',
  );
  // Exported menu link: menu-modules_stagebegeleiders:wie-is-wie.
  $menu_links['menu-modules_stagebegeleiders:wie-is-wie'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'wie-is-wie',
    'router_path' => 'wie-is-wie',
    'link_title' => 'Stagebegeleiders',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'query' => array(
        'rid' => 227,
      ),
      'identifier' => 'menu-modules_stagebegeleiders:wie-is-wie',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_stages:stages',
  );
  // Exported menu link: menu-modules_stagegevers:organisaties/stagegever.
  $menu_links['menu-modules_stagegevers:organisaties/stagegever'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'organisaties/stagegever',
    'router_path' => 'organisaties',
    'link_title' => 'Stagegevers',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-modules_stagegevers:organisaties/stagegever',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_stages:stages',
  );
  // Exported menu link: menu-modules_stageperiodes:stages/periodes.
  $menu_links['menu-modules_stageperiodes:stages/periodes'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'stages/periodes',
    'router_path' => 'stages/periodes',
    'link_title' => 'Stageperiodes',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_stageperiodes:stages/periodes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_stages:stages',
  );
  // Exported menu link: menu-modules_stages:stages.
  $menu_links['menu-modules_stages:stages'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'stages',
    'router_path' => 'stages',
    'link_title' => 'Stages',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-modules_stages:stages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_pedagogischdidactisch:<nolink>',
  );
  // Exported menu link: navigation_stage:node/add/stage.
  $menu_links['navigation_stage:node/add/stage'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/stage',
    'router_path' => 'node/add/stage',
    'link_title' => 'Stage',
    'options' => array(
      'attributes' => array(
        'title' => 'Je kan je <em>stages</em> via deze module volledig in kaart brengen door leerlinge, stageperiodes en stagegevers aan elkaar te koppelen.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_stage:node/add/stage',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -22,
    'customized' => 1,
    'parent_identifier' => 'navigation_inhoud-toevoegen:node/add',
  );
  // Exported menu link: navigation_stageactiviteitenlijst:node/add/stageactiviteitenlijst.
  $menu_links['navigation_stageactiviteitenlijst:node/add/stageactiviteitenlijst'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/stageactiviteitenlijst',
    'router_path' => 'node/add/stageactiviteitenlijst',
    'link_title' => 'Stageactiviteitenlijst',
    'options' => array(
      'attributes' => array(
        'title' => 'Voor elke stage moet een lijst opgemaakt worden met mogelijke activiteiten. Deze <em>stageactiviteitenlijst</em> wordt opgenomen in het stagedossier.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_stageactiviteitenlijst:node/add/stageactiviteitenlijst',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -29,
    'customized' => 1,
    'parent_identifier' => 'navigation_stage:node/add/stage',
  );
  // Exported menu link: navigation_stagebezoek:node/add/stagebezoek.
  $menu_links['navigation_stagebezoek:node/add/stagebezoek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/stagebezoek',
    'router_path' => 'node/add/stagebezoek',
    'link_title' => 'Stagebezoek',
    'options' => array(
      'attributes' => array(
        'title' => 'Met deze module kan je je <em>stagebezoek</em> inplannen en opvolgen qua evaluatie en administratie.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_stagebezoek:node/add/stagebezoek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -28,
    'customized' => 1,
    'parent_identifier' => 'navigation_stage:node/add/stage',
  );
  // Exported menu link: navigation_stageperiode:node/add/stageperiode.
  $menu_links['navigation_stageperiode:node/add/stageperiode'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/stageperiode',
    'router_path' => 'node/add/stageperiode',
    'link_title' => 'Stageperiode',
    'options' => array(
      'attributes' => array(
        'title' => 'Met dit type wordt een <em>periode</em> vastgelegd met haar specifieke datums dat een <em>stage</em> zal plaats vinden.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_stageperiode:node/add/stageperiode',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -27,
    'customized' => 1,
    'parent_identifier' => 'navigation_stage:node/add/stage',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Stage');
  t('Stageactiviteitenlijst');
  t('Stageactiviteitenlijsten');
  t('Stagebegeleiders');
  t('Stagebezoek');
  t('Stagegevers');
  t('Stageperiode');
  t('Stageperiodes');
  t('Stages');

  return $menu_links;
}
