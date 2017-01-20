<?php
/**
 * @file
 * argus_hrm.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_hrm_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_hrm-workload:admin/config/argus/hrm/workload.
  $menu_links['management_hrm-workload:admin/config/argus/hrm/workload'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/argus/hrm/workload',
    'router_path' => 'admin/config/argus/hrm/workload',
    'link_title' => 'HRM: workload',
    'options' => array(
      'attributes' => array(
        'title' => '.',
      ),
      'alter' => TRUE,
      'identifier' => 'management_hrm-workload:admin/config/argus/hrm/workload',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'management_argus:admin/config/argus',
  );
  // Exported menu link: menu-modules_hrm:node/89093.
  $menu_links['menu-modules_hrm:node/89093'] = array(
    'menu_name' => 'menu-modules',
    'link_path' => 'node/89093',
    'router_path' => 'node/%',
    'link_title' => 'HRM',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-modules_hrm:node/89093',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-modules_personeel:<nolink>',
  );
  // Exported menu link: navigation_hrm---evaluatiegesprek:node/add/hrm-evaluatiegesprek.
  $menu_links['navigation_hrm---evaluatiegesprek:node/add/hrm-evaluatiegesprek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hrm-evaluatiegesprek',
    'router_path' => 'node/add/hrm-evaluatiegesprek',
    'link_title' => 'HRM - Evaluatiegesprek',
    'options' => array(
      'attributes' => array(
        'title' => 'Stel een gedetailleerde beoordeling op van je personeelslid aan de hand van het <em>evaluatiegesprek</em>.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_hrm---evaluatiegesprek:node/add/hrm-evaluatiegesprek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'navigation_een-nieuwe-persoon-toevoegen:gebruikersregistratie',
  );
  // Exported menu link: navigation_hrm---flitsbezoek:node/add/hrm-flitsbezoek.
  $menu_links['navigation_hrm---flitsbezoek:node/add/hrm-flitsbezoek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hrm-flitsbezoek',
    'router_path' => 'node/add/hrm-flitsbezoek',
    'link_title' => 'HRM - Flitsbezoek',
    'options' => array(
      'attributes' => array(
        'title' => 'Tijdens een flitsbezoek richt u zich op de onderwijspraktijk van de leraar: welke keuzes en beslissingen maakt de leraar met betrekking tot de activiteiten en interventies in relatie tot het leerdoel? Met de daaraan gekoppelde reflectieve dialoog ontwikkelt u bij de leraar een reflectieve houding. U stimuleert de leraar om bewust na te denken over zijn onderwijspraktijk en over zijn eigen gedrag. Hierdoor ontstaat een continue cyclus van zelfanalyse en verbetering. Flitsbezoek levert een positieve bijdrage aan uw onderwijskundig leiderschap en aan het handelen van de leraren.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_hrm---flitsbezoek:node/add/hrm-flitsbezoek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'navigation_een-nieuwe-persoon-toevoegen:gebruikersregistratie',
  );
  // Exported menu link: navigation_hrm---functioneringsgesprek:node/add/hrm-functioneringsgesprek.
  $menu_links['navigation_hrm---functioneringsgesprek:node/add/hrm-functioneringsgesprek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hrm-functioneringsgesprek',
    'router_path' => 'node/add/hrm-functioneringsgesprek',
    'link_title' => 'HRM - Functioneringsgesprek',
    'options' => array(
      'attributes' => array(
        'title' => 'Om je personeelslid goed te kunnen begeleiden, worden afspraken geformaliseerd tijdens een <em>functioneringsgesprek</em>.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_hrm---functioneringsgesprek:node/add/hrm-functioneringsgesprek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'navigation_een-nieuwe-persoon-toevoegen:gebruikersregistratie',
  );
  // Exported menu link: navigation_hrm---klasbezoek:node/add/hrm-klasbezoek.
  $menu_links['navigation_hrm---klasbezoek:node/add/hrm-klasbezoek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hrm-klasbezoek',
    'router_path' => 'node/add/hrm-klasbezoek',
    'link_title' => 'HRM - Klasbezoek',
    'options' => array(
      'attributes' => array(
        'title' => 'Begeleid je medewerkers via een <em>klasbezoek</em>; aan de hand van een structuur gebaseerd op de DOKK-tool. Dit is geen evaluatie-instrument, maar legt de nadruk op observeren, analyseren en feedback geven in een ontwikkelend perspectief. De professionele ontwikkeling van de leerkracht staat centraal, niet de evaluatie. (http://pro.g-o.be/blog/Documents/20150305_DOKK-tool_so.pdf)',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_hrm---klasbezoek:node/add/hrm-klasbezoek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'navigation_een-nieuwe-persoon-toevoegen:gebruikersregistratie',
  );
  // Exported menu link: navigation_hrm---planningsgesprek:node/add/hrm-planningsgesprek.
  $menu_links['navigation_hrm---planningsgesprek:node/add/hrm-planningsgesprek'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/hrm-planningsgesprek',
    'router_path' => 'node/add/hrm-planningsgesprek',
    'link_title' => 'HRM - Planningsgesprek',
    'options' => array(
      'attributes' => array(
        'title' => 'Als onderdeel van het evaluatietraject van personeelsleden, is het <em>planningsgesprek</em> de eerste stap in de start van deze procedure.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_hrm---planningsgesprek:node/add/hrm-planningsgesprek',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'navigation_een-nieuwe-persoon-toevoegen:gebruikersregistratie',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('HRM');
  t('HRM - Evaluatiegesprek');
  t('HRM - Flitsbezoek');
  t('HRM - Functioneringsgesprek');
  t('HRM - Klasbezoek');
  t('HRM - Planningsgesprek');
  t('HRM: workload');

  return $menu_links;
}
