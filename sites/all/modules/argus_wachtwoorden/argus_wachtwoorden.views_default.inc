<?php
/**
 * @file
 * argus_wachtwoorden.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_wachtwoorden_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'ict_wachtwoorden';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'ICT - Wachtwoorden';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Wachtwoorden';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
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
					'ict_account' => 'ict_account' 
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
	$handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '25';
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
			'field_ict_account_hardware' => 'field_ict_account_hardware',
			'field_ict_account_voor' => 'field_ict_account_voor',
			'nothing' => 'nothing',
			'field_ict_account_gebruikersnaam' => 'field_ict_account_gebruikersnaam',
			'field_ict_account_wachtwoord' => 'field_ict_account_wachtwoord' 
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
			'field_ict_account_hardware' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ict_account_voor' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ict_account_gebruikersnaam' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ict_account_wachtwoord' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	/* Kop: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['header'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['header'] ['area_text_custom'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area_text_custom'] ['content'] = '<a href="http://argus.kta1-hasselt.be/node/add/ict-account">Een nieuwe account toevoegen</a>';
	/* Voet: Algemeen: Ongefilterde tekst */
	$handler->display->display_options ['footer'] ['area_text_custom'] ['id'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['table'] = 'views';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['field'] = 'area_text_custom';
	$handler->display->display_options ['footer'] ['area_text_custom'] ['content'] = '<a href="http://argus.kta1-hasselt.be/node/add/ict-account">Een nieuwe account toevoegen</a>';
	/* Veld: Inhoud: Hardware */
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['id'] = 'field_ict_account_hardware';
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['table'] = 'field_data_field_ict_account_hardware';
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['field'] = 'field_ict_account_hardware';
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['settings'] = array (
			'link' => 0 
	);
	/* Veld: Inhoud: Gebruikt bij */
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['id'] = 'field_ict_account_voor';
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['table'] = 'field_data_field_ict_account_voor';
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['field'] = 'field_ict_account_voor';
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['label'] = 'Voor';
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['exclude'] = TRUE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Account voor';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[field_ict_account_hardware][field_ict_account_voor]';
	/* Veld: Inhoud: Gebruikersnaam */
	$handler->display->display_options ['fields'] ['field_ict_account_gebruikersnaam'] ['id'] = 'field_ict_account_gebruikersnaam';
	$handler->display->display_options ['fields'] ['field_ict_account_gebruikersnaam'] ['table'] = 'field_data_field_ict_account_gebruikersnaam';
	$handler->display->display_options ['fields'] ['field_ict_account_gebruikersnaam'] ['field'] = 'field_ict_account_gebruikersnaam';
	/* Veld: Inhoud: Wachtwoord */
	$handler->display->display_options ['fields'] ['field_ict_account_wachtwoord'] ['id'] = 'field_ict_account_wachtwoord';
	$handler->display->display_options ['fields'] ['field_ict_account_wachtwoord'] ['table'] = 'field_data_field_ict_account_wachtwoord';
	$handler->display->display_options ['fields'] ['field_ict_account_wachtwoord'] ['field'] = 'field_ict_account_wachtwoord';
	/* Sorteercriterium: Inhoud: Gebruikt bij (field_ict_account_voor) */
	$handler->display->display_options ['sorts'] ['field_ict_account_voor_value'] ['id'] = 'field_ict_account_voor_value';
	$handler->display->display_options ['sorts'] ['field_ict_account_voor_value'] ['table'] = 'field_data_field_ict_account_voor';
	$handler->display->display_options ['sorts'] ['field_ict_account_voor_value'] ['field'] = 'field_ict_account_voor_value';
	/* Sorteercriterium: Inhoud: Hardware (field_ict_account_hardware) */
	$handler->display->display_options ['sorts'] ['field_ict_account_hardware_target_id'] ['id'] = 'field_ict_account_hardware_target_id';
	$handler->display->display_options ['sorts'] ['field_ict_account_hardware_target_id'] ['table'] = 'field_data_field_ict_account_hardware';
	$handler->display->display_options ['sorts'] ['field_ict_account_hardware_target_id'] ['field'] = 'field_ict_account_hardware_target_id';
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Gebruikersnaam (field_ict_account_gebruikersnaam) */
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['id'] = 'field_ict_account_gebruikersnaam_value';
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['table'] = 'field_data_field_ict_account_gebruikersnaam';
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['field'] = 'field_ict_account_gebruikersnaam_value';
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['operator'] = 'not empty';
	/* Filtercriterium: Inhoud: Wachtwoord (field_ict_account_wachtwoord) */
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['id'] = 'field_ict_account_wachtwoord_value';
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['table'] = 'field_data_field_ict_account_wachtwoord';
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['field'] = 'field_ict_account_wachtwoord_value';
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['operator'] = 'not empty';
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'wachtwoorden_overzicht' );
	$handler->display->display_options ['defaults'] ['pager'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'nid' => 'nid',
			'field_ict_account_hardware' => 'field_ict_account_hardware',
			'field_ict_account_voor' => 'field_ict_account_voor',
			'nothing' => 'nothing',
			'title' => 'title',
			'field_ict_account_wachtwoord' => 'field_ict_account_wachtwoord',
			'field_ict_account_opmerkingen' => 'field_ict_account_opmerkingen' 
	);
	$handler->display->display_options ['style_options'] ['default'] = 'field_ict_account_hardware';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'nid' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ict_account_hardware' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ict_account_voor' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
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
			'field_ict_account_wachtwoord' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_ict_account_opmerkingen' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Nid */
	$handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
	$handler->display->display_options ['fields'] ['nid'] ['label'] = 'ID';
	$handler->display->display_options ['fields'] ['nid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nid'] ['link_to_node'] = TRUE;
	/* Veld: Inhoud: Hardware */
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['id'] = 'field_ict_account_hardware';
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['table'] = 'field_data_field_ict_account_hardware';
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['field'] = 'field_ict_account_hardware';
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_ict_account_hardware'] ['settings'] = array (
			'link' => '1' 
	);
	/* Veld: Inhoud: Gebruikt bij */
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['id'] = 'field_ict_account_voor';
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['table'] = 'field_data_field_ict_account_voor';
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['field'] = 'field_ict_account_voor';
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['label'] = 'Voor';
	$handler->display->display_options ['fields'] ['field_ict_account_voor'] ['exclude'] = TRUE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Account voor';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[field_ict_account_hardware][field_ict_account_voor]';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['make_link'] = TRUE;
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['path'] = '[field_ict_account_hardware]';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Gebruikersnaam';
	$handler->display->display_options ['fields'] ['title'] ['empty'] = 'Geen gebruikersnaam';
	/* Veld: Inhoud: Wachtwoord */
	$handler->display->display_options ['fields'] ['field_ict_account_wachtwoord'] ['id'] = 'field_ict_account_wachtwoord';
	$handler->display->display_options ['fields'] ['field_ict_account_wachtwoord'] ['table'] = 'field_data_field_ict_account_wachtwoord';
	$handler->display->display_options ['fields'] ['field_ict_account_wachtwoord'] ['field'] = 'field_ict_account_wachtwoord';
	/* Veld: Inhoud: Opmerkingen */
	$handler->display->display_options ['fields'] ['field_ict_account_opmerkingen'] ['id'] = 'field_ict_account_opmerkingen';
	$handler->display->display_options ['fields'] ['field_ict_account_opmerkingen'] ['table'] = 'field_data_field_ict_account_opmerkingen';
	$handler->display->display_options ['fields'] ['field_ict_account_opmerkingen'] ['field'] = 'field_ict_account_opmerkingen';
	$handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
	$handler->display->display_options ['defaults'] ['filters'] = FALSE;
	/* Filtercriterium: Inhoud: Gepubliceerd */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Inhoud: Gebruikersnaam (field_ict_account_gebruikersnaam) */
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['id'] = 'field_ict_account_gebruikersnaam_value';
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['table'] = 'field_data_field_ict_account_gebruikersnaam';
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['field'] = 'field_ict_account_gebruikersnaam_value';
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['operator'] = 'not empty';
	$handler->display->display_options ['filters'] ['field_ict_account_gebruikersnaam_value'] ['group'] = 1;
	/* Filtercriterium: Inhoud: Wachtwoord (field_ict_account_wachtwoord) */
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['id'] = 'field_ict_account_wachtwoord_value';
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['table'] = 'field_data_field_ict_account_wachtwoord';
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['field'] = 'field_ict_account_wachtwoord_value';
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['operator'] = 'not empty';
	$handler->display->display_options ['filters'] ['field_ict_account_wachtwoord_value'] ['group'] = 1;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'wachtwoorden';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Wachtwoorden';
	$handler->display->display_options ['menu'] ['weight'] = '0';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$handler->display->display_options ['menu'] ['context'] = 0;
	$handler->display->display_options ['menu'] ['context_only_inline'] = 0;
	$translatables ['ict_wachtwoorden'] = array (
			t ( 'Master' ),
			t ( 'Wachtwoorden' ),
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
			t ( '<a href="http://argus.kta1-hasselt.be/node/add/ict-account">Een nieuwe account toevoegen</a>' ),
			t ( 'Hardware' ),
			t ( 'Voor' ),
			t ( 'Account voor' ),
			t ( '[field_ict_account_hardware][field_ict_account_voor]' ),
			t ( 'Gebruikersnaam' ),
			t ( 'Wachtwoord' ),
			t ( 'Overzicht' ),
			t ( 'ID' ),
			t ( 'Geen gebruikersnaam' ),
			t ( 'Opmerkingen' ) 
	);
	$export ['ict_wachtwoorden'] = $view;
	
	return $export;
}
