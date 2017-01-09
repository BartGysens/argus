<?php
/**
 * @file
 * argus_nascholingen.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function argus_nascholingen_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_event_nascholing-comment_body'.
  $field_instances['comment-comment_node_event_nascholing-comment_body'] = array(
    'bundle' => 'comment_node_event_nascholing',
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
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-body'.
  $field_instances['node-event_nascholing-body'] = array(
    'bundle' => 'event_nascholing',
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
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Beschrijving',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_aard'.
  $field_instances['node-event_nascholing-field_ev_aard'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Aanduiden indien het niet gaat om een standaardnascholing maar als het deel uitmaakt van werkplekleren of duaal leren.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_aard',
    'label' => 'Aard',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_attest'.
  $field_instances['node-event_nascholing-field_ev_attest'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Werd er al een attest binnengebracht?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_attest',
    'label' => 'Attest',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_bijlage'.
  $field_instances['node-event_nascholing-field_ev_bijlage'] = array(
    'bundle' => 'event_nascholing',
    'deleted' => 0,
    'description' => 'Indien u materiaal heeft ontvangen, gelieve dit hierbij te voegen. Dit kan een diavoorstelling zijn, een syllabus, werkbladen... Gelieve zo veel mogelijk materiaal te delen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_bijlage',
    'label' => 'Bijlage',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'bijlagenNAS',
      'file_extensions' => 'txt doc docx ppt pptx pdf jpg jpeg png xls xlsx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_datum'.
  $field_instances['node-event_nascholing-field_ev_datum'] = array(
    'bundle' => 'event_nascholing',
    'deleted' => 0,
    'description' => 'Datum en uur wanneer de nascholing plaatsvindt.',
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
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_datum',
    'label' => 'Tijdstip',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 1,
        'increment' => 1,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 1,
        'text_parts' => array(),
        'year_range' => '-1:+3',
      ),
      'type' => 'date_popup',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_feedback'.
  $field_instances['node-event_nascholing-field_ev_feedback'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_feedback',
    'label' => 'Feedback',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_goedkeuring'.
  $field_instances['node-event_nascholing-field_ev_goedkeuring'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => array(
      0 => array(
        'value' => 'Nieuw',
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
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_goedkeuring',
    'label' => 'Goedkeuring',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_inrichter'.
  $field_instances['node-event_nascholing-field_ev_inrichter'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Naam en adres van de inrichter',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_inrichter',
    'label' => 'Inrichter & locatie',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_kostprijs_nas'.
  $field_instances['node-event_nascholing-field_ev_kostprijs_nas'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => array(
      0 => array(
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => 'Officiële kostprijs van de nascholing',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'conditions' => array(),
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_kostprijs_nas',
    'label' => 'Kostprijs',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_onderwerp'.
  $field_instances['node-event_nascholing-field_ev_onderwerp'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Onderwerp van de nascholing (enkel korte omschrijving of titel)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_onderwerp',
    'label' => 'Onderwerp',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-event_nascholing-field_ev_opleidingscheques'.
  $field_instances['node-event_nascholing-field_ev_opleidingscheques'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Ik vraag opleidingscheques aan voor deze nascholing.',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_opleidingscheques',
    'label' => 'Opleidingscheques',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_opm_tips'.
  $field_instances['node-event_nascholing-field_ev_opm_tips'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Heeft u nog opmerkingen of nuttige tips omtrent de gevolgde nascholing?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_opm_tips',
    'label' => 'Opmerkingen/tips',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_toepasbaar'.
  $field_instances['node-event_nascholing-field_ev_toepasbaar'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kunt u de verworven kennis of vaardigheden aanwenden in uw lessen, in uw vakgroep of als lid van het schoolteam?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_toepasbaar',
    'label' => 'Toepasbaar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_vakgroep'.
  $field_instances['node-event_nascholing-field_ev_vakgroep'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Selecteer de vakgroep waarop de nascholing betrekking heeft. Indien het een algemeen thema betreft, selecteer dan \'beleidsondersteunend\'.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_vakgroep',
    'label' => 'Vakgroep',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_verwachtingen'.
  $field_instances['node-event_nascholing-field_ev_verwachtingen'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Werden uw verwachtingen ingelost?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_verwachtingen',
    'label' => 'Verwachtingen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_voorbeeld'.
  $field_instances['node-event_nascholing-field_ev_voorbeeld'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Toon aan met een voorbeeld hoe u de verworven kennis of vaardigheden concreet gaat toepassen in uw lessen, in uw vakgroep of als lid van het schoolteam.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_voorbeeld',
    'label' => 'Voorbeeld',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Zoeken',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-event_nascholing-field_ev_zin_inhoud'.
  $field_instances['node-event_nascholing-field_ev_zin_inhoud'] = array(
    'bundle' => 'event_nascholing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Was de inhoud van de nascholing zinvol?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ev_zin_inhoud',
    'label' => 'Inhoud zinvol',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aanduiden indien het niet gaat om een standaardnascholing maar als het deel uitmaakt van werkplekleren of duaal leren.');
  t('Aard');
  t('Attest');
  t('Beschrijving');
  t('Bijlage');
  t('Comment');
  t('Datum en uur wanneer de nascholing plaatsvindt.');
  t('Feedback');
  t('Goedkeuring');
  t('Heeft u nog opmerkingen of nuttige tips omtrent de gevolgde nascholing?');
  t('Ik vraag opleidingscheques aan voor deze nascholing.');
  t('Indien u materiaal heeft ontvangen, gelieve dit hierbij te voegen. Dit kan een diavoorstelling zijn, een syllabus, werkbladen... Gelieve zo veel mogelijk materiaal te delen.');
  t('Inhoud zinvol');
  t('Inrichter & locatie');
  t('Kostprijs');
  t('Kunt u de verworven kennis of vaardigheden aanwenden in uw lessen, in uw vakgroep of als lid van het schoolteam?');
  t('Naam en adres van de inrichter');
  t('Officiële kostprijs van de nascholing');
  t('Onderwerp');
  t('Onderwerp van de nascholing (enkel korte omschrijving of titel)');
  t('Opleidingscheques');
  t('Opmerkingen/tips');
  t('Selecteer de vakgroep waarop de nascholing betrekking heeft. Indien het een algemeen thema betreft, selecteer dan \'beleidsondersteunend\'.');
  t('Tijdstip');
  t('Toepasbaar');
  t('Toon aan met een voorbeeld hoe u de verworven kennis of vaardigheden concreet gaat toepassen in uw lessen, in uw vakgroep of als lid van het schoolteam.');
  t('Vakgroep');
  t('Verwachtingen');
  t('Voorbeeld');
  t('Was de inhoud van de nascholing zinvol?');
  t('Werd er al een attest binnengebracht?');
  t('Werden uw verwachtingen ingelost?');

  return $field_instances;
}
