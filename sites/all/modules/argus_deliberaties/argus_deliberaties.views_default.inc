<?php
/**
 * @file
 * argus_deliberaties.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_deliberaties_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lvs_deliberaties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LVS - Deliberaties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'LVS - Deliberaties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Uitgebreide opties',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_lvs_deliberatie_attest_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_lvs_deliberatie_klas_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_lvs_deliberatie_leerling_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_lvs_deliberatie_schooljaar_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'realname' => 'realname',
    'field_lvs_deliberatie_attest' => 'field_lvs_deliberatie_attest',
    'field_lvs_deliberatie_at_uitgest' => 'field_lvs_deliberatie_at_uitgest',
    'field_lvs_deliberatie_diplomas' => 'field_lvs_deliberatie_diplomas',
    'field_lvs_deliberatie_advies' => 'field_lvs_deliberatie_advies',
    'field_lvs_deliberatie_motief' => 'field_lvs_deliberatie_motief',
    'field_lvs_deliberatie_stemming' => 'field_lvs_deliberatie_stemming',
    'field_lvs_deliberatie_waarschuw' => 'field_lvs_deliberatie_waarschuw',
    'field_lvs_deliberatie_vakantie' => 'field_lvs_deliberatie_vakantie',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lvs_deliberatie_attest' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lvs_deliberatie_at_uitgest' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lvs_deliberatie_diplomas' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lvs_deliberatie_advies' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lvs_deliberatie_motief' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lvs_deliberatie_stemming' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lvs_deliberatie_waarschuw' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lvs_deliberatie_vakantie' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Getoond @start - @end van @total';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lvs_deliberatie_leerling_target_id']['id'] = 'field_lvs_deliberatie_leerling_target_id';
  $handler->display->display_options['relationships']['field_lvs_deliberatie_leerling_target_id']['table'] = 'field_data_field_lvs_deliberatie_leerling';
  $handler->display->display_options['relationships']['field_lvs_deliberatie_leerling_target_id']['field'] = 'field_lvs_deliberatie_leerling_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lvs_deliberatie_klas_target_id']['id'] = 'field_lvs_deliberatie_klas_target_id';
  $handler->display->display_options['relationships']['field_lvs_deliberatie_klas_target_id']['table'] = 'field_data_field_lvs_deliberatie_klas';
  $handler->display->display_options['relationships']['field_lvs_deliberatie_klas_target_id']['field'] = 'field_lvs_deliberatie_klas_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_lvs_deliberatie_klas_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Klas';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'field_lvs_deliberatie_leerling_target_id';
  $handler->display->display_options['fields']['realname']['label'] = 'Leerling';
  /* Field: Content: Attest */
  $handler->display->display_options['fields']['field_lvs_deliberatie_attest']['id'] = 'field_lvs_deliberatie_attest';
  $handler->display->display_options['fields']['field_lvs_deliberatie_attest']['table'] = 'field_data_field_lvs_deliberatie_attest';
  $handler->display->display_options['fields']['field_lvs_deliberatie_attest']['field'] = 'field_lvs_deliberatie_attest';
  /* Field: Content: Attest (na uitgestelde proef) */
  $handler->display->display_options['fields']['field_lvs_deliberatie_at_uitgest']['id'] = 'field_lvs_deliberatie_at_uitgest';
  $handler->display->display_options['fields']['field_lvs_deliberatie_at_uitgest']['table'] = 'field_data_field_lvs_deliberatie_at_uitgest';
  $handler->display->display_options['fields']['field_lvs_deliberatie_at_uitgest']['field'] = 'field_lvs_deliberatie_at_uitgest';
  $handler->display->display_options['fields']['field_lvs_deliberatie_at_uitgest']['label'] = 'Attest (augustus)';
  /* Field: Content: Diplomas */
  $handler->display->display_options['fields']['field_lvs_deliberatie_diplomas']['id'] = 'field_lvs_deliberatie_diplomas';
  $handler->display->display_options['fields']['field_lvs_deliberatie_diplomas']['table'] = 'field_data_field_lvs_deliberatie_diplomas';
  $handler->display->display_options['fields']['field_lvs_deliberatie_diplomas']['field'] = 'field_lvs_deliberatie_diplomas';
  $handler->display->display_options['fields']['field_lvs_deliberatie_diplomas']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_lvs_deliberatie_diplomas']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lvs_deliberatie_diplomas']['separator'] = '<br />';
  /* Field: Content: Advies */
  $handler->display->display_options['fields']['field_lvs_deliberatie_advies']['id'] = 'field_lvs_deliberatie_advies';
  $handler->display->display_options['fields']['field_lvs_deliberatie_advies']['table'] = 'field_data_field_lvs_deliberatie_advies';
  $handler->display->display_options['fields']['field_lvs_deliberatie_advies']['field'] = 'field_lvs_deliberatie_advies';
  /* Field: Content: Motief */
  $handler->display->display_options['fields']['field_lvs_deliberatie_motief']['id'] = 'field_lvs_deliberatie_motief';
  $handler->display->display_options['fields']['field_lvs_deliberatie_motief']['table'] = 'field_data_field_lvs_deliberatie_motief';
  $handler->display->display_options['fields']['field_lvs_deliberatie_motief']['field'] = 'field_lvs_deliberatie_motief';
  /* Field: Content: Stemming */
  $handler->display->display_options['fields']['field_lvs_deliberatie_stemming']['id'] = 'field_lvs_deliberatie_stemming';
  $handler->display->display_options['fields']['field_lvs_deliberatie_stemming']['table'] = 'field_data_field_lvs_deliberatie_stemming';
  $handler->display->display_options['fields']['field_lvs_deliberatie_stemming']['field'] = 'field_lvs_deliberatie_stemming';
  /* Field: Content: Waarschuwingen */
  $handler->display->display_options['fields']['field_lvs_deliberatie_waarschuw']['id'] = 'field_lvs_deliberatie_waarschuw';
  $handler->display->display_options['fields']['field_lvs_deliberatie_waarschuw']['table'] = 'field_data_field_lvs_deliberatie_waarschuw';
  $handler->display->display_options['fields']['field_lvs_deliberatie_waarschuw']['field'] = 'field_lvs_deliberatie_waarschuw';
  $handler->display->display_options['fields']['field_lvs_deliberatie_waarschuw']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_lvs_deliberatie_waarschuw']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lvs_deliberatie_waarschuw']['separator'] = '<br />';
  /* Field: Content: Vakantietaken */
  $handler->display->display_options['fields']['field_lvs_deliberatie_vakantie']['id'] = 'field_lvs_deliberatie_vakantie';
  $handler->display->display_options['fields']['field_lvs_deliberatie_vakantie']['table'] = 'field_data_field_lvs_deliberatie_vakantie';
  $handler->display->display_options['fields']['field_lvs_deliberatie_vakantie']['field'] = 'field_lvs_deliberatie_vakantie';
  $handler->display->display_options['fields']['field_lvs_deliberatie_vakantie']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_lvs_deliberatie_vakantie']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lvs_deliberatie_vakantie']['separator'] = '<br/>';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_lvs_deliberatie_klas_target_id';
  /* Sort criterion: Realname: Real name */
  $handler->display->display_options['sorts']['realname']['id'] = 'realname';
  $handler->display->display_options['sorts']['realname']['table'] = 'realname';
  $handler->display->display_options['sorts']['realname']['field'] = 'realname';
  $handler->display->display_options['sorts']['realname']['relationship'] = 'field_lvs_deliberatie_leerling_target_id';
  $handler->display->display_options['sorts']['realname']['expose']['label'] = 'Werkelijke naam';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lvs_deliberatie' => 'lvs_deliberatie',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Schooljaar (field_lvs_deliberatie_schooljaar) */
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['id'] = 'field_lvs_deliberatie_schooljaar_value';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['table'] = 'field_data_field_lvs_deliberatie_schooljaar';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['field'] = 'field_lvs_deliberatie_schooljaar_value';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['expose']['operator_id'] = 'field_lvs_deliberatie_schooljaar_value_op';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['expose']['label'] = 'Schooljaar (field_lvs_deliberatie_schooljaar)';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['expose']['operator'] = 'field_lvs_deliberatie_schooljaar_value_op';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['expose']['identifier'] = 'field_lvs_deliberatie_schooljaar_value';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['group_info']['label'] = 'Schooljaar';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['group_info']['identifier'] = 'field_lvs_deliberatie_schooljaar_value';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['group_info']['default_group'] = '2';
  $handler->display->display_options['filters']['field_lvs_deliberatie_schooljaar_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '2014-2015',
      'operator' => '=',
      'value' => '2014-2015',
    ),
    2 => array(
      'title' => '2013-2014',
      'operator' => '=',
      'value' => '2013-2014',
    ),
    3 => array(
      'title' => '2012-2013',
      'operator' => '=',
      'value' => '2012-2013',
    ),
    4 => array(
      'title' => '2011-2012',
      'operator' => '=',
      'value' => '2011-2012',
    ),
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_lvs_deliberatie_klas_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Klas';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    81 => 0,
    8 => 0,
    88 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    229 => 0,
    89 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    192 => 0,
    193 => 0,
    194 => 0,
    195 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    209 => 0,
    82 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    216 => 0,
    217 => 0,
    227 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    231 => 0,
    232 => 0,
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_lvs_deliberatie_leerling_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Leerling';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    81 => 0,
    8 => 0,
    88 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    229 => 0,
    89 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    192 => 0,
    193 => 0,
    194 => 0,
    195 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    209 => 0,
    82 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    216 => 0,
    217 => 0,
    227 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    231 => 0,
    232 => 0,
  );
  /* Filter criterion: Content: Attest (field_lvs_deliberatie_attest) */
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['id'] = 'field_lvs_deliberatie_attest_value';
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['table'] = 'field_data_field_lvs_deliberatie_attest';
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['field'] = 'field_lvs_deliberatie_attest_value';
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['expose']['operator_id'] = 'field_lvs_deliberatie_attest_value_op';
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['expose']['label'] = 'Attest';
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['expose']['operator'] = 'field_lvs_deliberatie_attest_value_op';
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['expose']['identifier'] = 'field_lvs_deliberatie_attest_value';
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    81 => 0,
    8 => 0,
    88 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    229 => 0,
    89 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    192 => 0,
    193 => 0,
    194 => 0,
    195 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    209 => 0,
    82 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    216 => 0,
    217 => 0,
    227 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    231 => 0,
    232 => 0,
  );
  $handler->display->display_options['filters']['field_lvs_deliberatie_attest_value']['reduce_duplicates'] = TRUE;

  /* Display: LVS - Deliberaties */
  $handler = $view->new_display('page', 'LVS - Deliberaties', 'deliberaties_overzicht');
  $handler->display->display_options['display_description'] = 'Overzicht van de behaalde diploma\'s, attesten, vakantietaken en andere deliberatiegegevens.';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'deliberaties/overzicht';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Deliberaties';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $translatables['lvs_deliberaties'] = array(
    t('Master'),
    t('LVS - Deliberaties'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Uitgebreide opties'),
    t('Select any filter and click on Apply to see results'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Getoond @start - @end van @total'),
    t('User entity referenced from field_lvs_deliberatie_leerling'),
    t('Content entity referenced from field_lvs_deliberatie_klas'),
    t('Klas'),
    t('Leerling'),
    t('Attest'),
    t('Attest (augustus)'),
    t('Diplomas'),
    t('Advies'),
    t('Motief'),
    t('Stemming'),
    t('Waarschuwingen'),
    t('Vakantietaken'),
    t('Werkelijke naam'),
    t('Schooljaar (field_lvs_deliberatie_schooljaar)'),
    t('Schooljaar'),
    t('Overzicht van de behaalde diploma\'s, attesten, vakantietaken en andere deliberatiegegevens.'),
    t('more'),
  );
  $export['lvs_deliberaties'] = $view;

  return $export;
}
