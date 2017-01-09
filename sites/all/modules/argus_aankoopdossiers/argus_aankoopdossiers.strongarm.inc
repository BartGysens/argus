<?php
/**
 * @file
 * argus_aankoopdossiers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_aankoopdossiers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_aankoopdossier';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ta_aankoopdossier';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_aankoopdossier';
  $strongarm->value = '0';
  $export['ant_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_aankoopdossier';
  $strongarm->value = '';
  $export['ant_pattern_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_ta_aankoopdossier';
  $strongarm->value = '';
  $export['ant_pattern_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_aankoopdossier';
  $strongarm->value = 0;
  $export['ant_php_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_ta_aankoopdossier';
  $strongarm->value = 0;
  $export['ant_php_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_ta_aankoopdossier';
  $strongarm->value = '0';
  $export['ant_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_aankoopdossier';
  $strongarm->value = '1';
  $export['comment_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_aankoopdossier';
  $strongarm->value = 0;
  $export['comment_anonymous_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_aankoopdossier';
  $strongarm->value = 0;
  $export['comment_default_mode_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_aankoopdossier';
  $strongarm->value = '50';
  $export['comment_default_per_page_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_aankoopdossier';
  $strongarm->value = '1';
  $export['comment_form_location_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_aankoopdossier';
  $strongarm->value = '1';
  $export['comment_preview_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_aankoopdossier';
  $strongarm->value = '1';
  $export['comment_subject_field_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_aankoopdossier';
  $strongarm->value = array(
    'view_own' => array(
      0 => 85,
      1 => 3,
      2 => 86,
      3 => 225,
      4 => 218,
      5 => 219,
    ),
    'view' => array(
      0 => 85,
      1 => 82,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 218,
      6 => 219,
    ),
  );
  $export['content_access_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_aankoopdossier';
  $strongarm->value = array(
    0 => 'argus_kta1_hasselt_be',
  );
  $export['domain_node_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__aankoopdossier';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '11',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'domain' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_aankoopdossier';
  $strongarm->value = '0';
  $export['language_content_type_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ta_aankoopdossier';
  $strongarm->value = '0';
  $export['language_content_type_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_aankoopdossier';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-mijn-werkruimte',
    2 => 'menu-modules',
    3 => 'navigation',
    4 => 'menu-menu-website',
  );
  $export['menu_options_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ta_aankoopdossier';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_aankoopdossier';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ta_aankoopdossier';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__aankoopdossier';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_aankoopdossier';
  $strongarm->value = '0';
  $export['new_revisions_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_aankoopdossier';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ta_aankoopdossier';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_aankoopdossier';
  $strongarm->value = '1';
  $export['node_preview_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_aankoopdossier';
  $strongarm->value = '1';
  $export['node_submitted_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ta_aankoopdossier';
  $strongarm->value = 1;
  $export['node_submitted_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_aankoopdossier_pattern';
  $strongarm->value = 'aankoopdossier/[node:title]';
  $export['pathauto_node_aankoopdossier_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_aankoopdossier';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_aankoopdossier';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ta_aankoopdossier';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_aankoopdossier';
  $strongarm->value = array();
  $export['simplify_comments_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_ta_aankoopdossier';
  $strongarm->value = array();
  $export['simplify_comments_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_aankoopdossier';
  $strongarm->value = array();
  $export['simplify_nodes_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_ta_aankoopdossier';
  $strongarm->value = array();
  $export['simplify_nodes_ta_aankoopdossier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_aankoopdossier';
  $strongarm->value = 0;
  $export['webform_node_aankoopdossier'] = $strongarm;

  return $export;
}
