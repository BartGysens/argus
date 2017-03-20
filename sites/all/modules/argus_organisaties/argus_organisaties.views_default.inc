<?php
/**
 * @file
 * argus_organisaties.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_organisaties_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'organisaties';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'Organisaties';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Organisaties';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'perm';
	$handler->display->display_options ['access'] ['perm'] = 'create organisatie content';
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
					'organisatie' => 'organisatie' 
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
			'field_gemeente_value' => array (
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
			),
			'field_org_contact_naam_value' => array (
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
			),
			'field_org_stagementor_naam_value' => array (
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
			),
			'field_kbo_nummer_value' => array (
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
			),
			'field_relatie_met_de_school_value' => array (
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
			'field_kbo_nummer' => 'field_kbo_nummer',
			'title' => 'title',
			'field_busnummer' => 'field_busnummer',
			'field_org_contact_email' => 'field_org_contact_email',
			'field_org_stagementor_email' => 'field_org_stagementor_email',
			'field_email' => 'field_email',
			'field_faxnummer' => 'field_faxnummer',
			'field_gemeente' => 'field_gemeente',
			'field_huisnummer' => 'field_huisnummer',
			'field_org_stagementor_naam' => 'field_org_stagementor_naam',
			'field_org_contact_naam' => 'field_org_contact_naam',
			'field_postcode' => 'field_postcode',
			'field_straat' => 'field_straat',
			'field_org_stagementor_telefoon' => 'field_org_stagementor_telefoon',
			'field_telefoonnummer' => 'field_telefoonnummer',
			'field_org_contact_telefoonnummer' => 'field_org_contact_telefoonnummer',
			'field_org_stagementor_voornaam' => 'field_org_stagementor_voornaam',
			'field_org_contact_voornaam' => 'field_org_contact_voornaam',
			'nothing_2' => 'nothing_2',
			'nothing_3' => 'nothing_3',
			'nothing_1' => 'nothing_1',
			'nothing' => 'nothing',
			'field_relatie_met_de_school' => 'field_relatie_met_de_school' 
	);
	$handler->display->display_options ['style_options'] ['default'] = '-1';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'field_kbo_nummer' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
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
			'field_busnummer' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_org_contact_email' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_org_stagementor_email' => array (
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
			'field_faxnummer' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_gemeente' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_huisnummer' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_org_stagementor_naam' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_org_contact_naam' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_postcode' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_straat' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_org_stagementor_telefoon' => array (
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
			'field_org_contact_telefoonnummer' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_org_stagementor_voornaam' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_org_contact_voornaam' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing_2' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing_3' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing_1' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_relatie_met_de_school' => array (
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	/* Kop: Algemeen: Tekstveld */
	$handler->display->display_options ['header'] ['area'] ['id'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['table'] = 'views';
	$handler->display->display_options ['header'] ['area'] ['field'] = 'area';
	$handler->display->display_options ['header'] ['area'] ['empty'] = TRUE;
	$handler->display->display_options ['header'] ['area'] ['content'] = '<a href="/node/add/organisatie">Een nieuwe organisatie toevoegen</a>';
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
	$handler->display->display_options ['footer'] ['area'] ['content'] = '<a href="/node/add/organisatie">Een nieuwe organisatie toevoegen</a>';
	$handler->display->display_options ['footer'] ['area'] ['format'] = 'filtered_html';
	/* Veld: Inhoud: Ondernemingsnummer */
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['id'] = 'field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['table'] = 'field_data_field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['field'] = 'field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['alter'] ['text'] = 'KBO-nr.: [field_kbo_nummer]';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Naam';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '[title]<br />
<small>[field_kbo_nummer]</small>';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Veld: Inhoud: Busnummer */
	$handler->display->display_options ['fields'] ['field_busnummer'] ['id'] = 'field_busnummer';
	$handler->display->display_options ['fields'] ['field_busnummer'] ['table'] = 'field_data_field_busnummer';
	$handler->display->display_options ['fields'] ['field_busnummer'] ['field'] = 'field_busnummer';
	$handler->display->display_options ['fields'] ['field_busnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_busnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_busnummer'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Email */
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['id'] = 'field_org_contact_email';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['table'] = 'field_data_field_org_contact_email';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['field'] = 'field_org_contact_email';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['alter'] ['text'] = 'E-mail: [field_org_contact_email]<br />';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Email */
	$handler->display->display_options ['fields'] ['field_org_stagementor_email'] ['id'] = 'field_org_stagementor_email';
	$handler->display->display_options ['fields'] ['field_org_stagementor_email'] ['table'] = 'field_data_field_org_stagementor_email';
	$handler->display->display_options ['fields'] ['field_org_stagementor_email'] ['field'] = 'field_org_stagementor_email';
	$handler->display->display_options ['fields'] ['field_org_stagementor_email'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_stagementor_email'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_stagementor_email'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_stagementor_email'] ['alter'] ['text'] = 'E-mail: [field_org_stagementor_email]<br />';
	$handler->display->display_options ['fields'] ['field_org_stagementor_email'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Email */
	$handler->display->display_options ['fields'] ['field_email'] ['id'] = 'field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['table'] = 'field_data_field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['field'] = 'field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_email'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_email'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_email'] ['alter'] ['text'] = 'E-mail: [field_email]<br />';
	$handler->display->display_options ['fields'] ['field_email'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Faxnummer */
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['id'] = 'field_faxnummer';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['table'] = 'field_data_field_faxnummer';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['field'] = 'field_faxnummer';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['alter'] ['text'] = 'Fax: [field_faxnummer]<br />';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['type'] = 'telephone_link';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['settings'] = array (
			'title' => '' 
	);
	/* Veld: Inhoud: Gemeente */
	$handler->display->display_options ['fields'] ['field_gemeente'] ['id'] = 'field_gemeente';
	$handler->display->display_options ['fields'] ['field_gemeente'] ['table'] = 'field_data_field_gemeente';
	$handler->display->display_options ['fields'] ['field_gemeente'] ['field'] = 'field_gemeente';
	$handler->display->display_options ['fields'] ['field_gemeente'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_gemeente'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_gemeente'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Huisnummer */
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['id'] = 'field_huisnummer';
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['table'] = 'field_data_field_huisnummer';
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['field'] = 'field_huisnummer';
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Naam */
	$handler->display->display_options ['fields'] ['field_org_stagementor_naam'] ['id'] = 'field_org_stagementor_naam';
	$handler->display->display_options ['fields'] ['field_org_stagementor_naam'] ['table'] = 'field_data_field_org_stagementor_naam';
	$handler->display->display_options ['fields'] ['field_org_stagementor_naam'] ['field'] = 'field_org_stagementor_naam';
	$handler->display->display_options ['fields'] ['field_org_stagementor_naam'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_stagementor_naam'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_stagementor_naam'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Naam */
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['id'] = 'field_org_contact_naam';
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['table'] = 'field_data_field_org_contact_naam';
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['field'] = 'field_org_contact_naam';
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Postcode */
	$handler->display->display_options ['fields'] ['field_postcode'] ['id'] = 'field_postcode';
	$handler->display->display_options ['fields'] ['field_postcode'] ['table'] = 'field_data_field_postcode';
	$handler->display->display_options ['fields'] ['field_postcode'] ['field'] = 'field_postcode';
	$handler->display->display_options ['fields'] ['field_postcode'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_postcode'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_postcode'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Straat */
	$handler->display->display_options ['fields'] ['field_straat'] ['id'] = 'field_straat';
	$handler->display->display_options ['fields'] ['field_straat'] ['table'] = 'field_data_field_straat';
	$handler->display->display_options ['fields'] ['field_straat'] ['field'] = 'field_straat';
	$handler->display->display_options ['fields'] ['field_straat'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_straat'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_straat'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Telefoonnummer */
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['id'] = 'field_org_stagementor_telefoon';
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['table'] = 'field_data_field_org_stagementor_telefoon';
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['field'] = 'field_org_stagementor_telefoon';
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['alter'] ['text'] = 'Tel.: [field_org_stagementor_telefoon]<br />';
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['type'] = 'telephone_link';
	$handler->display->display_options ['fields'] ['field_org_stagementor_telefoon'] ['settings'] = array (
			'title' => '' 
	);
	/* Veld: Inhoud: Telefoonnummer */
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['id'] = 'field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['table'] = 'field_data_field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['field'] = 'field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['alter'] ['text'] = 'Tel.: [field_telefoonnummer]<br />';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['type'] = 'telephone_link';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['settings'] = array (
			'title' => '' 
	);
	/* Veld: Inhoud: Telefoonnummer */
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['id'] = 'field_org_contact_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['table'] = 'field_data_field_org_contact_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['field'] = 'field_org_contact_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['alter'] ['text'] = 'Tel.: [field_org_contact_telefoonnummer]<br />';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['type'] = 'telephone_link';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['settings'] = array (
			'title' => '' 
	);
	/* Veld: Inhoud: Voornaam */
	$handler->display->display_options ['fields'] ['field_org_stagementor_voornaam'] ['id'] = 'field_org_stagementor_voornaam';
	$handler->display->display_options ['fields'] ['field_org_stagementor_voornaam'] ['table'] = 'field_data_field_org_stagementor_voornaam';
	$handler->display->display_options ['fields'] ['field_org_stagementor_voornaam'] ['field'] = 'field_org_stagementor_voornaam';
	$handler->display->display_options ['fields'] ['field_org_stagementor_voornaam'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_stagementor_voornaam'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_stagementor_voornaam'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Voornaam */
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['id'] = 'field_org_contact_voornaam';
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['table'] = 'field_data_field_org_contact_voornaam';
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['field'] = 'field_org_contact_voornaam';
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_2'] ['id'] = 'nothing_2';
	$handler->display->display_options ['fields'] ['nothing_2'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_2'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_2'] ['label'] = 'Adres';
	$handler->display->display_options ['fields'] ['nothing_2'] ['alter'] ['text'] = '[field_straat] [field_huisnummer] [field_busnummer]
[field_postcode] [field_gemeente]';
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_3'] ['id'] = 'nothing_3';
	$handler->display->display_options ['fields'] ['nothing_3'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_3'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_3'] ['label'] = 'Contactinformatie';
	$handler->display->display_options ['fields'] ['nothing_3'] ['alter'] ['text'] = '[field_telefoonnummer][field_email][field_faxnummer]';
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_1'] ['id'] = 'nothing_1';
	$handler->display->display_options ['fields'] ['nothing_1'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_1'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_1'] ['label'] = 'Contactpersoon';
	$handler->display->display_options ['fields'] ['nothing_1'] ['alter'] ['text'] = '[field_org_contact_naam], [field_org_contact_voornaam]<br />
<small>[field_org_contact_telefoonnummer] [field_org_contact_email]</small>';
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = 'Stagementor';
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '[field_org_stagementor_naam], [field_org_stagementor_voornaam]<br />
<small>[field_org_stagementor_telefoon] [field_org_stagementor_email]</small>';
	/* Veld: Inhoud: Relatie met de school */
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['id'] = 'field_relatie_met_de_school';
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['table'] = 'field_data_field_relatie_met_de_school';
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['field'] = 'field_relatie_met_de_school';
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['delta_offset'] = '0';
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
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
			'organisatie' => 'organisatie' 
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
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Organisatie';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Ondernemingsnummer (field_kbo_nummer) */
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['id'] = 'field_kbo_nummer_value';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['table'] = 'field_data_field_kbo_nummer';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['field'] = 'field_kbo_nummer_value';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['operator_id'] = 'field_kbo_nummer_value_op';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['label'] = 'Ondernemingsnummer';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['operator'] = 'field_kbo_nummer_value_op';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['identifier'] = 'field_kbo_nummer_value';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_field'] = 'field_kbo_nummer';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Gemeente (field_gemeente) */
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['id'] = 'field_gemeente_value';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['table'] = 'field_data_field_gemeente';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['field'] = 'field_gemeente_value';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['operator_id'] = 'field_gemeente_value_op';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['label'] = 'Gemeente';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['operator'] = 'field_gemeente_value_op';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['identifier'] = 'field_gemeente_value';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_field'] = 'field_gemeente';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Naam (field_org_contact_naam) */
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['id'] = 'field_org_contact_naam_value';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['table'] = 'field_data_field_org_contact_naam';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['field'] = 'field_org_contact_naam_value';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['operator_id'] = 'field_org_contact_naam_value_op';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['label'] = 'Contactpersoon';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['operator'] = 'field_org_contact_naam_value_op';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['identifier'] = 'field_org_contact_naam_value';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_field'] = 'field_org_contact_naam';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Naam (field_org_stagementor_naam) */
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['id'] = 'field_org_stagementor_naam_value';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['table'] = 'field_data_field_org_stagementor_naam';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['field'] = 'field_org_stagementor_naam_value';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['operator_id'] = 'field_org_stagementor_naam_value_op';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['label'] = 'Stagementor';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['operator'] = 'field_org_stagementor_naam_value_op';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['identifier'] = 'field_org_stagementor_naam_value';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['autocomplete_field'] = 'field_org_stagementor_naam';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_org_stagementor_naam_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Relatie met de school (field_relatie_met_de_school) */
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['id'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['table'] = 'field_data_field_relatie_met_de_school';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['field'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['operator_id'] = 'field_relatie_met_de_school_value_op';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['label'] = 'Relatie met de school';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['operator'] = 'field_relatie_met_de_school_value_op';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['identifier'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['reduce_duplicates'] = TRUE;
	
	/* Display: Overzicht */
	$handler = $view->new_display ( 'page', 'Overzicht', 'organisations_overview' );
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Ondernemingsnummer */
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['id'] = 'field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['table'] = 'field_data_field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['field'] = 'field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['alter'] ['text'] = 'KBO-nr.: [field_kbo_nummer]';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = 'Naam';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '[title]<br />
<small>[field_kbo_nummer]</small>';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
	/* Veld: Inhoud: Busnummer */
	$handler->display->display_options ['fields'] ['field_busnummer'] ['id'] = 'field_busnummer';
	$handler->display->display_options ['fields'] ['field_busnummer'] ['table'] = 'field_data_field_busnummer';
	$handler->display->display_options ['fields'] ['field_busnummer'] ['field'] = 'field_busnummer';
	$handler->display->display_options ['fields'] ['field_busnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_busnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_busnummer'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Email */
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['id'] = 'field_org_contact_email';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['table'] = 'field_data_field_org_contact_email';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['field'] = 'field_org_contact_email';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['alter'] ['text'] = 'E-mail: [field_org_contact_email]<br />';
	$handler->display->display_options ['fields'] ['field_org_contact_email'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Email */
	$handler->display->display_options ['fields'] ['field_email'] ['id'] = 'field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['table'] = 'field_data_field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['field'] = 'field_email';
	$handler->display->display_options ['fields'] ['field_email'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_email'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_email'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_email'] ['alter'] ['text'] = 'E-mail: [field_email]<br />';
	$handler->display->display_options ['fields'] ['field_email'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Faxnummer */
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['id'] = 'field_faxnummer';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['table'] = 'field_data_field_faxnummer';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['field'] = 'field_faxnummer';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['alter'] ['text'] = 'Fax: [field_faxnummer]<br />';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['type'] = 'telephone_link';
	$handler->display->display_options ['fields'] ['field_faxnummer'] ['settings'] = array (
			'title' => '' 
	);
	/* Veld: Inhoud: Gemeente */
	$handler->display->display_options ['fields'] ['field_gemeente'] ['id'] = 'field_gemeente';
	$handler->display->display_options ['fields'] ['field_gemeente'] ['table'] = 'field_data_field_gemeente';
	$handler->display->display_options ['fields'] ['field_gemeente'] ['field'] = 'field_gemeente';
	$handler->display->display_options ['fields'] ['field_gemeente'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_gemeente'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_gemeente'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Huisnummer */
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['id'] = 'field_huisnummer';
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['table'] = 'field_data_field_huisnummer';
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['field'] = 'field_huisnummer';
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_huisnummer'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Naam */
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['id'] = 'field_org_contact_naam';
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['table'] = 'field_data_field_org_contact_naam';
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['field'] = 'field_org_contact_naam';
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_naam'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Postcode */
	$handler->display->display_options ['fields'] ['field_postcode'] ['id'] = 'field_postcode';
	$handler->display->display_options ['fields'] ['field_postcode'] ['table'] = 'field_data_field_postcode';
	$handler->display->display_options ['fields'] ['field_postcode'] ['field'] = 'field_postcode';
	$handler->display->display_options ['fields'] ['field_postcode'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_postcode'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_postcode'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Straat */
	$handler->display->display_options ['fields'] ['field_straat'] ['id'] = 'field_straat';
	$handler->display->display_options ['fields'] ['field_straat'] ['table'] = 'field_data_field_straat';
	$handler->display->display_options ['fields'] ['field_straat'] ['field'] = 'field_straat';
	$handler->display->display_options ['fields'] ['field_straat'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_straat'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_straat'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Telefoonnummer */
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['id'] = 'field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['table'] = 'field_data_field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['field'] = 'field_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['alter'] ['text'] = 'Tel.: [field_telefoonnummer]<br />';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['type'] = 'telephone_link';
	$handler->display->display_options ['fields'] ['field_telefoonnummer'] ['settings'] = array (
			'title' => '' 
	);
	/* Veld: Inhoud: Telefoonnummer */
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['id'] = 'field_org_contact_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['table'] = 'field_data_field_org_contact_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['field'] = 'field_org_contact_telefoonnummer';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['alter'] ['text'] = 'Tel.: [field_org_contact_telefoonnummer]<br />';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['type'] = 'telephone_link';
	$handler->display->display_options ['fields'] ['field_org_contact_telefoonnummer'] ['settings'] = array (
			'title' => '' 
	);
	/* Veld: Inhoud: Voornaam */
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['id'] = 'field_org_contact_voornaam';
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['table'] = 'field_data_field_org_contact_voornaam';
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['field'] = 'field_org_contact_voornaam';
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_org_contact_voornaam'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_2'] ['id'] = 'nothing_2';
	$handler->display->display_options ['fields'] ['nothing_2'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_2'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_2'] ['label'] = 'Adres';
	$handler->display->display_options ['fields'] ['nothing_2'] ['alter'] ['text'] = '[field_straat] [field_huisnummer] [field_busnummer]
[field_postcode] [field_gemeente]';
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_3'] ['id'] = 'nothing_3';
	$handler->display->display_options ['fields'] ['nothing_3'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_3'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_3'] ['label'] = 'Contactinformatie';
	$handler->display->display_options ['fields'] ['nothing_3'] ['alter'] ['text'] = '[field_telefoonnummer][field_email][field_faxnummer]';
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_1'] ['id'] = 'nothing_1';
	$handler->display->display_options ['fields'] ['nothing_1'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_1'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_1'] ['label'] = 'Contactpersoon';
	$handler->display->display_options ['fields'] ['nothing_1'] ['alter'] ['text'] = '[field_org_contact_naam], [field_org_contact_voornaam]<br />
<small>[field_org_contact_telefoonnummer] [field_org_contact_email]</small>';
	/* Veld: Inhoud: Relatie met de school */
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['id'] = 'field_relatie_met_de_school';
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['table'] = 'field_data_field_relatie_met_de_school';
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['field'] = 'field_relatie_met_de_school';
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	$handler->display->display_options ['fields'] ['field_relatie_met_de_school'] ['delta_offset'] = '0';
	$handler->display->display_options ['defaults'] ['arguments'] = FALSE;
	/* Contextueel filter: Inhoud: Relatie met de school (field_relatie_met_de_school) */
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['id'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['table'] = 'field_data_field_relatie_met_de_school';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['field'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['exception'] ['title'] = 'Alle';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['default_argument_type'] = 'fixed';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['summary'] ['number_of_records'] = '0';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['summary'] ['format'] = 'default_summary';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['summary_options'] ['items_per_page'] = '25';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['limit'] = '0';
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
			'organisatie' => 'organisatie' 
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
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['label'] = 'Organisatie';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['operator'] = 'title_op';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['identifier'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_field'] = 'title';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['title'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Ondernemingsnummer (field_kbo_nummer) */
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['id'] = 'field_kbo_nummer_value';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['table'] = 'field_data_field_kbo_nummer';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['field'] = 'field_kbo_nummer_value';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['operator_id'] = 'field_kbo_nummer_value_op';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['label'] = 'Ondernemingsnummer';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['operator'] = 'field_kbo_nummer_value_op';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['identifier'] = 'field_kbo_nummer_value';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_field'] = 'field_kbo_nummer';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_kbo_nummer_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Gemeente (field_gemeente) */
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['id'] = 'field_gemeente_value';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['table'] = 'field_data_field_gemeente';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['field'] = 'field_gemeente_value';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['operator_id'] = 'field_gemeente_value_op';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['label'] = 'Gemeente';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['operator'] = 'field_gemeente_value_op';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['identifier'] = 'field_gemeente_value';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_field'] = 'field_gemeente';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_gemeente_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Naam (field_org_contact_naam) */
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['id'] = 'field_org_contact_naam_value';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['table'] = 'field_data_field_org_contact_naam';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['field'] = 'field_org_contact_naam_value';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['operator_id'] = 'field_org_contact_naam_value_op';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['label'] = 'Contactpersoon';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['operator'] = 'field_org_contact_naam_value_op';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['identifier'] = 'field_org_contact_naam_value';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_field'] = 'field_org_contact_naam';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_org_contact_naam_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Inhoud: Relatie met de school (field_relatie_met_de_school) */
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['id'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['table'] = 'field_data_field_relatie_met_de_school';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['field'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['operator_id'] = 'field_relatie_met_de_school_value_op';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['label'] = 'Relatie met de school';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['operator'] = 'field_relatie_met_de_school_value_op';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['identifier'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_relatie_met_de_school_value'] ['reduce_duplicates'] = TRUE;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'organisaties';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Organisaties';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	
	/* Display: Selectielijst met parameter */
	$handler = $view->new_display ( 'entityreference', 'Selectielijst met parameter', 'entityreference_organisaties' );
	$handler->display->display_options ['defaults'] ['title'] = FALSE;
	$handler->display->display_options ['defaults'] ['exposed_form'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
	$handler->display->display_options ['defaults'] ['style_plugin'] = FALSE;
	$handler->display->display_options ['style_plugin'] = 'entityreference_style';
	$handler->display->display_options ['style_options'] ['search_fields'] = array (
			'field_kbo_nummer' => 'field_kbo_nummer',
			'title' => 'title' 
	);
	$handler->display->display_options ['defaults'] ['style_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_plugin'] = FALSE;
	$handler->display->display_options ['row_plugin'] = 'entityreference_fields';
	$handler->display->display_options ['row_options'] ['default_field_elements'] = FALSE;
	$handler->display->display_options ['defaults'] ['row_options'] = FALSE;
	$handler->display->display_options ['defaults'] ['header'] = FALSE;
	$handler->display->display_options ['defaults'] ['footer'] = FALSE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Inhoud: Ondernemingsnummer */
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['id'] = 'field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['table'] = 'field_data_field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['field'] = 'field_kbo_nummer';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['alter'] ['text'] = ' ([field_kbo_nummer])';
	$handler->display->display_options ['fields'] ['field_kbo_nummer'] ['element_label_colon'] = FALSE;
	/* Veld: Inhoud: Titel */
	$handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['fields'] ['title'] ['label'] = '';
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '[title][field_kbo_nummer]';
	$handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['title'] ['link_to_node'] = FALSE;
	$handler->display->display_options ['defaults'] ['sorts'] = FALSE;
	/* Sorteercriterium: Inhoud: Titel */
	$handler->display->display_options ['sorts'] ['title'] ['id'] = 'title';
	$handler->display->display_options ['sorts'] ['title'] ['table'] = 'node';
	$handler->display->display_options ['sorts'] ['title'] ['field'] = 'title';
	$handler->display->display_options ['defaults'] ['arguments'] = FALSE;
	/* Contextueel filter: Inhoud: Relatie met de school (field_relatie_met_de_school) */
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['id'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['table'] = 'field_data_field_relatie_met_de_school';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['field'] = 'field_relatie_met_de_school_value';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['exception'] ['title'] = 'Alle';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['default_argument_type'] = 'fixed';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['summary'] ['number_of_records'] = '0';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['summary'] ['format'] = 'default_summary';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['summary_options'] ['items_per_page'] = '25';
	$handler->display->display_options ['arguments'] ['field_relatie_met_de_school_value'] ['limit'] = '0';
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
			'organisatie' => 'organisatie' 
	);
	$handler->display->display_options ['filters'] ['type'] ['group'] = 1;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$translatables ['organisaties'] = array (
			t ( 'Master' ),
			t ( 'Organisaties' ),
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
			t ( '<a href="/node/add/organisatie">Een nieuwe organisatie toevoegen</a>' ),
			t ( 'Getoond @start - @end van @total' ),
			t ( 'KBO-nr.: [field_kbo_nummer]' ),
			t ( 'Naam' ),
			t ( '[title]<br /><small>[field_kbo_nummer]</small>' ),
			t ( 'E-mail: [field_org_contact_email]<br />' ),
			t ( 'E-mail: [field_org_stagementor_email]<br />' ),
			t ( 'E-mail: [field_email]<br />' ),
			t ( 'Fax: [field_faxnummer]<br />' ),
			t ( 'Tel.: [field_org_stagementor_telefoon]<br />' ),
			t ( 'Tel.: [field_telefoonnummer]<br />' ),
			t ( 'Tel.: [field_org_contact_telefoonnummer]<br />' ),
			t ( 'Adres' ),
			t ( '[field_straat] [field_huisnummer] [field_busnummer] [field_postcode] [field_gemeente]' ),
			t ( 'Contactinformatie' ),
			t ( '[field_telefoonnummer][field_email][field_faxnummer]' ),
			t ( 'Contactpersoon' ),
			t ( '[field_org_contact_naam], [field_org_contact_voornaam]<br /><small>[field_org_contact_telefoonnummer] [field_org_contact_email]</small>' ),
			t ( 'Stagementor' ),
			t ( '[field_org_stagementor_naam], [field_org_stagementor_voornaam]<br /><small>[field_org_stagementor_telefoon] [field_org_stagementor_email]</small>' ),
			t ( 'Relatie met de school' ),
			t ( 'Organisatie' ),
			t ( 'Ondernemingsnummer' ),
			t ( 'Gemeente' ),
			t ( 'Overzicht' ),
			t ( 'Alle' ),
			t ( 'Selectielijst met parameter' ),
			t ( ' ([field_kbo_nummer])' ),
			t ( '[title][field_kbo_nummer]' ) 
	);
	$export ['organisaties'] = $view;
	
	return $export;
}
