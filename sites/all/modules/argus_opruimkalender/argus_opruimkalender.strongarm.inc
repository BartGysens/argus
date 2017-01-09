<?php
/**
 * @file
 * argus_opruimkalender.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_opruimkalender_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_event_opruim_speelplaats';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_event_opruim_speelplaats';
  $strongarm->value = '0';
  $export['ant_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_event_opruim_speelplaats';
  $strongarm->value = '';
  $export['ant_pattern_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_event_opruim_speelplaats';
  $strongarm->value = 0;
  $export['ant_php_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_event_opruim_speelplaats';
  $strongarm->value = 0;
  $export['comment_anonymous_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_event_opruim_speelplaats';
  $strongarm->value = '1';
  $export['comment_default_mode_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_event_opruim_speelplaats';
  $strongarm->value = '50';
  $export['comment_default_per_page_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_event_opruim_speelplaats';
  $strongarm->value = '0';
  $export['comment_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_event_opruim_speelplaats';
  $strongarm->value = '1';
  $export['comment_form_location_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_event_opruim_speelplaats';
  $strongarm->value = '1';
  $export['comment_preview_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_event_opruim_speelplaats';
  $strongarm->value = '1';
  $export['comment_subject_field_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_event_opruim_speelplaats';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__event_opruim_speelplaats';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event_opruim_speelplaats';
  $strongarm->value = '0';
  $export['language_content_type_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event_opruim_speelplaats';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event_opruim_speelplaats';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__event_opruim_speelplaats';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event_opruim_speelplaats';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event_opruim_speelplaats';
  $strongarm->value = '1';
  $export['node_preview_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event_opruim_speelplaats';
  $strongarm->value = '1';
  $export['node_submitted_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_opruim_speelplaats_pattern';
  $strongarm->value = 'events/opruim-speelplaats/[node:title]';
  $export['pathauto_node_event_opruim_speelplaats_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_event_opruim_speelplaats';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_event_opruim_speelplaats';
  $strongarm->value = array();
  $export['simplify_comments_event_opruim_speelplaats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_event_opruim_speelplaats';
  $strongarm->value = array();
  $export['simplify_nodes_event_opruim_speelplaats'] = $strongarm;

  return $export;
}
