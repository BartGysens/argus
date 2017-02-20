<?php
/**
 * @file
 * argus_gebruikers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_gebruikers_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'field_user_group_argus_sms|user|user|form';
  $field_group->group_name = 'field_user_group_argus_sms';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra gegevens uit Smartschool',
    'weight' => '9',
    'children' => array(
      0 => 'field_user_sms_internnummer',
      1 => 'field_user_sms_gebruikersnaam',
      2 => 'field_user_sms_status',
      3 => 'field_user_sms_klasnummer',
      4 => 'field_user_tmp_pwhfd',
      5 => 'field_user_sms_soortleerling',
      6 => 'group_algemeen',
      7 => 'group_adres',
      8 => 'group_ouders',
      9 => 'group_medls',
      10 => 'group_extra',
      11 => 'group_hrm',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Extra gegevens uit Smartschool',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Deze gegevens worden uit Smartschool gehaald, als je deze gegevens aanpast dan worden ze opnieuw overschreven bij een synchronisatie. Als je dit wil voorkomen, dien je dus de gegevens in Smartschool aan te passen.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['field_user_group_argus_sms|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adres|user|user|form';
  $field_group->group_name = 'group_adres';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'field_user_group_argus_sms';
  $field_group->data = array(
    'label' => 'Adresgegevens',
    'weight' => '109',
    'children' => array(
      0 => 'field_user_sms_straat',
      1 => 'field_user_sms_huisnummer',
      2 => 'field_user_sms_busnummer',
      3 => 'field_user_sms_postcode',
      4 => 'field_user_sms_woonplaats',
      5 => 'field_user_sms_land',
      6 => 'field_user_sms_nationaliteitscod',
      7 => 'field_user_sms_nationaliteit',
      8 => 'field_user_sms_woonplaats___deel',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Adresgegevens',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-adres field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_adres|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_algemeen|user|user|form';
  $field_group->group_name = 'group_algemeen';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'field_user_group_argus_sms';
  $field_group->data = array(
    'label' => 'Algemeen',
    'weight' => '108',
    'children' => array(
      0 => 'field_user_sms_extravoornamen',
      1 => 'field_user_sms_initialen',
      2 => 'field_user_sms_geboorteplaats',
      3 => 'field_user_sms_geboorteland',
      4 => 'field_user_sms_rijksregisternumm',
      5 => 'field_user_sms_website',
      6 => 'field_user_sms_instantmessenger',
      7 => 'field_user_sms_stamboeknummer',
      8 => 'field_user_sms_koppelingsveldsch',
      9 => 'field_user_sms_sorteerveld',
      10 => 'field_user_sms_basisrol',
      11 => 'field_user_sms_geslacht',
      12 => 'field_user_sms_geboortedatum',
      13 => 'field_user_sms_telefoonnummer',
      14 => 'field_user_sms_emailadres',
      15 => 'field_user_sms_mobielnummer',
      16 => 'field_user_sms_fax',
      17 => 'field_user_sms_roepnaam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Algemeen',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-algemeen field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_algemeen|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_algemenegegevens|user|user|default';
  $field_group->group_name = 'group_algemenegegevens';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Algemene gegevens',
    'weight' => '3',
    'children' => array(
      0 => 'group_vtab_algemeen',
      1 => 'group_vtab_adres',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_algemenegegevens|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bijz_toel|user|user|form';
  $field_group->group_name = 'group_bijz_toel';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Bijzondere toelatingen',
    'weight' => '284',
    'children' => array(
      0 => 'field_user_sms_s_middags_buiten_',
      1 => 'field_user_sms_toelating_te_laat',
      2 => 'field_user_sms_toelating_vroeger',
      3 => 'field_user_sms_gebruikt_laptop_i',
      4 => 'field_user_sms_ouders',
      5 => 'field_user_sms_ouders_niet_meer_',
      6 => 'field_user_sms_ouders_informeren',
      7 => 'field_user_sms_toelating_gebruik',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bijzondere toelatingen',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bijz-toel field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_bijz_toel|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount1|user|user|default';
  $field_group->group_name = 'group_coaccount1';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vtab_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account1',
    'weight' => '238',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount1',
      1 => 'field_user_sms_type_coaccount1',
      2 => 'field_user_sms_email_coaccount1',
      3 => 'field_user_sms_voornaam_coac1',
      4 => 'field_user_sms_telnummer_coac1',
      5 => 'field_user_sms_mobielnr_coac1',
      6 => 'field_user_tmp_pwco1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount1 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount1|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount1|user|user|form';
  $field_group->group_name = 'group_coaccount1';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account1',
    'weight' => '21',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount1',
      1 => 'field_user_sms_type_coaccount1',
      2 => 'field_user_sms_email_coaccount1',
      3 => 'field_user_sms_voornaam_coac1',
      4 => 'field_user_sms_telnummer_coac1',
      5 => 'field_user_sms_mobielnr_coac1',
      6 => 'field_user_tmp_pwco1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount1|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount2|user|user|default';
  $field_group->group_name = 'group_coaccount2';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vtab_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account2',
    'weight' => '239',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount2',
      1 => 'field_user_sms_type_coaccount2',
      2 => 'field_user_sms_email_coaccount2',
      3 => 'field_user_sms_voornaam_coac2',
      4 => 'field_user_sms_telnummer_coac2',
      5 => 'field_user_sms_mobielnr_coac2',
      6 => 'field_user_tmp_pwco2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount2 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount2|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount2|user|user|form';
  $field_group->group_name = 'group_coaccount2';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account2',
    'weight' => '22',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount2',
      1 => 'field_user_sms_type_coaccount2',
      2 => 'field_user_sms_email_coaccount2',
      3 => 'field_user_sms_voornaam_coac2',
      4 => 'field_user_sms_telnummer_coac2',
      5 => 'field_user_sms_mobielnr_coac2',
      6 => 'field_user_tmp_pwco2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount2|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount3|user|user|default';
  $field_group->group_name = 'group_coaccount3';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vtab_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account3',
    'weight' => '240',
    'children' => array(
      0 => 'field_user_sms_voornaam_coaccoun',
      1 => 'field_user_sms_naam_coaccount3',
      2 => 'field_user_sms_email_coaccount3',
      3 => 'field_user_sms_telefoonnummer_co',
      4 => 'field_user_sms_mobielnummer_coac',
      5 => 'field_user_sms_type_coaccount3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount3 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount3|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount3|user|user|form';
  $field_group->group_name = 'group_coaccount3';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account3',
    'weight' => '23',
    'children' => array(
      0 => 'field_user_sms_voornaam_coaccoun',
      1 => 'field_user_sms_naam_coaccount3',
      2 => 'field_user_sms_email_coaccount3',
      3 => 'field_user_sms_telefoonnummer_co',
      4 => 'field_user_sms_mobielnummer_coac',
      5 => 'field_user_sms_type_coaccount3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount3 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount3|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount4|user|user|default';
  $field_group->group_name = 'group_coaccount4';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vtab_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account4',
    'weight' => '241',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount4',
      1 => 'field_user_sms_email_coaccount4',
      2 => 'field_user_sms_type_coaccount4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount4 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount4|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount4|user|user|form';
  $field_group->group_name = 'group_coaccount4';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account4',
    'weight' => '24',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount4',
      1 => 'field_user_sms_email_coaccount4',
      2 => 'field_user_sms_type_coaccount4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount4 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount4|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount5|user|user|default';
  $field_group->group_name = 'group_coaccount5';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vtab_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account5',
    'weight' => '242',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount5',
      1 => 'field_user_sms_email_coaccount5',
      2 => 'field_user_sms_type_coaccount5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount5 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount5|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount5|user|user|form';
  $field_group->group_name = 'group_coaccount5';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account5',
    'weight' => '25',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount5',
      1 => 'field_user_sms_email_coaccount5',
      2 => 'field_user_sms_type_coaccount5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount5 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount5|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount6|user|user|default';
  $field_group->group_name = 'group_coaccount6';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vtab_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account6',
    'weight' => '243',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount6',
      1 => 'field_user_sms_email_coaccount6',
      2 => 'field_user_sms_type_coaccount6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount6 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount6|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccount6|user|user|form';
  $field_group->group_name = 'group_coaccount6';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_coaccounts';
  $field_group->data = array(
    'label' => 'Co-account6',
    'weight' => '26',
    'children' => array(
      0 => 'field_user_sms_naam_coaccount6',
      1 => 'field_user_sms_email_coaccount6',
      2 => 'field_user_sms_type_coaccount6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccount6 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_coaccount6|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coaccounts|user|user|form';
  $field_group->group_name = 'group_coaccounts';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ouders';
  $field_group->data = array(
    'label' => 'Co-accounts',
    'weight' => '125',
    'children' => array(
      0 => 'group_coaccount1',
      1 => 'group_coaccount2',
      2 => 'group_coaccount3',
      3 => 'group_coaccount6',
      4 => 'group_coaccount5',
      5 => 'group_coaccount4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coaccounts field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_coaccounts|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extra|user|user|default';
  $field_group->group_name = 'group_extra';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra',
    'weight' => '6',
    'children' => array(
      0 => 'field_user_sms_algemene_opmerkin',
      1 => 'field_user_sms_godsdienstkeuze',
      2 => 'field_user_sms_student_opmerking',
      3 => 'field_user_sms_mp_opmerking',
      4 => 'group_vtab_schoolloopbaan',
      5 => 'group_vtab_bijztoel',
      6 => 'group_vtab_vervoer',
      7 => 'group_vtab_infokanalen',
      8 => 'group_vtab_internextern',
      9 => 'group_vtab_taal',
      10 => 'group_vtab_technical_unused',
      11 => 'group_vtab_b_attest',
      12 => 'group_inschrijving',
      13 => 'group_hrm',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Extra',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_extra|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extra|user|user|form';
  $field_group->group_name = 'group_extra';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'field_user_group_argus_sms';
  $field_group->data = array(
    'label' => 'Extra',
    'weight' => '112',
    'children' => array(
      0 => 'field_user_sms_naam_verantwoorde',
      1 => 'field_user_sms_algemene_opmerkin',
      2 => 'field_user_sms_godsdienstkeuze',
      3 => 'field_user_sms_test',
      4 => 'field_user_sms_student_opmerking',
      5 => 'field_user_sms_splitsing_5tmm3_n',
      6 => 'field_user_sms_wiskunde_5temif',
      7 => 'field_user_sms_groups',
      8 => 'field_user_sms_last_successful_l',
      9 => 'field_user_sms_telefoonnummer_ve',
      10 => 'group_schoolloopbaan',
      11 => 'group_intern_extern',
      12 => 'group_vervoer',
      13 => 'group_bijz_toel',
      14 => 'group_infokanalen',
      15 => 'group_taal',
      16 => 'group_inschrijving',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Extra',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-extra field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_extra|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hrm|user|user|default';
  $field_group->group_name = 'group_hrm';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'HRM - Personeelslid',
    'weight' => '254',
    'children' => array(
      0 => 'field_user_sms_hrm___diploma',
      1 => 'field_user_sms_hrm___aggregaat_g',
      2 => 'field_user_sms_hrm___statuut',
      3 => 'field_user_sms_hrm___opdracht',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hrm field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_hrm|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hrm|user|user|form';
  $field_group->group_name = 'group_hrm';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'field_user_group_argus_sms';
  $field_group->data = array(
    'label' => 'HRM - Personeelsgegevens',
    'weight' => '113',
    'children' => array(
      0 => 'field_user_sms_hrm___diploma',
      1 => 'field_user_sms_hrm___aggregaat_g',
      2 => 'field_user_sms_hrm___statuut',
      3 => 'field_user_sms_hrm___opdracht',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hrm field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_hrm|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_huisdokter|user|user|form';
  $field_group->group_name = 'group_huisdokter';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_medls';
  $field_group->data = array(
    'label' => 'Huisdokter',
    'weight' => '192',
    'children' => array(
      0 => 'field_user_sms_huisdokter',
      1 => 'field_user_sms_huisdokter_woonpl',
      2 => 'field_user_sms_telefoon_huisdokt',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Huisdokter',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-huisdokter field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_huisdokter|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indien_b_attest|user|user|form';
  $field_group->group_name = 'group_indien_b_attest';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_intern_extern';
  $field_group->data = array(
    'label' => 'Indien B-attest',
    'weight' => '267',
    'children' => array(
      0 => 'field_user_sms_b_getuigschrift',
      1 => 'field_user_sms_b_schooljaar',
      2 => 'field_user_sms_b_leerjaar',
      3 => 'field_user_sms_b_resultaat',
      4 => 'field_user_sms_b_taal',
      5 => 'field_user_sms_b_rekenen',
      6 => 'field_user_sms_b_baso_fiche',
      7 => 'field_user_sms_b_kopie_baso_fich',
      8 => 'field_user_sms_b_type_bo',
      9 => 'field_user_sms_b_naam_school',
      10 => 'field_user_sms_b_gemeente_school',
      11 => 'field_user_sms_verslag_clb',
      12 => 'field_user_sms_mp_opmerking',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indien-b-attest field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_indien_b_attest|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_infokanalen|user|user|form';
  $field_group->group_name = 'group_infokanalen';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Informatiekanalen',
    'weight' => '287',
    'children' => array(
      0 => 'field_user_sms_contact_via_famil',
      1 => 'field_user_sms_contact_via_websi',
      2 => 'field_user_sms_contact_via_adver',
      3 => 'field_user_sms_contact_via_tv',
      4 => 'field_user_sms_contact_via_schoo',
      5 => 'field_user_sms_contact_via_opend',
      6 => 'field_user_sms_contact_via_clb',
      7 => 'field_user_sms_contact_via__ande',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Informatiekanalen',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-infokanalen field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_infokanalen|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inschrijving|user|user|default';
  $field_group->group_name = 'group_inschrijving';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Inschrijving',
    'weight' => '241',
    'children' => array(
      0 => 'field_user_sms_ingeschreven_door',
      1 => 'field_user_sms_rekeningnummer_ge',
      2 => 'field_user_tmp_reg_class',
      3 => 'field_user_tmp_reg_payment',
      4 => 'field_user_sms_schoolgeld',
      5 => 'field_user_tmp_reg_smartschool',
      6 => 'field_user_tmp_voorinschrijving',
      7 => 'field_user_sms_betaalwijze',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inschrijving field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_inschrijving|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inschrijving|user|user|form';
  $field_group->group_name = 'group_inschrijving';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Informatie over de inschrijving',
    'weight' => '271',
    'children' => array(
      0 => 'field_user_sms_ingeschreven_door',
      1 => 'field_user_sms_rekeningnummer_ge',
      2 => 'field_user_tmp_reg_class',
      3 => 'field_user_tmp_reg_payment',
      4 => 'field_user_sms_schoolgeld',
      5 => 'field_user_tmp_reg_smartschool',
      6 => 'field_user_tmp_voorinschrijving',
      7 => 'field_user_sms_betaalwijze',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inschrijving field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_inschrijving|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intern_extern|user|user|form';
  $field_group->group_name = 'group_intern_extern';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Intern/extern',
    'weight' => '286',
    'children' => array(
      0 => 'field_user_sms_intern_extern_',
      1 => 'field_user_sms_internaat',
      2 => 'group_indien_b_attest',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Intern/extern',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-intern-extern field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_intern_extern|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leermoeilijkheden|user|user|form';
  $field_group->group_name = 'group_leermoeilijkheden';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_medls';
  $field_group->data = array(
    'label' => 'Leermoeilijkheden',
    'weight' => '193',
    'children' => array(
      0 => 'field_user_sms_deskundige',
      1 => 'field_user_sms_school_buo',
      2 => 'field_user_sms_periode_buo',
      3 => 'field_user_sms_type_buo',
      4 => 'field_user_sms_andere_ls',
      5 => 'field_user_sms_gon_begeleider',
      6 => 'field_user_sms_dyslexie',
      7 => 'field_user_sms_dyscalculie',
      8 => 'field_user_sms_adhd',
      9 => 'field_user_sms_ass__autisme_spec',
      10 => 'field_user_sms_nld__non_verbale_',
      11 => 'field_user_sms_diagnose_deskundi',
      12 => 'field_user_sms_attest_leerstoorn',
      13 => 'field_user_sms_buitengewoon_onde',
      14 => 'field_user_sms_andere_ls_j_n',
      15 => 'field_user_sms_attest_ingeleverd',
      16 => 'field_user_sms_gon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Leermoeilijkheden',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-leermoeilijkheden field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_leermoeilijkheden|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_medinfols|user|user|default';
  $field_group->group_name = 'group_medinfols';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Medische & leermoeilijkheden',
    'weight' => '5',
    'children' => array(
      0 => 'group_vtab_huisdokter',
      1 => 'group_vtab_medinfo',
      2 => 'group_vtab_leermoeilijkheden',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Medische & leermoeilijkheden',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_medinfols|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_medinfo|user|user|form';
  $field_group->group_name = 'group_medinfo';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_medls';
  $field_group->data = array(
    'label' => 'Medische gegevens',
    'weight' => '194',
    'children' => array(
      0 => 'field_user_sms_specialist',
      1 => 'field_user_sms_welke_en_hoeveel_',
      2 => 'field_user_sms_geldigheidsduur_d',
      3 => 'field_user_sms_andere_mp',
      4 => 'field_user_sms_opvoling_voorzien',
      5 => 'field_user_sms_da_voor_hoe_lang_',
      6 => 'field_user_sms_brief_toel__med__',
      7 => 'field_user_sms_aandachtspunten_p',
      8 => 'field_user_sms_medische_probleme',
      9 => 'field_user_sms_wanneer_ingeent_t',
      10 => 'field_user_sms_mag_praktijklesse',
      11 => 'field_user_sms_astma',
      12 => 'field_user_sms_allergie',
      13 => 'field_user_sms_epilepsie',
      14 => 'field_user_sms_diabetes',
      15 => 'field_user_sms_concentratieprobl',
      16 => 'field_user_sms_diagnose_speciali',
      17 => 'field_user_sms_opvolging_voorzie',
      18 => 'field_user_sms_doktersattest_',
      19 => 'field_user_sms_medicatie_',
      20 => 'field_user_sms_attest_lo_',
      21 => 'field_user_sms_andere_mp_j_n',
      22 => 'field_user_sms_ingeent_tegen_kle',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Medische gegevens',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-medinfo field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_medinfo|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_medls|user|user|form';
  $field_group->group_name = 'group_medls';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'field_user_group_argus_sms';
  $field_group->data = array(
    'label' => 'Medische & leermoeilijkheden',
    'weight' => '111',
    'children' => array(
      0 => 'group_medinfo',
      1 => 'group_leermoeilijkheden',
      2 => 'group_huisdokter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Medische & leermoeilijkheden',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-medls field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_medls|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moeder|user|user|form';
  $field_group->group_name = 'group_moeder';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ouders';
  $field_group->data = array(
    'label' => 'Moeder',
    'weight' => '127',
    'children' => array(
      0 => 'field_user_sms_nationaliteit_moe',
      1 => 'field_user_sms_straat_moeder',
      2 => 'field_user_sms_huisnummer_moeder',
      3 => 'field_user_sms_postcode_moeder',
      4 => 'field_user_sms_stad_gemeente_moe',
      5 => 'field_user_sms_busnummer_moeder',
      6 => 'field_user_sms_diploma_moeder',
      7 => 'field_user_sms_geboortedatum_moe',
      8 => 'field_user_sms_telefoon_werk_moe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Moeder',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-moeder field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_moeder|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ouders|user|user|default';
  $field_group->group_name = 'group_ouders';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ouders',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_sms_gezinshoofd',
      1 => 'field_user_sms_gezinssituatie',
      2 => 'field_user_sms_aantal_broers',
      3 => 'field_user_sms_aantal_zussen',
      4 => 'field_user_sms_aantal_zussen_bro',
      5 => 'group_vtab_vader',
      6 => 'group_vtab_moeder',
      7 => 'group_vtab_voogd',
      8 => 'group_vtab_coaccounts',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ouders',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_ouders|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ouders|user|user|form';
  $field_group->group_name = 'group_ouders';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'field_user_group_argus_sms';
  $field_group->data = array(
    'label' => 'Ouders',
    'weight' => '110',
    'children' => array(
      0 => 'field_user_sms_gezinshoofd',
      1 => 'field_user_sms_gezinssituatie',
      2 => 'field_user_sms_aantal_broers',
      3 => 'field_user_sms_aantal_zussen',
      4 => 'field_user_sms_aantal_zussen_bro',
      5 => 'field_user_sms_hoeveelste_in_rij',
      6 => 'group_vader',
      7 => 'group_moeder',
      8 => 'group_voogd',
      9 => 'group_coaccounts',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ouders',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ouders field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_ouders|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schoolloopbaan|user|user|form';
  $field_group->group_name = 'group_schoolloopbaan';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Schoolloopbaan',
    'weight' => '285',
    'children' => array(
      0 => 'field_user_sms_sl_schooljaar',
      1 => 'field_user_sms_sl_leerjaar_en_st',
      2 => 'field_user_sms_sl_attest',
      3 => 'field_user_sms_sl_school',
      4 => 'field_user_sms_sl_stad_school',
      5 => 'field_user_sms_sl_clausulering',
      6 => 'group_sl2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Schoolloopbaan',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-schoolloopbaan field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_schoolloopbaan|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sl2|user|user|form';
  $field_group->group_name = 'group_sl2';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_schoolloopbaan';
  $field_group->data = array(
    'label' => 'Eventuele 2e schoolloopbaan',
    'weight' => '214',
    'children' => array(
      0 => 'field_user_sms_sl2_attest',
      1 => 'field_user_sms_sl2_leerjaar_en_s',
      2 => 'field_user_sms_sl2_school',
      3 => 'field_user_sms_sl2_schooljaar',
      4 => 'field_user_sms_sl2_stad_school',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sl2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sl2|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taal|user|user|form';
  $field_group->group_name = 'group_taal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Taalsituatie',
    'weight' => '288',
    'children' => array(
      0 => 'field_user_sms_taal_met_moeder',
      1 => 'field_user_sms_taal_met_vader',
      2 => 'field_user_sms_taal_met_broers_z',
      3 => 'field_user_sms_taal_met_vrienden',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taalsituatie',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-taal field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_taal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vader|user|user|form';
  $field_group->group_name = 'group_vader';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ouders';
  $field_group->data = array(
    'label' => 'Vader',
    'weight' => '126',
    'children' => array(
      0 => 'field_user_sms_nationaliteit_vad',
      1 => 'field_user_sms_straat_vader',
      2 => 'field_user_sms_huisnummer_vader',
      3 => 'field_user_sms_postcode_vader',
      4 => 'field_user_sms_stad_gemeente_vad',
      5 => 'field_user_sms_diploma_vader',
      6 => 'field_user_sms_busnummer_vader',
      7 => 'field_user_sms_geboortedatum_vad',
      8 => 'field_user_sms_telefoon_werk_vad',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Vader',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-vader field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vader|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vervoer|user|user|form';
  $field_group->group_name = 'group_vervoer';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Vervoer',
    'weight' => '283',
    'children' => array(
      0 => 'field_user_sms_vervoersmiddel',
      1 => 'field_user_sms_afstand_naar_huis',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Vervoer',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-vervoer field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vervoer|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voogd|user|user|form';
  $field_group->group_name = 'group_voogd';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ouders';
  $field_group->data = array(
    'label' => 'Voogd',
    'weight' => '128',
    'children' => array(
      0 => 'field_user_sms_naam_ouder_voogd',
      1 => 'field_user_sms_voornaam_ouder_vo',
      2 => 'field_user_sms_geslacht_ouder_vo',
      3 => 'field_user_sms_adres_ouder_voogd',
      4 => 'field_user_sms_huisnummer_ouder_',
      5 => 'field_user_sms_postcode_ouder_vo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Voogd',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-voogd field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_voogd|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vorige_school_1|user|user|default';
  $field_group->group_name = 'group_vorige_school_1';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vtab_schoolloopbaan';
  $field_group->data = array(
    'label' => 'Vorige school',
    'weight' => '340',
    'children' => array(
      0 => 'field_user_sms_sl_schooljaar',
      1 => 'field_user_sms_sl_leerjaar_en_st',
      2 => 'field_user_sms_sl_attest',
      3 => 'field_user_sms_sl_school',
      4 => 'field_user_sms_sl_stad_school',
      5 => 'field_user_sms_sl_clausulering',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vorige-school-1 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vorige_school_1|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vorige_school_2|user|user|default';
  $field_group->group_name = 'group_vorige_school_2';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_vtab_schoolloopbaan';
  $field_group->data = array(
    'label' => 'Vorige school 2',
    'weight' => '341',
    'children' => array(
      0 => 'field_user_sms_sl2_attest',
      1 => 'field_user_sms_sl2_leerjaar_en_s',
      2 => 'field_user_sms_sl2_school',
      3 => 'field_user_sms_sl2_schooljaar',
      4 => 'field_user_sms_sl2_stad_school',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vorige-school-2 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vorige_school_2|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_adres|user|user|default';
  $field_group->group_name = 'group_vtab_adres';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_algemenegegevens';
  $field_group->data = array(
    'label' => 'Adres',
    'weight' => '5',
    'children' => array(
      0 => 'field_user_sms_straat',
      1 => 'field_user_sms_huisnummer',
      2 => 'field_user_sms_busnummer',
      3 => 'field_user_sms_postcode',
      4 => 'field_user_sms_woonplaats',
      5 => 'field_user_sms_land',
      6 => 'field_user_sms_woonplaats___deel',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Adres',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_adres|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_algemeen|user|user|default';
  $field_group->group_name = 'group_vtab_algemeen';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_algemenegegevens';
  $field_group->data = array(
    'label' => 'Algemeen',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_sms_gebruikersnaam',
      1 => 'field_user_sms_extravoornamen',
      2 => 'field_user_sms_geboorteplaats',
      3 => 'field_user_sms_geboorteland',
      4 => 'field_user_sms_rijksregisternumm',
      5 => 'field_user_sms_stamboeknummer',
      6 => 'field_user_sms_nationaliteitscod',
      7 => 'field_user_sms_geslacht',
      8 => 'field_user_sms_nationaliteit',
      9 => 'field_user_sms_geboortedatum',
      10 => 'field_user_sms_telefoonnummer',
      11 => 'field_user_sms_emailadres',
      12 => 'field_user_sms_mobielnummer',
      13 => 'field_user_sms_fax',
      14 => 'field_user_tmp_pwhfd',
      15 => 'field_user_sms_roepnaam',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_vtab_algemeen|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_b_attest|user|user|default';
  $field_group->group_name = 'group_vtab_b_attest';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Indien B-attest',
    'weight' => '246',
    'children' => array(
      0 => 'field_user_sms_b_getuigschrift',
      1 => 'field_user_sms_b_schooljaar',
      2 => 'field_user_sms_b_leerjaar',
      3 => 'field_user_sms_b_resultaat',
      4 => 'field_user_sms_b_taal',
      5 => 'field_user_sms_b_rekenen',
      6 => 'field_user_sms_b_baso_fiche',
      7 => 'field_user_sms_b_kopie_baso_fich',
      8 => 'field_user_sms_b_type_bo',
      9 => 'field_user_sms_b_naam_school',
      10 => 'field_user_sms_b_gemeente_school',
      11 => 'field_user_sms_verslag_clb',
      12 => 'field_user_sms_inschrijving_onde',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Indien B-attest',
      'instance_settings' => array(
        'classes' => 'group-vtab-b-attest field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_b_attest|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_bijztoel|user|user|default';
  $field_group->group_name = 'group_vtab_bijztoel';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Bijzondere toelatingen',
    'weight' => '248',
    'children' => array(
      0 => 'field_user_sms_s_middags_buiten_',
      1 => 'field_user_sms_toelating_te_laat',
      2 => 'field_user_sms_toelating_vroeger',
      3 => 'field_user_sms_gebruikt_laptop_i',
      4 => 'field_user_sms_ouders',
      5 => 'field_user_sms_ouders_niet_meer_',
      6 => 'field_user_sms_ouders_informeren',
      7 => 'field_user_sms_toelating_gebruik',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bijzondere toelatingen',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_bijztoel|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_coaccounts|user|user|default';
  $field_group->group_name = 'group_vtab_coaccounts';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ouders';
  $field_group->data = array(
    'label' => 'Co-accounts',
    'weight' => '93',
    'children' => array(
      0 => 'group_coaccount1',
      1 => 'group_coaccount2',
      2 => 'group_coaccount3',
      3 => 'group_coaccount4',
      4 => 'group_coaccount5',
      5 => 'group_coaccount6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Co-accounts',
      'instance_settings' => array(
        'classes' => 'group-vtab-coaccounts field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_coaccounts|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_huisdokter|user|user|default';
  $field_group->group_name = 'group_vtab_huisdokter';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_medinfols';
  $field_group->data = array(
    'label' => 'Huisdokter',
    'weight' => '6',
    'children' => array(
      0 => 'field_user_sms_huisdokter',
      1 => 'field_user_sms_huisdokter_woonpl',
      2 => 'field_user_sms_telefoon_huisdokt',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Huisdokter',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_huisdokter|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_infokanalen|user|user|default';
  $field_group->group_name = 'group_vtab_infokanalen';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Informatiekanalen',
    'weight' => '252',
    'children' => array(
      0 => 'field_user_sms_contact_via_famil',
      1 => 'field_user_sms_contact_via_websi',
      2 => 'field_user_sms_contact_via_adver',
      3 => 'field_user_sms_contact_via_tv',
      4 => 'field_user_sms_contact_via_schoo',
      5 => 'field_user_sms_contact_via_opend',
      6 => 'field_user_sms_contact_via_clb',
      7 => 'field_user_sms_contact_via__ande',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Informatiekanalen',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_infokanalen|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_internextern|user|user|default';
  $field_group->group_name = 'group_vtab_internextern';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Intern / Extern',
    'weight' => '250',
    'children' => array(
      0 => 'field_user_sms_intern_extern_',
      1 => 'field_user_sms_internaat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Intern / Extern',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_internextern|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_leermoeilijkheden|user|user|default';
  $field_group->group_name = 'group_vtab_leermoeilijkheden';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_medinfols';
  $field_group->data = array(
    'label' => 'Leermoeilijkheden',
    'weight' => '8',
    'children' => array(
      0 => 'field_user_sms_deskundige',
      1 => 'field_user_sms_school_buo',
      2 => 'field_user_sms_periode_buo',
      3 => 'field_user_sms_type_buo',
      4 => 'field_user_sms_andere_ls',
      5 => 'field_user_sms_gon_begeleider',
      6 => 'field_user_sms_dyslexie',
      7 => 'field_user_sms_dyscalculie',
      8 => 'field_user_sms_adhd',
      9 => 'field_user_sms_ass__autisme_spec',
      10 => 'field_user_sms_nld__non_verbale_',
      11 => 'field_user_sms_diagnose_deskundi',
      12 => 'field_user_sms_attest_leerstoorn',
      13 => 'field_user_sms_buitengewoon_onde',
      14 => 'field_user_sms_andere_ls_j_n',
      15 => 'field_user_sms_attest_ingeleverd',
      16 => 'field_user_sms_gon',
      17 => 'field_user_sms_gon_begeleiding__',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Leermoeilijkheden',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_leermoeilijkheden|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_medinfo|user|user|default';
  $field_group->group_name = 'group_vtab_medinfo';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_medinfols';
  $field_group->data = array(
    'label' => 'Medische gegevens',
    'weight' => '7',
    'children' => array(
      0 => 'field_user_sms_specialist',
      1 => 'field_user_sms_welke_en_hoeveel_',
      2 => 'field_user_sms_geldigheidsduur_d',
      3 => 'field_user_sms_andere_mp',
      4 => 'field_user_sms_opvoling_voorzien',
      5 => 'field_user_sms_da_voor_hoe_lang_',
      6 => 'field_user_sms_brief_toel__med__',
      7 => 'field_user_sms_aandachtspunten_p',
      8 => 'field_user_sms_wanneer_ingeent_t',
      9 => 'field_user_sms_mag_praktijklesse',
      10 => 'field_user_sms_astma',
      11 => 'field_user_sms_allergie',
      12 => 'field_user_sms_epilepsie',
      13 => 'field_user_sms_diabetes',
      14 => 'field_user_sms_concentratieprobl',
      15 => 'field_user_sms_diagnose_speciali',
      16 => 'field_user_sms_opvolging_voorzie',
      17 => 'field_user_sms_doktersattest_',
      18 => 'field_user_sms_medicatie_',
      19 => 'field_user_sms_attest_lo_',
      20 => 'field_user_sms_andere_mp_j_n',
      21 => 'field_user_sms_ingeent_tegen_kle',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Medische gegevens',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_medinfo|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_moeder|user|user|default';
  $field_group->group_name = 'group_vtab_moeder';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ouders';
  $field_group->data = array(
    'label' => 'Moeder',
    'weight' => '95',
    'children' => array(
      0 => 'field_user_sms_nationaliteit_moe',
      1 => 'field_user_sms_straat_moeder',
      2 => 'field_user_sms_huisnummer_moeder',
      3 => 'field_user_sms_postcode_moeder',
      4 => 'field_user_sms_stad_gemeente_moe',
      5 => 'field_user_sms_busnummer_moeder',
      6 => 'field_user_sms_diploma_moeder',
      7 => 'field_user_sms_geboortedatum_moe',
      8 => 'field_user_sms_telefoon_werk_moe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Moeder',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_moeder|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_schoolloopbaan|user|user|default';
  $field_group->group_name = 'group_vtab_schoolloopbaan';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Schoolloopbaan',
    'weight' => '247',
    'children' => array(
      0 => 'group_vorige_school_1',
      1 => 'group_vorige_school_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Schoolloopbaan',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_schoolloopbaan|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_taal|user|user|default';
  $field_group->group_name = 'group_vtab_taal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Taal',
    'weight' => '251',
    'children' => array(
      0 => 'field_user_sms_taal_met_moeder',
      1 => 'field_user_sms_taal_met_vader',
      2 => 'field_user_sms_taal_met_broers_z',
      3 => 'field_user_sms_taal_met_vrienden',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taal',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_taal|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_technical_unused|user|user|default';
  $field_group->group_name = 'group_vtab_technical_unused';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Technische & ongebruikte velden',
    'weight' => '253',
    'children' => array(
      0 => 'field_user_sms_internnummer',
      1 => 'field_user_sms_initialen',
      2 => 'field_user_sms_website',
      3 => 'field_user_sms_instantmessenger',
      4 => 'field_user_sms_koppelingsveldsch',
      5 => 'field_user_sms_naam_verantwoorde',
      6 => 'field_user_sms_status',
      7 => 'field_user_sms_sorteerveld',
      8 => 'field_user_sms_basisrol',
      9 => 'field_user_sms_medische_probleme',
      10 => 'field_user_sms_klasnummer',
      11 => 'field_user_sms_splitsing_5tmm3_n',
      12 => 'field_user_sms_wiskunde_5temif',
      13 => 'field_user_sms_groups',
      14 => 'field_user_sms_last_successful_l',
      15 => 'field_user_sms_telefoonnummer_ve',
      16 => 'field_user_sms_soortleerling',
      17 => 'field_user_sms_hoeveelste_in_rij',
      18 => 'field_user_sms_isemailverified',
      19 => 'field_user_sms_isauthenticatorap',
      20 => 'field_user_sms_isyubikeyenabled',
      21 => 'domain',
      22 => 'mimemail',
      23 => 'realname',
      24 => 'summary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technische & ongebruikte velden',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_technical_unused|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_vader|user|user|default';
  $field_group->group_name = 'group_vtab_vader';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ouders';
  $field_group->data = array(
    'label' => 'Vader',
    'weight' => '94',
    'children' => array(
      0 => 'field_user_sms_nationaliteit_vad',
      1 => 'field_user_sms_straat_vader',
      2 => 'field_user_sms_huisnummer_vader',
      3 => 'field_user_sms_postcode_vader',
      4 => 'field_user_sms_stad_gemeente_vad',
      5 => 'field_user_sms_diploma_vader',
      6 => 'field_user_sms_busnummer_vader',
      7 => 'field_user_sms_geboortedatum_vad',
      8 => 'field_user_sms_telefoon_werk_vad',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Vader',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_vader|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_vervoer|user|user|default';
  $field_group->group_name = 'group_vtab_vervoer';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_extra';
  $field_group->data = array(
    'label' => 'Vervoer',
    'weight' => '249',
    'children' => array(
      0 => 'field_user_sms_vervoersmiddel',
      1 => 'field_user_sms_afstand_naar_huis',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Vervoer',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_vervoer|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtab_voogd|user|user|default';
  $field_group->group_name = 'group_vtab_voogd';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ouders';
  $field_group->data = array(
    'label' => 'Voogd - andere',
    'weight' => '96',
    'children' => array(
      0 => 'field_user_sms_naam_ouder_voogd',
      1 => 'field_user_sms_voornaam_ouder_vo',
      2 => 'field_user_sms_geslacht_ouder_vo',
      3 => 'field_user_sms_adres_ouder_voogd',
      4 => 'field_user_sms_huisnummer_ouder_',
      5 => 'field_user_sms_postcode_ouder_vo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Voogd - andere',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vtab_voogd|user|user|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adres');
  t('Adresgegevens');
  t('Algemeen');
  t('Algemene gegevens');
  t('Bijzondere toelatingen');
  t('Co-account1');
  t('Co-account2');
  t('Co-account3');
  t('Co-account4');
  t('Co-account5');
  t('Co-account6');
  t('Co-accounts');
  t('Eventuele 2e schoolloopbaan');
  t('Extra');
  t('Extra gegevens uit Smartschool');
  t('HRM - Personeelsgegevens');
  t('HRM - Personeelslid');
  t('Huisdokter');
  t('Indien B-attest');
  t('Informatie over de inschrijving');
  t('Informatiekanalen');
  t('Inschrijving');
  t('Intern / Extern');
  t('Intern/extern');
  t('Leermoeilijkheden');
  t('Medische & leermoeilijkheden');
  t('Medische gegevens');
  t('Moeder');
  t('Ouders');
  t('Schoolloopbaan');
  t('Taal');
  t('Taalsituatie');
  t('Technische & ongebruikte velden');
  t('Vader');
  t('Vervoer');
  t('Voogd');
  t('Voogd - andere');
  t('Vorige school');
  t('Vorige school 2');

  return $field_groups;
}
