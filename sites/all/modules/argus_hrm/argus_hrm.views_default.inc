<?php
/**
 * @file
 * argus_hrm.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_hrm_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hrm';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HRM';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    86 => '86',
    225 => '225',
    217 => '217',
    219 => '219',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_personeelslid' => 'field_personeelslid',
    'field_tijdstip' => 'field_tijdstip',
    'field_planningsgesprek_status' => 'field_planningsgesprek_status',
    'type' => 'type',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personeelslid' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tijdstip' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_planningsgesprek_status' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Veld: Algemeen: Resultatenteller weergeven */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Nr.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Veld: Inhoud: Personeelslid */
  $handler->display->display_options['fields']['field_personeelslid']['id'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['table'] = 'field_data_field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['field'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Tijdstip */
  $handler->display->display_options['fields']['field_tijdstip']['id'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['table'] = 'field_data_field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['field'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_planningsgesprek_status']['id'] = 'field_planningsgesprek_status';
  $handler->display->display_options['fields']['field_planningsgesprek_status']['table'] = 'field_data_field_planningsgesprek_status';
  $handler->display->display_options['fields']['field_planningsgesprek_status']['field'] = 'field_planningsgesprek_status';
  $handler->display->display_options['fields']['field_planningsgesprek_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_planningsgesprek_status']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_evaluatiegesprek' => 'hrm_evaluatiegesprek',
    'hrm_functioneringsgesprek' => 'hrm_functioneringsgesprek',
    'hrm_planningsgesprek' => 'hrm_planningsgesprek',
  );
  $handler->display->display_options['qtip_instance'] = 'standaard';

  /* Display: Planningsgesprekken */
  $handler = $view->new_display('page', 'Planningsgesprekken', 'hrm_planningsgesprekken_overview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Planningsgesprekken';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_planningsgesprek' => 'hrm_planningsgesprek',
  );
  $handler->display->display_options['path'] = 'hrm/planningsgesprekken';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Planningsgesprekken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Functioneringsgesprekken */
  $handler = $view->new_display('page', 'Functioneringsgesprekken', 'hrm_functioneringsgesprekken_overview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Functioneringsgesprekken';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_personeelslid' => 'field_personeelslid',
    'field_tijdstip' => 'field_tijdstip',
    'field_functioneringsg_status' => 'field_functioneringsg_status',
    'type' => 'type',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personeelslid' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tijdstip' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_functioneringsg_status' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Algemeen: Resultatenteller weergeven */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Nr.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Veld: Inhoud: Personeelslid */
  $handler->display->display_options['fields']['field_personeelslid']['id'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['table'] = 'field_data_field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['field'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Tijdstip */
  $handler->display->display_options['fields']['field_tijdstip']['id'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['table'] = 'field_data_field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['field'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_functioneringsg_status']['id'] = 'field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['table'] = 'field_data_field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['field'] = 'field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_functioneringsg_status']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_functioneringsgesprek' => 'hrm_functioneringsgesprek',
  );
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'hrm/functioneringsgesprekken';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Functioneringsgesprekken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Evaluatiegesprekken */
  $handler = $view->new_display('page', 'Evaluatiegesprekken', 'hrm_evaluatiegesprekken_overview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Evaluatiegesprekken';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    86 => '86',
    225 => '225',
    217 => '217',
    219 => '219',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_personeelslid' => 'field_personeelslid',
    'field_tijdstip' => 'field_tijdstip',
    'field_evaluatiegesprek_status' => 'field_evaluatiegesprek_status',
    'type' => 'type',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personeelslid' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tijdstip' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_evaluatiegesprek_status' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Algemeen: Resultatenteller weergeven */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Nr.';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Veld: Inhoud: Personeelslid */
  $handler->display->display_options['fields']['field_personeelslid']['id'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['table'] = 'field_data_field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['field'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Tijdstip */
  $handler->display->display_options['fields']['field_tijdstip']['id'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['table'] = 'field_data_field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['field'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['id'] = 'field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['table'] = 'field_data_field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['field'] = 'field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hrm_evaluatiegesprek' => 'hrm_evaluatiegesprek',
  );
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'hrm/evaluatiegesprekken';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Evaluatiegesprekken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['hrm'] = array(
    t('Master'),
    t('HRM'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Nr.'),
    t('Personeelslid'),
    t('Tijdstip'),
    t('Status'),
    t('Type'),
    t('Bewerkingslink'),
    t('Planningsgesprekken'),
    t('Functioneringsgesprekken'),
    t('Evaluatiegesprekken'),
  );
  $export['hrm'] = $view;

  return $export;
}
