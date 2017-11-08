<?php
/**
 * @file
 * argus_schoolkosten.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_schoolkosten_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'schoolkostitems';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Schoolkostitems';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Schoolkostitems';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'perm';
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
					'klas' => 'klas',
					'schoolkost' => 'schoolkost',
					'schoolkost_item' => 'schoolkost_item' 
			),
			'node_only' => array (
					'node_changed' => 'node_changed' 
			) 
	);
	$handler->display->display_options ['query'] ['type'] = 'views_query';
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['pager'] ['type'] = 'full';
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '50';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_label'] = 'Items per pagina';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['items_per_page_options_all_label'] = '- Alle -';
	$handler->display->display_options ['pager'] ['options'] ['expose'] ['offset_label'] = 'Startpunt';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['first'] = '« eerste';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['previous'] = '‹ vorige';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['next'] = 'volgende ›';
	$handler->display->display_options ['pager'] ['options'] ['tags'] ['last'] = 'laatste »';
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'title' => 'title',
			'field_schoolkost_item_type' => 'field_schoolkost_item_type',
			'field_schoolkost_item_koop_huur' => 'field_schoolkost_item_koop_huur',
			'field_schoolkost_item_prijs' => 'field_schoolkost_item_prijs',
			'field_schoolkost_item_locatie' => 'field_schoolkost_item_locatie',
			'field_schoolkost_item_isbn' => 'field_schoolkost_item_isbn',
			'field_schoolkost_item_vervoermid' => 'field_schoolkost_item_vervoermid' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_type' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_koop_huur' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_prijs' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_locatie' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_isbn' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_vervoermid' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['sticky'] = TRUE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['order'] = 'DESC';
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
			'schoolkost' => 'schoolkost' 
	);
	
	/* Display: Volledige lijst per klas */
	$handler = $view->new_display ( 'page', 'Volledige lijst per klas', 'schoolkosten_per_klas' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Schoolkosten per klas';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['group_by'] = TRUE;
	$handler->display->display_options ['defaults'] ['access'] = FALSE;
	$handler->display->display_options ['access'] ['type'] = 'role';
	$handler->display->display_options ['access'] ['role'] = array (
			3 => '3',
			216 => '216' 
	);
	$handler->display->display_options ['defaults'] ['cache'] = FALSE;
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
					'klas' => 'klas',
					'schoolkost' => 'schoolkost',
					'schoolkost_item' => 'schoolkost_item',
					'vak' => 'vak' 
			),
			'node_only' => array (
					'node_changed' => 0 
			) 
	);
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
					'input_required' => 0,
					'text_input_required' => array (
							'text_input_required' => array (
									'value' => 'Selecteer een van de filters en klik op \'Toepassen\' om het resultaat te zien',
									'format' => 'filtered_html' 
							) 
					),
					'allow_secondary' => 0,
					'secondary_label' => 'Uitgebreide opties',
					'secondary_collapse_override' => '0' 
			),
			'field_schoolkost_klassen_target_id_entityreference_filter' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => '1',
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_schoolkost_vakken_target_id_entityreference_filter' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'realname' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_schoolkost_item_isbn_value' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_schoolkost_item_koop_huur_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'title' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_schoolkost_item_uitgeverij_target_id' => array (
					'bef_format' => 'default',
					'slider_options' => array (
							'bef_slider_min' => '0',
							'bef_slider_max' => '99999',
							'bef_slider_step' => '1',
							'bef_slider_animate' => '',
							'bef_slider_orientation' => 'horizontal' 
					),
					'more_options' => array (
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			) 
	);
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['grouping'] = array (
			0 => array (
					'field' => 'field_schoolkost_klassen',
					'rendered' => '1',
					'rendered_strip' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'field_schoolkost_klassen' => 'field_schoolkost_klassen',
			'field_schoolkost_vakken' => 'field_schoolkost_vakken',
			'realname' => 'realname',
			'field_schoolkost_schoolkost_item' => 'field_schoolkost_schoolkost_item',
			'field_schoolkost_item_type' => 'field_schoolkost_item_type',
			'field_schoolkost_item_prijs' => 'field_schoolkost_item_prijs',
			'field_schoolkost_aantal' => 'field_schoolkost_aantal',
			'field_schoolkost_totaalprijs' => 'field_schoolkost_totaalprijs',
			'field_schoolkost_item_locatie' => 'field_schoolkost_item_locatie',
			'field_schoolkost_item_isbn' => 'field_schoolkost_item_isbn',
			'field_schoolkost_item_koop_huur' => 'field_schoolkost_item_koop_huur',
			'field_schoolkost_item_leverancie' => 'field_schoolkost_item_leverancie',
			'field_schoolkost_item_uitgeverij' => 'field_schoolkost_item_uitgeverij',
			'field_schoolkost_item_vervoermid' => 'field_schoolkost_item_vervoermid',
			'nothing_1' => 'nothing_1',
			'edit_node' => 'edit_node',
			'delete_node' => 'delete_node',
			'nothing' => 'nothing' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'field_schoolkost_klassen' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_vakken' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'realname' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_schoolkost_item' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_type' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_prijs' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_aantal' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_totaalprijs' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_locatie' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_isbn' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_koop_huur' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_leverancie' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_uitgeverij' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_item_vervoermid' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing_1' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'edit_node' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'delete_node' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['sticky'] = TRUE;
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/schoolkost">Een nieuwe schoolkost toevoegen</a>';
	$handler->display->display_options ['header'] ['area'] ['format'] = 'filtered_html';
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	/* Voet: Algemeen: Samenvatting van het resultaat */
	$handler->display->display_options ['footer'] ['result'] ['id'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['result'] ['field'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['content'] = 'Getoond @start - @end van @total';
	/* Voet: Algemeen: Tekstveld */
	$handler->display->display_options ['footer'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['footer'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/schoolkost">Een nieuwe schoolkost toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	/* Relatie: auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['ui_name'] = 'auteur';
	$handler->display->display_options ['relationships'] ['uid'] ['required'] = TRUE;
	/* Relatie: schoolkostitem */
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['id'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['table'] = 'field_data_field_schoolkost_schoolkost_item';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['field'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['ui_name'] = 'schoolkostitem';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['label'] = 'schoolkostitem';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['required'] = TRUE;
	/* Relatie: vak */
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['id'] = 'field_schoolkost_vakken_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['table'] = 'field_data_field_schoolkost_vakken';
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['field'] = 'field_schoolkost_vakken_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['ui_name'] = 'vak';
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['label'] = 'vakken';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Klas(sen) */
	$handler->display->display_options ['fields'] ['field_schoolkost_klassen'] ['id'] = 'field_schoolkost_klassen';
	$handler->display->display_options ['fields'] ['field_schoolkost_klassen'] ['table'] = 'field_data_field_schoolkost_klassen';
	$handler->display->display_options ['fields'] ['field_schoolkost_klassen'] ['field'] = 'field_schoolkost_klassen';
	$handler->display->display_options ['fields'] ['field_schoolkost_klassen'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_klassen'] ['settings'] = array (
			'link' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_schoolkost_klassen'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Vak(ken) */
	$handler->display->display_options ['fields'] ['field_schoolkost_vakken'] ['id'] = 'field_schoolkost_vakken';
	$handler->display->display_options ['fields'] ['field_schoolkost_vakken'] ['table'] = 'field_data_field_schoolkost_vakken';
	$handler->display->display_options ['fields'] ['field_schoolkost_vakken'] ['field'] = 'field_schoolkost_vakken';
	$handler->display->display_options ['fields'] ['field_schoolkost_vakken'] ['settings'] = array (
			'bypass_access' => 0,
			'link' => 0,
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_schoolkost_vakken'] ['delta_offset'] = '0';
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Leerkracht';
	/* Veld: Inhoud: Schoolkostitem */
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['id'] = 'field_schoolkost_schoolkost_item';
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['table'] = 'field_data_field_schoolkost_schoolkost_item';
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['field'] = 'field_schoolkost_schoolkost_item';
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['label'] = 'Item';
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['settings'] = array (
			'link' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Type schoolkostitem */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['id'] = 'field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['field'] = 'field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['label'] = 'Type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Eenheidsprijs */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['id'] = 'field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['table'] = 'field_data_field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['field'] = 'field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['alter'] ['text'] = '€ [field_schoolkost_item_prijs]';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['settings'] = array (
			'thousand_separator' => ' ',
			'decimal_separator' => '.',
			'scale' => '2',
			'prefix_suffix' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Aantal */
	$handler->display->display_options ['fields'] ['field_schoolkost_aantal'] ['id'] = 'field_schoolkost_aantal';
	$handler->display->display_options ['fields'] ['field_schoolkost_aantal'] ['table'] = 'field_data_field_schoolkost_aantal';
	$handler->display->display_options ['fields'] ['field_schoolkost_aantal'] ['field'] = 'field_schoolkost_aantal';
	$handler->display->display_options ['fields'] ['field_schoolkost_aantal'] ['settings'] = array (
			'thousand_separator' => '',
			'prefix_suffix' => '1',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Totaalprijs */
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['id'] = 'field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['table'] = 'field_data_field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['field'] = 'field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['alter'] ['text'] = '€ [field_schoolkost_totaalprijs]';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Inrichter/locatie */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['id'] = 'field_schoolkost_item_locatie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['table'] = 'field_data_field_schoolkost_item_locatie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['field'] = 'field_schoolkost_item_locatie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['alter'] ['text'] = 'Inrichter/locatie: [field_schoolkost_item_locatie]<br />';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: ISBN-nummer */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['id'] = 'field_schoolkost_item_isbn';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['table'] = 'field_data_field_schoolkost_item_isbn';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['field'] = 'field_schoolkost_item_isbn';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['alter'] ['text'] = 'ISBN-nr.: [field_schoolkost_item_isbn]<br />';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Kopen/huren */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['id'] = 'field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['table'] = 'field_data_field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['field'] = 'field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['alter'] ['text'] = 'Koop/huur: [field_schoolkost_item_koop_huur]<br />';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Leverancier */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['id'] = 'field_schoolkost_item_leverancie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['table'] = 'field_data_field_schoolkost_item_leverancie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['field'] = 'field_schoolkost_item_leverancie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['alter'] ['text'] = 'Leverancier: [field_schoolkost_item_leverancie]<br />';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_leverancie'] ['settings'] = array (
			'bypass_access' => 0,
			'link' => 0,
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Uitgeverij */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['id'] = 'field_schoolkost_item_uitgeverij';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['table'] = 'field_data_field_schoolkost_item_uitgeverij';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['field'] = 'field_schoolkost_item_uitgeverij';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['alter'] ['text'] = 'Uitgeverij: [field_schoolkost_item_uitgeverij]<br />';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_uitgeverij'] ['settings'] = array (
			'bypass_access' => 0,
			'link' => 0,
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Vervoermiddel */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['id'] = 'field_schoolkost_item_vervoermid';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['table'] = 'field_data_field_schoolkost_item_vervoermid';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['field'] = 'field_schoolkost_item_vervoermid';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['alter'] ['text'] = 'Vervoer: [field_schoolkost_item_vervoermid]<br />';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['delta_offset'] = '0';
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_1'] ['id'] = 'nothing_1';
	$handler->display->display_options ['fields'] ['nothing_1'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_1'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_1'] ['label'] = 'Details';
	$handler->display->display_options ['fields'] ['nothing_1'] ['alter'] ['text'] = '[field_schoolkost_item_locatie][field_schoolkost_item_isbn][field_schoolkost_item_koop_huur][field_schoolkost_item_leverancie][field_schoolkost_item_uitgeverij][field_schoolkost_item_vervoermid]';
	/* Veld: Inhoud: Bewerkingslink */
	$handler->display->display_options ['fields'] ['edit_node'] ['id'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['field'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['edit_node'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['edit_node'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['edit_node'] ['alter'] ['text'] = 'bewerken';
	$handler->display->display_options ['fields'] ['edit_node'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Verwijderlink */
	$handler->display->display_options ['fields'] ['delete_node'] ['id'] = 'delete_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['field'] = 'delete_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['delete_node'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['delete_node'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Acties';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[edit_node] - [delete_node]';
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Klas(sen) (field_schoolkost_klassen) */
	$handler->display->display_options ['sorts'] ['field_schoolkost_klassen_target_id'] ['id'] = 'field_schoolkost_klassen_target_id';
	$handler->display->display_options ['sorts'] ['field_schoolkost_klassen_target_id'] ['table'] = 'field_data_field_schoolkost_klassen';
	$handler->display->display_options ['sorts'] ['field_schoolkost_klassen_target_id'] ['field'] = 'field_schoolkost_klassen_target_id';
	/* Sorteercriterium: Inhoud: Vak(ken) (field_schoolkost_vakken) */
	$handler->display->display_options ['sorts'] ['field_schoolkost_vakken_target_id'] ['id'] = 'field_schoolkost_vakken_target_id';
	$handler->display->display_options ['sorts'] ['field_schoolkost_vakken_target_id'] ['table'] = 'field_data_field_schoolkost_vakken';
	$handler->display->display_options ['sorts'] ['field_schoolkost_vakken_target_id'] ['field'] = 'field_schoolkost_vakken_target_id';
	/* Sorteercriterium: Inhoud: Schoolkostitem (field_schoolkost_schoolkost_item) */
	$handler->display->display_options ['sorts'] ['field_schoolkost_schoolkost_item_target_id'] ['id'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['sorts'] ['field_schoolkost_schoolkost_item_target_id'] ['table'] = 'field_data_field_schoolkost_schoolkost_item';
	$handler->display->display_options ['sorts'] ['field_schoolkost_schoolkost_item_target_id'] ['field'] = 'field_schoolkost_schoolkost_item_target_id';
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
			'schoolkost' => 'schoolkost' 
	);
	/* Filtercriterium: Inhoud: Klas(sen) (field_schoolkost_klassen) (reference filter) */
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['id'] = 'field_schoolkost_klassen_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['table'] = 'field_data_field_schoolkost_klassen';
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['field'] = 'field_schoolkost_klassen_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['expose'] ['operator_id'] = 'field_schoolkost_klassen_target_id_entityreference_filter_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['expose'] ['label'] = 'Klas(sen)';
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['expose'] ['operator'] = 'field_schoolkost_klassen_target_id_entityreference_filter_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['expose'] ['identifier'] = 'field_schoolkost_klassen_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_klassen_target_id_entityreference_filter'] ['reference_display'] = 'klassen:entityreference_klassen';
	/* Filtercriterium: Inhoud: Vak(ken) (field_schoolkost_vakken) (reference filter) */
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['id'] = 'field_schoolkost_vakken_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['table'] = 'field_data_field_schoolkost_vakken';
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['field'] = 'field_schoolkost_vakken_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['expose'] ['operator_id'] = 'field_schoolkost_vakken_target_id_entityreference_filter_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['expose'] ['label'] = 'Vak(ken)';
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['expose'] ['operator'] = 'field_schoolkost_vakken_target_id_entityreference_filter_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['expose'] ['identifier'] = 'field_schoolkost_vakken_target_id_entityreference_filter';
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_vakken_target_id_entityreference_filter'] ['reference_display'] = 'vakken:entityreference_vakken_afkortingen_persoonlijk';
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'uid';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Leerkracht';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: ISBN-nummer (field_schoolkost_item_isbn) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['id'] = 'field_schoolkost_item_isbn_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['table'] = 'field_data_field_schoolkost_item_isbn';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['field'] = 'field_schoolkost_item_isbn_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['operator_id'] = 'field_schoolkost_item_isbn_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['label'] = 'ISBN-nummer';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['operator'] = 'field_schoolkost_item_isbn_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['identifier'] = 'field_schoolkost_item_isbn_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_field'] = 'field_schoolkost_item_isbn';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Kopen/huren (field_schoolkost_item_koop_huur) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['id'] = 'field_schoolkost_item_koop_huur_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['table'] = 'field_data_field_schoolkost_item_koop_huur';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['field'] = 'field_schoolkost_item_koop_huur_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['operator_id'] = 'field_schoolkost_item_koop_huur_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['label'] = 'Kopen/huren';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['operator'] = 'field_schoolkost_item_koop_huur_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['identifier'] = 'field_schoolkost_item_koop_huur_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['relationship'] = 'field_schoolkost_vakken_target_id';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator_id'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Vak';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Uitgeverij (field_schoolkost_item_uitgeverij) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['id'] = 'field_schoolkost_item_uitgeverij_target_id';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['table'] = 'field_data_field_schoolkost_item_uitgeverij';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['field'] = 'field_schoolkost_item_uitgeverij_target_id';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['expose'] ['operator_id'] = 'field_schoolkost_item_uitgeverij_target_id_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['expose'] ['label'] = 'Uitgeverij';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['expose'] ['operator'] = 'field_schoolkost_item_uitgeverij_target_id_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['expose'] ['identifier'] = 'field_schoolkost_item_uitgeverij_target_id';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_uitgeverij_target_id'] ['expose'] ['remember_roles'] = array ()

	;
	/* Filtercriterium: Inhoud: Type schoolkostitem (field_schoolkost_item_type) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['id'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['field'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['operator_id'] = 'field_schoolkost_item_type_tid_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['label'] = 'Type';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['operator'] = 'field_schoolkost_item_type_tid_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['identifier'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['reduce_duplicates'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['type'] = 'select';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['vocabulary'] = 'schoolkosten_types';
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'schoolkosten';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Schoolkosten';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	$handler->display->display_options ['menu'] ['name'] = 'menu-modules';
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	
	/* Display: Selectielijst */
	$handler = $view->new_display ( 'entityreference', 'Selectielijst', 'schoolkostitems_selectielijst' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['defaults'] ['link_display'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'entityreference_style';
	$handler->display->display_options ['style_options'] ['grouping'] = array (
			0 => array (
					'field' => 'field_schoolkost_item_type',
					'rendered' => '1',
					'rendered_strip' => '1' 
			) 
	);
	$handler->display->display_options ['style_options'] ['search_fields'] = array (
			'title' => 'title',
			'field_schoolkost_item_type' => 0,
			'field_schoolkost_item_prijs' => 0,
			'field_schoolkost_item_koop_huur' => 0 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['row_plugin'] = 'entityreference_fields';
	$handler->display->display_options ['row_options'] ['hide_empty'] = TRUE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Type schoolkostitem */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['id'] = 'field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['field'] = 'field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['type'] = 'taxonomy_term_reference_plain';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['link_to_node'] = FALSE;
	/* Veld: Inhoud: Eenheidsprijs */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['id'] = 'field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['table'] = 'field_data_field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['field'] = 'field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['settings'] = array (
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
	/* Veld: Inhoud: Kopen/huren */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['id'] = 'field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['table'] = 'field_data_field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['field'] = 'field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Type schoolkostitem (field_schoolkost_item_type) */
	$handler->display->display_options ['sorts'] ['field_schoolkost_item_type_tid'] ['id'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['sorts'] ['field_schoolkost_item_type_tid'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['sorts'] ['field_schoolkost_item_type_tid'] ['field'] = 'field_schoolkost_item_type_tid';
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
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
			'schoolkost_item' => 'schoolkost_item' 
	);
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	
	/* Display: Items */
	$handler = $view->new_display ( 'page', 'Items', 'overview_schoolkostitems' );
	$handler->display->display_options ['defaults'] ['access'] = FALSE;
	$handler->display->display_options ['access'] ['type'] = 'role';
	$handler->display->display_options ['access'] ['role'] = array ();
	$handler->display->display_options ['defaults'] ['cache'] = FALSE;
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
					'schoolkost_item' => 'schoolkost_item' 
			),
			'node_only' => array (
					'node_changed' => 0 
			) 
	);
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
					'input_required' => 0,
					'text_input_required' => array (
							'text_input_required' => array (
									'value' => 'Selecteer een van de filters en klik op \'Toepassen\' om het resultaat te zien',
									'format' => 'filtered_html' 
							) 
					),
					'allow_secondary' => 0,
					'secondary_label' => 'Uitgebreide opties',
					'secondary_collapse_override' => '0' 
			),
			'field_schoolkost_item_locatie_value' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_schoolkost_item_isbn_value' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_schoolkost_item_koop_huur_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			),
			'field_schoolkost_item_type_tid' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => FALSE,
							'bef_collapsible' => 0,
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											1 => 'vocabulary' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			) 
	);
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/schoolkost-item">Een schoolkostitem toevoegen</a>';
	$handler->display->display_options ['header'] ['area'] ['format'] = 'filtered_html';
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	/* Voet: Algemeen: Samenvatting van het resultaat */
	$handler->display->display_options ['footer'] ['result'] ['id'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['result'] ['field'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['content'] = 'Getoond @start - @end van @total';
	/* Voet: Algemeen: Tekstveld */
	$handler->display->display_options ['footer'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['footer'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/schoolkost-item">Een schoolkostitem toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Veld: Inhoud: Type schoolkostitem */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['id'] = 'field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['field'] = 'field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['label'] = 'Type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Kopen/huren */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['id'] = 'field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['table'] = 'field_data_field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['field'] = 'field_schoolkost_item_koop_huur';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_koop_huur'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Eenheidsprijs */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['id'] = 'field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['table'] = 'field_data_field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['field'] = 'field_schoolkost_item_prijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_prijs'] ['settings'] = array (
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
	/* Veld: Inhoud: Inrichter/locatie */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['id'] = 'field_schoolkost_item_locatie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['table'] = 'field_data_field_schoolkost_item_locatie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['field'] = 'field_schoolkost_item_locatie';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_locatie'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: ISBN-nummer */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['id'] = 'field_schoolkost_item_isbn';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['table'] = 'field_data_field_schoolkost_item_isbn';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['field'] = 'field_schoolkost_item_isbn';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_isbn'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Vervoermiddel */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['id'] = 'field_schoolkost_item_vervoermid';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['table'] = 'field_data_field_schoolkost_item_vervoermid';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_vervoermid'] ['field'] = 'field_schoolkost_item_vervoermid';
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['order'] = 'DESC';
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title_1'] ['id'] = 'title_1';
	$handler->display->display_options ['sorts'] ['title_1'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title_1'] ['field'] = 'title';
	/* Sorteercriterium: Inhoud: Type schoolkostitem (field_schoolkost_item_type) */
	$handler->display->display_options ['sorts'] ['field_schoolkost_item_type_tid'] ['id'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['sorts'] ['field_schoolkost_item_type_tid'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['sorts'] ['field_schoolkost_item_type_tid'] ['field'] = 'field_schoolkost_item_type_tid';
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
			'schoolkost_item' => 'schoolkost_item' 
	);
	/* Filtercriterium: Inhoud: Inrichter/locatie (field_schoolkost_item_locatie) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['id'] = 'field_schoolkost_item_locatie_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['table'] = 'field_data_field_schoolkost_item_locatie';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['field'] = 'field_schoolkost_item_locatie_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['operator_id'] = 'field_schoolkost_item_locatie_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['label'] = 'Inrichter/locatie';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['operator'] = 'field_schoolkost_item_locatie_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['identifier'] = 'field_schoolkost_item_locatie_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['autocomplete_field'] = 'field_schoolkost_item_locatie';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_locatie_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: ISBN-nummer (field_schoolkost_item_isbn) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['id'] = 'field_schoolkost_item_isbn_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['table'] = 'field_data_field_schoolkost_item_isbn';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['field'] = 'field_schoolkost_item_isbn_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['operator_id'] = 'field_schoolkost_item_isbn_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['label'] = 'ISBN-nummer';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['operator'] = 'field_schoolkost_item_isbn_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['identifier'] = 'field_schoolkost_item_isbn_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_field'] = 'field_schoolkost_item_isbn';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_isbn_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Kopen/huren (field_schoolkost_item_koop_huur) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['id'] = 'field_schoolkost_item_koop_huur_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['table'] = 'field_data_field_schoolkost_item_koop_huur';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['field'] = 'field_schoolkost_item_koop_huur_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['operator_id'] = 'field_schoolkost_item_koop_huur_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['label'] = 'Kopen/huren';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['operator'] = 'field_schoolkost_item_koop_huur_value_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['identifier'] = 'field_schoolkost_item_koop_huur_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_koop_huur_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Type schoolkostitem (field_schoolkost_item_type) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['id'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['field'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['value'] = '';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['operator_id'] = 'field_schoolkost_item_type_tid_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['label'] = 'Type';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['operator'] = 'field_schoolkost_item_type_tid_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['identifier'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['reduce_duplicates'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['type'] = 'select';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['vocabulary'] = 'schoolkosten_types';
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'schoolkosten/items';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Schoolkostitems';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	$handler->display->display_options ['menu'] ['name'] = 'menu-modules';
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	
	/* Display: Per klas apart */
	$handler = $view->new_display ( 'page', 'Per klas apart', 'schoolkosten_per_klas_apart' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Schoolkosten per klas (raming)';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['group_by'] = TRUE;
	$handler->display->display_options ['defaults'] ['access'] = FALSE;
	$handler->display->display_options ['access'] ['type'] = 'none';
	$handler->display->display_options ['defaults'] ['cache'] = FALSE;
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
					'klas' => 'klas',
					'schoolkost' => 'schoolkost',
					'schoolkost_item' => 'schoolkost_item',
					'vak' => 'vak' 
			),
			'node_only' => array (
					'node_changed' => 0 
			) 
	);
	$handler->display->display_options ['defaults'] ['exposed_form'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'views_aggregator';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'field_vak_beschrijving' => 'field_vak_beschrijving',
			'field_schoolkost_schoolkost_item' => 'field_schoolkost_schoolkost_item',
			'field_schoolkost_item_type' => 'field_schoolkost_item_type',
			'field_schoolkost_totaalprijs' => 'field_schoolkost_totaalprijs',
			'title' => 'title' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'field_vak_beschrijving' => array (
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
			'field_schoolkost_schoolkost_item' => array (
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
			'field_schoolkost_item_type' => array (
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
			'field_schoolkost_totaalprijs' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0,
					'has_aggr' => 0,
					'aggr' => array (
							'views_aggregator_first' => 'views_aggregator_first' 
					),
					'aggr_par' => '',
					'has_aggr_column' => '1',
					'aggr_column' => 'views_aggregator_sum',
					'aggr_par_column' => '' 
			),
			'title' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
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
	$handler->display->display_options ['style_options'] ['sticky'] = TRUE;
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['totals_per_page'] = '1';
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['totals_row_position'] = array (
			1 => 0,
			2 => '2' 
	);
	$handler->display->display_options ['style_options'] ['column_aggregation'] ['precision'] = '2';
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	/* Kop: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['header'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['content'] = '<div style="text-align: left !important;">Bij inschrijving (nieuwe leerlingen of het begin van het schooljaar (anciens) ontvang je een lijst met financiële bijdragen die van jou of je ouders gevraagd kunnen worden. Deze lijst bevat zowel verplichte als niet-verplichte uitgaven. De lijst van deze bijdragen werd overlegd in de schoolraad. Voor sommige posten vermeldt de lijst vaste prijzen, voor andere posten zijn enkel richtprijzen vermeld. Deze zijn gebaseerd op de prijs die de zaak of de activiteit vorig schooljaar kostte.</div>';
	$handler->display->display_options ['header'] ['area_text_custom'] ['tokenize'] = TRUE;
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	$handler->display->display_options ['defaults'] ['empty'] = FALSE;
	/* Gedrag bij ontbreken van resultaten: Algemeen: Tekstveld */
	$handler->display->display_options ['empty'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['empty'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['empty'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['empty'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['empty'] ['area'] ['content'] = 'Geen schoolkosten gevonden.';
	$handler->display->display_options ['empty'] ['area'] ['format'] = 'filtered_html';
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	/* Relatie: schoolkostitem */
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['id'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['table'] = 'field_data_field_schoolkost_schoolkost_item';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['field'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['ui_name'] = 'schoolkostitem';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['label'] = 'schoolkostitem';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['required'] = TRUE;
	/* Relatie: vak */
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['id'] = 'field_schoolkost_vakken_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['table'] = 'field_data_field_schoolkost_vakken';
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['field'] = 'field_schoolkost_vakken_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['ui_name'] = 'vak';
	$handler->display->display_options ['relationships'] ['field_schoolkost_vakken_target_id'] ['label'] = 'vakken';
	/* Relatie: klas */
	$handler->display->display_options ['relationships'] ['field_schoolkost_klassen_target_id'] ['id'] = 'field_schoolkost_klassen_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_klassen_target_id'] ['table'] = 'field_data_field_schoolkost_klassen';
	$handler->display->display_options ['relationships'] ['field_schoolkost_klassen_target_id'] ['field'] = 'field_schoolkost_klassen_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_klassen_target_id'] ['ui_name'] = 'klas';
	$handler->display->display_options ['relationships'] ['field_schoolkost_klassen_target_id'] ['label'] = 'klas';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Beschrijving */
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['id'] = 'field_vak_beschrijving';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['table'] = 'field_data_field_vak_beschrijving';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['field'] = 'field_vak_beschrijving';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['relationship'] = 'field_schoolkost_vakken_target_id';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['label'] = 'Vak';
	$handler->display->display_options ['fields'] ['field_vak_beschrijving'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Schoolkostitem */
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['id'] = 'field_schoolkost_schoolkost_item';
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['table'] = 'field_data_field_schoolkost_schoolkost_item';
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['field'] = 'field_schoolkost_schoolkost_item';
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['label'] = 'Item';
	$handler->display->display_options ['fields'] ['field_schoolkost_schoolkost_item'] ['settings'] = array (
			'bypass_access' => 0,
			'link' => 0,
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Type schoolkostitem */
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['id'] = 'field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['field'] = 'field_schoolkost_item_type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['label'] = 'Type';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['type'] = 'taxonomy_term_reference_plain';
	$handler->display->display_options ['fields'] ['field_schoolkost_item_type'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Totaalprijs */
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['id'] = 'field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['table'] = 'field_data_field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['field'] = 'field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['alter'] ['text'] = '€ [field_schoolkost_totaalprijs]';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Schoolkostitem (field_schoolkost_schoolkost_item) */
	$handler->display->display_options ['sorts'] ['field_schoolkost_schoolkost_item_target_id'] ['id'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['sorts'] ['field_schoolkost_schoolkost_item_target_id'] ['table'] = 'field_data_field_schoolkost_schoolkost_item';
	$handler->display->display_options ['sorts'] ['field_schoolkost_schoolkost_item_target_id'] ['field'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['defaults'] ['arguments'] = FALSE;
	/* Contextueel filter: Inhoud: Titel */
	$handler->display->display_options ['arguments'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['arguments'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['arguments'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['arguments'] ['title'] ['relationship'] = 'field_schoolkost_klassen_target_id';
	$handler->display->display_options ['arguments'] ['title'] ['default_action'] = 'empty';
	$handler->display->display_options ['arguments'] ['title'] ['exception'] ['value'] = '';
	$handler->display->display_options ['arguments'] ['title'] ['exception'] ['title'] = 'Alle';
	$handler->display->display_options ['arguments'] ['title'] ['title_enable'] = TRUE;
	$handler->display->display_options ['arguments'] ['title'] ['title'] = 'Schoolkosten van %1 (raming)';
	$handler->display->display_options ['arguments'] ['title'] ['default_argument_type'] = 'fixed';
	$handler->display->display_options ['arguments'] ['title'] ['summary'] ['number_of_records'] = '0';
	$handler->display->display_options ['arguments'] ['title'] ['summary'] ['format'] = 'default_summary';
	$handler->display->display_options ['arguments'] ['title'] ['summary_options'] ['items_per_page'] = '25';
	$handler->display->display_options ['arguments'] ['title'] ['validate'] ['fail'] = 'empty';
	$handler->display->display_options ['arguments'] ['title'] ['limit'] = '0';
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
			'schoolkost' => 'schoolkost' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'klas/%/schoolkosten';
	$handler->display->display_options ['menu'] ['title'] = 'Schoolkosten';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	$handler->display->display_options ['menu'] ['name'] = 'menu-menu-website';
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	
	/* Display: Totaal per klas */
	$handler = $view->new_display ( 'page', 'Totaal per klas', 'schoolkosten_totaal_per_klas' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['title'] = 'Schoolkosten - Totalen / klas';
	$handler->display->display_options ['defaults'] ['group_by'] = FALSE;
	$handler->display->display_options ['group_by'] = TRUE;
	$handler->display->display_options ['defaults'] ['access'] = FALSE;
	$handler->display->display_options ['access'] ['type'] = 'role';
	$handler->display->display_options ['access'] ['role'] = array ();
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
					'input_required' => 0,
					'text_input_required' => array (
							'text_input_required' => array (
									'value' => 'Selecteer een van de filters en klik op \'Toepassen\' om het resultaat te zien',
									'format' => 'filtered_html' 
							) 
					),
					'allow_secondary' => 0,
					'secondary_label' => 'Uitgebreide opties',
					'secondary_collapse_override' => '0' 
			),
			'field_schoolkost_item_type_tid' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
							'autosubmit' => 0,
							'is_secondary' => 0,
							'any_label' => '',
							'bef_filter_description' => '',
							'tokens' => array (
									'available' => array (
											0 => 'global_types',
											1 => 'vocabulary' 
									) 
							),
							'rewrite' => array (
									'filter_rewrite_values' => '' 
							) 
					) 
			) 
	);
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'title' => 'title',
			'title_1' => 'title_1',
			'field_schoolkost_totaalprijs' => 'field_schoolkost_totaalprijs',
			'nid' => 'nid',
			'title_2' => 'title_2',
			'nothing' => 'nothing' 
	);
	$handler->display->display_options ['style_options'] ['default'] = 'title';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'title' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'title_1' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_schoolkost_totaalprijs' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			),
			'nid' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'title_2' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	/* Relatie: schoolkost */
	$handler->display->display_options ['relationships'] ['reverse_field_schoolkost_klassen_node'] ['id'] = 'reverse_field_schoolkost_klassen_node';
	$handler->display->display_options ['relationships'] ['reverse_field_schoolkost_klassen_node'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['reverse_field_schoolkost_klassen_node'] ['field'] = 'reverse_field_schoolkost_klassen_node';
	$handler->display->display_options ['relationships'] ['reverse_field_schoolkost_klassen_node'] ['ui_name'] = 'schoolkost';
	$handler->display->display_options ['relationships'] ['reverse_field_schoolkost_klassen_node'] ['label'] = 'schoolkost';
	/* Relatie: schoolkostitem */
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['id'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['table'] = 'field_data_field_schoolkost_schoolkost_item';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['field'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['relationship'] = 'reverse_field_schoolkost_klassen_node';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['ui_name'] = 'schoolkostitem';
	$handler->display->display_options ['relationships'] ['field_schoolkost_schoolkost_item_target_id'] ['label'] = 'schoolkostitem';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Klas';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = 'x';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title_1'] ['id'] = 'title_1';
	$handler->display->display_options ['fields'] ['title_1'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title_1'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title_1'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['fields'] ['title_1'] ['group_type'] = 'count';
	$handler->display->display_options ['fields'] ['title_1'] ['label'] = 'Aantal schoolkostitems';
	/* Veld: Inhoud: Totaalprijs */
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['id'] = 'field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['table'] = 'field_data_field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['field'] = 'field_schoolkost_totaalprijs';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['relationship'] = 'reverse_field_schoolkost_klassen_node';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['group_type'] = 'sum';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['alter'] ['text'] = '[field_schoolkost_totaalprijs] euro';
	$handler->display->display_options ['fields'] ['field_schoolkost_totaalprijs'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title_2'] ['id'] = 'title_2';
	$handler->display->display_options ['fields'] ['title_2'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title_2'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title_2'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title_2'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['title_2'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['title_2'] ['link_to_node'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Acties';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '<a href="/opleidingen/schoolkosten/[title_2]" target="_blank">details bekijken</a> - <a href="/schoolkosten?field_schoolkost_klassen_target_id_entityreference_filter=[nid]" target="_blank">schoolkosten aanpassen</a>';
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
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
			'klas' => 'klas' 
	);
	/* Filtercriterium: Inhoud: Totaalprijs (field_schoolkost_totaalprijs) */
	$handler->display->display_options ['filters'] ['field_schoolkost_totaalprijs_value'] ['id'] = 'field_schoolkost_totaalprijs_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_totaalprijs_value'] ['table'] = 'field_data_field_schoolkost_totaalprijs';
	$handler->display->display_options ['filters'] ['field_schoolkost_totaalprijs_value'] ['field'] = 'field_schoolkost_totaalprijs_value';
	$handler->display->display_options ['filters'] ['field_schoolkost_totaalprijs_value'] ['relationship'] = 'reverse_field_schoolkost_klassen_node';
	$handler->display->display_options ['filters'] ['field_schoolkost_totaalprijs_value'] ['operator'] = '>';
	$handler->display->display_options ['filters'] ['field_schoolkost_totaalprijs_value'] ['value'] ['value'] = '0';
	/* Filtercriterium: Inhoud: Type schoolkostitem (field_schoolkost_item_type) */
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['id'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['table'] = 'field_data_field_schoolkost_item_type';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['field'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['relationship'] = 'field_schoolkost_schoolkost_item_target_id';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['operator_id'] = 'field_schoolkost_item_type_tid_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['label'] = 'Type schoolkostitem';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['operator'] = 'field_schoolkost_item_type_tid_op';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['identifier'] = 'field_schoolkost_item_type_tid';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['expose'] ['remember_roles'] = array ()

	;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['reduce_duplicates'] = TRUE;
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['type'] = 'select';
	$handler->display->display_options ['filters'] ['field_schoolkost_item_type_tid'] ['vocabulary'] = 'schoolkosten_types';
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'schoolkosten/totalen-per-klas';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Schoolkosten - Totalen / klas';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	$handler->display->display_options ['menu'] ['name'] = 'menu-modules';
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	$translatables ['schoolkostitems'] = array (
			t ( 'Master' ),
			t ( 'Schoolkostitems' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Items per pagina' ),
			t ( '- Alle -' ),
			t ( 'Startpunt' ),
			t ( '« eerste' ),
			t ( '‹ vorige' ),
			t ( 'volgende ›' ),
			t ( 'laatste »' ),
			t ( 'Titel' ),
			t ( 'Volledige lijst per klas' ),
			t ( 'Schoolkosten per klas' ),
			t ( 'Selecteer een van de filters en klik op \'Toepassen\' om het resultaat te zien' ),
			t ( 'Uitgebreide opties' ),
			t ( '<a href="/node/add/schoolkost">Een nieuwe schoolkost toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'auteur' ),
			t ( 'schoolkostitem' ),
			t ( 'vakken' ),
			t ( 'Klas(sen)' ),
			t ( 'Vak(ken)' ),
			t ( 'Leerkracht' ),
			t ( 'Item' ),
			t ( 'Type' ),
			t ( 'Eenheidsprijs' ),
			t ( '€ [field_schoolkost_item_prijs]' ),
			t ( 'Aantal' ),
			t ( 'Totaalprijs' ),
			t ( '€ [field_schoolkost_totaalprijs]' ),
			t ( 'Inrichter/locatie: [field_schoolkost_item_locatie]<br />' ),
			t ( 'ISBN-nr.: [field_schoolkost_item_isbn]<br />' ),
			t ( 'Koop/huur: [field_schoolkost_item_koop_huur]<br />' ),
			t ( 'Leverancier: [field_schoolkost_item_leverancie]<br />' ),
			t ( 'Uitgeverij: [field_schoolkost_item_uitgeverij]<br />' ),
			t ( 'Vervoer: [field_schoolkost_item_vervoermid]<br />' ),
			t ( 'Details' ),
			t ( '[field_schoolkost_item_locatie][field_schoolkost_item_isbn][field_schoolkost_item_koop_huur][field_schoolkost_item_leverancie][field_schoolkost_item_uitgeverij][field_schoolkost_item_vervoermid]' ),
			t ( 'bewerken' ),
			t ( 'Acties' ),
			t ( '[edit_node] - [delete_node]' ),
			t ( 'ISBN-nummer' ),
			t ( 'Kopen/huren' ),
			t ( 'Vak' ),
			t ( 'Uitgeverij' ),
			t ( 'Selectielijst' ),
			t ( 'Items' ),
			t ( '<a href="/node/add/schoolkost-item">Een schoolkostitem toevoegen</a>' ),
			t ( 'Inrichter/locatie' ),
			t ( 'Vervoermiddel' ),
			t ( 'Per klas apart' ),
			t ( 'Schoolkosten per klas (raming)' ),
			t ( '<div style="text-align: left !important;">Bij inschrijving (nieuwe leerlingen of het begin van het schooljaar (anciens) ontvang je een lijst met financiële bijdragen die van jou of je ouders gevraagd kunnen worden. Deze lijst bevat zowel verplichte als niet-verplichte uitgaven. De lijst van deze bijdragen werd overlegd in de schoolraad. Voor sommige posten vermeldt de lijst vaste prijzen, voor andere posten zijn enkel richtprijzen vermeld. Deze zijn gebaseerd op de prijs die de zaak of de activiteit vorig schooljaar kostte.</div>' ),
			t ( 'Geen schoolkosten gevonden.' ),
			t ( 'klas' ),
			t ( 'Alle' ),
			t ( 'Schoolkosten van %1 (raming)' ),
			t ( 'Totaal per klas' ),
			t ( 'Schoolkosten - Totalen / klas' ),
			t ( 'schoolkost' ),
			t ( 'Klas' ),
			t ( 'x' ),
			t ( 'Aantal schoolkostitems' ),
			t ( '[field_schoolkost_totaalprijs] euro' ),
			t ( '<a href="/opleidingen/schoolkosten/[title_2]" target="_blank">details bekijken</a> - <a href="/schoolkosten?field_schoolkost_klassen_target_id_entityreference_filter=[nid]" target="_blank">schoolkosten aanpassen</a>' ),
			t ( 'Type schoolkostitem' ) 
	);
	$export ['schoolkostitems'] = $view;
	
	return $export;
}
