<?php
/**
 * @file
 * argus_uurrooster_vervanging.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_uurrooster_vervanging_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_uurrooster_vervanging';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_uurrooster_vervanging';
  $strongarm->value = '[node:field-tijdstip:value:custom:d-m-Y] : [node:field_uurr_vervanging_vervmoment] door [node:field_gebruiker]';
  $export['ant_pattern_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_uurrooster_vervanging';
  $strongarm->value = 0;
  $export['ant_php_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['ant_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_uurrooster_vervanging';
  $strongarm->value = 0;
  $export['comment_anonymous_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_uurrooster_vervanging';
  $strongarm->value = 0;
  $export['comment_default_mode_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_uurrooster_vervanging';
  $strongarm->value = '50';
  $export['comment_default_per_page_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['comment_form_location_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['comment_preview_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['comment_subject_field_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['comment_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_uurrooster_vervanging';
  $strongarm->value = array(
    'view_own' => array(
      0 => 163,
      1 => 217,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 274,
      6 => 218,
      7 => 219,
    ),
    'view' => array(
      0 => 163,
      1 => 216,
      2 => 217,
      3 => 3,
      4 => 86,
      5 => 225,
      6 => 274,
      7 => 218,
      8 => 219,
    ),
  );
  $export['content_access_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_uurrooster_vervanging';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__uurrooster_vervanging';
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
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'domain' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_uurrooster_vervanging';
  $strongarm->value = '0';
  $export['language_content_type_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_uurrooster_vervanging';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_uurrooster_vervanging';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__uurrooster_vervanging';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_uurrooster_vervanging';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['node_preview_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_uurrooster_vervanging';
  $strongarm->value = '1';
  $export['node_submitted_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_uurrooster_vervanging_pattern';
  $strongarm->value = '';
  $export['pathauto_node_uurrooster_vervanging_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_uurrooster_vervanging';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_uurrooster_vervanging';
  $strongarm->value = array();
  $export['simplify_comments_uurrooster_vervanging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_uurrooster_vervanging';
  $strongarm->value = array();
  $export['simplify_nodes_uurrooster_vervanging'] = $strongarm;

  return $export;
}
