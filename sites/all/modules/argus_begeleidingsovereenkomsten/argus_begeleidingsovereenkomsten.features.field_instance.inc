<?php
/**
 * @file
 * argus_begeleidingsovereenkomsten.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function argus_begeleidingsovereenkomsten_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_aanleiding'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_aanleiding'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
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
    'field_name' => 'field_msl_bo_aanleiding',
    'label' => 'Aanleiding',
    'required' => 1,
    'settings' => array(
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_afspraken_leerling'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_afspraken_leerling'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => array(
      0 => array(
        'value' => '<ul><li>je steeds aanwezig bent op school en dat je bij wettige afwezigheid de regels volgt, zoals het schoolreglement dat voorschrijft;</li><li>je het schoolreglement naleeft en zelf actief zal meewerken aan een positieve sfeer in de school en in de klas;</li><li>je je strikt houdt aan de afspraken, die met je gemaakt worden;</li><li>je elke week je volgkaart komt ophalen op het ILB, je volgkaart dan elk lesuur laat invullen door de leerkracht en er een onberispelijk gedrag op wordt aangeduid (geen ‘niet ok’ aanmerkingen);</li><li>je goed je best zal doet om dit jaar te slagen.</li></ul>',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_msl_bo_afspraken_leerling',
    'label' => 'Afspraken met de leerling',
    'required' => 0,
    'settings' => array(
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_afspraken_ouders'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_afspraken_ouders'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => array(
      0 => array(
        'value' => '<ul><li>zij samenwerken met de school om jouw gedrag mee te helpen bij te sturen;</li><li>je agenda minstens twee keer per week wordt gecontroleerd;</li><li>ze naar elk oudercontact komen om de evolutie van jou in de school op te volgen.</li></ul>',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_msl_bo_afspraken_ouders',
    'label' => 'Afspraken met de ouders',
    'required' => 0,
    'settings' => array(
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_afspraken_school'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_afspraken_school'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => array(
      0 => array(
        'value' => '<ul><li>er een wekelijkse opvolging is door de klastitularis, die een individueel gesprek zal hebben met jou;</li><li>er een 3-wekelijkse opvolging is via een overleg tussen de interne leerlingenbegeleiding en de &nbsp;klastitularis;</li><li>er een mogelijkheid is om het individueel dossier in te kijken op aanvraag en na afspraak.</li></ul>',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
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
    'field_name' => 'field_msl_bo_afspraken_school',
    'label' => 'Afspraken met de school',
    'required' => 0,
    'settings' => array(
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_conclusie'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_conclusie'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => array(
      0 => array(
        'value' => '<p>Deze begeleidingsovereenkomst loopt telkens voor een periode van 3 weken; zolang er geen positieve evolutie vastgesteld wordt door de klastitularis, in samenspraak met de interne leerlingenbegeleiding. In geval van verlenging met 3 weken, zullen jouw ouders hiervan schriftelijk op de hoogte gehouden worden.</p><p><strong>Indien jij je niet houdt aan bovenstaande afspraken kan de tuchtprocedure opgestart worden. Maar we hopen dat dit de laatste keer was en dat het vanaf nu beter zal gaan.</strong></p>',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
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
    'field_name' => 'field_msl_bo_conclusie',
    'label' => 'Conclusie',
    'required' => 0,
    'settings' => array(
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
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_einddatum'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_einddatum'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'datum_kort_',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
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
    'field_name' => 'field_msl_bo_einddatum',
    'label' => 'Einddatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
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
      'type' => 'date_popup',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_handtekeningen'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_handtekeningen'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_msl_bo_handtekeningen',
    'label' => 'Handtekeningen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_leerling'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_leerling'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_msl_bo_leerling',
    'label' => 'Leerling',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_meldingen'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_meldingen'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
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
    'field_name' => 'field_msl_bo_meldingen',
    'label' => 'Meldingen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiselect',
      'settings' => array(),
      'type' => 'multiselect',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_startdatum'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_startdatum'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'datum_kort_',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_msl_bo_startdatum',
    'label' => 'Startdatum',
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
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_type'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_type'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
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
    'field_name' => 'field_msl_bo_type',
    'label' => 'Type',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_volgkaart'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_volgkaart'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_msl_bo_volgkaart',
    'label' => 'Volgkaart',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-msl_begeleidingsovereenkomst-field_msl_bo_volgkaarten'
  $field_instances['node-msl_begeleidingsovereenkomst-field_msl_bo_volgkaarten'] = array(
    'bundle' => 'msl_begeleidingsovereenkomst',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_msl_bo_volgkaarten',
    'label' => 'Volgkaarten',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiselect',
      'settings' => array(),
      'type' => 'multiselect',
      'weight' => 15,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aanleiding');
  t('Afspraken met de leerling');
  t('Afspraken met de ouders');
  t('Afspraken met de school');
  t('Conclusie');
  t('Einddatum');
  t('Handtekeningen');
  t('Leerling');
  t('Meldingen');
  t('Startdatum');
  t('Type');
  t('Volgkaart');
  t('Volgkaarten');

  return $field_instances;
}
