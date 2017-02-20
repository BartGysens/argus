<?php
/**
 * @file
 * argus_klassenraden.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_klassenraden_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_lvs_klassenraad';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_lvs_klassenraad_notitie';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_lvs_klassenraad';
  $strongarm->value = '1';
  $export['ant_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_lvs_klassenraad_notitie';
  $strongarm->value = '1';
  $export['ant_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_lvs_klassenraad';
  $strongarm->value = '[node:field-benaming] ([node:field_tijdstip])';
  $export['ant_pattern_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_lvs_klassenraad_notitie';
  $strongarm->value = 'Notitie: [node:field_leerling] - [node:field_klassenraad]';
  $export['ant_pattern_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_lvs_klassenraad';
  $strongarm->value = 0;
  $export['ant_php_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_lvs_klassenraad_notitie';
  $strongarm->value = 0;
  $export['ant_php_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_lvs_klassenraad';
  $strongarm->value = 0;
  $export['comment_anonymous_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_lvs_klassenraad_notitie';
  $strongarm->value = 0;
  $export['comment_anonymous_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_lvs_klassenraad';
  $strongarm->value = 0;
  $export['comment_default_mode_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_lvs_klassenraad_notitie';
  $strongarm->value = 0;
  $export['comment_default_mode_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_lvs_klassenraad';
  $strongarm->value = '50';
  $export['comment_default_per_page_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_lvs_klassenraad_notitie';
  $strongarm->value = '50';
  $export['comment_default_per_page_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_lvs_klassenraad';
  $strongarm->value = '1';
  $export['comment_form_location_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_lvs_klassenraad_notitie';
  $strongarm->value = '1';
  $export['comment_form_location_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_lvs_klassenraad';
  $strongarm->value = '1';
  $export['comment_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_lvs_klassenraad_notitie';
  $strongarm->value = '1';
  $export['comment_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_lvs_klassenraad';
  $strongarm->value = '1';
  $export['comment_preview_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_lvs_klassenraad_notitie';
  $strongarm->value = '1';
  $export['comment_preview_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_lvs_klassenraad';
  $strongarm->value = '1';
  $export['comment_subject_field_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_lvs_klassenraad_notitie';
  $strongarm->value = '1';
  $export['comment_subject_field_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_lvs_klassenraad_notitie';
  $strongarm->value = array(
    'view_own' => array(
      0 => 88,
      1 => 163,
      2 => 3,
      3 => 86,
      4 => 225,
      5 => 274,
      6 => 218,
      7 => 219,
    ),
    'view' => array(
      0 => 88,
      1 => 163,
      2 => 216,
      3 => 3,
      4 => 86,
      5 => 225,
      6 => 274,
      7 => 218,
      8 => 219,
    ),
  );
  $export['content_access_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_lvs_klassenraad';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_lvs_klassenraad_notitie';
  $strongarm->value = array(
    'argus_kta1_hasselt_be' => 'argus_kta1_hasselt_be',
    'DOMAIN_ALL' => 0,
    'DOMAIN_ACTIVE' => 0,
    'www_kta1_hasselt_be' => 0,
  );
  $export['domain_node_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__lvs_klassenraad';
  $strongarm->value = array(
    'view_modes' => array(
      'token' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
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
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'domain' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__lvs_klassenraad_notitie';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_lvs_klassenraad';
  $strongarm->value = '0';
  $export['language_content_type_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_lvs_klassenraad_notitie';
  $strongarm->value = '0';
  $export['language_content_type_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_lvs_klassenraad';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_lvs_klassenraad_notitie';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_lvs_klassenraad';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_lvs_klassenraad_notitie';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__lvs_klassenraad';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__lvs_klassenraad_notitie';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_lvs_klassenraad';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_lvs_klassenraad_notitie';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_lvs_klassenraad';
  $strongarm->value = '1';
  $export['node_preview_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_lvs_klassenraad_notitie';
  $strongarm->value = '1';
  $export['node_preview_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_lvs_klassenraad';
  $strongarm->value = '1';
  $export['node_submitted_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_lvs_klassenraad_notitie';
  $strongarm->value = '1';
  $export['node_submitted_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_lvs_klassenraad_notitie_pattern';
  $strongarm->value = 'lvs/klassenraad-notitie/[node:title]';
  $export['pathauto_node_lvs_klassenraad_notitie_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_lvs_klassenraad_pattern';
  $strongarm->value = 'lvs/klassenraad/[node:title]';
  $export['pathauto_node_lvs_klassenraad_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_lvs_klassenraad';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_lvs_klassenraad_notitie';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_lvs_klassenraad';
  $strongarm->value = array();
  $export['simplify_comments_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_lvs_klassenraad_notitie';
  $strongarm->value = array();
  $export['simplify_comments_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_lvs_klassenraad';
  $strongarm->value = array();
  $export['simplify_nodes_lvs_klassenraad'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_lvs_klassenraad_notitie';
  $strongarm->value = array();
  $export['simplify_nodes_lvs_klassenraad_notitie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_klassenraad_settings';
  $strongarm->value = array(
    'toggle_logo' => '1',
    'toggle_node_user_picture' => '1',
    'toggle_comment_user_picture' => '1',
    'toggle_favicon' => '1',
    'toggle_main_menu' => '1',
    'default_logo' => '1',
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => '1',
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => '1',
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'jquery_update_jquery_version' => '',
  );
  $export['theme_klassenraad_settings'] = $strongarm;

  return $export;
}
