<?php
/**
 * @file
 * argus_hrm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function argus_hrm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function argus_hrm_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function argus_hrm_node_info() {
  $items = array(
    'hrm_evaluatiegesprek' => array(
      'name' => t('HRM - Evaluatiegesprek'),
      'base' => 'node_content',
      'description' => t('Stel een gedetailleerde beoordeling op van je personeelslid aan de hand van het <em>evaluatiegesprek</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_flitsbezoek' => array(
      'name' => t('HRM - Flitsbezoek'),
      'base' => 'node_content',
      'description' => t('Tijdens een flitsbezoek richt u zich op de onderwijspraktijk van de leraar: welke keuzes en beslissingen maakt de leraar met betrekking tot de activiteiten en interventies in relatie tot het leerdoel? Met de daaraan gekoppelde reflectieve dialoog ontwikkelt u bij de leraar een reflectieve houding. U stimuleert de leraar om bewust na te denken over zijn onderwijspraktijk en over zijn eigen gedrag. Hierdoor ontstaat een continue cyclus van zelfanalyse en verbetering. Flitsbezoek levert een positieve bijdrage aan uw onderwijskundig leiderschap en aan het handelen van de leraren.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_functioneringsgesprek' => array(
      'name' => t('HRM - Functioneringsgesprek'),
      'base' => 'node_content',
      'description' => t('Om je personeelslid goed te kunnen begeleiden, worden afspraken geformaliseerd tijdens een <em>functioneringsgesprek</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_klasbezoek' => array(
      'name' => t('HRM - Klasbezoek'),
      'base' => 'node_content',
      'description' => t('Begeleid je medewerkers via een <em>klasbezoek</em>; aan de hand van een structuur gebaseerd op de DOKK-tool. Dit is geen evaluatie-instrument, maar legt de nadruk op observeren, analyseren en feedback geven in een ontwikkelend perspectief. De professionele ontwikkeling van de leerkracht staat centraal, niet de evaluatie. (http://pro.g-o.be/blog/Documents/20150305_DOKK-tool_so.pdf)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hrm_planningsgesprek' => array(
      'name' => t('HRM - Planningsgesprek'),
      'base' => 'node_content',
      'description' => t('Als onderdeel van het evaluatietraject van personeelsleden, is het <em>planningsgesprek</em> de eerste stap in de start van deze procedure.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
