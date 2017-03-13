<?php
/**
 * @file
 * argus_sticker_onwettige_afwezigheid.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_sticker_onwettige_afwezigheid_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'msl_sticker_onwettige_afwezigheden';
	$view->description = 'De procedure omtrent onwettige afwezigheden opvolgen door middel van de rode sticker.';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'MSL - Sticker onwettige afwezigheden';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Sticker onwettige afwezigheid';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['group_by'] = TRUE;
	$handler->display->display_options ['access'] ['type'] = 'role';
	$handler->display->display_options ['access'] ['role'] = array (
			3 => '3',
			216 => '216' 
	);
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
					'msl_oa_sticker' => 'msl_oa_sticker' 
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
			'field_msl_maatregelen_categorie_value' => array (
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
			'field_msl_maatregelen_categorie' => 'field_msl_maatregelen_categorie',
			'title' => 'title' 
	);
	$handler->display->display_options ['style_options'] ['default'] = 'field_msl_maatregelen_categorie';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'field_msl_maatregelen_categorie' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'title' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['label'] = 'Sticker toevoegen';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/msl-oa-sticker">Een nieuwe rode sticker toevoegen</a>';
	$handler->display->display_options ['header'] ['area'] ['format'] = 'filtered_html';
	/* Voet: Algemeen: Samenvatting van het resultaat */
	$handler->display->display_options ['footer'] ['result'] ['id'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['result'] ['field'] = 'result';
	$handler->display->display_options ['footer'] ['result'] ['content'] = 'Getoond @start - @end van @total';
	/* Voet: Algemeen: Tekstveld */
	$handler->display->display_options ['footer'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['footer'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['footer'] ['area'] ['label'] = 'Sticker toevoegen';
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/msl-oa-sticker">Een nieuwe rode sticker toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_leerling_target_id'] ['id'] = 'field_msl_oa_sticker_leerling_target_id';
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_leerling_target_id'] ['table'] = 'field_data_field_msl_oa_sticker_leerling';
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_leerling_target_id'] ['field'] = 'field_msl_oa_sticker_leerling_target_id';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['id'] = 'field_msl_oa_sticker_f2_maatreg_target_id';
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['table'] = 'field_data_field_msl_oa_sticker_f2_maatreg';
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['field'] = 'field_msl_oa_sticker_f2_maatreg_target_id';
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Resultatenteller weergeven */
	$handler->display->display_options ['fields'] ['counter'] ['id'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['counter'] ['field'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['label'] = 'Nr.';
	$handler->display->display_options ['fields'] ['counter'] ['alter'] ['make_link'] = TRUE;
	$handler->display->display_options ['fields'] ['counter'] ['alter'] ['path'] = '/node/edit/[nid]';
	$handler->display->display_options ['fields'] ['counter'] ['alter'] ['absolute'] = TRUE;
	$handler->display->display_options ['fields'] ['counter'] ['counter_start'] = '1';
	/* Veld: Gebruiker: Voornaam */
	$handler->display->display_options ['fields'] ['field_user_sms_voornaam'] ['id'] = 'field_user_sms_voornaam';
	$handler->display->display_options ['fields'] ['field_user_sms_voornaam'] ['table'] = 'field_data_field_user_sms_voornaam';
	$handler->display->display_options ['fields'] ['field_user_sms_voornaam'] ['field'] = 'field_user_sms_voornaam';
	$handler->display->display_options ['fields'] ['field_user_sms_voornaam'] ['relationship'] = 'field_msl_oa_sticker_leerling_target_id';
	$handler->display->display_options ['fields'] ['field_user_sms_voornaam'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_user_sms_voornaam'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_sms_voornaam'] ['element_label_colon'] = FALSE;
	/* Veld: Gebruiker: Achternaam */
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['id'] = 'field_user_sms_naam';
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['table'] = 'field_data_field_user_sms_naam';
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['field'] = 'field_user_sms_naam';
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['relationship'] = 'field_msl_oa_sticker_leerling_target_id';
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['label'] = 'Leerling';
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['alter'] ['text'] = '[field_user_sms_naam], [field_user_sms_voornaam]';
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['alter'] ['make_link'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['alter'] ['path'] = 'users/[field_user_sms_naam]-[field_user_sms_voornaam]';
	$handler->display->display_options ['fields'] ['field_user_sms_naam'] ['alter'] ['absolute'] = TRUE;
	/* Veld: Inhoud: Datum - fase 1 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['id'] = 'field_msl_oa_sticker_f1_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['table'] = 'field_data_field_msl_oa_sticker_f1_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['field'] = 'field_msl_oa_sticker_f1_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['label'] = 'Datum fase 1';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['settings'] = array (
			'format_type' => 'long',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Datum - fase 2 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['id'] = 'field_msl_oa_sticker_f2_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['table'] = 'field_data_field_msl_oa_sticker_f2_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['field'] = 'field_msl_oa_sticker_f2_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['label'] = 'Datum fase 2';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['settings'] = array (
			'format_type' => 'long',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Datum - fase 3 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['id'] = 'field_msl_oa_sticker_f3_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['table'] = 'field_data_field_msl_oa_sticker_f3_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['field'] = 'field_msl_oa_sticker_f3_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['label'] = 'Datum fase 3';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['settings'] = array (
			'format_type' => 'long',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Bewerkingslink */
	$handler->display->display_options ['fields'] ['edit_node'] ['id'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['field'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = 'Bewerken';
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
			'msl_oa_sticker' => 'msl_oa_sticker' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	/* Filtercriterium: Algemeen: Veldenfilter combineren */
	$handler->display->display_options ['filters'] ['combine'] ['id'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['table'] = 'views';
	$handler->display->display_options ['filters'] ['combine'] ['field'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['combine'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['operator_id'] = 'combine_op';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['label'] = 'Leerling';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['operator'] = 'combine_op';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['identifier'] = 'combine';
	$handler->display->display_options ['filters'] ['combine'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['combine'] ['fields'] = array (
			'field_user_sms_voornaam' => 'field_user_sms_voornaam',
			'field_user_sms_naam' => 'field_user_sms_naam' 
	);
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'msl_oa_stickers' );
	$handler->display->display_options ['display_description'] = 'Rode sticker in het agenda met de 3 fases.';
	$handler->display->display_options ['field_language'] = 'und';
	$handler->display->display_options ['defaults'] ['access'] = FALSE;
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['defaults'] ['exposed_form'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['expose_sort_order'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'nid' => 'nid',
			'counter' => 'counter',
			'realname' => 'realname',
			'field_msl_oa_sticker_f1_datum_1' => 'field_msl_oa_sticker_f1_datum_1',
			'field_msl_oa_sticker_f1_datum' => 'field_msl_oa_sticker_f1_datum',
			'field_msl_oa_sticker_f2_datum_1' => 'field_msl_oa_sticker_f2_datum_1',
			'field_msl_oa_sticker_f2_datum' => 'field_msl_oa_sticker_f2_datum',
			'field_msl_oa_sticker_f2_maatreg' => 'field_msl_oa_sticker_f2_maatreg',
			'field_msl_oa_sticker_f2_m_datum' => 'field_msl_oa_sticker_f2_m_datum',
			'field_msl_oa_sticker_f3_datum_2' => 'field_msl_oa_sticker_f3_datum_2',
			'field_msl_oa_sticker_f3_datum' => 'field_msl_oa_sticker_f3_datum',
			'field_msl_oa_sticker_f3_maatreg' => 'field_msl_oa_sticker_f3_maatreg',
			'field_msl_oa_sticker_f3_m_datum' => 'field_msl_oa_sticker_f3_m_datum',
			'edit_node' => 'edit_node' 
	);
	$handler->display->display_options ['style_options'] ['default'] = 'realname';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'nid' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'counter' => array (
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'realname' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f1_datum_1' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f1_datum' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f2_datum_1' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f2_datum' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f2_maatreg' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f2_m_datum' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f3_datum_2' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f3_datum' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f3_maatreg' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_msl_oa_sticker_f3_m_datum' => array (
					'sortable' => 1,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'edit_node' => array (
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
	$handler->display->display_options ['defaults'] ['relationships'] = FALSE;
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_leerling_target_id'] ['id'] = 'field_msl_oa_sticker_leerling_target_id';
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_leerling_target_id'] ['table'] = 'field_data_field_msl_oa_sticker_leerling';
	$handler->display->display_options ['relationships'] ['field_msl_oa_sticker_leerling_target_id'] ['field'] = 'field_msl_oa_sticker_leerling_target_id';
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Resultatenteller weergeven */
	$handler->display->display_options ['fields'] ['counter'] ['id'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['counter'] ['field'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['label'] = 'Nr.';
	$handler->display->display_options ['fields'] ['counter'] ['alter'] ['make_link'] = TRUE;
	$handler->display->display_options ['fields'] ['counter'] ['alter'] ['path'] = 'node/[nid]/edit';
	$handler->display->display_options ['fields'] ['counter'] ['alter'] ['absolute'] = TRUE;
	$handler->display->display_options ['fields'] ['counter'] ['counter_start'] = '1';
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['relationship'] = 'field_msl_oa_sticker_leerling_target_id';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Leerling';
	/* Veld: Inhoud: Datum - fase 1 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum_1'] ['id'] = 'field_msl_oa_sticker_f1_datum_1';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum_1'] ['table'] = 'field_data_field_msl_oa_sticker_f1_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum_1'] ['field'] = 'field_msl_oa_sticker_f1_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum_1'] ['label'] = 'Tijd verstreken fase 1';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum_1'] ['type'] = 'format_interval';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum_1'] ['settings'] = array (
			'interval' => '2',
			'interval_display' => 'raw time ago' 
	);
	/* Veld: Inhoud: Datum - fase 1 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['id'] = 'field_msl_oa_sticker_f1_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['table'] = 'field_data_field_msl_oa_sticker_f1_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['field'] = 'field_msl_oa_sticker_f1_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['label'] = 'Fase 1';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['alter'] ['text'] = '[field_msl_oa_sticker_f1_datum]<br />
<em><small>[field_msl_oa_sticker_f1_datum_1]</small></em>';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f1_datum'] ['settings'] = array (
			'format_type' => 'dag_en_datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Datum - fase 2 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum_1'] ['id'] = 'field_msl_oa_sticker_f2_datum_1';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum_1'] ['table'] = 'field_data_field_msl_oa_sticker_f2_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum_1'] ['field'] = 'field_msl_oa_sticker_f2_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum_1'] ['label'] = 'Tijd verstreken fase 2';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum_1'] ['type'] = 'format_interval';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum_1'] ['settings'] = array (
			'interval' => '2',
			'interval_display' => 'raw time ago' 
	);
	/* Veld: Inhoud: Datum - fase 2 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['id'] = 'field_msl_oa_sticker_f2_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['table'] = 'field_data_field_msl_oa_sticker_f2_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['field'] = 'field_msl_oa_sticker_f2_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['label'] = 'Fase 2';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['alter'] ['text'] = '[field_msl_oa_sticker_f2_datum]<br />
<em><small>[field_msl_oa_sticker_f2_datum_1]</small></em>';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_datum'] ['settings'] = array (
			'format_type' => 'dag_en_datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Maatregel - fase 2 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_maatreg'] ['id'] = 'field_msl_oa_sticker_f2_maatreg';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_maatreg'] ['table'] = 'field_data_field_msl_oa_sticker_f2_maatreg';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_maatreg'] ['field'] = 'field_msl_oa_sticker_f2_maatreg';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_maatreg'] ['label'] = 'Maatregel';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_maatreg'] ['settings'] = array (
			'link' => 1 
	);
	/* Veld: Inhoud: Maatregel - fase 2 - uitgevoerd op */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_m_datum'] ['id'] = 'field_msl_oa_sticker_f2_m_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_m_datum'] ['table'] = 'field_data_field_msl_oa_sticker_f2_m_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_m_datum'] ['field'] = 'field_msl_oa_sticker_f2_m_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_m_datum'] ['label'] = 'Datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f2_m_datum'] ['settings'] = array (
			'format_type' => 'datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Datum - fase 3 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum_2'] ['id'] = 'field_msl_oa_sticker_f3_datum_2';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum_2'] ['table'] = 'field_data_field_msl_oa_sticker_f3_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum_2'] ['field'] = 'field_msl_oa_sticker_f3_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum_2'] ['label'] = 'Tijd verstreken fase 3';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum_2'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum_2'] ['type'] = 'format_interval';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum_2'] ['settings'] = array (
			'interval' => '2',
			'interval_display' => 'raw time ago' 
	);
	/* Veld: Inhoud: Datum - fase 3 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['id'] = 'field_msl_oa_sticker_f3_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['table'] = 'field_data_field_msl_oa_sticker_f3_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['field'] = 'field_msl_oa_sticker_f3_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['label'] = 'Fase 3';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['alter'] ['text'] = '[field_msl_oa_sticker_f3_datum]<br />
<em><small>[field_msl_oa_sticker_f3_datum_2]</small></em>';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_datum'] ['settings'] = array (
			'format_type' => 'dag_en_datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Maatregel - fase 3 */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_maatreg'] ['id'] = 'field_msl_oa_sticker_f3_maatreg';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_maatreg'] ['table'] = 'field_data_field_msl_oa_sticker_f3_maatreg';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_maatreg'] ['field'] = 'field_msl_oa_sticker_f3_maatreg';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_maatreg'] ['label'] = 'Maatregel';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_maatreg'] ['settings'] = array (
			'link' => 1 
	);
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_maatreg'] ['group_column'] = 'entity_id';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_maatreg'] ['delta_offset'] = '0';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_maatreg'] ['separator'] = '<br />';
	/* Veld: Inhoud: Maatregel - fase 3 - uitgevoerd op */
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_m_datum'] ['id'] = 'field_msl_oa_sticker_f3_m_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_m_datum'] ['table'] = 'field_data_field_msl_oa_sticker_f3_m_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_m_datum'] ['field'] = 'field_msl_oa_sticker_f3_m_datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_m_datum'] ['label'] = 'Datum';
	$handler->display->display_options ['fields'] ['field_msl_oa_sticker_f3_m_datum'] ['settings'] = array (
			'format_type' => 'datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Inhoud: Bewerkingslink */
	$handler->display->display_options ['fields'] ['edit_node'] ['id'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['field'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['edit_node'] ['element_label_colon'] = FALSE;
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
			'msl_oa_sticker' => 'msl_oa_sticker' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	/* Filtercriterium: Inhoud: Datum van inzending */
	$handler->display->display_options ['filters'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['filters'] ['created'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['filters'] ['created'] ['operator'] = '>=';
	$handler->display->display_options ['filters'] ['created'] ['value'] ['value'] = '01-09-2015';
	$handler->display->display_options ['filters'] ['created'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['created'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['created'] ['expose'] ['operator_id'] = 'created_op';
	$handler->display->display_options ['filters'] ['created'] ['expose'] ['label'] = 'Datum van inzending';
	$handler->display->display_options ['filters'] ['created'] ['expose'] ['operator'] = 'created_op';
	$handler->display->display_options ['filters'] ['created'] ['expose'] ['identifier'] = 'created';
	$handler->display->display_options ['filters'] ['created'] ['is_grouped'] = TRUE;
	$handler->display->display_options ['filters'] ['created'] ['group_info'] ['label'] = 'Schooljaar';
	$handler->display->display_options ['filters'] ['created'] ['group_info'] ['identifier'] = 'created';
	$handler->display->display_options ['filters'] ['created'] ['group_info'] ['optional'] = FALSE;
	$handler->display->display_options ['filters'] ['created'] ['group_info'] ['default_group'] = '1';
	$handler->display->display_options ['filters'] ['created'] ['group_info'] ['group_items'] = array (
			1 => array (
					'title' => '2016-2017',
					'operator' => 'between',
					'value' => array (
							'type' => 'date',
							'value' => '01-09-2015',
							'min' => '01-09-2016',
							'max' => '30-06-2017' 
					) 
			),
			2 => array (
					'title' => '2015-2016',
					'operator' => 'between',
					'value' => array (
							'type' => 'date',
							'value' => '01-09-2015',
							'min' => '01-09-2015',
							'max' => '30-06-2016' 
					) 
			),
			3 => array (
					'title' => '2014-2015',
					'operator' => 'between',
					'value' => array (
							'type' => 'date',
							'value' => '01-09-2014',
							'min' => '01-09-2014',
							'max' => '30-06-2015' 
					) 
			) 
	);
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'field_msl_oa_sticker_leerling_target_id';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Leerling';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Maatregel - fase 2 (field_msl_oa_sticker_f2_maatreg) */
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['id'] = 'field_msl_oa_sticker_f2_maatreg_target_id';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['table'] = 'field_data_field_msl_oa_sticker_f2_maatreg';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['field'] = 'field_msl_oa_sticker_f2_maatreg_target_id';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['expose'] ['operator_id'] = 'field_msl_oa_sticker_f2_maatreg_target_id_op';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['expose'] ['label'] = 'Maatregel - fase 2 (field_msl_oa_sticker_f2_maatreg)';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['expose'] ['operator'] = 'field_msl_oa_sticker_f2_maatreg_target_id_op';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['expose'] ['identifier'] = 'field_msl_oa_sticker_f2_maatreg_target_id';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['is_grouped'] = TRUE;
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['group_info'] ['label'] = 'Maatregel - fase 2';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['group_info'] ['identifier'] = 'field_msl_oa_sticker_f2_maatreg_target_id';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['group_info'] ['widget'] = 'radios';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f2_maatreg_target_id'] ['group_info'] ['group_items'] = array (
			1 => array (
					'title' => 'Middagstudie',
					'operator' => '=',
					'value' => array (
							'value' => '18621',
							'min' => '',
							'max' => '' 
					) 
			) 
	);
	/* Filtercriterium: Inhoud: Maatregel - fase 3 (field_msl_oa_sticker_f3_maatreg) */
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['id'] = 'field_msl_oa_sticker_f3_maatreg_target_id';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['table'] = 'field_data_field_msl_oa_sticker_f3_maatreg';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['field'] = 'field_msl_oa_sticker_f3_maatreg_target_id';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['expose'] ['operator_id'] = 'field_msl_oa_sticker_f3_maatreg_target_id_op';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['expose'] ['label'] = 'Maatregel - fase 3 (field_msl_oa_sticker_f3_maatreg)';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['expose'] ['operator'] = 'field_msl_oa_sticker_f3_maatreg_target_id_op';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['expose'] ['identifier'] = 'field_msl_oa_sticker_f3_maatreg_target_id';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['is_grouped'] = TRUE;
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['group_info'] ['label'] = 'Maatregel - fase 3';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['group_info'] ['identifier'] = 'field_msl_oa_sticker_f3_maatreg_target_id';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['group_info'] ['widget'] = 'radios';
	$handler->display->display_options ['filters'] ['field_msl_oa_sticker_f3_maatreg_target_id'] ['group_info'] ['group_items'] = array (
			1 => array (
					'title' => 'Strafstudie',
					'operator' => '=',
					'value' => array (
							'value' => '18622',
							'min' => '',
							'max' => '' 
					) 
			),
			2 => array (
					'title' => 'BO Afwezigheden',
					'operator' => '=',
					'value' => array (
							'value' => '18696',
							'min' => '',
							'max' => '' 
					) 
			) 
	);
	$handler->display->display_options ['path'] = 'sticker-onwettige-afwezigheid/overzicht';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Sticker onwettige afwezigheid';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	$translatables ['msl_sticker_onwettige_afwezigheden'] = array (
			t ( 'Master' ),
			t ( 'Sticker onwettige afwezigheid' ),
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
			t ( 'Sticker toevoegen' ),
			t ( '<a href="/node/add/msl-oa-sticker">Een nieuwe rode sticker toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'Gebruiker entity referenced from field_msl_oa_sticker_leerling' ),
			t ( 'Inhoud entity referenced from field_msl_oa_sticker_f2_maatreg' ),
			t ( 'Nr.' ),
			t ( 'Leerling' ),
			t ( '[field_user_sms_naam], [field_user_sms_voornaam]' ),
			t ( 'Datum fase 1' ),
			t ( 'Datum fase 2' ),
			t ( 'Datum fase 3' ),
			t ( 'Bewerken' ),
			t ( 'Overzicht' ),
			t ( 'Rode sticker in het agenda met de 3 fases.' ),
			t ( 'Tijd verstreken fase 1' ),
			t ( 'Fase 1' ),
			t ( '[field_msl_oa_sticker_f1_datum]<br />
<em><small>[field_msl_oa_sticker_f1_datum_1]</small></em>' ),
			t ( 'Tijd verstreken fase 2' ),
			t ( 'Fase 2' ),
			t ( '[field_msl_oa_sticker_f2_datum]<br />
<em><small>[field_msl_oa_sticker_f2_datum_1]</small></em>' ),
			t ( 'Maatregel' ),
			t ( 'Datum' ),
			t ( 'Tijd verstreken fase 3' ),
			t ( 'Fase 3' ),
			t ( '[field_msl_oa_sticker_f3_datum]<br />
<em><small>[field_msl_oa_sticker_f3_datum_2]</small></em>' ),
			t ( 'Datum van inzending' ),
			t ( 'Schooljaar' ),
			t ( 'Maatregel - fase 2 (field_msl_oa_sticker_f2_maatreg)' ),
			t ( 'Maatregel - fase 2' ),
			t ( 'Maatregel - fase 3 (field_msl_oa_sticker_f3_maatreg)' ),
			t ( 'Maatregel - fase 3' ) 
	);
	$export ['msl_sticker_onwettige_afwezigheden'] = $view;
	
	return $export;
}
