<?php
/**
 * @file
 * argus_leerplichtbegeleiding.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_leerplichtbegeleiding_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_lvs_leerplichtbegeleiding';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_lvs_leerplichtbegeleiding';
  $strongarm->value = '1';
  $export['ant_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_lvs_leerplichtbegeleiding';
  $strongarm->value = 'Leerplichtbegeleidingsfiche voor [node:field-leerling] - 	[node:field-datum:value]';
  $export['ant_pattern_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_lvs_leerplichtbegeleiding';
  $strongarm->value = 0;
  $export['ant_php_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_lvs_leerplichtbegeleiding';
  $strongarm->value = 0;
  $export['comment_anonymous_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_lvs_leerplichtbegeleiding';
  $strongarm->value = 0;
  $export['comment_default_mode_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_lvs_leerplichtbegeleiding';
  $strongarm->value = '50';
  $export['comment_default_per_page_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_lvs_leerplichtbegeleiding';
  $strongarm->value = '1';
  $export['comment_form_location_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_lvs_leerplichtbegeleiding';
  $strongarm->value = '1';
  $export['comment_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_lvs_leerplichtbegeleiding';
  $strongarm->value = '1';
  $export['comment_preview_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_lvs_leerplichtbegeleiding';
  $strongarm->value = '1';
  $export['comment_subject_field_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_lvs_leerplichtbegeleiding';
  $strongarm->value = array(
    'view_own' => array(
      0 => 88,
      1 => 3,
      2 => 86,
      3 => 225,
      4 => 274,
      5 => 218,
      6 => 219,
    ),
    'view' => array(
      0 => 88,
      1 => 3,
      2 => 86,
      3 => 225,
      4 => 274,
      5 => 218,
      6 => 219,
    ),
    'update' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 88,
      4 => 274,
      5 => 218,
      6 => 219,
    ),
    'update_own' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 88,
      4 => 274,
      5 => 218,
      6 => 219,
    ),
    'delete' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 88,
      4 => 274,
      5 => 218,
      6 => 219,
    ),
    'delete_own' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 88,
      4 => 274,
      5 => 218,
      6 => 219,
    ),
  );
  $export['content_access_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_lvs_leerplichtbegeleiding';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_lvs_leerplichtbegeleiding';
  $strongarm->value = array();
  $export['field_bundle_settings_comment__comment_node_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__lvs_leerplichtbegeleiding';
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
        'domain' => array(
          'weight' => '6',
        ),
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_lvs_leerplichtbegeleiding';
  $strongarm->value = '0';
  $export['language_content_type_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_lvs_leerplichtbegeleiding';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_lvs_leerplichtbegeleiding';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__leerplichtbegeleiding';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'new_revisions_lvs_leerplichtbegeleiding';
  $strongarm->value = '0';
  $export['new_revisions_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_lvs_leerplichtbegeleiding';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_lvs_leerplichtbegeleiding';
  $strongarm->value = '1';
  $export['node_preview_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_lvs_leerplichtbegeleiding';
  $strongarm->value = '1';
  $export['node_submitted_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revisioning_auto_publish_lvs_leerplichtbegeleiding';
  $strongarm->value = 0;
  $export['revisioning_auto_publish_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_leerplichtbegeleiding';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_lvs_leerplichtbegeleiding';
  $strongarm->value = array();
  $export['simplify_comments_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_lvs_leerplichtbegeleiding';
  $strongarm->value = array();
  $export['simplify_nodes_lvs_leerplichtbegeleiding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_lvs_leerplichtbegeleiding';
  $strongarm->value = 0;
  $export['webform_node_lvs_leerplichtbegeleiding'] = $strongarm;

  return $export;
}
