<?php
/**
 * @file
 * argus_werken_voor_derden.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_werken_voor_derden_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'werken_voor_derden';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Werken voor derden';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Werken voor derden';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['access'] ['perm'] = 'create werk_voor_derden content';
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
					'werk_voor_derden' => 'werk_voor_derden' 
			),
			'node_only' => array (
					'node_changed' => 'node_changed' 
			) 
	);
	$handler->display->display_options ['query'] ['type'] = 'views_query';
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
					'secondary_label' => 'Uitgebreide opties' 
			),
			'field_wvd_aard_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
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
			'field_wvd_status_value' => array (
					'bef_format' => 'bef',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
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
			'field_klas_structuuronderdeel_value' => array (
					'bef_format' => 'default',
					'more_options' => array (
							'bef_select_all_none' => 0,
							'bef_collapsible' => 0,
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
			'field_wvd_aard' => 'field_wvd_aard',
			'field_wvd_status' => 'field_wvd_status',
			'field_wvd_gewenste_levertijd' => 'field_wvd_gewenste_levertijd',
			'field_aanvraagdatum' => 'field_aanvraagdatum',
			'field_klas_structuuronderdeel' => 'field_klas_structuuronderdeel',
			'field_bedrag' => 'field_bedrag',
			'field_contactpersoon' => 'field_contactpersoon',
			'field_wvd_naam' => 'field_wvd_naam',
			'field_email' => 'field_email',
			'field_telefoonnummer' => 'field_telefoonnummer',
			'nothing' => 'nothing' 
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
			'field_wvd_aard' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_wvd_status' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_wvd_gewenste_levertijd' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_aanvraagdatum' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_klas_structuuronderdeel' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_bedrag' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_contactpersoon' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_wvd_naam' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_email' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_telefoonnummer' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Omschrijving';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Veld: Inhoud: Aard */
	$handler->display->display_options ['fields'] ['field_wvd_aard'] ['id'] = 'field_wvd_aard';
	$handler->display->display_options ['fields'] ['field_wvd_aard'] ['table'] = 'field_data_field_wvd_aard';
	$handler->display->display_options ['fields'] ['field_wvd_aard'] ['field'] = 'field_wvd_aard';
	/* Veld: Inhoud: Status */
	$handler->display->display_options ['fields'] ['field_wvd_status'] ['id'] = 'field_wvd_status';
	$handler->display->display_options ['fields'] ['field_wvd_status'] ['table'] = 'field_data_field_wvd_status';
	$handler->display->display_options ['fields'] ['field_wvd_status'] ['field'] = 'field_wvd_status';
	/* Veld: Inhoud: Gewenste levertijd */
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['id'] = 'field_wvd_gewenste_levertijd';
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['table'] = 'field_data_field_wvd_gewenste_levertijd';
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['field'] = 'field_wvd_gewenste_levertijd';
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['alter'] ['text'] = '<div style="font-weight: bold; font-size: 0.8em;">[field_wvd_gewenste_levertijd]</div>';
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_wvd_gewenste_levertijd'] ['settings'] = array (
			'format_type' => 'datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => '1',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Aanvraagdatum */
	$handler->display->display_options ['fields'] ['field_aanvraagdatum'] ['id'] = 'field_aanvraagdatum';
	$handler->display->display_options ['fields'] ['field_aanvraagdatum'] ['table'] = 'field_data_field_aanvraagdatum';
	$handler->display->display_options ['fields'] ['field_aanvraagdatum'] ['field'] = 'field_aanvraagdatum';
	$handler->display->display_options ['fields'] ['field_aanvraagdatum'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_aanvraagdatum'] ['alter'] ['text'] = '[field_aanvraagdatum][field_wvd_gewenste_levertijd]';
	$handler->display->display_options ['fields'] ['field_aanvraagdatum'] ['settings'] = array (
			'format_type' => 'datum_lang_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Structuuronderdeel */
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['id'] = 'field_klas_structuuronderdeel';
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['table'] = 'field_data_field_klas_structuuronderdeel';
	$handler->display->display_options ['fields'] ['field_klas_structuuronderdeel'] ['field'] = 'field_klas_structuuronderdeel';
	/* Veld: Inhoud: Bedrag */
	$handler->display->display_options ['fields'] ['field_bedrag'] ['id'] = 'field_bedrag';
	$handler->display->display_options ['fields'] ['field_bedrag'] ['table'] = 'field_data_field_bedrag';
	$handler->display->display_options ['fields'] ['field_bedrag'] ['field'] = 'field_bedrag';
	/* Veld: Inhoud: Contactpersoon */
	$handler->display->display_options ['fields'] ['field_contactpersoon'] ['id'] = 'field_contactpersoon';
	$handler->display->display_options ['fields'] ['field_contactpersoon'] ['table'] = 'field_data_field_contactpersoon';
	$handler->display->display_options ['fields'] ['field_contactpersoon'] ['field'] = 'field_contactpersoon';
	$handler->display->display_options ['fields'] ['field_contactpersoon'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_contactpersoon'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_contactpersoon'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Naam */
	$handler->display->display_options ['fields'] ['field_wvd_naam'] ['id'] = 'field_wvd_naam';
	$handler->display->display_options ['fields'] ['field_wvd_naam'] ['table'] = 'field_data_field_wvd_naam';
	$handler->display->display_options ['fields'] ['field_wvd_naam'] ['field'] = 'field_wvd_naam';
	$handler->display->display_options ['fields'] ['field_wvd_naam'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_wvd_naam'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_wvd_naam'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_wvd_naam'] ['alter'] ['text'] = '[field_wvd_naam] - ';
	$handler->display->display_options ['fields'] ['field_wvd_naam'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Email */
	$handler->display->display_options ['fields'] ['field_email'] ['id'] = 'field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['table'] = 'field_data_field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['field'] = 'field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_email'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_email'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Telefoonnummer */
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['id'] = 'field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['table'] = 'field_data_field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['field'] = 'field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['alter'] ['text'] = '[field_telefoonnummer]<br />';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['type'] = 'telephone_link';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['settings'] = array (
			'title' => '' 
	);
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Contact';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[field_wvd_naam][field_contactpersoon]<br/>
[field_telefoonnummer][field_email]';
	/* Sorteercriterium: Inhoud: Datum van inzending */
	$handler->display->display_options ['sorts'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['sorts'] ['created'] ['order'] = 'DESC';
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
			'werk_voor_derden' => 'werk_voor_derden' 
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
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Omschrijving';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Aard (field_wvd_aard) */
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['id'] = 'field_wvd_aard_value';
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['table'] = 'field_data_field_wvd_aard';
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['field'] = 'field_wvd_aard_value';
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['expose'] ['operator_id'] = 'field_wvd_aard_value_op';
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['expose'] ['label'] = 'Aard';
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['expose'] ['operator'] = 'field_wvd_aard_value_op';
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['expose'] ['identifier'] = 'field_wvd_aard_value';
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_wvd_aard_value'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Status (field_wvd_status) */
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['id'] = 'field_wvd_status_value';
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['table'] = 'field_data_field_wvd_status';
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['field'] = 'field_wvd_status_value';
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['expose'] ['operator_id'] = 'field_wvd_status_value_op';
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['expose'] ['label'] = 'Status';
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['expose'] ['operator'] = 'field_wvd_status_value_op';
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['expose'] ['identifier'] = 'field_wvd_status_value';
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_wvd_status_value'] ['reduce_duplicates'] = TRUE;
	/* Filtercriterium: Inhoud: Structuuronderdeel (field_klas_structuuronderdeel) */
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['id'] = 'field_klas_structuuronderdeel_value';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['table'] = 'field_data_field_klas_structuuronderdeel';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['field'] = 'field_klas_structuuronderdeel_value';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['operator_id'] = 'field_klas_structuuronderdeel_value_op';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['label'] = 'Structuuronderdeel';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['operator'] = 'field_klas_structuuronderdeel_value_op';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['identifier'] = 'field_klas_structuuronderdeel_value';
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_klas_structuuronderdeel_value'] ['reduce_duplicates'] = TRUE;
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'overzicht_wvd' );
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/werk-voor-derden">Een nieuw werk voor derden toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/werk-voor-derden">Een nieuw werk voor derden toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'werken-voor-derden';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Werken voor derden';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$translatables ['werken_voor_derden'] = array (
			t ( 'Master' ),
			t ( 'Werken voor derden' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Uitgebreide opties' ),
			t ( 'Items per pagina' ),
			t ( '- Alle -' ),
			t ( 'Startpunt' ),
			t ( '« eerste' ),
			t ( '‹ vorige' ),
			t ( 'volgende ›' ),
			t ( 'laatste »' ),
			t ( 'Omschrijving' ),
			t ( 'Aard' ),
			t ( 'Status' ),
			t ( '<div style="font-weight: bold; font-size: 0.8em;">[field_wvd_gewenste_levertijd]</div>' ),
			t ( 'Aanvraagdatum' ),
			t ( '[field_aanvraagdatum][field_wvd_gewenste_levertijd]' ),
			t ( 'Structuuronderdeel' ),
			t ( 'Bedrag' ),
			t ( '[field_wvd_naam] - ' ),
			t ( '[field_telefoonnummer]<br />' ),
			t ( 'Contact' ),
			t ( '[field_wvd_naam][field_contactpersoon]<br/>
[field_telefoonnummer][field_email]' ),
			t ( 'Overzicht' ),
			t ( '<a href="/node/add/werk-voor-derden">Een nieuw werk voor derden toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ) 
	);
	$export ['werken_voor_derden'] = $view;
	
	return $export;
}
