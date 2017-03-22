<?php
/**
 * @file
 * argus_pedagogische_activiteiten.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_pedagogische_activiteiten_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'pedagogische_activiteiten';
	$view->description = '';
	$view->tag = 'Calendar';
	$view->base_table = 'node';
	$view->human_name = 'Pedagogische activiteiten';
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
	$roles = array ();
	$roleNames = array (
			'administrator',
			'directie',
			'personeelslid' 
	);
	foreach ( $roleNames as $role ) {
		$rid = user_role_load_by_name ( $role );
		if (! $rid) {
			$newRole = new stdClass ();
			$newRole->name = $role;
			user_role_save ( $newRole );
			
			$rid = user_role_load_by_name ( $role );
		}
		
		$roles [] = $rid->rid;
	}
	$handler->display->display_options ['access'] ['role'] = $roles;
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
					'event_pedagogische_activiteit' => 'event_pedagogische_activiteit' 
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
	/* Veld: Inhoud: Tijdstip */
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
	$handler = $view->new_display ( 'page', 'Overzicht', 'pedagogische_activiteiten_overzicht' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Pedagogische activiteiten';
	$handler->display->display_options ['display_description'] = 'Overzicht events - pedagogische activiteiten';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['group_by'] = TRUE;
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
			'title' => array (
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
			'field_klas_sms_code_value' => array (
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
			'field_ev_timing_activiteit_value' => array (
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
			'field_ev_plaats_activiteit_value' => array (
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
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options'] = '20, 50';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'realname' => 'realname',
			'field_ev_activiteit' => 'field_ev_activiteit',
			'title' => 'title',
			'field_ev_begeleiders' => 'field_ev_begeleiders',
			'field_ev_deelnemende_klassen' => 'field_ev_deelnemende_klassen',
			'field_klas_leerlingen' => 'field_klas_leerlingen',
			'field_ev_datum' => 'field_ev_datum',
			'field_ev_goedkeuring' => 'field_ev_goedkeuring' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'realname' => array (
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
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_begeleiders' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_deelnemende_klassen' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_klas_leerlingen' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_datum' => array (
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
			) 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	/* Kop: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['header'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['label'] = 'Link pedagogische activiteit aanvragen';
	$handler->display->display_options ['header'] ['area_text_custom'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area_text_custom'] ['content'] = '<a href="../node/add/event-pedagogische-activiteit">Een nieuwe pedagogische activiteit aanvragen</a>';
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	/* Voet: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['footer'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['label'] = 'Link pedagogische activiteit aanvragen';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['content'] = '<a href="../node/add/event-pedagogische-activiteit">Een nieuwe pedagogische activiteit aanvragen</a>
<br /><br />';
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
	$handler->display->display_options ['relationships'] ['uid'] ['label'] = 'Aanvrager';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_ev_deelnemende_klassen_target_id'] ['id'] = 'field_ev_deelnemende_klassen_target_id';
	$handler->display->display_options ['relationships'] ['field_ev_deelnemende_klassen_target_id'] ['table'] = 'field_data_field_ev_deelnemende_klassen';
	$handler->display->display_options ['relationships'] ['field_ev_deelnemende_klassen_target_id'] ['field'] = 'field_ev_deelnemende_klassen_target_id';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_ev_begeleiders_target_id'] ['id'] = 'field_ev_begeleiders_target_id';
	$handler->display->display_options ['relationships'] ['field_ev_begeleiders_target_id'] ['table'] = 'field_data_field_ev_begeleiders';
	$handler->display->display_options ['relationships'] ['field_ev_begeleiders_target_id'] ['field'] = 'field_ev_begeleiders_target_id';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_klas_leerlingen_target_id'] ['id'] = 'field_klas_leerlingen_target_id';
	$handler->display->display_options ['relationships'] ['field_klas_leerlingen_target_id'] ['table'] = 'field_data_field_klas_leerlingen';
	$handler->display->display_options ['relationships'] ['field_klas_leerlingen_target_id'] ['field'] = 'field_klas_leerlingen_target_id';
	$handler->display->display_options ['relationships'] ['field_klas_leerlingen_target_id'] ['relationship'] = 'field_ev_deelnemende_klassen_target_id';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Aanvrager';
	/* Veld: Inhoud: Activiteit */
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['id'] = 'field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['table'] = 'field_data_field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['field'] = 'field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Activiteit';
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Aanwezige leden */
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['id'] = 'field_ev_begeleiders';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['table'] = 'field_data_field_ev_begeleiders';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['field'] = 'field_ev_begeleiders';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['settings'] = array (
			'link' => 1 
	);
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['multi_type'] = 'ul';
	/* Veld: Inhoud: Deelnemende klassen */
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['id'] = 'field_ev_deelnemende_klassen';
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['table'] = 'field_data_field_ev_deelnemende_klassen';
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['field'] = 'field_ev_deelnemende_klassen';
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['settings'] = array (
			'link' => 1 
	);
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['delta_offset'] = '0';
	/* Veld: COUNT(DISTINCT Inhoud: Leerlingen) */
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['id'] = 'field_klas_leerlingen';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['table'] = 'field_data_field_klas_leerlingen';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['field'] = 'field_klas_leerlingen';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['relationship'] = 'field_ev_deelnemende_klassen_target_id';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['group_type'] = 'count_distinct';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['label'] = '# lln';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['separator'] = ', ';
	/* Veld: Inhoud: Tijdstip */
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['id'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['field'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['settings'] = array (
			'format_type' => 'short',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Goedkeuring */
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['id'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['field'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Busje betaald */
	$handler->display->display_options ['fields'] ['field_ev_busje_betaald'] ['id'] = 'field_ev_busje_betaald';
	$handler->display->display_options ['fields'] ['field_ev_busje_betaald'] ['table'] = 'field_data_field_ev_busje_betaald';
	$handler->display->display_options ['fields'] ['field_ev_busje_betaald'] ['field'] = 'field_ev_busje_betaald';
	$handler->display->display_options ['fields'] ['field_ev_busje_betaald'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_busje_betaald'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Tijdstip - startdatum (field_ev_datum) */
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['id'] = 'field_ev_datum_value';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['field'] = 'field_ev_datum_value';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['order'] = 'DESC';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['expose'] ['label'] = 'Datum - startdatum';
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
			'event_pedagogische_activiteit' => 'event_pedagogische_activiteit' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
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
	/* Filtercriterium: Algemeen: Veldenfilter combineren */
	$handler->display->display_options ['filters'] ['combine'] ['id'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['table'] = 'views';
	$handler->display->display_options ['filters'] ['combine'] ['field'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['combine'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['combine'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['operator_id'] = 'combine_op';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['label'] = 'Aanvrager/begeleider';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['operator'] = 'combine_op';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['identifier'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['combine'] ['fields'] = array (
			'realname' => 'realname',
			'field_ev_begeleiders' => 'field_ev_begeleiders' 
	);
	/* Filtercriterium: Inhoud: Code (Smartschool) (field_klas_sms_code) */
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['id'] = 'field_klas_sms_code_value';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['table'] = 'field_data_field_klas_sms_code';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['field'] = 'field_klas_sms_code_value';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['relationship'] = 'field_ev_deelnemende_klassen_target_id';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['operator_id'] = 'field_klas_sms_code_value_op';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['label'] = 'Klas';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['operator'] = 'field_klas_sms_code_value_op';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['identifier'] = 'field_klas_sms_code_value';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Goedkeuring (field_ev_goedkeuring) */
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['id'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['field'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['operator_id'] = 'field_ev_goedkeuring_value_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['label'] = 'Goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['operator'] = 'field_ev_goedkeuring_value_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['identifier'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Timing activiteit (field_ev_timing_activiteit) */
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['id'] = 'field_ev_timing_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['table'] = 'field_data_field_ev_timing_activiteit';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['field'] = 'field_ev_timing_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['operator_id'] = 'field_ev_timing_activiteit_value_op';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['label'] = 'Timing activiteit';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['description'] = 'Wanneer vindt de activiteit plaats?';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['operator'] = 'field_ev_timing_activiteit_value_op';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['identifier'] = 'field_ev_timing_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Plaats activiteit (field_ev_plaats_activiteit) */
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['id'] = 'field_ev_plaats_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['table'] = 'field_data_field_ev_plaats_activiteit';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['field'] = 'field_ev_plaats_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['operator_id'] = 'field_ev_plaats_activiteit_value_op';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['label'] = 'Plaats activiteit';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['description'] = 'Vindt de activiteit buiten school plaats?';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['operator'] = 'field_ev_plaats_activiteit_value_op';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['identifier'] = 'field_ev_plaats_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Gebruiker: Huidige */
	$handler->display->display_options ['filters'] ['uid_current'] ['id'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['table'] = 'users';
	$handler->display->display_options ['filters'] ['uid_current'] ['field'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['uid_current'] ['value'] = 'All';
	$handler->display->display_options ['filters'] ['uid_current'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['operator_id'] = '';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['label'] = 'Enkel mijn pedagogische activiteiten';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['operator'] = 'uid_current_op';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['identifier'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'pedagogische_activiteiten';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Pedagogische activiteit';
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
	$handler = $view->new_display ( 'page', 'Goedkeuringen', 'pedagogische_activiteiten_goedkeuringen' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Overzicht van aangevraagde pedagogische activiteiten';
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
			'event_pedagogische_activiteit' => 'event_pedagogische_activiteit' 
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
	$handler->display->display_options ['path'] = 'pedagogische_activiteiten/goedkeuringen';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Goedkeuringen (pedagogische activiteit)';
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
	
	/* Display: Overzicht (incl. kosten) */
	$handler = $view->new_display ( 'page', 'Overzicht (incl. kosten)', 'pedagogische_activiteiten_overzicht_kosten' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Pedagogische activiteiten: Kosten';
	$handler->display->display_options ['display_description'] = 'Overzicht events - pedagogische activiteiten inclusief kosten';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['group_by'] = TRUE;
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
			'title' => array (
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
			'field_klas_sms_code_value' => array (
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
			'field_ev_timing_activiteit_value' => array (
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
			'field_ev_plaats_activiteit_value' => array (
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
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'realname' => 'realname',
			'field_ev_activiteit' => 'field_ev_activiteit',
			'title' => 'title',
			'field_ev_begeleiders' => 'field_ev_begeleiders',
			'field_ev_deelnemende_klassen' => 'field_ev_deelnemende_klassen',
			'field_klas_leerlingen' => 'field_klas_leerlingen',
			'field_ev_datum' => 'field_ev_datum',
			'field_ev_goedkeuring' => 'field_ev_goedkeuring' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'realname' => array (
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
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_begeleiders' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_deelnemende_klassen' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_klas_leerlingen' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ev_datum' => array (
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
			) 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	/* Kop: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['header'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['label'] = 'Link pedagogische activiteit aanvragen';
	$handler->display->display_options ['header'] ['area_text_custom'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area_text_custom'] ['content'] = '<a href="../node/add/event-pedagogische-activiteit">Een nieuwe pedagogische activiteit aanvragen</a>';
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	/* Voet: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['footer'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['label'] = 'Link pedagogische activiteit aanvragen';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['content'] = '<a href="../node/add/event-pedagogische-activiteit">Een nieuwe pedagogische activiteit aanvragen</a>';
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
	$handler->display->display_options ['relationships'] ['uid'] ['label'] = 'Aanvrager';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_ev_deelnemende_klassen_target_id'] ['id'] = 'field_ev_deelnemende_klassen_target_id';
	$handler->display->display_options ['relationships'] ['field_ev_deelnemende_klassen_target_id'] ['table'] = 'field_data_field_ev_deelnemende_klassen';
	$handler->display->display_options ['relationships'] ['field_ev_deelnemende_klassen_target_id'] ['field'] = 'field_ev_deelnemende_klassen_target_id';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_ev_begeleiders_target_id'] ['id'] = 'field_ev_begeleiders_target_id';
	$handler->display->display_options ['relationships'] ['field_ev_begeleiders_target_id'] ['table'] = 'field_data_field_ev_begeleiders';
	$handler->display->display_options ['relationships'] ['field_ev_begeleiders_target_id'] ['field'] = 'field_ev_begeleiders_target_id';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_klas_leerlingen_target_id'] ['id'] = 'field_klas_leerlingen_target_id';
	$handler->display->display_options ['relationships'] ['field_klas_leerlingen_target_id'] ['table'] = 'field_data_field_klas_leerlingen';
	$handler->display->display_options ['relationships'] ['field_klas_leerlingen_target_id'] ['field'] = 'field_klas_leerlingen_target_id';
	$handler->display->display_options ['relationships'] ['field_klas_leerlingen_target_id'] ['relationship'] = 'field_ev_deelnemende_klassen_target_id';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Aanvrager';
	/* Veld: Inhoud: Activiteit */
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['id'] = 'field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['table'] = 'field_data_field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['field'] = 'field_ev_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ev_activiteit'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Activiteit';
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Aanwezige leden */
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['id'] = 'field_ev_begeleiders';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['table'] = 'field_data_field_ev_begeleiders';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['field'] = 'field_ev_begeleiders';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['settings'] = array (
			'link' => 1 
	);
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_ev_begeleiders'] ['multi_type'] = 'ul';
	/* Veld: Inhoud: Deelnemende klassen */
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['id'] = 'field_ev_deelnemende_klassen';
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['table'] = 'field_data_field_ev_deelnemende_klassen';
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['field'] = 'field_ev_deelnemende_klassen';
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['settings'] = array (
			'link' => 1 
	);
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_ev_deelnemende_klassen'] ['delta_offset'] = '0';
	/* Veld: COUNT(DISTINCT Inhoud: Leerlingen) */
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['id'] = 'field_klas_leerlingen';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['table'] = 'field_data_field_klas_leerlingen';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['field'] = 'field_klas_leerlingen';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['relationship'] = 'field_ev_deelnemende_klassen_target_id';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['group_type'] = 'count_distinct';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['label'] = '# lln';
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_klas_leerlingen'] ['separator'] = ', ';
	/* Veld: Inhoud: Tijdstip */
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['id'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['field'] = 'field_ev_datum';
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['settings'] = array (
			'format_type' => 'short',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	$handler->display->display_options ['fields'] ['field_ev_datum'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Goedkeuring */
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['id'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['field'] = 'field_ev_goedkeuring';
	$handler->display->display_options ['fields'] ['field_ev_goedkeuring'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Afstand (enkel schoolbusje) */
	$handler->display->display_options ['fields'] ['field_ev_afstand'] ['id'] = 'field_ev_afstand';
	$handler->display->display_options ['fields'] ['field_ev_afstand'] ['table'] = 'field_data_field_ev_afstand';
	$handler->display->display_options ['fields'] ['field_ev_afstand'] ['field'] = 'field_ev_afstand';
	$handler->display->display_options ['fields'] ['field_ev_afstand'] ['settings'] = array (
			'thousand_separator' => '',
			'prefix_suffix' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Kostprijs activiteit */
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_activiteit'] ['id'] = 'field_ev_kostprijs_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_activiteit'] ['table'] = 'field_data_field_ev_kostprijs_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_activiteit'] ['field'] = 'field_ev_kostprijs_activiteit';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_activiteit'] ['settings'] = array (
			'thousand_separator' => '',
			'decimal_separator' => '.',
			'scale' => '2',
			'prefix_suffix' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Kostprijs schoolbusje */
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_schoolbusje'] ['id'] = 'field_ev_kostprijs_schoolbusje';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_schoolbusje'] ['table'] = 'field_data_field_ev_kostprijs_schoolbusje';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_schoolbusje'] ['field'] = 'field_ev_kostprijs_schoolbusje';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_schoolbusje'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Kostprijs vervoer */
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_vervoer'] ['id'] = 'field_ev_kostprijs_vervoer';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_vervoer'] ['table'] = 'field_data_field_ev_kostprijs_vervoer';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_vervoer'] ['field'] = 'field_ev_kostprijs_vervoer';
	$handler->display->display_options ['fields'] ['field_ev_kostprijs_vervoer'] ['settings'] = array (
			'thousand_separator' => '',
			'decimal_separator' => '.',
			'scale' => '2',
			'prefix_suffix' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Prijs busje per leerling */
	$handler->display->display_options ['fields'] ['field_ev_prijs_busje_lln'] ['id'] = 'field_ev_prijs_busje_lln';
	$handler->display->display_options ['fields'] ['field_ev_prijs_busje_lln'] ['table'] = 'field_data_field_ev_prijs_busje_lln';
	$handler->display->display_options ['fields'] ['field_ev_prijs_busje_lln'] ['field'] = 'field_ev_prijs_busje_lln';
	$handler->display->display_options ['fields'] ['field_ev_prijs_busje_lln'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Totale kostprijs activiteit */
	$handler->display->display_options ['fields'] ['field_ev_tot_kostprijs_act'] ['id'] = 'field_ev_tot_kostprijs_act';
	$handler->display->display_options ['fields'] ['field_ev_tot_kostprijs_act'] ['table'] = 'field_data_field_ev_tot_kostprijs_act';
	$handler->display->display_options ['fields'] ['field_ev_tot_kostprijs_act'] ['field'] = 'field_ev_tot_kostprijs_act';
	$handler->display->display_options ['fields'] ['field_ev_tot_kostprijs_act'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Totale kostprijs per leerling */
	$handler->display->display_options ['fields'] ['field_ev_totale_kostprijs_ll'] ['id'] = 'field_ev_totale_kostprijs_ll';
	$handler->display->display_options ['fields'] ['field_ev_totale_kostprijs_ll'] ['table'] = 'field_data_field_ev_totale_kostprijs_ll';
	$handler->display->display_options ['fields'] ['field_ev_totale_kostprijs_ll'] ['field'] = 'field_ev_totale_kostprijs_ll';
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Tijdstip - startdatum (field_ev_datum) */
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['id'] = 'field_ev_datum_value';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['table'] = 'field_data_field_ev_datum';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['field'] = 'field_ev_datum_value';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['order'] = 'DESC';
	$handler->display->display_options ['sorts'] ['field_ev_datum_value'] ['expose'] ['label'] = 'Datum - startdatum';
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
			'event_pedagogische_activiteit' => 'event_pedagogische_activiteit' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
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
	/* Filtercriterium: Algemeen: Veldenfilter combineren */
	$handler->display->display_options ['filters'] ['combine'] ['id'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['table'] = 'views';
	$handler->display->display_options ['filters'] ['combine'] ['field'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['combine'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['combine'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['operator_id'] = 'combine_op';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['label'] = 'Aanvrager/begeleider';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['operator'] = 'combine_op';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['identifier'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['combine'] ['fields'] = array (
			'realname' => 'realname',
			'field_ev_begeleiders' => 'field_ev_begeleiders' 
	);
	/* Filtercriterium: Inhoud: Code (Smartschool) (field_klas_sms_code) */
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['id'] = 'field_klas_sms_code_value';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['table'] = 'field_data_field_klas_sms_code';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['field'] = 'field_klas_sms_code_value';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['relationship'] = 'field_ev_deelnemende_klassen_target_id';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['operator_id'] = 'field_klas_sms_code_value_op';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['label'] = 'Klas';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['operator'] = 'field_klas_sms_code_value_op';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['identifier'] = 'field_klas_sms_code_value';
	$handler->display->display_options ['filters'] ['field_klas_sms_code_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Goedkeuring (field_ev_goedkeuring) */
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['id'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['table'] = 'field_data_field_ev_goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['field'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['operator_id'] = 'field_ev_goedkeuring_value_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['label'] = 'Goedkeuring';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['operator'] = 'field_ev_goedkeuring_value_op';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['identifier'] = 'field_ev_goedkeuring_value';
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['remember'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_goedkeuring_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Timing activiteit (field_ev_timing_activiteit) */
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['id'] = 'field_ev_timing_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['table'] = 'field_data_field_ev_timing_activiteit';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['field'] = 'field_ev_timing_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['operator_id'] = 'field_ev_timing_activiteit_value_op';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['label'] = 'Timing activiteit';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['description'] = 'Wanneer vindt de activiteit plaats?';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['operator'] = 'field_ev_timing_activiteit_value_op';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['identifier'] = 'field_ev_timing_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_timing_activiteit_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Plaats activiteit (field_ev_plaats_activiteit) */
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['id'] = 'field_ev_plaats_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['table'] = 'field_data_field_ev_plaats_activiteit';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['field'] = 'field_ev_plaats_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['operator_id'] = 'field_ev_plaats_activiteit_value_op';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['label'] = 'Plaats activiteit';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['description'] = 'Vindt de activiteit buiten school plaats?';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['operator'] = 'field_ev_plaats_activiteit_value_op';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['identifier'] = 'field_ev_plaats_activiteit_value';
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_ev_plaats_activiteit_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Gebruiker: Huidige */
	$handler->display->display_options ['filters'] ['uid_current'] ['id'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['table'] = 'users';
	$handler->display->display_options ['filters'] ['uid_current'] ['field'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['uid_current'] ['value'] = 'All';
	$handler->display->display_options ['filters'] ['uid_current'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['operator_id'] = '';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['label'] = 'Enkel mijn pedagogische activiteiten';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['operator'] = 'uid_current_op';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['identifier'] = 'uid_current';
	$handler->display->display_options ['filters'] ['uid_current'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'pedagogische_activiteiten/kosten';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Kosten (pedagogische activiteit)';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	$translatables ['pedagogische_activiteiten'] = array (
			t ( 'Master' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Tijdstip' ),
			t ( 'Aanvrager' ),
			t ( 'Type' ),
			t ( 'Overzicht' ),
			t ( 'Pedagogische activiteiten' ),
			t ( 'Overzicht events - pedagogische activiteiten' ),
			t ( 'Uitgebreide opties' ),
			t ( 'Items per pagina' ),
			t ( '- Alle -' ),
			t ( 'Startpunt' ),
			t ( '« eerste' ),
			t ( '‹ vorige' ),
			t ( 'volgende ›' ),
			t ( 'laatste »' ),
			t ( 'Link pedagogische activiteit aanvragen' ),
			t ( '<a href="../node/add/event-pedagogische-activiteit">Een nieuwe pedagogische activiteit aanvragen</a>' ),
			t ( '<a href="../node/add/event-pedagogische-activiteit">Een nieuwe pedagogische activiteit aanvragen</a>
<br /><br />' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'Inhoud entity referenced from field_ev_deelnemende_klassen' ),
			t ( 'Gebruiker entity referenced from field_ev_begeleiders' ),
			t ( 'Gebruiker entity referenced from field_klas_leerlingen' ),
			t ( 'Activiteit' ),
			t ( 'Aanwezige leden' ),
			t ( 'Deelnemende klassen' ),
			t ( '# lln' ),
			t ( 'Goedkeuring' ),
			t ( 'Busje betaald' ),
			t ( 'Datum - startdatum' ),
			t ( 'Onderwerp' ),
			t ( 'Aanvrager/begeleider' ),
			t ( 'Klas' ),
			t ( 'Timing activiteit' ),
			t ( 'Wanneer vindt de activiteit plaats?' ),
			t ( 'Plaats activiteit' ),
			t ( 'Vindt de activiteit buiten school plaats?' ),
			t ( 'Enkel mijn pedagogische activiteiten' ),
			t ( 'Goedkeuringen' ),
			t ( 'Overzicht van aangevraagde pedagogische activiteiten' ),
			t ( 'View voor de directie (nascholingen/EMA\'s)' ),
			t ( '<h3>Er zijn momenteel geen openstaande aanvragen.</h3>' ),
			t ( 'auteur' ),
			t ( 'Activiteit/onderwerp' ),
			t ( '[field_ev_activiteit][field_ev_onderwerp]' ),
			t ( 'Status' ),
			t ( 'bewerken' ),
			t ( 'Evenement' ),
			t ( 'Zoek naar een onderwerp/activiteit' ),
			t ( 'Naam' ),
			t ( 'Zoek op (deel van) een naam' ),
			t ( 'Vakgroep' ),
			t ( 'Selecteer indien gewenst een vakgroep' ),
			t ( 'Vakgroep (field_ev_vakgroep)' ),
			t ( 'Overzicht (incl. kosten)' ),
			t ( 'Pedagogische activiteiten: Kosten' ),
			t ( 'Overzicht events - pedagogische activiteiten inclusief kosten' ),
			t ( 'Afstand (enkel schoolbusje)' ),
			t ( 'Kostprijs activiteit' ),
			t ( 'Kostprijs schoolbusje' ),
			t ( 'Kostprijs vervoer' ),
			t ( 'Prijs busje per leerling' ),
			t ( 'Totale kostprijs activiteit' ),
			t ( 'Totale kostprijs per leerling' ) 
	);
	$export ['pedagogische_activiteiten'] = $view;
	
	return $export;
}
