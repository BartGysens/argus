<?php
/**
 * @file
 * argus_organisaties.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_organisaties_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_algemene_contact|node|organisatie|default';
  $field_group->group_name = 'group_algemene_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Algemene contactgegevens',
    'weight' => '1',
    'children' => array(
      0 => 'field_straat',
      1 => 'field_huisnummer',
      2 => 'field_busnummer',
      3 => 'field_postcode',
      4 => 'field_gemeente',
      5 => 'field_email',
      6 => 'field_telefoonnummer',
      7 => 'field_faxnummer',
      8 => 'field_website',
      9 => 'field_land',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-algemene-contact field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_algemene_contact|node|organisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contactpersoon|node|organisatie|form';
  $field_group->group_name = 'group_contactpersoon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contactpersoon',
    'weight' => '3',
    'children' => array(
      0 => 'field_org_contact_naam',
      1 => 'field_org_contact_voornaam',
      2 => 'field_org_contact_telefoonnummer',
      3 => 'field_org_contact_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contactpersoon',
      'instance_settings' => array(
        'required_fields' => '1',
        'id' => '',
        'classes' => 'group-contactpersoon field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_contactpersoon|node|organisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|organisatie|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contactpersoon',
    'weight' => '5',
    'children' => array(
      0 => 'field_org_contact_naam',
      1 => 'field_org_contact_voornaam',
      2 => 'field_org_contact_telefoonnummer',
      3 => 'field_org_contact_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|node|organisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|organisatie|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Algemene contactgegevens',
    'weight' => '2',
    'children' => array(
      0 => 'field_straat',
      1 => 'field_huisnummer',
      2 => 'field_busnummer',
      3 => 'field_postcode',
      4 => 'field_gemeente',
      5 => 'field_email',
      6 => 'field_telefoonnummer',
      7 => 'field_faxnummer',
      8 => 'field_website',
      9 => 'field_land',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Algemene contactgegevens',
      'instance_settings' => array(
        'required_fields' => '1',
        'id' => '',
        'classes' => 'group-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_contact|node|organisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extra_informatie|node|organisatie|form';
  $field_group->group_name = 'group_extra_informatie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra informatie',
    'weight' => '6',
    'children' => array(
      0 => 'field_kbo_nummer',
      1 => 'field_paritair_comit_',
      2 => 'field_nace_code',
      3 => 'field_sectorcode',
      4 => 'field_rsz_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Extra informatie',
      'instance_settings' => array(
        'required_fields' => '1',
        'id' => '',
        'classes' => 'group-extra-informatie field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_extra_informatie|node|organisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extra|node|organisatie|default';
  $field_group->group_name = 'group_extra';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra informatie',
    'weight' => '8',
    'children' => array(
      0 => 'field_kbo_nummer',
      1 => 'field_paritair_comit_',
      2 => 'field_nace_code',
      3 => 'field_sectorcode',
      4 => 'field_rsz_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-extra field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_extra|node|organisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leverancier|node|organisatie|default';
  $field_group->group_name = 'group_leverancier';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Leverancier',
    'weight' => '7',
    'children' => array(
      0 => 'field_bankrekeningnummer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-leverancier field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_leverancier|node|organisatie|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leverancier|node|organisatie|form';
  $field_group->group_name = 'group_leverancier';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Leverancier',
    'weight' => '5',
    'children' => array(
      0 => 'field_bankrekeningnummer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Leverancier',
      'instance_settings' => array(
        'required_fields' => '1',
        'id' => '',
        'classes' => 'group-leverancier field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_leverancier|node|organisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stagementor|node|organisatie|form';
  $field_group->group_name = 'group_stagementor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stagementor',
    'weight' => '4',
    'children' => array(
      0 => 'field_org_stagementor_naam',
      1 => 'field_org_stagementor_voornaam',
      2 => 'field_org_stagementor_email',
      3 => 'field_org_stagementor_telefoon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Stagementor',
      'instance_settings' => array(
        'required_fields' => '1',
        'id' => '',
        'classes' => 'group-stagementor field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_stagementor|node|organisatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stage|node|organisatie|default';
  $field_group->group_name = 'group_stage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisatie';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stagementor',
    'weight' => '6',
    'children' => array(
      0 => 'field_org_stagementor_naam',
      1 => 'field_org_stagementor_voornaam',
      2 => 'field_org_stagementor_email',
      3 => 'field_org_stagementor_telefoon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stage field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_stage|node|organisatie|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Algemene contactgegevens');
  t('Contactpersoon');
  t('Extra informatie');
  t('Leverancier');
  t('Stagementor');

  return $field_groups;
}
