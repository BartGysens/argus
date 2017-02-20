<?php
/**
 * @file
 * argus_deliberaties.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_deliberaties_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_lvs_deliberatie';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_lvs_deliberatie';
  $strongarm->value = '1';
  $export['ant_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_lvs_deliberatie';
  $strongarm->value = '[node:field-lvs-deliberatie-leerling] - deliberatie van schooljaar [node:field-lvs-deliberatie-schooljaar]';
  $export['ant_pattern_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_lvs_deliberatie';
  $strongarm->value = 0;
  $export['ant_php_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'argus_sms_data_skore_deliberations_file';
  $strongarm->value = 0;
  $export['argus_sms_data_skore_deliberations_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'argus_sms_data_skore_deliberations_now';
  $strongarm->value = 'Importeer de deliberaties';
  $export['argus_sms_data_skore_deliberations_now'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'argus_sms_data_skore_deliberations_schoolyear';
  $strongarm->value = '2015';
  $export['argus_sms_data_skore_deliberations_schoolyear'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clone_reset_lvs_deliberatie';
  $strongarm->value = 0;
  $export['clone_reset_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_lvs_deliberatie';
  $strongarm->value = 0;
  $export['comment_anonymous_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_lvs_deliberatie';
  $strongarm->value = 0;
  $export['comment_default_mode_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_lvs_deliberatie';
  $strongarm->value = '50';
  $export['comment_default_per_page_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_lvs_deliberatie';
  $strongarm->value = 0;
  $export['comment_form_location_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_lvs_deliberatie';
  $strongarm->value = '1';
  $export['comment_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_lvs_deliberatie';
  $strongarm->value = '0';
  $export['comment_preview_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_lvs_deliberatie';
  $strongarm->value = 0;
  $export['comment_subject_field_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_lvs_deliberatie';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__lvs_deliberatie';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '24',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '23',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_lvs_deliberatie';
  $strongarm->value = '0';
  $export['language_content_type_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_lvs_deliberatie';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_lvs_deliberatie';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__lvs_deliberatie';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_lvs_deliberatie';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_lvs_deliberatie';
  $strongarm->value = '1';
  $export['node_preview_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_lvs_deliberatie';
  $strongarm->value = 1;
  $export['node_submitted_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_lvs_deliberatie_pattern';
  $strongarm->value = 'lvs/deliberatie/[node:title]';
  $export['pathauto_node_lvs_deliberatie_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_lvs_deliberatie';
  $strongarm->value = array();
  $export['simplify_comments_lvs_deliberatie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_lvs_deliberatie';
  $strongarm->value = array();
  $export['simplify_nodes_lvs_deliberatie'] = $strongarm;

  return $export;
}
