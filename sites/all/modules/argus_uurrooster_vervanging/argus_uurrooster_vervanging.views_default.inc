<?php
/**
 * @file
 * argus_uurrooster_vervanging.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_uurrooster_vervanging_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'uurroosters_vervangingen';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Uurroosters - vervangingen';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Uurroosters - vervangingen';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['access'] ['perm'] = 'create uurrooster_vervanging content';
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
					'personeel_afwezigheid' => 'personeel_afwezigheid',
					'uurrooster_les' => 'uurrooster_les',
					'uurrooster_periode' => 'uurrooster_periode',
					'uurrooster_permanentie' => 'uurrooster_permanentie',
					'uurrooster_toezicht' => 'uurrooster_toezicht',
					'uurrooster_toezicht_locatie' => 'uurrooster_toezicht_locatie',
					'uurrooster_vervanging' => 'uurrooster_vervanging' 
			),
			'node_only' => array (
					'node_changed' => 'node_changed' 
			) 
	);
	$handler->display->display_options ['query'] ['type'] = 'views_query';
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['pager'] ['type'] = 'date_views_pager';
	$handler->display->display_options ['pager'] ['options'] ['link_format'] = 'clean';
	$handler->display->display_options ['pager'] ['options'] ['skip_empty_pages'] = 0;
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['grouping'] = array (
			0 => array (
					'field' => 'realname_1',
					'rendered' => '1',
					'rendered_strip' => 0 
			) 
	);
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'realname_1' => 'realname_1',
			'field_klassen' => 'field_klassen',
			'title_1' => 'title_1',
			'field_gebruiker_1' => 'field_gebruiker_1',
			'edit_node' => 'edit_node',
			'delete_node' => 'delete_node',
			'nothing' => 'nothing' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'realname_1' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_klassen' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'title_1' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_gebruiker_1' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
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
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/uurrooster-vervanging">Een nieuwe vervanging toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/uurrooster-vervanging">Een nieuwe vervanging toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_uurr_vervanging_vervmoment_target_id'] ['id'] = 'field_uurr_vervanging_vervmoment_target_id';
	$handler->display->display_options ['relationships'] ['field_uurr_vervanging_vervmoment_target_id'] ['table'] = 'field_data_field_uurr_vervanging_vervmoment';
	$handler->display->display_options ['relationships'] ['field_uurr_vervanging_vervmoment_target_id'] ['field'] = 'field_uurr_vervanging_vervmoment_target_id';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_personeel_afwezigheid_target_id'] ['id'] = 'field_personeel_afwezigheid_target_id';
	$handler->display->display_options ['relationships'] ['field_personeel_afwezigheid_target_id'] ['table'] = 'field_data_field_personeel_afwezigheid';
	$handler->display->display_options ['relationships'] ['field_personeel_afwezigheid_target_id'] ['field'] = 'field_personeel_afwezigheid_target_id';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id'] ['id'] = 'field_gebruiker_target_id';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id'] ['table'] = 'field_data_field_gebruiker';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id'] ['field'] = 'field_gebruiker_target_id';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id'] ['relationship'] = 'field_uurr_vervanging_vervmoment_target_id';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id'] ['label'] = 'Gebruiker entity referenced from field_gebruiker > Vervanger';
	/* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id_1'] ['id'] = 'field_gebruiker_target_id_1';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id_1'] ['table'] = 'field_data_field_gebruiker';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id_1'] ['field'] = 'field_gebruiker_target_id';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id_1'] ['relationship'] = 'field_personeel_afwezigheid_target_id';
	$handler->display->display_options ['relationships'] ['field_gebruiker_target_id_1'] ['label'] = 'Gebruiker entity referenced from field_gebruiker > Afwezige';
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname_1'] ['id'] = 'realname_1';
	$handler->display->display_options ['fields'] ['realname_1'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname_1'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname_1'] ['relationship'] = 'field_gebruiker_target_id_1';
	$handler->display->display_options ['fields'] ['realname_1'] ['label'] = '';
	$handler->display->display_options ['fields'] ['realname_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['realname_1'] ['alter'] ['text'] = '<h2>[realname_1]</h2>';
	$handler->display->display_options ['fields'] ['realname_1'] ['element_label_colon'] = FALSE;
	/* Veld: Veld: Klassen */
	$handler->display->display_options ['fields'] ['field_klassen'] ['id'] = 'field_klassen';
	$handler->display->display_options ['fields'] ['field_klassen'] ['table'] = 'field_data_field_klassen';
	$handler->display->display_options ['fields'] ['field_klassen'] ['field'] = 'field_klassen';
	$handler->display->display_options ['fields'] ['field_klassen'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_klassen'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_klassen'] ['alter'] ['text'] = ': [field_klassen]';
	$handler->display->display_options ['fields'] ['field_klassen'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_klassen'] ['settings'] = array (
			'link' => '1' 
	);
	$handler->display->display_options ['fields'] ['field_klassen'] ['delta_offset'] = '0';
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title_1'] ['id'] = 'title_1';
	$handler->display->display_options ['fields'] ['title_1'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title_1'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title_1'] ['relationship'] = 'field_uurr_vervanging_vervmoment_target_id';
	$handler->display->display_options ['fields'] ['title_1'] ['label'] = 'Vervangmoment';
	$handler->display->display_options ['fields'] ['title_1'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['title_1'] ['alter'] ['text'] = '[title_1] [field_klassen]';
	/* Veld: Inhoud: Vervanger */
	$handler->display->display_options ['fields'] ['field_gebruiker_1'] ['id'] = 'field_gebruiker_1';
	$handler->display->display_options ['fields'] ['field_gebruiker_1'] ['table'] = 'field_data_field_gebruiker';
	$handler->display->display_options ['fields'] ['field_gebruiker_1'] ['field'] = 'field_gebruiker';
	$handler->display->display_options ['fields'] ['field_gebruiker_1'] ['settings'] = array (
			'link' => '1' 
	);
	/* Veld: Inhoud: Bewerkingslink */
	$handler->display->display_options ['fields'] ['edit_node'] ['id'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['field'] = 'edit_node';
	$handler->display->display_options ['fields'] ['edit_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['edit_node'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['edit_node'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Link voor dupliceren */
	$handler->display->display_options ['fields'] ['clone_node'] ['id'] = 'clone_node';
	$handler->display->display_options ['fields'] ['clone_node'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['clone_node'] ['field'] = 'clone_node';
	$handler->display->display_options ['fields'] ['clone_node'] ['label'] = 'dupliceren';
	$handler->display->display_options ['fields'] ['clone_node'] ['exclude'] = TRUE;
	/* Veld: Inhoud: Verwijderlink */
	$handler->display->display_options ['fields'] ['delete_node'] ['id'] = 'delete_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['table'] = 'views_entity_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['field'] = 'delete_node';
	$handler->display->display_options ['fields'] ['delete_node'] ['label'] = '';
	$handler->display->display_options ['fields'] ['delete_node'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['delete_node'] ['alter'] ['text'] = '[edit_node] - [delete_node]';
	$handler->display->display_options ['fields'] ['delete_node'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[edit_node]<br/>[clone_node]<br/>[delete_node]';
	$handler->display->display_options ['fields'] ['nothing'] ['element_label_colon'] = FALSE;
	/* Sorteercriterium: Inhoud: Tijdstip - startdatum (field_tijdstip) */
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['id'] = 'field_tijdstip_value';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['field'] = 'field_tijdstip_value';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['relationship'] = 'field_personeel_afwezigheid_target_id';
	$handler->display->display_options ['sorts'] ['field_tijdstip_value'] ['order'] = 'DESC';
	/* Sorteercriterium: Echte naam: Werkelijke naam */
	$handler->display->display_options ['sorts'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['sorts'] ['realname'] ['relationship'] = 'field_gebruiker_target_id_1';
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['relationship'] = 'field_uurr_vervanging_vervmoment_target_id';
	/* Contextueel filter: Inhoud: Tijdstip - startdatum (field_tijdstip) */
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['id'] = 'field_tijdstip_value';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['field'] = 'field_tijdstip_value';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['default_action'] = 'default';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['exception'] ['title'] = 'Alle';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['default_argument_type'] = 'date';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['summary'] ['number_of_records'] = '0';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['summary'] ['format'] = 'default_summary';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['summary_options'] ['items_per_page'] = '25';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['granularity'] = 'day';
	$handler->display->display_options ['arguments'] ['field_tijdstip_value'] ['granularity_reset'] = 0;
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
			'uurrooster_vervanging' => 'uurrooster_vervanging' 
	);
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['relationship'] = 'field_gebruiker_target_id';
	$handler->display->display_options ['filters'] ['realname'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator_id'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['label'] = 'Vervanger';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['operator'] = 'realname_op';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['identifier'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['realname'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Tijdstip - startdatum (field_tijdstip) */
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['id'] = 'field_tijdstip_value';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['table'] = 'field_data_field_tijdstip';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['field'] = 'field_tijdstip_value';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['operator_id'] = 'field_tijdstip_value_op';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['label'] = 'Tijdstip';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['operator'] = 'field_tijdstip_value_op';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['identifier'] = 'field_tijdstip_value';
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_tijdstip_value'] ['form_type'] = 'date_popup';
	/* Filtercriterium: Inhoud: Titel */
	$handler->display->display_options ['filters'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['filters'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['relationship'] = 'field_uurr_vervanging_vervmoment_target_id';
	$handler->display->display_options ['filters'] ['title'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['title'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator_id'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Vervangmoment';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title_1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Echte naam: Naam */
	$handler->display->display_options ['filters'] ['realname_1'] ['id'] = 'realname_1';
	$handler->display->display_options ['filters'] ['realname_1'] ['table'] = 'realname';
	$handler->display->display_options ['filters'] ['realname_1'] ['field'] = 'realname';
	$handler->display->display_options ['filters'] ['realname_1'] ['relationship'] = 'field_gebruiker_target_id_1';
	$handler->display->display_options ['filters'] ['realname_1'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['realname_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['operator_id'] = 'realname_1_op';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['label'] = 'Afwezige';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['operator'] = 'realname_1_op';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['identifier'] = 'realname_1';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_field'] = 'realname_1';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['realname_1'] ['expose'] ['autocomplete_dependent'] = 0;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'overview_uurrooster_vervangingen' );
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'uurrooster/vervangingen';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Vervangingen';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	$translatables ['uurroosters_vervangingen'] = array (
			t ( 'Master' ),
			t ( 'Uurroosters - vervangingen' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( '<a href="/node/add/uurrooster-vervanging">Een nieuwe vervanging toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'Inhoud entity referenced from field_uurr_vervanging_vervmoment' ),
			t ( 'Inhoud entity referenced from field_personeel_afwezigheid' ),
			t ( 'Gebruiker entity referenced from field_gebruiker > Vervanger' ),
			t ( 'Gebruiker entity referenced from field_gebruiker > Afwezige' ),
			t ( '<h2>[realname_1]</h2>' ),
			t ( ': [field_klassen]' ),
			t ( 'Vervangmoment' ),
			t ( '[title_1] [field_klassen]' ),
			t ( 'Vervanger' ),
			t ( 'dupliceren' ),
			t ( '[edit_node] - [delete_node]' ),
			t ( '[edit_node]<br/>[clone_node]<br/>[delete_node]' ),
			t ( 'Alle' ),
			t ( 'Tijdstip' ),
			t ( 'Afwezige' ),
			t ( 'Overzicht' ) 
	);
	$export ['uurroosters_vervangingen'] = $view;
	
	return $export;
}
