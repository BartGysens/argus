<?php
/**
 * @file
 * argus_hardware.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function argus_hardware_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ict_hardware|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ict_hardware';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ict_hardware|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function argus_hardware_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ict_hardware|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ict_hardware';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'comments',
        1 => 'domain',
        2 => 'field_hardware_naam',
        3 => 'field_hardware_type',
        4 => 'field_hardware_merk',
        5 => 'field_hardware_model',
        6 => 'field_hardware_in_gebruik',
        7 => 'field_hardware_status',
        8 => 'field_hardware_ip_adres',
        9 => 'field_hardware_mac_adres',
        10 => 'field_hardware_omschrijving',
        11 => 'field_lokaal',
      ),
    ),
    'fields' => array(
      'comments' => 'left',
      'domain' => 'left',
      'field_hardware_naam' => 'left',
      'field_hardware_type' => 'left',
      'field_hardware_merk' => 'left',
      'field_hardware_model' => 'left',
      'field_hardware_in_gebruik' => 'left',
      'field_hardware_status' => 'left',
      'field_hardware_ip_adres' => 'left',
      'field_hardware_mac_adres' => 'left',
      'field_hardware_omschrijving' => 'left',
      'field_lokaal' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => '1',
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|ict_hardware|full'] = $ds_layout;

  return $export;
}
