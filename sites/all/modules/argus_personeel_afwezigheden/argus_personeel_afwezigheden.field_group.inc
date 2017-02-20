<?php
/**
 * @file
 * argus_personeel_afwezigheden.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_personeel_afwezigheden_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vaste_vervangers|node|personeel_afwezigheid|form';
  $field_group->group_name = 'group_vaste_vervangers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personeel_afwezigheid';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vaste vervangers',
    'weight' => '10',
    'children' => array(
      0 => 'field_pers_afwezigheid_verv_les',
      1 => 'field_pers_afwezigheid_verv_perm',
      2 => 'field_pers_afwezigheid_verv_toez',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vaste-vervangers field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_vaste_vervangers|node|personeel_afwezigheid|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Vaste vervangers');

  return $field_groups;
}
