<?php
/**
 * @file
 * argus_register_van_feiten_door_derden.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_register_van_feiten_door_derden_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'register_van_feiten_door_derden';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Register van feiten door derden';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Register van feiten door derden';
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
					'changed' => 'changed' 
			),
			'node' => array (
					'register_van_feiten_door_derden' => 'register_van_feiten_door_derden' 
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
			'last_updated' => array (
					'bef_format' => 'bef_datepicker',
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
							),
							'datepicker_options' => '' 
					) 
			),
			'field_categorie_value' => array (
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
			) 
	);
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'nid' => 'nid',
			'last_updated' => 'last_updated',
			'name' => 'name',
			'field_datum_en_tijd' => 'field_datum_en_tijd',
			'field_plaats' => 'field_plaats',
			'field_tijdens_de_werkuren_' => 'field_tijdens_de_werkuren_',
			'field_categorie' => 'field_categorie' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'nid' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'last_updated' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'name' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_datum_en_tijd' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_plaats' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_tijdens_de_werkuren_' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_categorie' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area_1'] ['id'] = 'area_1';
	$handler->display->display_options ['header'] ['area_1'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area_1'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area_1'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area_1'] ['content'] = '<div style="font-style: normal; text-align: left; margin: 20px 0;">De werkgever dient een risicoanalyse op te maken van de vormen van psychosociale belasting veroorzaakt door derden. Met het oog op deze risicoanalyse beschikt de werkgever over een ‘register van feiten gepleegd door derden’. Dit register omvat een verklaring met de beschrijving van de feiten van geweld, pesterijen en ongewenst seksueel gedrag op het werk die werden veroorzaakt door derden en waarvan de werknemer meent het slachtoffer te zijn geweest, evenals de data van de feiten. De werkgever bewaart de verklaringen inzake de feiten die in het register zijn opgenomen, gedurende vijf jaren, te rekenen vanaf de dag dat de werknemer deze verklaringen heeft laten optekenen.</div>';
	$handler->display->display_options ['header'] ['area_1'] ['format'] = 'full_html';
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<div style="text-align: center; border: solid 1px black; padding: 10px 15px;"><div style="font-weight: bold; color: red; text-align: center;">VERTROUWELIJK</div>Dit register wordt bijgehouden door de vertrouwenspersoon of door de interne preventieadviseur indien er geen vertrouwenspersoon in de organisatie aangesteld is. Dit register kan alleen worden geraadpleegd   door   de   werkgever,   de   vertrouwenspersoon, de  interne  preventieadviseur, de   externe   preventieadviseur psychosociale aspecten en de met toezicht belaste ambtenaar.</div>';
	$handler->display->display_options ['header'] ['area'] ['format'] = 'full_html';
	/* Kop: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['header'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area_text_custom'] ['content'] = '<br /><a href="/node/add/register-van-feiten-door-derden">Een registratie van feiten door derden toevoegen</a>';
	/* Voet: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['footer'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['content'] = '<a href="/node/add/register-van-feiten-door-derden">Een registratie van feiten door derden toevoegen</a>';
	/* Relatie: auteur */
	$handler->display->display_options ['relationships'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['table'] = 'node';
	$handler->display->display_options ['relationships'] ['uid'] ['field'] = 'uid';
	$handler->display->display_options ['relationships'] ['uid'] ['ui_name'] = 'auteur';
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = 'Nr.';
	$handler->display->display_options ['fields'] ['nid'] ['link_to_node'] = TRUE;
	/* Veld: Inhoud: Bijgewerkte/laatste reactiedatum */
	$handler->display->display_options ['fields'] ['last_updated'] ['id'] = 'last_updated';
	$handler->display->display_options ['fields'] ['last_updated'] ['table'] = 'node_comment_statistics';
	$handler->display->display_options ['fields'] ['last_updated'] ['field'] = 'last_updated';
	$handler->display->display_options ['fields'] ['last_updated'] ['label'] = 'Registratiedatum';
	$handler->display->display_options ['fields'] ['last_updated'] ['date_format'] = 'medium';
	$handler->display->display_options ['fields'] ['last_updated'] ['second_date_format'] = 'search_api_facetapi_YEAR';
	/* Veld: Gebruiker: Naam */
	$handler->display->display_options ['fields'] ['name'] ['id'] = 'name';
	$handler->display->display_options ['fields'] ['name'] ['table'] = 'users';
	$handler->display->display_options ['fields'] ['name'] ['field'] = 'name';
	$handler->display->display_options ['fields'] ['name'] ['relationship'] = 'uid';
	/* Veld: Inhoud: Datum en tijd */
	$handler->display->display_options ['fields'] ['field_datum_en_tijd'] ['id'] = 'field_datum_en_tijd';
	$handler->display->display_options ['fields'] ['field_datum_en_tijd'] ['table'] = 'field_data_field_datum_en_tijd';
	$handler->display->display_options ['fields'] ['field_datum_en_tijd'] ['field'] = 'field_datum_en_tijd';
	$handler->display->display_options ['fields'] ['field_datum_en_tijd'] ['label'] = 'Datum en tijd (vh feit)';
	$handler->display->display_options ['fields'] ['field_datum_en_tijd'] ['settings'] = array (
			'format_type' => 'long',
			'custom_date_format' => '',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show',
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Plaats */
	$handler->display->display_options ['fields'] ['field_plaats'] ['id'] = 'field_plaats';
	$handler->display->display_options ['fields'] ['field_plaats'] ['table'] = 'field_data_field_plaats';
	$handler->display->display_options ['fields'] ['field_plaats'] ['field'] = 'field_plaats';
	$handler->display->display_options ['fields'] ['field_plaats'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Tijdens de werkuren? */
	$handler->display->display_options ['fields'] ['field_tijdens_de_werkuren_'] ['id'] = 'field_tijdens_de_werkuren_';
	$handler->display->display_options ['fields'] ['field_tijdens_de_werkuren_'] ['table'] = 'field_data_field_tijdens_de_werkuren_';
	$handler->display->display_options ['fields'] ['field_tijdens_de_werkuren_'] ['field'] = 'field_tijdens_de_werkuren_';
	$handler->display->display_options ['fields'] ['field_tijdens_de_werkuren_'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Inhoud: Categorie */
	$handler->display->display_options ['fields'] ['field_categorie'] ['id'] = 'field_categorie';
	$handler->display->display_options ['fields'] ['field_categorie'] ['table'] = 'field_data_field_categorie';
	$handler->display->display_options ['fields'] ['field_categorie'] ['field'] = 'field_categorie';
	$handler->display->display_options ['fields'] ['field_categorie'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_categorie'] ['delta_offset'] = '0';
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
			'register_van_feiten_door_derden' => 'register_van_feiten_door_derden' 
	);
	/* Filtercriterium: Inhoud: Bijgewerkte/laatste reactiedatum */
	$handler->display->display_options ['filters'] ['last_updated'] ['id'] = 'last_updated';
	$handler->display->display_options ['filters'] ['last_updated'] ['table'] = 'node_comment_statistics';
	$handler->display->display_options ['filters'] ['last_updated'] ['field'] = 'last_updated';
	$handler->display->display_options ['filters'] ['last_updated'] ['operator'] = 'between';
	$handler->display->display_options ['filters'] ['last_updated'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['last_updated'] ['expose'] ['operator_id'] = 'last_updated_op';
	$handler->display->display_options ['filters'] ['last_updated'] ['expose'] ['label'] = 'Datum (tussen ... en ...)';
	$handler->display->display_options ['filters'] ['last_updated'] ['expose'] ['operator'] = 'last_updated_op';
	$handler->display->display_options ['filters'] ['last_updated'] ['expose'] ['identifier'] = 'last_updated';
	$handler->display->display_options ['filters'] ['last_updated'] ['expose'] ['remember_roles'] = array ();
	/* Filtercriterium: Inhoud: Categorie (field_categorie) */
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['id'] = 'field_categorie_value';
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['table'] = 'field_data_field_categorie';
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['field'] = 'field_categorie_value';
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['expose'] ['operator_id'] = 'field_categorie_value_op';
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['expose'] ['label'] = 'Categorie';
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['expose'] ['operator'] = 'field_categorie_value_op';
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['expose'] ['identifier'] = 'field_categorie_value';
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_categorie_value'] ['reduce_duplicates'] = TRUE;
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'register_van_feiten_door_derden_overzicht' );
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'register-van-feiten-door-derden';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Register van feiten door derden';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$translatables ['register_van_feiten_door_derden'] = array (
			t ( 'Master' ),
			t ( 'Register van feiten door derden' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Selecteer een van de filters en klik op \'Toepassen\' om het resultaat te zien' ),
			t ( 'Uitgebreide opties' ),
			t ( '<div style="font-style: normal; text-align: left; margin: 20px 0;">De werkgever dient een risicoanalyse op te maken van de vormen van psychosociale belasting veroorzaakt door derden. Met het oog op deze risicoanalyse beschikt de werkgever over een ‘register van feiten gepleegd door derden’. Dit register omvat een verklaring met de beschrijving van de feiten van geweld, pesterijen en ongewenst seksueel gedrag op het werk die werden veroorzaakt door derden en waarvan de werknemer meent het slachtoffer te zijn geweest, evenals de data van de feiten. De werkgever bewaart de verklaringen inzake de feiten die in het register zijn opgenomen, gedurende vijf jaren, te rekenen vanaf de dag dat de werknemer deze verklaringen heeft laten optekenen.</div>' ),
			t ( '<div style="text-align: center; border: solid 1px black; padding: 10px 15px;"><div style="font-weight: bold; color: red; text-align: center;">VERTROUWELIJK</div>Dit register wordt bijgehouden door de vertrouwenspersoon of door de interne preventieadviseur indien er geen vertrouwenspersoon in de organisatie aangesteld is. Dit register kan alleen worden geraadpleegd   door   de   werkgever,   de   vertrouwenspersoon, de  interne  preventieadviseur, de   externe   preventieadviseur psychosociale aspecten en de met toezicht belaste ambtenaar.</div>' ),
			t ( '<br /><a href="/node/add/register-van-feiten-door-derden">Een registratie van feiten door derden toevoegen</a>' ),
			t ( '<a href="/node/add/register-van-feiten-door-derden">Een registratie van feiten door derden toevoegen</a>' ),
			t ( 'auteur' ),
			t ( 'Nr.' ),
			t ( 'Registratiedatum' ),
			t ( 'Naam' ),
			t ( 'Datum en tijd (vh feit)' ),
			t ( 'Plaats' ),
			t ( 'Tijdens de werkuren?' ),
			t ( 'Categorie' ),
			t ( 'Datum (tussen ... en ...)' ),
			t ( 'Overzicht' ) 
	);
	$export ['register_van_feiten_door_derden'] = $view;
	
	return $export;
}
