<?php
/**
 * @file
 * argus_hrm.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function argus_hrm_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_hrm_evaluatiegesprek-comment_body'.
  $field_instances['comment-comment_node_hrm_evaluatiegesprek-comment_body'] = array(
    'bundle' => 'comment_node_hrm_evaluatiegesprek',
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

  // Exported field_instance:
  // 'comment-comment_node_hrm_flitsbezoek-comment_body'.
  $field_instances['comment-comment_node_hrm_flitsbezoek-comment_body'] = array(
    'bundle' => 'comment_node_hrm_flitsbezoek',
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

  // Exported field_instance:
  // 'comment-comment_node_hrm_functioneringsgesprek-comment_body'.
  $field_instances['comment-comment_node_hrm_functioneringsgesprek-comment_body'] = array(
    'bundle' => 'comment_node_hrm_functioneringsgesprek',
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

  // Exported field_instance:
  // 'comment-comment_node_hrm_klasbezoek-comment_body'.
  $field_instances['comment-comment_node_hrm_klasbezoek-comment_body'] = array(
    'bundle' => 'comment_node_hrm_klasbezoek',
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

  // Exported field_instance:
  // 'comment-comment_node_hrm_planningsgesprek-comment_body'.
  $field_instances['comment-comment_node_hrm_planningsgesprek-comment_body'] = array(
    'bundle' => 'comment_node_hrm_planningsgesprek',
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

  // Exported field_instance: 'node-hrm_evaluatiegesprek-field_datum'.
  $field_instances['node-hrm_evaluatiegesprek-field_datum'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum',
    'label' => 'Periode van toepassing',
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg1_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg1_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg1_positieve_observaties',
    'label' => 'Positieve observaties',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg1_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg1_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg1_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg2_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg2_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg2_positieve_observaties',
    'label' => 'Positieve observaties',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg2_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg2_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg2_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
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

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg3_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg3_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg3_positieve_observaties',
    'label' => 'Positieve observaties',
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

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg3_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg3_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg3_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg4_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg4_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg4_positieve_observaties',
    'label' => 'Positieve observaties',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg4_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg4_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg4_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg5_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg5_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg5_positieve_observaties',
    'label' => 'Positieve observaties',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg5_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg5_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg5_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg6_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg6_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg6_positieve_observaties',
    'label' => 'Positieve observaties',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg6_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg6_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg6_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg7_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg7_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg7_positieve_observaties',
    'label' => 'Positieve observaties',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg7_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg7_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg7_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg8_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg8_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg8_positieve_observaties',
    'label' => 'Positieve observaties',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg8_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg8_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg8_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg9_positieve_observaties'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg9_positieve_observaties'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg9_positieve_observaties',
    'label' => 'Positieve observaties',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg9_werkpunten_afspraken'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg9_werkpunten_afspraken'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
    'field_name' => 'field_eg9_werkpunten_afspraken',
    'label' => 'Werkpunten en afspraken',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-hrm_evaluatiegesprek-field_eg_beoordeling'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg_beoordeling'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg_beoordeling',
    'label' => 'Beoordeling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_eg_eindconclusie'.
  $field_instances['node-hrm_evaluatiegesprek-field_eg_eindconclusie'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
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
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_eg_eindconclusie',
    'label' => 'Eindconclusie',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_evaluatiegesprek-field_evaluatiegesprek_status'.
  $field_instances['node-hrm_evaluatiegesprek-field_evaluatiegesprek_status'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
    'default_value' => array(
      0 => array(
        'value' => 'nieuw',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
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
    'field_name' => 'field_evaluatiegesprek_status',
    'label' => 'Status',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-hrm_evaluatiegesprek-field_personeelslid'.
  $field_instances['node-hrm_evaluatiegesprek-field_personeelslid'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_personeelslid',
    'label' => 'Personeelslid',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-hrm_evaluatiegesprek-field_tijdstip'.
  $field_instances['node-hrm_evaluatiegesprek-field_tijdstip'] = array(
    'bundle' => 'hrm_evaluatiegesprek',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_tijdstip',
    'label' => 'Tijdstip',
    'required' => 1,
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_flitsbezoek-field_flitsbezoek_interventies'.
  $field_instances['node-hrm_flitsbezoek-field_flitsbezoek_interventies'] = array(
    'bundle' => 'hrm_flitsbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Welke interventies doet de leerkracht om te zorgen dat alle leerlingen het leerdoel behalen?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_flitsbezoek_interventies',
    'label' => 'Interventies',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-hrm_flitsbezoek-field_flitsbezoek_leerdoel'.
  $field_instances['node-hrm_flitsbezoek-field_flitsbezoek_leerdoel'] = array(
    'bundle' => 'hrm_flitsbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wat is het leerdoel van de les en in hoeverre zijn de lesactiviteiten in lijn met dit doel?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_flitsbezoek_leerdoel',
    'label' => 'Leerdoel',
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

  // Exported field_instance:
  // 'node-hrm_flitsbezoek-field_flitsbezoek_leerlingen'.
  $field_instances['node-hrm_flitsbezoek-field_flitsbezoek_leerlingen'] = array(
    'bundle' => 'hrm_flitsbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Doen de leerlingen wat ze moeten doen?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_flitsbezoek_leerlingen',
    'label' => 'Leerlingen',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-hrm_flitsbezoek-field_flitsbezoek_lokaal'.
  $field_instances['node-hrm_flitsbezoek-field_flitsbezoek_lokaal'] = array(
    'bundle' => 'hrm_flitsbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Muren scannen: wat hangt er allemaal in het leslokaal dat bijdraagt (of juist niet) aan de lessen?',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_flitsbezoek_lokaal',
    'label' => 'Lokaal',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_flitsbezoek-field_flitsbezoek_preventie'.
  $field_instances['node-hrm_flitsbezoek-field_flitsbezoek_preventie'] = array(
    'bundle' => 'hrm_flitsbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zijn er bijzonderheden op het gebied van veiligheid en gezondheid?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
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
    'field_name' => 'field_flitsbezoek_preventie',
    'label' => 'Preventie',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-hrm_flitsbezoek-field_personeelslid'.
  $field_instances['node-hrm_flitsbezoek-field_personeelslid'] = array(
    'bundle' => 'hrm_flitsbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_personeelslid',
    'label' => 'Personeelslid',
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

  // Exported field_instance: 'node-hrm_flitsbezoek-field_tijdstip'.
  $field_instances['node-hrm_flitsbezoek-field_tijdstip'] = array(
    'bundle' => 'hrm_flitsbezoek',
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
    'field_name' => 'field_tijdstip',
    'label' => 'Tijdstip',
    'required' => 1,
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-hrm_functioneringsgesprek-field_datum'.
  $field_instances['node-hrm_functioneringsgesprek-field_datum'] = array(
    'bundle' => 'hrm_functioneringsgesprek',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_datum',
    'label' => 'Periode van toepassing',
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_functioneringsgesprek-field_functioneringsg_status'.
  $field_instances['node-hrm_functioneringsgesprek-field_functioneringsg_status'] = array(
    'bundle' => 'hrm_functioneringsgesprek',
    'default_value' => array(
      0 => array(
        'value' => 'nieuw',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
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
    'field_name' => 'field_functioneringsg_status',
    'label' => 'Status',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_functioneringsgesprek-field_personeelslid'.
  $field_instances['node-hrm_functioneringsgesprek-field_personeelslid'] = array(
    'bundle' => 'hrm_functioneringsgesprek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_personeelslid',
    'label' => 'Personeelslid',
    'required' => 0,
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-hrm_functioneringsgesprek-field_tijdstip'.
  $field_instances['node-hrm_functioneringsgesprek-field_tijdstip'] = array(
    'bundle' => 'hrm_functioneringsgesprek',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_tijdstip',
    'label' => 'Tijdstip',
    'required' => 1,
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_functioneringsgesprek-field_voorgestelde_punten_evalua'.
  $field_instances['node-hrm_functioneringsgesprek-field_voorgestelde_punten_evalua'] = array(
    'bundle' => 'hrm_functioneringsgesprek',
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
    'field_name' => 'field_voorgestelde_punten_evalua',
    'label' => 'Voorgestelde punten evaluator',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_functioneringsgesprek-field_voorgestelde_punten_person'.
  $field_instances['node-hrm_functioneringsgesprek-field_voorgestelde_punten_person'] = array(
    'bundle' => 'hrm_functioneringsgesprek',
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
    'field_name' => 'field_voorgestelde_punten_person',
    'label' => 'Voorgestelde punten personeelslid',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-body'.
  $field_instances['node-hrm_klasbezoek-body'] = array(
    'bundle' => 'hrm_klasbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '(positieve punten en groeikansen)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Verslag',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_bijlage'.
  $field_instances['node-hrm_klasbezoek-field_bijlage'] = array(
    'bundle' => 'hrm_klasbezoek',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
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
    'field_name' => 'field_bijlage',
    'label' => 'Bijlage',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'hrm/klasbezoeken',
      'file_extensions' => 'txt pdf doc docx xls xlsx',
      'max_filesize' => 10,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_klasbezoek_activiteit'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_activiteit'] = array(
    'bundle' => 'hrm_klasbezoek',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_klasbezoek_activiteit',
    'label' => 'Activiteit',
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
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_klasbezoek_afspraken'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_afspraken'] = array(
    'bundle' => 'hrm_klasbezoek',
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
    'field_name' => 'field_klasbezoek_afspraken',
    'label' => 'Afspraken',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_klasbezoek-field_klasbezoek_andere_focus'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_andere_focus'] = array(
    'bundle' => 'hrm_klasbezoek',
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
    'field_name' => 'field_klasbezoek_andere_focus',
    'label' => 'Andere focus',
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
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_klasbezoek_did_comp'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_did_comp'] = array(
    'bundle' => 'hrm_klasbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>In deze kijkwijzer staan de didactische competenties van de leraar centraal.</p>
<p>De kijkwijzer geeft een idee in welke mate de leraar aandacht heeft voor enkele belangrijke didactische aspecten van het leraarschap, met name: de keuze en het hanteren van de leerplandoelstellingen en de leerinhouden, de werkvormen, het gebruik van leermiddelen, de evaluatie, reflectie en registratie en tot slot belichten we het differentiëren in de klas.</p>

<p><strong>Keuze en hanteren van de leerplandoelstellingen en de leerinhouden</strong></p>
<p>Voor leraren zijn leerplannen een leidraad bij de vormgeving van de concrete lespraktijk. Het leerplan bevat leerplandoelstellingen die de leraar dient te realiseren met zijn leerlingen.</p>
<p>Hierbij is het vertalen van de leerplandoelstellingen naar concrete en operationele lesdoelstellingen -waarbij de leraar rekening houdt met de beginsituatie van de leerlingen- cruciaal.</p>
<p>De keuze en correctheid van de leerinhouden bepalen de kwaliteit van de aangeboden leerstof.</p>

<p><strong>Keuze en hanteren van de werkvormen</strong></p>
<p>Door de werkvormen te variëren, speelt een leerkracht in op de verschillende leerstijlen van de leerlingen.1 Dit vereist van de leerkracht dat hij beschikt over een arsenaal van zulke werkvormen, dat hij de leerlingen goed kent en dat hij in staat is een bij de leerling passende werkvorm te kiezen.</p>
<p>Gezien dit een niet zo een eenvoudige opdracht is, gaan leerkrachten bij de introductie van nieuwe leerstof verschillende werkvormen combineren of gelijktijdig hanteren, in de hoop dat elke leerling oppikt wat hij nodig heeft.</p>
<p>Bij de verwerking van de leerstof via opdrachten kan de leerkracht dan nagaan welke leerlingen nog een aanvullende instructie via een andere werkvorm nodig hebben.</p>

<p><strong>Keuze en hanteren van de leermiddelen</strong></p>
<p>De keuze van een leermiddel ontslaat de leraar niet van de verplichting een goedgekeurd leerplan te gebruiken. Integendeel, waar een leermiddel een hulpmiddel kan zijn, is het leerplan de enige waarborg om te voldoen aan de regelgeving van de overheid wiens taak het is om (specifieke) eindtermen en ontwikkelingsdoelen te bewaken.</p>
<p>Uitgevers van leermiddelen worden op regelmatige basis geïnformeerd over de achterliggende visie, de inhouden en de ontwikkelingen van nieuwe leerplannen. Toch is het belangrijk dat wanneer de leraar een keuze van leermiddelen heeft gemaakt hij/zij kritisch nagaat of alle leerplandoelstellingen ook werkelijk gerealiseerd worden.</p>

<p><strong>Keuze en praktijk van evaluatie – reflectie - rapporteren</strong></p>
<p>De school is verantwoordelijk voor het realiseren van de doelstellingen opgenomen in de gehanteerde leerplannen. Evaluatie is een het middel om na te gaan in hoeverre deze doelstellingen bij de leerlingen bereikt zijn.</p>
<p>Evalueren zien we dan ook als een permanente activiteit die aan de hand van concrete vaststellingen door de leraar, de lerarengroep, de leerling … gegevens aanreikt over het leren.</p>

<p><strong>Omgaan met verschillen – differentiatie</strong></p>
<p>Omgaan met verschillen is één van de uitdagingen waar het onderwijs vandaag mee te maken heeft. Vanaf de eerste schooldag verschillen leerlingen van elkaar in mogelijkheden, kennis, vaardigheden, attitudes en motivatie over wat onderwezen gaat worden.</p>
<p>Ondanks het feit dat differentiatie in de klas een manier is waarop een leerkracht kan omgaan met de verschillen tussen leerlingen in de klas geven leraren vaak les alsof er geen verschillen tussen de leerlingen zijn. Men kan differentiëren op alle momenten van de les en op verschillende manieren nl. naar inhoud, tempo, instructie en evaluatie. Ook het genderbewust(er) lesgeven zien we als een manier om om te gaan met verschillen. Recent onderzoek heeft immers uitgewezen dat gender nog steeds een grote rol speelt bij leerkracht-leerling interacties.</p>
<p>Elke mens is uiteindelijk verschillend. Leerlingen leren op school niet alleen omgaan met verschillen in anderen, maar ook met hun eigen anders-zijn. Gelijkwaardigheid impliceert dat iedereen gelijke kansen krijgt. En soms is daarvoor een ongelijke behandeling nodig.</p>',
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
    'field_name' => 'field_klasbezoek_did_comp',
    'label' => 'Didactische competenties',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_klasbezoek_org_comp'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_org_comp'] = array(
    'bundle' => 'hrm_klasbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>Een goede organisatie is een voorwaarde voor het leren. De organisatorische competenties van de leraar omvatten enerzijds een goed beheer van tijd en ruimte enerzijds en een effectief klasmanagement anderzijds. We behandelen beide aspecten in deze kijkwijzer.</p>

<p><strong>Algemeen klasmanagement</strong></p>
<p>Hier gaat het over orde houden in de klas: de manier waarop de leraar de leiding neemt, of omgaat met ongewenst en storend gedrag, efficiënt gebruik van de beschikbare tijd …</p>

<p><strong>De klas inrichten en aankleden</strong></p>
<p>De leraar is verantwoordelijk voor een ruimtelijke organisatie die leren en (samen)werken mogelijk maakt. De leraar creëert een stimulerende leeromgeving en een ruimte waar verschillende werkvormen mogelijk zijn. De veiligheid is gewaarborgd.</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_klasbezoek_org_comp',
    'label' => 'Organisatorische competenties',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_klasbezoek_ped_comp'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_ped_comp'] = array(
    'bundle' => 'hrm_klasbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>In deze kijkwijzer staan de pedagogische competenties van de leraar centraal. Deze kijkwijzer geeft een idee over in welke mate de leraar aandacht heeft voor enkele belangrijke pedagogische aspecten van het leraarschap, met name: een positief en veilig leerklimaat, leerlingenparticipatie, zorg voor leerlingen, waarden en normen en tot slot vestigen we de focus ook nog op de genderproblematiek.</p>

<p><strong>Een positief en veilig leerklimaat</strong></p>
<p>Een positief leer- of klasklimaat is een klassfeer die opvoedt en uitnodigt tot verantwoordelijkheid en betrokkenheid. De leraar zorgt voor een atmosfeer die niet alleen bij de leerlingen het beste naar boven haalt, maar ook bijdraagt tot het ontstaan van persoonskenmerken die een verantwoordelijke en geëngageerde instelling mogelijk maken. In een positief en veilig leerklimaat zorgt de leraar onder meer voor een positief zelfbeeld bij de leerlingen, goede intermenselijke verhoudingen, bouwt de leraar succeservaringen in, bevestigt de leraar de leerlingen gepast, geeft hij of zij blijk van hoge verwachtingen ten aanzien van de leerlingen, bevordert hij of zij de autonomie en toont de leraar begrip.</p>

<p><strong>Leerlingenparticipatie</strong></p>
<p>Een goede manier om leerlingen verantwoordelijkheid te geven, is ze te laten participeren. Er bestaat niet één manier om leerlingen te laten participeren. Verschillende vormen van participatie zijn mogelijk in een continuüm waarbij initiatieven of beslissingen meer in handen van volwassenen dan wel in handen van de leerlingen zelf liggen: van louter informeren van leerlingen, naar laten adviseren, mee laten beslissen, samen ondernemen, begeleiden tot het zelf laten organiseren.</p>
<p>Leerlingen laten participeren kan door open te staan voor hun bijdragen. Ruimte voor eigen inbreng is mogelijk ten aanzien van bijvoorbeeld het dagelijkse bestuur van de school of klas, regels en het eigen leren. Dit betekent dat je de leerlingen kan laten participeren bij het samenstellen van lessen of themareeksen, het opstellen van een schoolreglement, het organiseren van buitenschoolse activiteiten ... Participatie van de leerling in de keuze en het bepalen van de doelstellingen verhoogt zijn betrokkenheid en maakt duidelijk waarheen hij op weg is.</p>

<p><strong>Leerbegeleiding</strong></p>
<p>Onder leerbegeleiding verstaan we de manier waarop de school het leren van leerlingen ondersteunt om de vooropgestelde leerdoelen te bereiken of na te streven. De school zorgt er door haar leerbegeleiding voor dat zoveel mogelijk leerlingen de leerdoelen bereiken. Daarvoor neemt zij preventieve en/of remediërende maatregelen. Bovendien heeft de leerbegeleiding als doel dat zoveel mogelijk leerlingen de competenties ontwikkelen die ze nodig zullen hebben om met een toenemende autonomie hun talenten te ontwikkelen (levenslang leren).</p>
<p>In de zorg voor leerlingen kan een aantal fasen onderscheiden worden die op een zorgcontinuüm geplaatst worden. Leerbegeleiding krijgt in de eerste plaats vorm in een goede klaspraktijk. Schoolteams zetten daarbij een pedagogisch-didactisch proces op om al hun leerlingen zo goed mogelijk te begeleiden en te ondersteunen in hun leer- en ontwikkelingsproces. In de brede basiszorg stimuleert de school de ontwikkeling van alle leerlingen, via een krachtige leeromgeving. Pas in een volgende fase, de fase van verhoogde zorg, wanneer de basiszorg onvoldoende ondersteuning biedt, kiest het schoolteam voor een bijkomende begeleiding afgestemd op de onderwijsbehoeften van de leerling, bv. in de vorm van STICORDI-maatregelen.</p>

<p><strong>Waarden en normen</strong></p>
<p>De school vervult een belangrijke functie in de waardeopvoeding van leerlingen. Het pedagogisch project van het GO! (PPGO) en de vertaling hiervan in het pedagogisch project van de school zijn hierbij richtinggevend. De leraar stimuleert de ontwikkeling van democratische waarden bij de leerling. De leraar leert jongeren betekenisvolle en verantwoorde keuzes te maken en leert hen aandacht te hebben voor de consequenties van die keuze voor hun handelen. Afspraken en regels zijn afgeleiden van waarden.</p>
<p>Regels concretiseren de waarden naar de specifieke school- en klascontext en maken deel uit van de opvoeding.</p>

<p><strong>Gender</strong></p>
<p>Jongens en meisjes beleven de school anders. Uit onderzoek blijkt dat jongens vaker achterop geraken, meer blijven zitten, mindere resultaten halen en vaker de school verlaten zonder diploma dan meisjes. Er heerst vaker een antischoolcultuur bij jongens. Onder antischoolcultuur verstaan we zaken zoals een lagere studiemotivatie, een lager engagement op school, minder belang hechten aan punten, minder tijd besteden aan huiswerk of vaker storend gedrag vertonen zoals agressie, ongehoorzaamheid en vandalisme. Dat het vooral jongens zijn die anti-schoolse culturen ontwikkelen kan deels verklaard worden door verschillen die er zijn in de interactie met de leraar. Leraren blijken hogere academische en normatieve verwachtingen te hebben voor meisjes dan voor jongens.</p>
<p>Afhankelijk van hun verwachtingen vertonen leerkrachten vervolgens verschillend gedrag naar jongens en meisjes toe en leerlingen gaan zich naar de verwachtingen gedragen.</p>
<p>Heel wat materialen en activiteiten binnen het curriculum zijn gunstiger voor meisjes dan voor jongens, bijvoorbeeld door het bieden van vaste structuren en een meer talige aanpak. Daarom is het belangrijk dat leraren niet alleen oog hebben voor verschillen tussen jongens en meisjes, maar vooral ook voor individuele gelijkenissen en verschillen (om stereotypering te voorkomen).</p>',
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
    'field_name' => 'field_klasbezoek_ped_comp',
    'label' => 'Pedagogische competenties',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_klasbezoek_taalcomp'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_taalcomp'] = array(
    'bundle' => 'hrm_klasbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>Deze kijkwijzer is bedoeld om te observeren in welke mate de vakleraar aandacht heeft voor taalgericht vakonderwijs, m.a.w. in welke mate hij bij het realiseren van zijn vakdoelstellingen ook werkt aan het ontwikkelen van de verschillende taalvaardigheden, zoals bijv. gericht luisteren en kijken, begrijpend lezen, formuleren en beantwoorden van vragen, functioneel schrijven en presenteren.</p>
<p>De kijkwijzer voor taalgericht vakonderwijs is gestructureerd op basis van de drie pijlers van taalgericht vakonderwijs:<ol><li>context en vakinhoud;</li><li>interactie;</li><li>taalsteun.</li></ol></p>
<p>Context en interactie vind je ook terug in de algemene didactiek (zie kijkwijzer didactische competenties). Bij taalgericht vakonderwijs zijn ze uiterst belangrijk, niet alleen om de leerlingen te motiveren of te activeren, maar vooral ook om de leerlingen in staat te stellen de taal van het vak te leren ( gebruiken). Om die reden zijn context en interactie ook in deze kijkwijzer over talige competenties opgenomen.</p>

<p><strong>Contextrijk vakonderwijs</strong></p>
<p>Contexten geven betekenis aan het leerproces: de leerling kan zich een beeld vormen van de situatie waarin vakinhouden worden aangeboden. Het is nodig de context te verkennen, want de gebruikte contexten zijn niet bij iedereen bekend. Daarnaast is het van belang dat de leraar de talige aspecten van de context toegankelijk maakt voor de leerlingen.</p>

<p><strong>Veel interactie</strong></p>
<p>Leren is een interactief proces: kennis komt tot stand doordat je er met anderen over praat. Het actief gebruiken van de taal stimuleert de taalontwikkeling. Leerlingen moeten kunnen praten en schrijven in de les. De leraar heeft hierbij een stimulerende functie door het gesprek op gang te brengen en te begeleiden en te reageren op de inbreng van leerlingen.</p>
<p>Verder kunnen leerlingen veel taal leren door in groepjes of in duo’s samen te werken en te praten over de vakinhouden.</p>

<p><strong>Taalsteun</strong></p>
<p>Taalsteun betekent steun bij het begrijpen en produceren van taal.</p>
<p>Taalsteun kan op diverse manieren geboden worden: steun bij teksten en nieuwe woorden, steun bij het zelf praten en schrijven, en soms steun in de vorm van taallesjes, zoals taaloefeningen rondom nieuwe formuleringen in vaktaal.</p>
',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_klasbezoek_taalcomp',
    'label' => 'Taalcompetenties',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_klasbezoek-field_klasbezoek_vorigeafspraken'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_vorigeafspraken'] = array(
    'bundle' => 'hrm_klasbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '(eventueel)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_klasbezoek_vorigeafspraken',
    'label' => 'Vorige afspraken',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_klasbezoek-field_klasbezoek_zelfreflectie'.
  $field_instances['node-hrm_klasbezoek-field_klasbezoek_zelfreflectie'] = array(
    'bundle' => 'hrm_klasbezoek',
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
    'field_name' => 'field_klasbezoek_zelfreflectie',
    'label' => 'Zelfreflectie door de leerkracht',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_personeelslid'.
  $field_instances['node-hrm_klasbezoek-field_personeelslid'] = array(
    'bundle' => 'hrm_klasbezoek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
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
    'field_name' => 'field_personeelslid',
    'label' => 'Personeelslid',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-hrm_klasbezoek-field_tijdstip'.
  $field_instances['node-hrm_klasbezoek-field_tijdstip'] = array(
    'bundle' => 'hrm_klasbezoek',
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
    'field_name' => 'field_tijdstip',
    'label' => 'Tijdstip',
    'required' => 1,
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-hrm_planningsgesprek-field_bijlage'.
  $field_instances['node-hrm_planningsgesprek-field_bijlage'] = array(
    'bundle' => 'hrm_planningsgesprek',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
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
    'field_name' => 'field_bijlage',
    'label' => 'Bijlage',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'HRM/planningsgesprekken',
      'file_extensions' => 'txt pdf doc docx ppt pptx xls xlsx',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-hrm_planningsgesprek-field_datum'.
  $field_instances['node-hrm_planningsgesprek-field_datum'] = array(
    'bundle' => 'hrm_planningsgesprek',
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
    'field_name' => 'field_datum',
    'label' => 'Periode van toepassing',
    'required' => 1,
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_planningsgesprek-field_inhoud_van_dit_gesprek'.
  $field_instances['node-hrm_planningsgesprek-field_inhoud_van_dit_gesprek'] = array(
    'bundle' => 'hrm_planningsgesprek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
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
    'field_name' => 'field_inhoud_van_dit_gesprek',
    'label' => 'Inhoud van dit gesprek',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-hrm_planningsgesprek-field_personeelslid'.
  $field_instances['node-hrm_planningsgesprek-field_personeelslid'] = array(
    'bundle' => 'hrm_planningsgesprek',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
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
    'field_name' => 'field_personeelslid',
    'label' => 'Personeelslid',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_planningsgesprek-field_pg_eventuele_oplossing'.
  $field_instances['node-hrm_planningsgesprek-field_pg_eventuele_oplossing'] = array(
    'bundle' => 'hrm_planningsgesprek',
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
    'field_name' => 'field_pg_eventuele_oplossing',
    'label' => 'Eventuele oplossing',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_planningsgesprek-field_pg_probleemidentificatie'.
  $field_instances['node-hrm_planningsgesprek-field_pg_probleemidentificatie'] = array(
    'bundle' => 'hrm_planningsgesprek',
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
    'field_name' => 'field_pg_probleemidentificatie',
    'label' => 'Probleemidentificatie',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_planningsgesprek-field_planningsgesprek_status'.
  $field_instances['node-hrm_planningsgesprek-field_planningsgesprek_status'] = array(
    'bundle' => 'hrm_planningsgesprek',
    'default_value' => array(
      0 => array(
        'value' => 'nieuw',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_planningsgesprek_status',
    'label' => 'Status',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-hrm_planningsgesprek-field_prioriteiten_volgens_evalu'.
  $field_instances['node-hrm_planningsgesprek-field_prioriteiten_volgens_evalu'] = array(
    'bundle' => 'hrm_planningsgesprek',
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
    'field_name' => 'field_prioriteiten_volgens_evalu',
    'label' => 'Prioriteiten volgens evaluator',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-hrm_planningsgesprek-field_tijdstip'.
  $field_instances['node-hrm_planningsgesprek-field_tijdstip'] = array(
    'bundle' => 'hrm_planningsgesprek',
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
    'field_name' => 'field_tijdstip',
    'label' => 'Tijdstip',
    'required' => 1,
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
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(eventueel)');
  t('(positieve punten en groeikansen)');
  t('<p>Deze kijkwijzer is bedoeld om te observeren in welke mate de vakleraar aandacht heeft voor taalgericht vakonderwijs, m.a.w. in welke mate hij bij het realiseren van zijn vakdoelstellingen ook werkt aan het ontwikkelen van de verschillende taalvaardigheden, zoals bijv. gericht luisteren en kijken, begrijpend lezen, formuleren en beantwoorden van vragen, functioneel schrijven en presenteren.</p>
<p>De kijkwijzer voor taalgericht vakonderwijs is gestructureerd op basis van de drie pijlers van taalgericht vakonderwijs:<ol><li>context en vakinhoud;</li><li>interactie;</li><li>taalsteun.</li></ol></p>
<p>Context en interactie vind je ook terug in de algemene didactiek (zie kijkwijzer didactische competenties). Bij taalgericht vakonderwijs zijn ze uiterst belangrijk, niet alleen om de leerlingen te motiveren of te activeren, maar vooral ook om de leerlingen in staat te stellen de taal van het vak te leren ( gebruiken). Om die reden zijn context en interactie ook in deze kijkwijzer over talige competenties opgenomen.</p>

<p><strong>Contextrijk vakonderwijs</strong></p>
<p>Contexten geven betekenis aan het leerproces: de leerling kan zich een beeld vormen van de situatie waarin vakinhouden worden aangeboden. Het is nodig de context te verkennen, want de gebruikte contexten zijn niet bij iedereen bekend. Daarnaast is het van belang dat de leraar de talige aspecten van de context toegankelijk maakt voor de leerlingen.</p>

<p><strong>Veel interactie</strong></p>
<p>Leren is een interactief proces: kennis komt tot stand doordat je er met anderen over praat. Het actief gebruiken van de taal stimuleert de taalontwikkeling. Leerlingen moeten kunnen praten en schrijven in de les. De leraar heeft hierbij een stimulerende functie door het gesprek op gang te brengen en te begeleiden en te reageren op de inbreng van leerlingen.</p>
<p>Verder kunnen leerlingen veel taal leren door in groepjes of in duo’s samen te werken en te praten over de vakinhouden.</p>

<p><strong>Taalsteun</strong></p>
<p>Taalsteun betekent steun bij het begrijpen en produceren van taal.</p>
<p>Taalsteun kan op diverse manieren geboden worden: steun bij teksten en nieuwe woorden, steun bij het zelf praten en schrijven, en soms steun in de vorm van taallesjes, zoals taaloefeningen rondom nieuwe formuleringen in vaktaal.</p>
');
  t('<p>Een goede organisatie is een voorwaarde voor het leren. De organisatorische competenties van de leraar omvatten enerzijds een goed beheer van tijd en ruimte enerzijds en een effectief klasmanagement anderzijds. We behandelen beide aspecten in deze kijkwijzer.</p>

<p><strong>Algemeen klasmanagement</strong></p>
<p>Hier gaat het over orde houden in de klas: de manier waarop de leraar de leiding neemt, of omgaat met ongewenst en storend gedrag, efficiënt gebruik van de beschikbare tijd …</p>

<p><strong>De klas inrichten en aankleden</strong></p>
<p>De leraar is verantwoordelijk voor een ruimtelijke organisatie die leren en (samen)werken mogelijk maakt. De leraar creëert een stimulerende leeromgeving en een ruimte waar verschillende werkvormen mogelijk zijn. De veiligheid is gewaarborgd.</p>');
  t('<p>In deze kijkwijzer staan de didactische competenties van de leraar centraal.</p>
<p>De kijkwijzer geeft een idee in welke mate de leraar aandacht heeft voor enkele belangrijke didactische aspecten van het leraarschap, met name: de keuze en het hanteren van de leerplandoelstellingen en de leerinhouden, de werkvormen, het gebruik van leermiddelen, de evaluatie, reflectie en registratie en tot slot belichten we het differentiëren in de klas.</p>

<p><strong>Keuze en hanteren van de leerplandoelstellingen en de leerinhouden</strong></p>
<p>Voor leraren zijn leerplannen een leidraad bij de vormgeving van de concrete lespraktijk. Het leerplan bevat leerplandoelstellingen die de leraar dient te realiseren met zijn leerlingen.</p>
<p>Hierbij is het vertalen van de leerplandoelstellingen naar concrete en operationele lesdoelstellingen -waarbij de leraar rekening houdt met de beginsituatie van de leerlingen- cruciaal.</p>
<p>De keuze en correctheid van de leerinhouden bepalen de kwaliteit van de aangeboden leerstof.</p>

<p><strong>Keuze en hanteren van de werkvormen</strong></p>
<p>Door de werkvormen te variëren, speelt een leerkracht in op de verschillende leerstijlen van de leerlingen.1 Dit vereist van de leerkracht dat hij beschikt over een arsenaal van zulke werkvormen, dat hij de leerlingen goed kent en dat hij in staat is een bij de leerling passende werkvorm te kiezen.</p>
<p>Gezien dit een niet zo een eenvoudige opdracht is, gaan leerkrachten bij de introductie van nieuwe leerstof verschillende werkvormen combineren of gelijktijdig hanteren, in de hoop dat elke leerling oppikt wat hij nodig heeft.</p>
<p>Bij de verwerking van de leerstof via opdrachten kan de leerkracht dan nagaan welke leerlingen nog een aanvullende instructie via een andere werkvorm nodig hebben.</p>

<p><strong>Keuze en hanteren van de leermiddelen</strong></p>
<p>De keuze van een leermiddel ontslaat de leraar niet van de verplichting een goedgekeurd leerplan te gebruiken. Integendeel, waar een leermiddel een hulpmiddel kan zijn, is het leerplan de enige waarborg om te voldoen aan de regelgeving van de overheid wiens taak het is om (specifieke) eindtermen en ontwikkelingsdoelen te bewaken.</p>
<p>Uitgevers van leermiddelen worden op regelmatige basis geïnformeerd over de achterliggende visie, de inhouden en de ontwikkelingen van nieuwe leerplannen. Toch is het belangrijk dat wanneer de leraar een keuze van leermiddelen heeft gemaakt hij/zij kritisch nagaat of alle leerplandoelstellingen ook werkelijk gerealiseerd worden.</p>

<p><strong>Keuze en praktijk van evaluatie – reflectie - rapporteren</strong></p>
<p>De school is verantwoordelijk voor het realiseren van de doelstellingen opgenomen in de gehanteerde leerplannen. Evaluatie is een het middel om na te gaan in hoeverre deze doelstellingen bij de leerlingen bereikt zijn.</p>
<p>Evalueren zien we dan ook als een permanente activiteit die aan de hand van concrete vaststellingen door de leraar, de lerarengroep, de leerling … gegevens aanreikt over het leren.</p>

<p><strong>Omgaan met verschillen – differentiatie</strong></p>
<p>Omgaan met verschillen is één van de uitdagingen waar het onderwijs vandaag mee te maken heeft. Vanaf de eerste schooldag verschillen leerlingen van elkaar in mogelijkheden, kennis, vaardigheden, attitudes en motivatie over wat onderwezen gaat worden.</p>
<p>Ondanks het feit dat differentiatie in de klas een manier is waarop een leerkracht kan omgaan met de verschillen tussen leerlingen in de klas geven leraren vaak les alsof er geen verschillen tussen de leerlingen zijn. Men kan differentiëren op alle momenten van de les en op verschillende manieren nl. naar inhoud, tempo, instructie en evaluatie. Ook het genderbewust(er) lesgeven zien we als een manier om om te gaan met verschillen. Recent onderzoek heeft immers uitgewezen dat gender nog steeds een grote rol speelt bij leerkracht-leerling interacties.</p>
<p>Elke mens is uiteindelijk verschillend. Leerlingen leren op school niet alleen omgaan met verschillen in anderen, maar ook met hun eigen anders-zijn. Gelijkwaardigheid impliceert dat iedereen gelijke kansen krijgt. En soms is daarvoor een ongelijke behandeling nodig.</p>');
  t('<p>In deze kijkwijzer staan de pedagogische competenties van de leraar centraal. Deze kijkwijzer geeft een idee over in welke mate de leraar aandacht heeft voor enkele belangrijke pedagogische aspecten van het leraarschap, met name: een positief en veilig leerklimaat, leerlingenparticipatie, zorg voor leerlingen, waarden en normen en tot slot vestigen we de focus ook nog op de genderproblematiek.</p>

<p><strong>Een positief en veilig leerklimaat</strong></p>
<p>Een positief leer- of klasklimaat is een klassfeer die opvoedt en uitnodigt tot verantwoordelijkheid en betrokkenheid. De leraar zorgt voor een atmosfeer die niet alleen bij de leerlingen het beste naar boven haalt, maar ook bijdraagt tot het ontstaan van persoonskenmerken die een verantwoordelijke en geëngageerde instelling mogelijk maken. In een positief en veilig leerklimaat zorgt de leraar onder meer voor een positief zelfbeeld bij de leerlingen, goede intermenselijke verhoudingen, bouwt de leraar succeservaringen in, bevestigt de leraar de leerlingen gepast, geeft hij of zij blijk van hoge verwachtingen ten aanzien van de leerlingen, bevordert hij of zij de autonomie en toont de leraar begrip.</p>

<p><strong>Leerlingenparticipatie</strong></p>
<p>Een goede manier om leerlingen verantwoordelijkheid te geven, is ze te laten participeren. Er bestaat niet één manier om leerlingen te laten participeren. Verschillende vormen van participatie zijn mogelijk in een continuüm waarbij initiatieven of beslissingen meer in handen van volwassenen dan wel in handen van de leerlingen zelf liggen: van louter informeren van leerlingen, naar laten adviseren, mee laten beslissen, samen ondernemen, begeleiden tot het zelf laten organiseren.</p>
<p>Leerlingen laten participeren kan door open te staan voor hun bijdragen. Ruimte voor eigen inbreng is mogelijk ten aanzien van bijvoorbeeld het dagelijkse bestuur van de school of klas, regels en het eigen leren. Dit betekent dat je de leerlingen kan laten participeren bij het samenstellen van lessen of themareeksen, het opstellen van een schoolreglement, het organiseren van buitenschoolse activiteiten ... Participatie van de leerling in de keuze en het bepalen van de doelstellingen verhoogt zijn betrokkenheid en maakt duidelijk waarheen hij op weg is.</p>

<p><strong>Leerbegeleiding</strong></p>
<p>Onder leerbegeleiding verstaan we de manier waarop de school het leren van leerlingen ondersteunt om de vooropgestelde leerdoelen te bereiken of na te streven. De school zorgt er door haar leerbegeleiding voor dat zoveel mogelijk leerlingen de leerdoelen bereiken. Daarvoor neemt zij preventieve en/of remediërende maatregelen. Bovendien heeft de leerbegeleiding als doel dat zoveel mogelijk leerlingen de competenties ontwikkelen die ze nodig zullen hebben om met een toenemende autonomie hun talenten te ontwikkelen (levenslang leren).</p>
<p>In de zorg voor leerlingen kan een aantal fasen onderscheiden worden die op een zorgcontinuüm geplaatst worden. Leerbegeleiding krijgt in de eerste plaats vorm in een goede klaspraktijk. Schoolteams zetten daarbij een pedagogisch-didactisch proces op om al hun leerlingen zo goed mogelijk te begeleiden en te ondersteunen in hun leer- en ontwikkelingsproces. In de brede basiszorg stimuleert de school de ontwikkeling van alle leerlingen, via een krachtige leeromgeving. Pas in een volgende fase, de fase van verhoogde zorg, wanneer de basiszorg onvoldoende ondersteuning biedt, kiest het schoolteam voor een bijkomende begeleiding afgestemd op de onderwijsbehoeften van de leerling, bv. in de vorm van STICORDI-maatregelen.</p>

<p><strong>Waarden en normen</strong></p>
<p>De school vervult een belangrijke functie in de waardeopvoeding van leerlingen. Het pedagogisch project van het GO! (PPGO) en de vertaling hiervan in het pedagogisch project van de school zijn hierbij richtinggevend. De leraar stimuleert de ontwikkeling van democratische waarden bij de leerling. De leraar leert jongeren betekenisvolle en verantwoorde keuzes te maken en leert hen aandacht te hebben voor de consequenties van die keuze voor hun handelen. Afspraken en regels zijn afgeleiden van waarden.</p>
<p>Regels concretiseren de waarden naar de specifieke school- en klascontext en maken deel uit van de opvoeding.</p>

<p><strong>Gender</strong></p>
<p>Jongens en meisjes beleven de school anders. Uit onderzoek blijkt dat jongens vaker achterop geraken, meer blijven zitten, mindere resultaten halen en vaker de school verlaten zonder diploma dan meisjes. Er heerst vaker een antischoolcultuur bij jongens. Onder antischoolcultuur verstaan we zaken zoals een lagere studiemotivatie, een lager engagement op school, minder belang hechten aan punten, minder tijd besteden aan huiswerk of vaker storend gedrag vertonen zoals agressie, ongehoorzaamheid en vandalisme. Dat het vooral jongens zijn die anti-schoolse culturen ontwikkelen kan deels verklaard worden door verschillen die er zijn in de interactie met de leraar. Leraren blijken hogere academische en normatieve verwachtingen te hebben voor meisjes dan voor jongens.</p>
<p>Afhankelijk van hun verwachtingen vertonen leerkrachten vervolgens verschillend gedrag naar jongens en meisjes toe en leerlingen gaan zich naar de verwachtingen gedragen.</p>
<p>Heel wat materialen en activiteiten binnen het curriculum zijn gunstiger voor meisjes dan voor jongens, bijvoorbeeld door het bieden van vaste structuren en een meer talige aanpak. Daarom is het belangrijk dat leraren niet alleen oog hebben voor verschillen tussen jongens en meisjes, maar vooral ook voor individuele gelijkenissen en verschillen (om stereotypering te voorkomen).</p>');
  t('Activiteit');
  t('Afspraken');
  t('Andere focus');
  t('Beoordeling');
  t('Bijlage');
  t('Comment');
  t('Didactische competenties');
  t('Doen de leerlingen wat ze moeten doen?');
  t('Eindconclusie');
  t('Eventuele oplossing');
  t('Inhoud van dit gesprek');
  t('Interventies');
  t('Leerdoel');
  t('Leerlingen');
  t('Lokaal');
  t('Muren scannen: wat hangt er allemaal in het leslokaal dat bijdraagt (of juist niet) aan de lessen?');
  t('Organisatorische competenties');
  t('Pedagogische competenties');
  t('Periode van toepassing');
  t('Personeelslid');
  t('Positieve observaties');
  t('Preventie');
  t('Prioriteiten volgens evaluator');
  t('Probleemidentificatie');
  t('Status');
  t('Taalcompetenties');
  t('Tijdstip');
  t('Verslag');
  t('Voorgestelde punten evaluator');
  t('Voorgestelde punten personeelslid');
  t('Vorige afspraken');
  t('Wat is het leerdoel van de les en in hoeverre zijn de lesactiviteiten in lijn met dit doel?');
  t('Welke interventies doet de leerkracht om te zorgen dat alle leerlingen het leerdoel behalen?');
  t('Werkpunten en afspraken');
  t('Zelfreflectie door de leerkracht');
  t('Zijn er bijzonderheden op het gebied van veiligheid en gezondheid?');

  return $field_instances;
}
