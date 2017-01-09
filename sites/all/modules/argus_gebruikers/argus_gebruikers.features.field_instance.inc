<?php
/**
 * @file
 * argus_gebruikers.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function argus_gebruikers_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_organisatie'.
  $field_instances['user-user-field_user_organisatie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_organisatie',
    'label' => 'Organisatie',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 103,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_aandachtspunten_p'.
  $field_instances['user-user-field_user_sms_aandachtspunten_p'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 215,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 215,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_aandachtspunten_p',
    'label' => 'Aandachtspunten PV en/of LO?',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'rows' => 5,
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 148,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_aantal_broers'.
  $field_instances['user-user-field_user_sms_aantal_broers'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 90,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_aantal_broers',
    'label' => 'Aantal broers',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_aantal_zussen'.
  $field_instances['user-user-field_user_sms_aantal_zussen'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 91,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_aantal_zussen',
    'label' => 'Aantal zussen',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 122,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_aantal_zussen_bro'.
  $field_instances['user-user-field_user_sms_aantal_zussen_bro'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 92,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_aantal_zussen_bro',
    'label' => 'Aantal zussen/broers reeds op school',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 123,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_adhd'.
  $field_instances['user-user-field_user_sms_adhd'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 314,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_adhd',
    'label' => 'ADHD',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 178,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_adres_ouder_voogd'.
  $field_instances['user-user-field_user_sms_adres_ouder_voogd'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 86,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 89,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 89,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_adres_ouder_voogd',
    'label' => 'Adres',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_afstand_naar_huis'.
  $field_instances['user-user-field_user_sms_afstand_naar_huis'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 115,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 115,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_afstand_naar_huis',
    'label' => 'Afstand naar huis',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_algemene_opmerkin'.
  $field_instances['user-user-field_user_sms_algemene_opmerkin'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 243,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 258,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_algemene_opmerkin',
    'label' => 'Algemene opmerkingen',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'rows' => 5,
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 275,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_allergie'.
  $field_instances['user-user-field_user_sms_allergie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 319,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_allergie',
    'label' => 'Allergie',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 189,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_andere_ls'.
  $field_instances['user-user-field_user_sms_andere_ls'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 77,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 77,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_andere_ls',
    'label' => 'Andere leerstoornissen',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 181,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_andere_ls_j_n'.
  $field_instances['user-user-field_user_sms_andere_ls_j_n'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 328,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_andere_ls_j_n',
    'label' => 'Andere LS j/n',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 205,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_andere_mp'.
  $field_instances['user-user-field_user_sms_andere_mp'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 204,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 204,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_andere_mp',
    'label' => 'Andere medische problemen',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 145,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_andere_mp_j_n'.
  $field_instances['user-user-field_user_sms_andere_mp_j_n'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 329,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_andere_mp_j_n',
    'label' => 'Andere MP j/n',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 206,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_ass__autisme_spec'.
  $field_instances['user-user-field_user_sms_ass__autisme_spec'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 315,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_ass__autisme_spec',
    'label' => 'ASS (Autisme Spectrum Stoornis)',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 180,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_astma'.
  $field_instances['user-user-field_user_sms_astma'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 313,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_astma',
    'label' => 'Astma',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 175,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_attest_ingeleverd'.
  $field_instances['user-user-field_user_sms_attest_ingeleverd'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 330,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_attest_ingeleverd',
    'label' => 'Attest ingeleverd',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 208,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_attest_leerstoorn'.
  $field_instances['user-user-field_user_sms_attest_leerstoorn'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 317,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_attest_leerstoorn',
    'label' => 'Attest leerstoornis',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 184,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_attest_lo_'.
  $field_instances['user-user-field_user_sms_attest_lo_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 327,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_attest_lo_',
    'label' => 'Attest LO?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 204,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_baso_fiche'.
  $field_instances['user-user-field_user_sms_b_baso_fiche'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_baso_fiche',
    'label' => 'B BaSo fiche',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 258,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_gemeente_school'.
  $field_instances['user-user-field_user_sms_b_gemeente_school'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_gemeente_school',
    'label' => 'B gemeente school',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 262,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_getuigschrift'.
  $field_instances['user-user-field_user_sms_b_getuigschrift'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_getuigschrift',
    'label' => 'B getuigschrift',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 252,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_kopie_baso_fich'.
  $field_instances['user-user-field_user_sms_b_kopie_baso_fich'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_kopie_baso_fich',
    'label' => 'B Kopie BaSo fiche',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 259,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_leerjaar'.
  $field_instances['user-user-field_user_sms_b_leerjaar'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_leerjaar',
    'label' => 'B leerjaar',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 254,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_naam_school'.
  $field_instances['user-user-field_user_sms_b_naam_school'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_naam_school',
    'label' => 'B naam school',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 261,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_rekenen'.
  $field_instances['user-user-field_user_sms_b_rekenen'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_rekenen',
    'label' => 'B rekenen',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 257,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_resultaat'.
  $field_instances['user-user-field_user_sms_b_resultaat'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_resultaat',
    'label' => 'B resultaat',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 255,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_schooljaar'.
  $field_instances['user-user-field_user_sms_b_schooljaar'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_schooljaar',
    'label' => 'B schooljaar',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 253,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_taal'.
  $field_instances['user-user-field_user_sms_b_taal'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_taal',
    'label' => 'B taal',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 256,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_b_type_bo'.
  $field_instances['user-user-field_user_sms_b_type_bo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_b_type_bo',
    'label' => 'B Type BO',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 260,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_basisrol'.
  $field_instances['user-user-field_user_sms_basisrol'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 87,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_basisrol',
    'label' => 'Basisrol',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_select',
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_betaalwijze'.
  $field_instances['user-user-field_user_sms_betaalwijze'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 247,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_betaalwijze',
    'label' => 'Betaalwijze',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 274,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_brief_toel__med__'.
  $field_instances['user-user-field_user_sms_brief_toel__med__'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 214,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 214,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_brief_toel__med__',
    'label' => 'Brief toel. med. meegeg.',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 143,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_buitengewoon_onde'.
  $field_instances['user-user-field_user_sms_buitengewoon_onde'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 318,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_buitengewoon_onde',
    'label' => 'Buitengewoon onderwijs',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 185,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_busnummer'.
  $field_instances['user-user-field_user_sms_busnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 110,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 107,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 107,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_busnummer',
    'label' => 'Busnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 134,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_busnummer_moeder'.
  $field_instances['user-user-field_user_sms_busnummer_moeder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 150,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 45,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_busnummer_moeder',
    'label' => 'Busnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 136,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_busnummer_vader'.
  $field_instances['user-user-field_user_sms_busnummer_vader'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 68,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 47,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_busnummer_vader',
    'label' => 'Busnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_concentratieprobl'.
  $field_instances['user-user-field_user_sms_concentratieprobl'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 322,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_concentratieprobl',
    'label' => 'Concentratieproblemen',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 192,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_contact_via__ande'.
  $field_instances['user-user-field_user_sms_contact_via__ande'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 63,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_contact_via__ande',
    'label' => 'Contact via (andere)',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_contact_via_adver'.
  $field_instances['user-user-field_user_sms_contact_via_adver'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_contact_via_adver',
    'label' => 'Contact via advertentie',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_contact_via_clb'.
  $field_instances['user-user-field_user_sms_contact_via_clb'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 62,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_contact_via_clb',
    'label' => 'Contact via CLB',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_contact_via_famil'.
  $field_instances['user-user-field_user_sms_contact_via_famil'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_contact_via_famil',
    'label' => 'Contact via familie',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_contact_via_opend'.
  $field_instances['user-user-field_user_sms_contact_via_opend'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 40,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_contact_via_opend',
    'label' => 'Contact via opendeurdag',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_contact_via_schoo'.
  $field_instances['user-user-field_user_sms_contact_via_schoo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 39,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_contact_via_schoo',
    'label' => 'Contact via schoolfolder',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_contact_via_tv'.
  $field_instances['user-user-field_user_sms_contact_via_tv'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_contact_via_tv',
    'label' => 'Contact via tv',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_contact_via_websi'.
  $field_instances['user-user-field_user_sms_contact_via_websi'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_contact_via_websi',
    'label' => 'Contact via website',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_da_voor_hoe_lang_'.
  $field_instances['user-user-field_user_sms_da_voor_hoe_lang_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 210,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 210,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_da_voor_hoe_lang_',
    'label' => 'Doktersattest voor hoe lang?',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 139,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_deskundige'.
  $field_instances['user-user-field_user_sms_deskundige'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 110,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 110,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 110,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_deskundige',
    'label' => 'Deskundige',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 179,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_diabetes'.
  $field_instances['user-user-field_user_sms_diabetes'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 321,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_diabetes',
    'label' => 'Diabetes',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 191,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_diagnose_deskundi'.
  $field_instances['user-user-field_user_sms_diagnose_deskundi'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 316,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_diagnose_deskundi',
    'label' => 'Diagnose deskundige?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 182,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_diagnose_speciali'.
  $field_instances['user-user-field_user_sms_diagnose_speciali'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 323,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_diagnose_speciali',
    'label' => 'Diagnose specialist?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 194,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_diploma_moeder'.
  $field_instances['user-user-field_user_sms_diploma_moeder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 159,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 44,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_diploma_moeder',
    'label' => 'Diploma',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_diploma_vader'.
  $field_instances['user-user-field_user_sms_diploma_vader'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 76,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 46,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_diploma_vader',
    'label' => 'Diploma',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 131,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_doktersattest_'.
  $field_instances['user-user-field_user_sms_doktersattest_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 325,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_doktersattest_',
    'label' => 'Doktersattest?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 197,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_dyscalculie'.
  $field_instances['user-user-field_user_sms_dyscalculie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 314,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_dyscalculie',
    'label' => 'Dyscalculie',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 177,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_dyslexie'.
  $field_instances['user-user-field_user_sms_dyslexie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 313,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_dyslexie',
    'label' => 'Dyslexie',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 176,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_email_coaccount1'.
  $field_instances['user-user-field_user_sms_email_coaccount1'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'email_default',
        'weight' => 244,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_email_coaccount1',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_email_coaccount2'.
  $field_instances['user-user-field_user_sms_email_coaccount2'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'email_default',
        'weight' => 251,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_email_coaccount2',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_email_coaccount3'.
  $field_instances['user-user-field_user_sms_email_coaccount3'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_email_coaccount3',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_email_coaccount4'.
  $field_instances['user-user-field_user_sms_email_coaccount4'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_email_coaccount4',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_email_coaccount5'.
  $field_instances['user-user-field_user_sms_email_coaccount5'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_email_coaccount5',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_email_coaccount6'.
  $field_instances['user-user-field_user_sms_email_coaccount6'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_email_coaccount6',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_emailadres'.
  $field_instances['user-user-field_user_sms_emailadres'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'email_default',
        'weight' => 361,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_emailadres',
    'label' => 'E-mailadres',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_epilepsie'.
  $field_instances['user-user-field_user_sms_epilepsie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 320,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_epilepsie',
    'label' => 'Epilepsie',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 190,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_extravoornamen'.
  $field_instances['user-user-field_user_sms_extravoornamen'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 349,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 98,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 98,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_extravoornamen',
    'label' => 'Extra voornamen',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_fax'.
  $field_instances['user-user-field_user_sms_fax'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 363,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 124,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_geboortedatum'.
  $field_instances['user-user-field_user_sms_geboortedatum'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 352,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_geboortedatum',
    'label' => 'Geboortedatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_geboortedatum_moe'.
  $field_instances['user-user-field_user_sms_geboortedatum_moe'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 157,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 77,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_geboortedatum_moe',
    'label' => 'Geboortedatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 139,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_geboortedatum_vad'.
  $field_instances['user-user-field_user_sms_geboortedatum_vad'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 74,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 122,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_geboortedatum_vad',
    'label' => 'Geboortedatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 129,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_geboorteland'.
  $field_instances['user-user-field_user_sms_geboorteland'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 354,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 101,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 101,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_geboorteland',
    'label' => 'Geboorteland',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 117,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_geboorteplaats'.
  $field_instances['user-user-field_user_sms_geboorteplaats'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 353,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 96,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_geboorteplaats',
    'label' => 'Geboorteplaats',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_gebruikersnaam'.
  $field_instances['user-user-field_user_sms_gebruikersnaam'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 350,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 100,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_gebruikersnaam',
    'label' => 'Gebruikersnaam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 104,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_gebruikt_laptop_i'.
  $field_instances['user-user-field_user_sms_gebruikt_laptop_i'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 201,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 260,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_gebruikt_laptop_i',
    'label' => 'Gebruikt laptop in klas',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 249,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_geldigheidsduur_d'.
  $field_instances['user-user-field_user_sms_geldigheidsduur_d'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 43,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_geldigheidsduur_d',
    'label' => 'Geldigheidsduur doktersattest',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_geslacht'.
  $field_instances['user-user-field_user_sms_geslacht'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 355,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_geslacht',
    'label' => 'Geslacht',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_geslacht_ouder_vo'.
  $field_instances['user-user-field_user_sms_geslacht_ouder_vo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 89,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 91,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 91,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_geslacht_ouder_vo',
    'label' => 'Geslacht',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_gezinshoofd'.
  $field_instances['user-user-field_user_sms_gezinshoofd'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 89,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 128,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 128,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_gezinshoofd',
    'label' => 'Gezinshoofd',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_gezinssituatie'.
  $field_instances['user-user-field_user_sms_gezinssituatie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 88,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 88,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_gezinssituatie',
    'label' => 'Gezinssituatie',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 119,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_godsdienstkeuze'.
  $field_instances['user-user-field_user_sms_godsdienstkeuze'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 242,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 254,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_godsdienstkeuze',
    'label' => 'Godsdienstkeuze',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 272,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_gon'.
  $field_instances['user-user-field_user_sms_gon'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 331,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_gon',
    'label' => 'GON',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 209,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_gon_begeleider'.
  $field_instances['user-user-field_user_sms_gon_begeleider'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 83,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 83,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_gon_begeleider',
    'label' => 'GON-begeleider',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 185,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_groups'.
  $field_instances['user-user-field_user_sms_groups'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_groups',
    'label' => 'Groepen',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 280,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_hoeveelste_in_rij'.
  $field_instances['user-user-field_user_sms_hoeveelste_in_rij'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_hoeveelste_in_rij',
    'label' => 'hoeveelste in rij',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 124,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_hrm___aggregaat_g'.
  $field_instances['user-user-field_user_sms_hrm___aggregaat_g'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_hrm___aggregaat_g',
    'label' => 'Aggregaat/GPB',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_hrm___diploma'.
  $field_instances['user-user-field_user_sms_hrm___diploma'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_hrm___diploma',
    'label' => 'Diploma',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_hrm___opdracht'.
  $field_instances['user-user-field_user_sms_hrm___opdracht'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_hrm___opdracht',
    'label' => 'Opdracht',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_hrm___statuut'.
  $field_instances['user-user-field_user_sms_hrm___statuut'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_hrm___statuut',
    'label' => 'Statuut',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_select',
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_huisdokter'.
  $field_instances['user-user-field_user_sms_huisdokter'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 113,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 113,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 113,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_huisdokter',
    'label' => 'Huisdokter',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_huisdokter_woonpl'.
  $field_instances['user-user-field_user_sms_huisdokter_woonpl'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 119,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 119,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 119,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_huisdokter_woonpl',
    'label' => 'Huisdokter woonplaats',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_huisnummer'.
  $field_instances['user-user-field_user_sms_huisnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 109,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 109,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 109,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_huisnummer',
    'label' => 'Huisnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 133,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_huisnummer_moeder'.
  $field_instances['user-user-field_user_sms_huisnummer_moeder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 149,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 129,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 129,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_huisnummer_moeder',
    'label' => 'Huisnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 135,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_huisnummer_ouder_'.
  $field_instances['user-user-field_user_sms_huisnummer_ouder_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 87,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 88,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 88,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_huisnummer_ouder_',
    'label' => 'Huisnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_huisnummer_vader'.
  $field_instances['user-user-field_user_sms_huisnummer_vader'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 67,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 138,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 138,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_huisnummer_vader',
    'label' => 'Huisnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 125,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_ingeent_tegen_kle'.
  $field_instances['user-user-field_user_sms_ingeent_tegen_kle'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 333,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_ingeent_tegen_kle',
    'label' => 'Ingeënt tegen klem',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 248,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_ingeschreven_door'.
  $field_instances['user-user-field_user_sms_ingeschreven_door'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 241,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 64,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_ingeschreven_door',
    'label' => 'Ingeschreven door',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 135,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_initialen'.
  $field_instances['user-user-field_user_sms_initialen'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 97,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_initialen',
    'label' => 'Initialen',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 128,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_instantmessenger'.
  $field_instances['user-user-field_user_sms_instantmessenger'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 82,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 82,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_instantmessenger',
    'label' => 'Instantmessenger',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_intern_extern_'.
  $field_instances['user-user-field_user_sms_intern_extern_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 193,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 193,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_intern_extern_',
    'label' => 'Intern/Extern?',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 268,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_internaat'.
  $field_instances['user-user-field_user_sms_internaat'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 194,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 194,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_internaat',
    'label' => 'Internaat',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 269,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_internnummer'.
  $field_instances['user-user-field_user_sms_internnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 73,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 73,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_internnummer',
    'label' => 'Internnummer (Smartschool)',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 102,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_isauthenticatorap'.
  $field_instances['user-user-field_user_sms_isauthenticatorap'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 365,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_isauthenticatorap',
    'label' => 'isAuthenticatorAppEnabled',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 136,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_isemailverified'.
  $field_instances['user-user-field_user_sms_isemailverified'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 364,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_isemailverified',
    'label' => 'isEmailVerified',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 135,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_isyubikeyenabled'.
  $field_instances['user-user-field_user_sms_isyubikeyenabled'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 366,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_isyubikeyenabled',
    'label' => 'isYubikeyEnabled',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 137,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_klasnummer'.
  $field_instances['user-user-field_user_sms_klasnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 99,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_klasnummer',
    'label' => 'Klasnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 106,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_koppelingsveldsch'.
  $field_instances['user-user-field_user_sms_koppelingsveldsch'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 75,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 75,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_koppelingsveldsch',
    'label' => 'Koppelingsveld schoolagenda',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 129,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_land'.
  $field_instances['user-user-field_user_sms_land'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 114,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 104,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 104,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_land',
    'label' => 'Land',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 138,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_last_successful_l'.
  $field_instances['user-user-field_user_sms_last_successful_l'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_last_successful_l',
    'label' => 'Laatste succesvolle login',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 282,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_mag_praktijklesse'.
  $field_instances['user-user-field_user_sms_mag_praktijklesse'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 217,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 217,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_mag_praktijklesse',
    'label' => 'Mag praktijklessen/LO volgen?',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 147,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_medicatie_'.
  $field_instances['user-user-field_user_sms_medicatie_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 326,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_medicatie_',
    'label' => 'Medicatie?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 199,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_medische_probleme'.
  $field_instances['user-user-field_user_sms_medische_probleme'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 98,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_medische_probleme',
    'label' => 'Medische problemen',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 146,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_mobielnr_coac1'.
  $field_instances['user-user-field_user_sms_mobielnr_coac1'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 243,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_mobielnr_coac1',
    'label' => 'Mobielnummer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_mobielnr_coac2'.
  $field_instances['user-user-field_user_sms_mobielnr_coac2'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 250,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_mobielnr_coac2',
    'label' => 'Mobielnummer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_mobielnummer'.
  $field_instances['user-user-field_user_sms_mobielnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 362,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_mobielnummer',
    'label' => 'Mobielnummer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 122,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_mobielnummer_coac'.
  $field_instances['user-user-field_user_sms_mobielnummer_coac'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_mobielnummer_coac',
    'label' => 'Mobielnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_mp_opmerking'.
  $field_instances['user-user-field_user_sms_mp_opmerking'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 245,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 261,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_mp_opmerking',
    'label' => 'MP opmerking',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 264,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam'.
  $field_instances['user-user-field_user_sms_naam'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam',
    'label' => 'Achternaam',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 102,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam_coaccount1'.
  $field_instances['user-user-field_user_sms_naam_coaccount1'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 241,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam_coaccount1',
    'label' => 'Naam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam_coaccount2'.
  $field_instances['user-user-field_user_sms_naam_coaccount2'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 248,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam_coaccount2',
    'label' => 'Naam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam_coaccount3'.
  $field_instances['user-user-field_user_sms_naam_coaccount3'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam_coaccount3',
    'label' => 'Naam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam_coaccount4'.
  $field_instances['user-user-field_user_sms_naam_coaccount4'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam_coaccount4',
    'label' => 'Naam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam_coaccount5'.
  $field_instances['user-user-field_user_sms_naam_coaccount5'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam_coaccount5',
    'label' => 'Naam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam_coaccount6'.
  $field_instances['user-user-field_user_sms_naam_coaccount6'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam_coaccount6',
    'label' => 'Naam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam_ouder_voogd'.
  $field_instances['user-user-field_user_sms_naam_ouder_voogd'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 84,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 84,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 84,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam_ouder_voogd',
    'label' => 'Naam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_naam_verantwoorde'.
  $field_instances['user-user-field_user_sms_naam_verantwoorde'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 77,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 77,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_naam_verantwoorde',
    'label' => 'Naam verantwoordelijke leerlingbegeleiding',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 273,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_nationaliteit'.
  $field_instances['user-user-field_user_sms_nationaliteit'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 356,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_nationaliteit',
    'label' => 'Nationaliteit',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_nationaliteit_moe'.
  $field_instances['user-user-field_user_sms_nationaliteit_moe'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 158,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 140,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 140,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_nationaliteit_moe',
    'label' => 'Nationaliteit',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_nationaliteit_vad'.
  $field_instances['user-user-field_user_sms_nationaliteit_vad'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 75,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 130,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 130,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_nationaliteit_vad',
    'label' => 'Nationaliteit',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_nationaliteitscod'.
  $field_instances['user-user-field_user_sms_nationaliteitscod'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 357,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 52,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_nationaliteitscod',
    'label' => 'Nationaliteitscode',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 139,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_nld__non_verbale_'.
  $field_instances['user-user-field_user_sms_nld__non_verbale_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 315,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_nld__non_verbale_',
    'label' => 'NLD (non-verbale leerstoornis)',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 179,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_opvolging_voorzie'.
  $field_instances['user-user-field_user_sms_opvolging_voorzie'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 324,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_opvolging_voorzie',
    'label' => 'Opvolging voorzien?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 196,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_opvoling_voorzien'.
  $field_instances['user-user-field_user_sms_opvoling_voorzien'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 208,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 208,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_opvoling_voorzien',
    'label' => 'Opvolging voorzien?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 137,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_ouders'.
  $field_instances['user-user-field_user_sms_ouders'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 203,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_ouders',
    'label' => 'ouders',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 254,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_ouders_informeren'.
  $field_instances['user-user-field_user_sms_ouders_informeren'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 205,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_ouders_informeren',
    'label' => 'ouders informeren? (18+)',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 255,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_ouders_niet_meer_'.
  $field_instances['user-user-field_user_sms_ouders_niet_meer_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 204,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_ouders_niet_meer_',
    'label' => 'ouders niet meer informeren (18+)',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 256,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_periode_buo'.
  $field_instances['user-user-field_user_sms_periode_buo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 27,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_periode_buo',
    'label' => 'Periode BuO',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 188,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_postcode'.
  $field_instances['user-user-field_user_sms_postcode'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 111,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 106,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 106,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_postcode',
    'label' => 'Postcode',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 135,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_postcode_moeder'.
  $field_instances['user-user-field_user_sms_postcode_moeder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 151,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 117,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 117,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_postcode_moeder',
    'label' => 'Postcode',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 137,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_postcode_ouder_vo'.
  $field_instances['user-user-field_user_sms_postcode_ouder_vo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 88,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 85,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 85,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_postcode_ouder_vo',
    'label' => 'Postcode',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_postcode_vader'.
  $field_instances['user-user-field_user_sms_postcode_vader'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 69,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 142,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 142,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_postcode_vader',
    'label' => 'Postcode',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_rekeningnummer_ge'.
  $field_instances['user-user-field_user_sms_rekeningnummer_ge'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 245,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 68,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_rekeningnummer_ge',
    'label' => 'Rekeningnummer gezin',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_rijksregisternumm'.
  $field_instances['user-user-field_user_sms_rijksregisternumm'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 359,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 102,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 102,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_rijksregisternumm',
    'label' => 'Rijksregisternummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 119,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_roepnaam'.
  $field_instances['user-user-field_user_sms_roepnaam'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 348,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_roepnaam',
    'label' => 'Roepnaam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_s_middags_buiten_'.
  $field_instances['user-user-field_user_sms_s_middags_buiten_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 197,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 197,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_s_middags_buiten_',
    'label' => '\'s Middags buiten?',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 250,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_school_buo'.
  $field_instances['user-user-field_user_sms_school_buo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 29,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_school_buo',
    'label' => 'School BuO',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 187,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_schoolgeld'.
  $field_instances['user-user-field_user_sms_schoolgeld'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 246,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_schoolgeld',
    'label' => 'Schoolgeld',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl2_attest'.
  $field_instances['user-user-field_user_sms_sl2_attest'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 346,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 236,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl2_attest',
    'label' => 'Attest',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 219,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl2_leerjaar_en_s'.
  $field_instances['user-user-field_user_sms_sl2_leerjaar_en_s'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 343,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 234,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl2_leerjaar_en_s',
    'label' => 'Leerjaar en studierichting',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 218,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl2_school'.
  $field_instances['user-user-field_user_sms_sl2_school'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 344,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 235,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl2_school',
    'label' => 'School',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 220,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl2_schooljaar'.
  $field_instances['user-user-field_user_sms_sl2_schooljaar'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 342,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 233,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl2_schooljaar',
    'label' => 'Schooljaar',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 217,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl2_stad_school'.
  $field_instances['user-user-field_user_sms_sl2_stad_school'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 345,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 237,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl2_stad_school',
    'label' => 'Stad school',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 221,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl_attest'.
  $field_instances['user-user-field_user_sms_sl_attest'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 346,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 230,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl_attest',
    'label' => 'Attest',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 210,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl_clausulering'.
  $field_instances['user-user-field_user_sms_sl_clausulering'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 347,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 231,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl_clausulering',
    'label' => 'Clausulering',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 211,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl_leerjaar_en_st'.
  $field_instances['user-user-field_user_sms_sl_leerjaar_en_st'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 342,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 228,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl_leerjaar_en_st',
    'label' => 'Leerjaar en studierichting',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 209,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl_school'.
  $field_instances['user-user-field_user_sms_sl_school'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 343,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 229,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl_school',
    'label' => 'School',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 212,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl_schooljaar'.
  $field_instances['user-user-field_user_sms_sl_schooljaar'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 341,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 227,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl_schooljaar',
    'label' => 'Schooljaar',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 208,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sl_stad_school'.
  $field_instances['user-user-field_user_sms_sl_stad_school'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 345,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 232,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sl_stad_school',
    'label' => 'Stad school',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 213,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_soortleerling'.
  $field_instances['user-user-field_user_sms_soortleerling'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 'Regelmatig financierbaar',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_soortleerling',
    'label' => 'Type leerling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 107,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_sorteerveld'.
  $field_instances['user-user-field_user_sms_sorteerveld'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 97,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_sorteerveld',
    'label' => 'Sorteerveld',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_specialist'.
  $field_instances['user-user-field_user_sms_specialist'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 38,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_specialist',
    'label' => 'Specialist',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 135,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_splitsing_5tmm3_n'.
  $field_instances['user-user-field_user_sms_splitsing_5tmm3_n'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 100,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_splitsing_5tmm3_n',
    'label' => 'splitsing 5TMM3 NCZ',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 278,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_stad_gemeente_moe'.
  $field_instances['user-user-field_user_sms_stad_gemeente_moe'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 152,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 118,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 118,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_stad_gemeente_moe',
    'label' => 'Woonplaats',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 138,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_stad_gemeente_vad'.
  $field_instances['user-user-field_user_sms_stad_gemeente_vad'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 70,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 144,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 144,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_stad_gemeente_vad',
    'label' => 'Woonplaats',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 128,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_stamboeknummer'.
  $field_instances['user-user-field_user_sms_stamboeknummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 358,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 78,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 78,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_stamboeknummer',
    'label' => 'Stamboeknummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_status'.
  $field_instances['user-user-field_user_sms_status'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 89,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_status',
    'label' => 'Status (Smartschool)',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 103,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_straat'.
  $field_instances['user-user-field_user_sms_straat'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 108,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 108,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 108,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_straat',
    'label' => 'Straat',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_straat_moeder'.
  $field_instances['user-user-field_user_sms_straat_moeder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 148,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 137,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 137,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_straat_moeder',
    'label' => 'Straat',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 134,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_straat_vader'.
  $field_instances['user-user-field_user_sms_straat_vader'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 66,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 132,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 132,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_straat_vader',
    'label' => 'Straat',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 124,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_student_opmerking'.
  $field_instances['user-user-field_user_sms_student_opmerking'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 244,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 260,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_student_opmerking',
    'label' => 'Student opmerking',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 277,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_taal_met_broers_z'.
  $field_instances['user-user-field_user_sms_taal_met_broers_z'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 57,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 57,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_taal_met_broers_z',
    'label' => 'Taal met broers/zussen',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_taal_met_moeder'.
  $field_instances['user-user-field_user_sms_taal_met_moeder'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 61,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 61,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_taal_met_moeder',
    'label' => 'Taal met moeder',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_taal_met_vader'.
  $field_instances['user-user-field_user_sms_taal_met_vader'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 60,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 60,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_taal_met_vader',
    'label' => 'Taal met vader',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_taal_met_vrienden'.
  $field_instances['user-user-field_user_sms_taal_met_vrienden'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 58,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 58,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_taal_met_vrienden',
    'label' => 'Taal met vrienden',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_telefoon_huisdokt'.
  $field_instances['user-user-field_user_sms_telefoon_huisdokt'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 289,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_telefoon_huisdokt',
    'label' => 'Telefoon huisdokter',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 173,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_telefoon_werk_moe'.
  $field_instances['user-user-field_user_sms_telefoon_werk_moe'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 298,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_telefoon_werk_moe',
    'label' => 'Telefoon werk',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 162,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_telefoon_werk_vad'.
  $field_instances['user-user-field_user_sms_telefoon_werk_vad'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 295,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_telefoon_werk_vad',
    'label' => 'Telefoon werk',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 152,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_telefoonnummer'.
  $field_instances['user-user-field_user_sms_telefoonnummer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 360,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_telefoonnummer',
    'label' => 'Telefoonnummer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 123,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_telefoonnummer_co'.
  $field_instances['user-user-field_user_sms_telefoonnummer_co'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_telefoonnummer_co',
    'label' => 'Telefoonnummer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_telefoonnummer_ve'.
  $field_instances['user-user-field_user_sms_telefoonnummer_ve'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 21,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_telefoonnummer_ve',
    'label' => 'Telefoonnummer verantwoordelijke leerlingbegeleiding',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 274,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_telnummer_coac1'.
  $field_instances['user-user-field_user_sms_telnummer_coac1'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 242,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_telnummer_coac1',
    'label' => 'Telefoonnummer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_telnummer_coac2'.
  $field_instances['user-user-field_user_sms_telnummer_coac2'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'telephone',
        'settings' => array(
          'conditions' => array(),
          'title' => '',
        ),
        'type' => 'telephone_link',
        'weight' => 249,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_telnummer_coac2',
    'label' => 'Telefoonnummer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_test'.
  $field_instances['user-user-field_user_sms_test'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 11,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_test',
    'label' => 'test',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 281,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_toelating_gebruik'.
  $field_instances['user-user-field_user_sms_toelating_gebruik'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 202,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_toelating_gebruik',
    'label' => 'Toelating gebruik foto- & videomateriaal',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'type' => 'options_buttons',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 253,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_toelating_te_laat'.
  $field_instances['user-user-field_user_sms_toelating_te_laat'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 200,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 200,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_toelating_te_laat',
    'label' => 'Toelating te laat komen',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 252,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_toelating_vroeger'.
  $field_instances['user-user-field_user_sms_toelating_vroeger'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 199,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 199,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_toelating_vroeger',
    'label' => 'Toelating vroeger vertrekken',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 251,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_type_buo'.
  $field_instances['user-user-field_user_sms_type_buo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 26,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_type_buo',
    'label' => 'Type BuO',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 189,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_type_coaccount1'.
  $field_instances['user-user-field_user_sms_type_coaccount1'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 239,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_type_coaccount1',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_type_coaccount2'.
  $field_instances['user-user-field_user_sms_type_coaccount2'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 246,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_type_coaccount2',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_type_coaccount3'.
  $field_instances['user-user-field_user_sms_type_coaccount3'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_type_coaccount3',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_type_coaccount4'.
  $field_instances['user-user-field_user_sms_type_coaccount4'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_type_coaccount4',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_type_coaccount5'.
  $field_instances['user-user-field_user_sms_type_coaccount5'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_type_coaccount5',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_type_coaccount6'.
  $field_instances['user-user-field_user_sms_type_coaccount6'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_type_coaccount6',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_verslag_clb'.
  $field_instances['user-user-field_user_sms_verslag_clb'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_verslag_clb',
    'label' => 'Verslag CLB',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 263,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_vervoersmiddel'.
  $field_instances['user-user-field_user_sms_vervoersmiddel'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 116,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 116,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_vervoersmiddel',
    'label' => 'Vervoersmiddel',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_voornaam'.
  $field_instances['user-user-field_user_sms_voornaam'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_voornaam',
    'label' => 'Voornaam',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_voornaam_coac1'.
  $field_instances['user-user-field_user_sms_voornaam_coac1'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 240,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_voornaam_coac1',
    'label' => 'Voornaam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_voornaam_coac2'.
  $field_instances['user-user-field_user_sms_voornaam_coac2'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 247,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_voornaam_coac2',
    'label' => 'Voornaam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_voornaam_coaccoun'.
  $field_instances['user-user-field_user_sms_voornaam_coaccoun'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_voornaam_coaccoun',
    'label' => 'Voornaam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_voornaam_ouder_vo'.
  $field_instances['user-user-field_user_sms_voornaam_ouder_vo'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 85,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 90,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 90,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_voornaam_ouder_vo',
    'label' => 'Voornaam',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_wanneer_ingeent_t'.
  $field_instances['user-user-field_user_sms_wanneer_ingeent_t'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 219,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 219,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_wanneer_ingeent_t',
    'label' => 'Wanneer ingeënt tegen klem?',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 151,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_website'.
  $field_instances['user-user-field_user_sms_website'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 93,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 93,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 125,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_welke_en_hoeveel_'.
  $field_instances['user-user-field_user_sms_welke_en_hoeveel_'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 34,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_welke_en_hoeveel_',
    'label' => 'Welke en hoeveel?',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_wiskunde_5temif'.
  $field_instances['user-user-field_user_sms_wiskunde_5temif'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 101,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_wiskunde_5temif',
    'label' => 'Wiskunde 5TEMIF',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 279,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_woonplaats'.
  $field_instances['user-user-field_user_sms_woonplaats'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 112,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'click_to_edit_style' => 'button',
          'conditions' => array(),
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 103,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 103,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_woonplaats',
    'label' => 'Woonplaats',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 136,
    ),
  );

  // Exported field_instance: 'user-user-field_user_sms_woonplaats___deel'.
  $field_instances['user-user-field_user_sms_woonplaats___deel'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 113,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_sms_woonplaats___deel',
    'label' => 'Woonplaats - deelgemeente',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 137,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('\'s Middags buiten?');
  t('ADHD');
  t('ASS (Autisme Spectrum Stoornis)');
  t('Aandachtspunten PV en/of LO?');
  t('Aantal broers');
  t('Aantal zussen');
  t('Aantal zussen/broers reeds op school');
  t('Achternaam');
  t('Adres');
  t('Afstand naar huis');
  t('Aggregaat/GPB');
  t('Algemene opmerkingen');
  t('Allergie');
  t('Andere LS j/n');
  t('Andere MP j/n');
  t('Andere leerstoornissen');
  t('Andere medische problemen');
  t('Astma');
  t('Attest');
  t('Attest LO?');
  t('Attest ingeleverd');
  t('Attest leerstoornis');
  t('B BaSo fiche');
  t('B Kopie BaSo fiche');
  t('B Type BO');
  t('B gemeente school');
  t('B getuigschrift');
  t('B leerjaar');
  t('B naam school');
  t('B rekenen');
  t('B resultaat');
  t('B schooljaar');
  t('B taal');
  t('Basisrol');
  t('Betaalwijze');
  t('Brief toel. med. meegeg.');
  t('Buitengewoon onderwijs');
  t('Busnummer');
  t('Clausulering');
  t('Concentratieproblemen');
  t('Contact via (andere)');
  t('Contact via CLB');
  t('Contact via advertentie');
  t('Contact via familie');
  t('Contact via opendeurdag');
  t('Contact via schoolfolder');
  t('Contact via tv');
  t('Contact via website');
  t('Deskundige');
  t('Diabetes');
  t('Diagnose deskundige?');
  t('Diagnose specialist?');
  t('Diploma');
  t('Doktersattest voor hoe lang?');
  t('Doktersattest?');
  t('Dyscalculie');
  t('Dyslexie');
  t('E-mail');
  t('E-mailadres');
  t('Epilepsie');
  t('Extra voornamen');
  t('Fax');
  t('GON');
  t('GON-begeleider');
  t('Geboortedatum');
  t('Geboorteland');
  t('Geboorteplaats');
  t('Gebruikersnaam');
  t('Gebruikt laptop in klas');
  t('Geldigheidsduur doktersattest');
  t('Geslacht');
  t('Gezinshoofd');
  t('Gezinssituatie');
  t('Godsdienstkeuze');
  t('Groepen');
  t('Huisdokter');
  t('Huisdokter woonplaats');
  t('Huisnummer');
  t('Ingeschreven door');
  t('Ingeënt tegen klem');
  t('Initialen');
  t('Instantmessenger');
  t('Intern/Extern?');
  t('Internaat');
  t('Internnummer (Smartschool)');
  t('Klasnummer');
  t('Koppelingsveld schoolagenda');
  t('Laatste succesvolle login');
  t('Land');
  t('Leerjaar en studierichting');
  t('MP opmerking');
  t('Mag praktijklessen/LO volgen?');
  t('Medicatie?');
  t('Medische problemen');
  t('Mobielnummer');
  t('NLD (non-verbale leerstoornis)');
  t('Naam');
  t('Naam verantwoordelijke leerlingbegeleiding');
  t('Nationaliteit');
  t('Nationaliteitscode');
  t('Opdracht');
  t('Opvolging voorzien?');
  t('Organisatie');
  t('Periode BuO');
  t('Postcode');
  t('Rekeningnummer gezin');
  t('Rijksregisternummer');
  t('Roepnaam');
  t('School');
  t('School BuO');
  t('Schoolgeld');
  t('Schooljaar');
  t('Sorteerveld');
  t('Specialist');
  t('Stad school');
  t('Stamboeknummer');
  t('Status (Smartschool)');
  t('Statuut');
  t('Straat');
  t('Student opmerking');
  t('Taal met broers/zussen');
  t('Taal met moeder');
  t('Taal met vader');
  t('Taal met vrienden');
  t('Telefoon huisdokter');
  t('Telefoon werk');
  t('Telefoonnummer');
  t('Telefoonnummer verantwoordelijke leerlingbegeleiding');
  t('Toelating gebruik foto- & videomateriaal');
  t('Toelating te laat komen');
  t('Toelating vroeger vertrekken');
  t('Type');
  t('Type BuO');
  t('Type leerling');
  t('Verslag CLB');
  t('Vervoersmiddel');
  t('Voornaam');
  t('Wanneer ingeënt tegen klem?');
  t('Website');
  t('Welke en hoeveel?');
  t('Wiskunde 5TEMIF');
  t('Woonplaats');
  t('Woonplaats - deelgemeente');
  t('hoeveelste in rij');
  t('isAuthenticatorAppEnabled');
  t('isEmailVerified');
  t('isYubikeyEnabled');
  t('ouders');
  t('ouders informeren? (18+)');
  t('ouders niet meer informeren (18+)');
  t('splitsing 5TMM3 NCZ');
  t('test');

  return $field_instances;
}
