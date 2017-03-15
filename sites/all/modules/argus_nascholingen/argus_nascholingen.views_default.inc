<?php
/**
 * @file
 * argus_nascholingen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_nascholingen_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'nascholingen';
	$view->description = '';
	$view->tag = 'Calendar';
	$view->base_table = 'node';
	$view->human_name = 'Nascholingen';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['link_display'] = 'page_1';
	$handler->display->display_options ['group_by'] = TRUE;
	$handler->display->display_options ['access'] ['type'] = 'role';
	$handler->display->display_options ['access'] ['role'] = array ();
	$handler->display->display_options ['cache'] ['type'] = 'views_content_cache';
	$handler->display->display_options ['cache'] ['results_min_lifespan'] = '-1';
	$handler->display->display_options ['cache'] ['results_max_lifespan'] = '518400';
	$handler->display->display_options ['cache'] ['output_min_lifespan'] = '-1';
	$handler->display->display_options ['cache'] ['output_max_lifespan'] = '518400';
	$handler->display->display_options ['cache'] ['keys'] = array (
			'comment' => array (
					'changed' => 0 
			),
			'node' => array (
					'event_nascholing' => 'event_nascholing' 
			),
			'node_only' => array (
					'node_changed' => 'node_changed' 
			) 
	);
	$handler->display->display_options ['query'] ['type'] = 'views_query';
	$handler->display->display_options ['query'] ['options'] ['query_comment'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'date_views_pager';
	$handler->display->display_options ['pager'] ['options'] ['date_id'] = 'month';
	$handler->display->display_options ['style_plugin'] = 'table';
	/* Gedrag bij ontbreken van resultaten: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['empty'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['empty'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['empty'] ['area_text_custom'] ['field'] = 'area_text_custom';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['hide_alter_empty'] = FALSE;
	/* Veld: Inhoud: Datum */
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['id'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['field'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['settings'] = array (
			'format_type' => 'medium',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Auteur-uid */
	$handler->display->display_options ['fields'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['fields'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['uid'] ['field'] = 'uid';
	$handler->display->display_options ['fields'] ['uid'] ['label'] = 'Aanvrager';
	$handler->display->display_options ['fields'] ['uid'] ['element_label_colon'] = FALSE;
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['group'] = 0;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Type */
	$handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['value'] = array (
			'event_nascholing' => 'event_nascholing',
			'event_pedagogische_activiteit' => 'event_pedagogische_activiteit' 
	);
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['operator_id'] = 'type_op';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['label'] = 'Type';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['operator'] = 'type_op';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['identifier'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['reduce'] = TRUE;
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'overzicht_nascholingen' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Nascholingen';
	$handler->display->display_options ['display_description'] = 'Events - overzicht nascholingen';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['defaults'] ['exposed_form'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'better_exposed_filters';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['options'] ['bef'] = array (
			'general' => array (
					'allow_secondary' => 0,
					'secondary_label' => 'Uitgebreide opties',
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_ev_vakgroep_target_id' => array (
					'bef_format' => 'default',
					'slider_options' => array (
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
							'filter_rewrite_values' => NULL 
					),
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'realname' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_ev_goedkeuring_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'uid_current' => array (
					'bef_format' => 'bef_single',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_ev_attest_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'secondary_label' => NULL,
			'collapsible_label' => NULL,
			'combine_rewrite' => NULL,
			'reset_label' => NULL,
			'bef_filter_description' => NULL,
			'any_label' => NULL,
			'filter_rewrite_values' => NULL 
	);
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'full';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '50';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['pager'] ['options'] ['id'] = '0';
	$handler->display->display_options ['pager'] ['options'] ['quantity'] = '9';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'views_aggregator';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'nid' => 'nid',
			'realname' => 'realname',
			'field_ev_datum' => 'field_ev_datum',
			'field_ev_datum_1' => 'field_ev_datum_1',
			'title' => 'title',
			'field_ev_vakgroep' => 'field_ev_vakgroep',
			'field_ev_onderwerp' => 'field_ev_onderwerp',
			'field_ev_attest' => 'field_ev_attest',
			'field_ev_goedkeuring' => 'field_ev_goedkeuring' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'nid' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => '1',
					'aggr' => array (
							'views_aggregator_count' => 'views_aggregator_count',
							'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'realname' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_datum' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_datum_1' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_vakgroep' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_onderwerp' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_attest' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_goedkeuring' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			) 
	);
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['totals_per_page'] = '1';
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['totals_row_position'] = array (
			1 => 0,
			2 => '2' 
	);
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['precision'] = '2';
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	/* Kop: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['header'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['label'] = 'Link nascholing aanvragen';
	$handler->display->display_options ['header'] ['area_text_custom'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area_text_custom'] ['content'] = '<a href="../node/add/event-nascholing">Een nieuwe nascholing aanvragen</a><br>';
	$handler->display->display_options ['header'] ['area_text_custom'] ['tokenize'] = TRUE;
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	/* Voet: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['footer'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['label'] = 'Link nascholing aanvragen';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['content'] = '<a href="../node/add/event-nascholing">Een nieuwe nascholing aanvragen</a><br>';
	/* Voet: Algemeen: Samenvatting van het resultaat */
	$handler->display->display_options ['footer'] ['result'] ['id'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['result'] ['field'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['content'] = 'Getoond @start - @end van @total';
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	/* Relatie: Inhoud: Auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_ev_vakgroep_target_id'] ['id'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['relationships'] ['field_ev_vakgroep_target_id'] ['table'] = 'field_data_field_ev_vakgroep';
	$handler->display->display_options ['relationships'] ['field_ev_vakgroep_target_id'] ['field'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Aanvrager';
	/* Veld: Inhoud: Datum */
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['id'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['field'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['settings'] = array (
			'format_type' => 'medium',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['multi_type'] = 'ol';
	/* Veld: Inhoud: Datum */
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['id'] = 'field_ev_datum_1';
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['field'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['label'] = 'Tijdstip';
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['settings'] = array (
			'format_type' => 'long',
			'fromto' => 'both',
			'multiple_number' => '1',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['link_to_node'] = FALSE;
	/* Veld: Inhoud: Vakgroep */
	$handler->display->display_options ['fields'] ['field_ev_vakgroep'] ['id'] = 'field_ev_vakgroep';
	$handler->display->display_options ['fields'] ['field_ev_vakgroep'] ['table'] = 'field_data_field_ev_vakgroep';
	$handler->display->display_options ['fields'] ['field_ev_vakgroep'] ['field'] = 'field_ev_vakgroep';
	$handler->display->display_options ['fields'] ['field_ev_vakgroep'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_vakgroep'] ['settings'] = array (
			'link' => 0 
	);
	/* Veld: Inhoud: Onderwerp */
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['id'] = 'field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['table'] = 'field_data_field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['field'] = 'field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['alter'] ['make_link'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['alter'] ['path'] = 'node/[nid]';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Attest */
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['id'] = 'field_ev_attest';
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['table'] = 'field_data_field_ev_attest';
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['field'] = 'field_ev_attest';
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Goedkeuring */
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['id'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['field'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Datum - startdatum (field_ev_datum) */
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['id'] = 'field_ev_datum_value';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['field'] = 'field_ev_datum_value';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['order'] = 'DESC';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['expose'] ['label'] = 'Tijdstip - startdatum (field_ev_datum)';
	$handler->display->display_options ['defaults'] ['arguments'] = FALSE;
	$handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
	$handler->display->display_options ['defaults'] ['filters'] = FALSE;
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Type */
	$handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['value'] = array (
			'event_nascholing' => 'event_nascholing' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['operator_id'] = 'type_op';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['label'] = 'Type';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['operator'] = 'type_op';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['identifier'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['reduce'] = TRUE;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator_id'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Onderwerp';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title_1'] ['id'] = 'title_1';
	$handler->display->display_options ['filters'] ['title_1'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title_1'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title_1'] ['relationship'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['filters'] ['title_1'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title_1'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['title_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['operator_id'] = 'title_1_op';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['label'] = 'Vakgroep';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['operator'] = 'title_1_op';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['identifier'] = 'title_1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Aanvrager';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Goedkeuring (field_ev_goedkeuring) */
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['id'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['field'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['operator_id'] = 'field_ev_goedkeuring_value_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['label'] = 'Goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['operator'] = 'field_ev_goedkeuring_value_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['identifier'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Gebruiker: Huidige */
	$handler->display->display_options ['filters'] ['uid_current'] ['id'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['table'] = 'users';
	$handler->display->display_options ['filters'] ['uid_current'] ['field'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['uid_current'] ['value'] = 'All';
	$handler->display->display_options ['filters'] ['uid_current'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['uid_current'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['operator_id'] = '';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['label'] = 'enkel mijn nascholingen';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['operator'] = 'uid_current_op';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['identifier'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Attest (field_ev_attest) */
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['id'] = 'field_ev_attest_value';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['table'] = 'field_data_field_ev_attest';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['field'] = 'field_ev_attest_value';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['operator_id'] = 'field_ev_attest_value_op';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['label'] = 'Attest';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['operator'] = 'field_ev_attest_value_op';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['identifier'] = 'field_ev_attest_value';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'nascholingen';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Nascholing';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	
	/* Display: Goedkeuringen */
	$handler = $view->new_display ( 'page', 'Goedkeuringen', 'goedkeuringen' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Overzicht van aangevraagde nascholingen';
	$handler->display->display_options ['display_description'] = 'View voor de directie (nascholingen/EMA\'s)';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['defaults'] ['exposed_form'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'better_exposed_filters';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['options'] ['bef'] = array (
			'general' => array (
					'allow_secondary' => 0,
					'secondary_label' => 'Uitgebreide opties',
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'combine' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'combine_1' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_ev_vakgroep_target_id' => array (
					'bef_format' => 'default',
					'slider_options' => array (
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
							'filter_rewrite_values' => NULL 
					),
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_ev_goedkeuring_value_1' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'type' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'secondary_label' => NULL,
			'collapsible_label' => NULL,
			'combine_rewrite' => NULL,
			'reset_label' => NULL,
			'bef_filter_description' => NULL,
			'any_label' => NULL,
			'filter_rewrite_values' => NULL 
	);
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['grouping'] = array (
			0 => array (
					'field' => 'type',
					'rendered' => '1',
					'rendered_strip' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'name' => 'name',
			'type' => 'type',
			'field_ev_activiteit' => 'field_ev_activiteit',
			'field_ev_onderwerp' => 'field_ev_onderwerp',
			'title' => 'title',
			'field_ev_goedkeuring' => 'field_ev_goedkeuring',
			'edit_node' => 'edit_node' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'name' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'type' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_activiteit' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_onderwerp' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_goedkeuring' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'edit_node' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['empty'] = FALSE;
	/* Gedrag bij ontbreken van resultaten: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['empty'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['empty'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['empty'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['empty'] ['area_text_custom'] ['empty'] = TRUE;
	$handler->display->display_options ['empty'] ['area_text_custom'] ['content'] = '<h3>Er zijn momenteel geen openstaande aanvragen.</h3>';
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	/* Relatie: Inhoud: Auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Gebruiker: Naam */
	$handler->display->display_options ['fields'] ['name'] ['id'] = 'name';
	$handler->display->display_options ['fields'] ['name'] ['table'] = 'users';
	$handler->display->display_options ['fields'] ['name'] ['field'] = 'name';
	$handler->display->display_options ['fields'] ['name'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['name'] ['label'] = 'Aanvrager';
	/* Veld: Inhoud: Type */
	$handler->display->display_options ['fields'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['fields'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['fields'] ['type'] ['label'] = '';
	$handler->display->display_options ['fields'] ['type'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['type'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Activiteit */
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['id'] = 'field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['table'] = 'field_data_field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['field'] = 'field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Onderwerp */
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['id'] = 'field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['table'] = 'field_data_field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['field'] = 'field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['exclude'] = TRUE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Activiteit/onderwerp';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '[field_ev_activiteit][field_ev_onderwerp]';
	/* Veld: Inhoud: Goedkeuring */
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['id'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['field'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['label'] = 'Status';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['type'] = 'editable';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['settings'] = array (
			'click_to_edit' => 0,
			'click_to_edit_style' => 'button',
			'empty_text' => '',
			'fallback_format' => 'list_default',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Bewerkingslink */
	$handler->display->display_options ['fields'] ['edit_node'] ['id'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['field'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = 'bewerken';
	$handler->display->display_options ['fields'] ['edit_node'] ['text'] = 'bewerken';
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Datum van inzending */
	$handler->display->display_options ['sorts'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
	$handler->display->display_options ['defaults'] ['filters'] = FALSE;
	/* Filtercriterium: Algemeen: Veldenfilter combineren */
	$handler->display->display_options ['filters'] ['combine'] ['id'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['table'] = 'views';
	$handler->display->display_options ['filters'] ['combine'] ['field'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['combine'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['operator_id'] = 'combine_op';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['label'] = 'Evenement';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['description'] = 'Zoek naar een onderwerp/activiteit';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['operator'] = 'combine_op';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['identifier'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['combine'] ['fields'] = array (
			'field_ev_activiteit' => 'field_ev_activiteit',
			'field_ev_onderwerp' => 'field_ev_onderwerp' 
	);
	/* Filtercriterium: Algemeen: Veldenfilter combineren */
	$handler->display->display_options ['filters'] ['combine_1'] ['id'] = 'combine_1';
	$handler->display->display_options ['filters'] ['combine_1'] ['table'] = 'views';
	$handler->display->display_options ['filters'] ['combine_1'] ['field'] = 'combine';
	$handler->display->display_options ['filters'] ['combine_1'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['combine_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['combine_1'] ['expose'] ['operator_id'] = 'combine_1_op';
	$handler->display->display_options ['filters'] ['combine_1'] ['expose'] ['label'] = 'Naam';
	$handler->display->display_options ['filters'] ['combine_1'] ['expose'] ['description'] = 'Zoek op (deel van) een naam';
	$handler->display->display_options ['filters'] ['combine_1'] ['expose'] ['operator'] = 'combine_1_op';
	$handler->display->display_options ['filters'] ['combine_1'] ['expose'] ['identifier'] = 'combine_1';
	$handler->display->display_options ['filters'] ['combine_1'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['combine_1'] ['fields'] = array (
			'name' => 'name' 
	);
	/* Filtercriterium: Inhoud: Vakgroep (field_ev_vakgroep) */
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['id'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['table'] = 'field_data_field_ev_vakgroep';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['field'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['expose'] ['operator_id'] = 'field_ev_vakgroep_target_id_op';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['expose'] ['label'] = 'Vakgroep';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['expose'] ['description'] = 'Selecteer indien gewenst een vakgroep';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['expose'] ['operator'] = 'field_ev_vakgroep_target_id_op';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['expose'] ['identifier'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['group_info'] ['label'] = 'Vakgroep (field_ev_vakgroep)';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['group_info'] ['identifier'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['group_info'] ['remember'] = FALSE;
	$handler->display->display_options ['filters'] ['field_ev_vakgroep_target_id'] ['group_info'] ['group_items'] = array (
			1 => array (),
			2 => array (),
			3 => array () 
	);
	/* Filtercriterium: Inhoud: Goedkeuring (field_ev_goedkeuring) */
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['id'] = 'field_ev_goedkeuring_value_1';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['field'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['expose'] ['operator_id'] = 'field_ev_goedkeuring_value_1_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['expose'] ['label'] = 'Goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['expose'] ['operator'] = 'field_ev_goedkeuring_value_1_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['expose'] ['identifier'] = 'field_ev_goedkeuring_value_1';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value_1'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Type */
	$handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['value'] = array (
			'event_nascholing' => 'event_nascholing' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['operator_id'] = 'type_op';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['label'] = 'Type';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['operator'] = 'type_op';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['identifier'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['reduce'] = TRUE;
	/* Filtercriterium: Inhoud: Goedkeuring (field_ev_goedkeuring) */
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['id'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['field'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['value'] = array (
			'Nieuw' => 'Nieuw',
			'In behandeling' => 'In behandeling' 
	);
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['group'] = 1;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'nascholingen/goedkeuringen';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Goedkeuringen (nascholing)';
	$handler->display->display_options ['menu'] ['description'] = 'Verlenen van goedkeuring door directie';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	
	/* Display: Attesten */
	$handler = $view->new_display ( 'page', 'Attesten', 'nascholing_attesten' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Nascholingen: Attesten';
	$handler->display->display_options ['display_description'] = 'Events - overzicht nascholingen KWA';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['defaults'] ['exposed_form'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'better_exposed_filters';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['options'] ['bef'] = array (
			'general' => array (
					'allow_secondary' => 0,
					'secondary_label' => 'Uitgebreide opties',
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_ev_vakgroep_target_id' => array (
					'bef_format' => 'default',
					'slider_options' => array (
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
							'filter_rewrite_values' => NULL 
					),
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'realname' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_ev_goedkeuring_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'uid_current' => array (
					'bef_format' => 'bef_single',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'field_ev_attest_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											'secondary_label' => NULL,
											'collapsible_label' => NULL,
											'combine_rewrite' => NULL,
											'reset_label' => NULL,
											'bef_filter_description' => NULL,
											'any_label' => NULL,
											'filter_rewrite_values' => NULL 
									),
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL,
									'filter_rewrite_values' => NULL 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '',
									'secondary_label' => NULL,
									'collapsible_label' => NULL,
									'combine_rewrite' => NULL,
									'reset_label' => NULL,
									'bef_filter_description' => NULL,
									'any_label' => NULL 
							),
							'secondary_label' => NULL,
							'collapsible_label' => NULL,
							'combine_rewrite' => NULL,
							'reset_label' => NULL,
							'filter_rewrite_values' => NULL 
					),
					'secondary_label' => NULL,
					'collapsible_label' => NULL,
					'combine_rewrite' => NULL,
					'reset_label' => NULL,
					'bef_filter_description' => NULL,
					'any_label' => NULL,
					'filter_rewrite_values' => NULL 
			),
			'secondary_label' => NULL,
			'collapsible_label' => NULL,
			'combine_rewrite' => NULL,
			'reset_label' => NULL,
			'bef_filter_description' => NULL,
			'any_label' => NULL,
			'filter_rewrite_values' => NULL 
	);
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'full';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '50';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['pager'] ['options'] ['id'] = '0';
	$handler->display->display_options ['pager'] ['options'] ['quantity'] = '9';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'views_aggregator';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'nid' => 'nid',
			'realname' => 'realname',
			'field_ev_datum' => 'field_ev_datum',
			'field_ev_datum_1' => 'field_ev_datum_1',
			'title' => 'title',
			'field_ev_vakgroep' => 'field_ev_vakgroep',
			'field_ev_onderwerp' => 'field_ev_onderwerp',
			'field_ev_attest' => 'field_ev_attest',
			'field_ev_goedkeuring' => 'field_ev_goedkeuring' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'nid' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => '1',
					'aggr' => array (
							'views_aggregator_count' => 'views_aggregator_count',
							'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'realname' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_datum' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_datum_1' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_vakgroep' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_onderwerp' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_attest' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'field_ev_goedkeuring' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => 0,
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			) 
	);
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['totals_per_page'] = '1';
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['totals_row_position'] = array (
			1 => 0,
			2 => '2' 
	);
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['precision'] = '2';
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	/* Voet: Algemeen: Samenvatting van het resultaat */
	$handler->display->display_options ['footer'] ['result'] ['id'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['result'] ['field'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['content'] = 'Getoond @start - @end van @total';
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	/* Relatie: Inhoud: Auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_ev_vakgroep_target_id'] ['id'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['relationships'] ['field_ev_vakgroep_target_id'] ['table'] = 'field_data_field_ev_vakgroep';
	$handler->display->display_options ['relationships'] ['field_ev_vakgroep_target_id'] ['field'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Aanvrager';
	/* Veld: Inhoud: Datum */
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['id'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['field'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['label'] = 'verborgen';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['settings'] = array (
			'format_type' => 'medium',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['multi_type'] = 'ol';
	/* Veld: Inhoud: Datum */
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['id'] = 'field_ev_datum_1';
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['field'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['label'] = 'Tijdstip';
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['settings'] = array (
			'format_type' => 'long',
			'fromto' => 'both',
			'multiple_number' => '1',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	$handler->display->display_options ['fields'] ['field_ev_datum_1'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['link_to_node'] = FALSE;
	/* Veld: Inhoud: Onderwerp */
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['id'] = 'field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['table'] = 'field_data_field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['field'] = 'field_ev_onderwerp';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['alter'] ['make_link'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['alter'] ['path'] = 'node/[nid]';
	$handler->display->display_options ['fields'] ['field_ev_onderwerp'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Attest */
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['id'] = 'field_ev_attest';
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['table'] = 'field_data_field_ev_attest';
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['field'] = 'field_ev_attest';
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['label'] = 'verborgen';
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_attest'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Attest */
	$handler->display->display_options ['fields'] ['field_ev_attest_1'] ['id'] = 'field_ev_attest_1';
	$handler->display->display_options ['fields'] ['field_ev_attest_1'] ['table'] = 'field_data_field_ev_attest';
	$handler->display->display_options ['fields'] ['field_ev_attest_1'] ['field'] = 'field_ev_attest';
	$handler->display->display_options ['fields'] ['field_ev_attest_1'] ['type'] = 'editable';
	$handler->display->display_options ['fields'] ['field_ev_attest_1'] ['settings'] = array (
			'click_to_edit' => 0,
			'click_to_edit_style' => 'button',
			'empty_text' => '',
			'fallback_format' => 'list_default' 
	);
	/* Veld: Inhoud: Goedkeuring */
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['id'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['field'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Datum - startdatum (field_ev_datum) */
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['id'] = 'field_ev_datum_value';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['field'] = 'field_ev_datum_value';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['order'] = 'DESC';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['expose'] ['label'] = 'Tijdstip - startdatum (field_ev_datum)';
	$handler->display->display_options ['defaults'] ['arguments'] = FALSE;
	$handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
	$handler->display->display_options ['defaults'] ['filters'] = FALSE;
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Type */
	$handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['value'] = array (
			'event_nascholing' => 'event_nascholing' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['operator_id'] = 'type_op';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['label'] = 'Type';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['operator'] = 'type_op';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['identifier'] = 'type';
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['type'] ['expose'] ['reduce'] = TRUE;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator_id'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Onderwerp';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title_1'] ['id'] = 'title_1';
	$handler->display->display_options ['filters'] ['title_1'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title_1'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title_1'] ['relationship'] = 'field_ev_vakgroep_target_id';
	$handler->display->display_options ['filters'] ['title_1'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title_1'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['title_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['operator_id'] = 'title_1_op';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['label'] = 'Vakgroep';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['operator'] = 'title_1_op';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['identifier'] = 'title_1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title_1'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Aanvrager';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Goedkeuring (field_ev_goedkeuring) */
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['id'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['field'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['operator_id'] = 'field_ev_goedkeuring_value_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['label'] = 'Goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['operator'] = 'field_ev_goedkeuring_value_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['identifier'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Gebruiker: Huidige */
	$handler->display->display_options ['filters'] ['uid_current'] ['id'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['table'] = 'users';
	$handler->display->display_options ['filters'] ['uid_current'] ['field'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['uid_current'] ['value'] = 'All';
	$handler->display->display_options ['filters'] ['uid_current'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['uid_current'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['operator_id'] = '';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['label'] = 'enkel mijn nascholingen';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['operator'] = 'uid_current_op';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['identifier'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Attest (field_ev_attest) */
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['id'] = 'field_ev_attest_value';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['table'] = 'field_data_field_ev_attest';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['field'] = 'field_ev_attest_value';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['value'] = array (
			0 => '0' 
	);
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['operator_id'] = 'field_ev_attest_value_op';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['label'] = 'Attest binnengebracht?';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['operator'] = 'field_ev_attest_value_op';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['identifier'] = 'field_ev_attest_value';
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_attest_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'nascholingen/attesten';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Attesten (nascholing)';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	$translatables ['nascholingen'] = array (
			t ( 'Master' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Datum' ),
			t ( 'Aanvrager' ),
			t ( 'Type' ),
			t ( 'Overzicht' ),
			t ( 'Nascholingen' ),
			t ( 'Events - overzicht nascholingen' ),
			t ( 'Uitgebreide opties' ),
			t ( 'Items per pagina' ),
			t ( '- Alle -' ),
			t ( 'Startpunt' ),
			t ( '« eerste' ),
			t ( '‹ vorige' ),
			t ( 'volgende ›' ),
			t ( 'laatste »' ),
			t ( 'Link nascholing aanvragen' ),
			t ( '<a href="../node/add/event-nascholing">Een nieuwe nascholing aanvragen</a><br>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'auteur' ),
			t ( 'Inhoud entity referenced from field_ev_vakgroep' ),
			t ( 'Tijdstip' ),
			t ( 'Vakgroep' ),
			t ( 'Onderwerp' ),
			t ( 'Attest' ),
			t ( 'Goedkeuring' ),
			t ( 'Tijdstip - startdatum (field_ev_datum)' ),
			t ( 'enkel mijn nascholingen' ),
			t ( 'Goedkeuringen' ),
			t ( 'Overzicht van aangevraagde nascholingen' ),
			t ( 'View voor de directie (nascholingen/EMA\'s)' ),
			t ( '<h3>Er zijn momenteel geen openstaande aanvragen.</h3>' ),
			t ( 'Activiteit' ),
			t ( 'Activiteit/onderwerp' ),
			t ( '[field_ev_activiteit][field_ev_onderwerp]' ),
			t ( 'Status' ),
			t ( 'bewerken' ),
			t ( 'Evenement' ),
			t ( 'Zoek naar een onderwerp/activiteit' ),
			t ( 'Naam' ),
			t ( 'Zoek op (deel van) een naam' ),
			t ( 'Selecteer indien gewenst een vakgroep' ),
			t ( 'Vakgroep (field_ev_vakgroep)' ),
			t ( 'Attesten' ),
			t ( 'Nascholingen: Attesten' ),
			t ( 'Events - overzicht nascholingen KWA' ),
			t ( 'verborgen' ),
			t ( 'Attest binnengebracht?' ) 
	);
	$export ['nascholingen'] = $view;
	
	return $export;
}
