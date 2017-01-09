<?php
/**
 * @file
 * argus_sleutelbeheer.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function argus_sleutelbeheer_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sleutel|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sleutel';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'changed_date' => array(
      'weight' => '7',
      'label' => 'inline',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|sleutel|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function argus_sleutelbeheer_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_sleutel_uitlening|token';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_sleutel_uitlening';
  $ds_layout->view_mode = 'token';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_sleutel_uitlening_uitlener',
        1 => 'field_sleutel_uitlening_borg',
      ),
      'right' => array(
        2 => 'field_sleutel_datum_uitgeleend',
        3 => 'field_sleutel_uitlening_duur',
      ),
    ),
    'fields' => array(
      'field_sleutel_uitlening_uitlener' => 'left',
      'field_sleutel_uitlening_borg' => 'left',
      'field_sleutel_datum_uitgeleend' => 'right',
      'field_sleutel_uitlening_duur' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_sleutel_uitlening|token'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sleutel|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sleutel';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_sleutel_nummer',
        1 => 'field_sleutel_omschrijving',
        2 => 'field_sleutel_vrijgave',
      ),
      'right' => array(
        3 => 'field_sleutel_locatie',
        4 => 'field_sleutel_type',
        5 => 'field_sleutel_kleurcode',
      ),
      'footer' => array(
        6 => 'field_sleutel_totaal_aantal',
        7 => 'changed_date',
        8 => 'field_sleutel_uitlening',
      ),
    ),
    'fields' => array(
      'field_sleutel_nummer' => 'left',
      'field_sleutel_omschrijving' => 'left',
      'field_sleutel_vrijgave' => 'left',
      'field_sleutel_locatie' => 'right',
      'field_sleutel_type' => 'right',
      'field_sleutel_kleurcode' => 'right',
      'field_sleutel_totaal_aantal' => 'footer',
      'changed_date' => 'footer',
      'field_sleutel_uitlening' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|sleutel|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|token';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'token';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_user_sms_naam',
        1 => 'field_user_sms_voornaam',
      ),
    ),
    'fields' => array(
      'field_user_sms_naam' => 'ds_content',
      'field_user_sms_voornaam' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
  );
  $export['user|user|token'] = $ds_layout;

  return $export;
}
