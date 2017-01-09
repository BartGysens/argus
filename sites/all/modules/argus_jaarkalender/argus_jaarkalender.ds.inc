<?php
/**
 * @file
 * argus_jaarkalender.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function argus_jaarkalender_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event_jaarkalender|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event_jaarkalender';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_ev_datum',
        3 => 'field_ev_kleur',
      ),
      'left' => array(
        1 => 'field_ev_beschrijving',
      ),
      'right' => array(
        2 => 'field_ev_locatie',
      ),
    ),
    'fields' => array(
      'field_ev_datum' => 'header',
      'field_ev_beschrijving' => 'left',
      'field_ev_locatie' => 'right',
      'field_ev_kleur' => 'header',
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
  $export['node|event_jaarkalender|default'] = $ds_layout;

  return $export;
}
