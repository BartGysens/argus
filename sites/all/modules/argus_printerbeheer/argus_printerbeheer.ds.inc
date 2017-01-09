<?php
/**
 * @file
 * argus_printerbeheer.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function argus_printerbeheer_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_printer_accessoire|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_printer_accessoire';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_printer_accessoire_type',
        1 => 'field_printer_accessoire_merk',
        2 => 'field_printer_accessoire_model',
      ),
      'right' => array(
        3 => 'field_printer_accessoire_prijs',
        4 => 'field_printer_accessoire_voorraa',
        5 => 'field_printer_accessoire_minimum',
      ),
      'footer' => array(
        6 => 'field_printer_accessoire_link',
      ),
    ),
    'fields' => array(
      'field_printer_accessoire_type' => 'left',
      'field_printer_accessoire_merk' => 'left',
      'field_printer_accessoire_model' => 'left',
      'field_printer_accessoire_prijs' => 'right',
      'field_printer_accessoire_voorraa' => 'right',
      'field_printer_accessoire_minimum' => 'right',
      'field_printer_accessoire_link' => 'footer',
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
  $export['field_collection_item|field_printer_accessoire|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_printer_accessoire|token';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_printer_accessoire';
  $ds_layout->view_mode = 'token';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_printer_accessoire_type',
      ),
      'right' => array(
        1 => 'field_printer_accessoire_voorraa',
      ),
    ),
    'fields' => array(
      'field_printer_accessoire_type' => 'left',
      'field_printer_accessoire_voorraa' => 'right',
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
  $export['field_collection_item|field_printer_accessoire|token'] = $ds_layout;

  return $export;
}
