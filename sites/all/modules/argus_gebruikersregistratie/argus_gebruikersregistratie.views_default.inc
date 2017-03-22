<?php
/**
 * @file
 * argus_projecten.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_gebruikersregistratie_views_default_views() {
	$export = array ();
	
	$view = new view ();
	$view->name = 'Gebruikersregistratie';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'users';
	$view->human_name = 'Gebruikersregistratie';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	
	/* Display: Master */
	$handler = $view->new_display ( 'default', 'Master', 'default' );
	$handler->display->display_options ['title'] = 'Inschrijvingen';
	$handler->display->display_options ['use_more_always'] = FALSE;
	$handler->display->display_options ['use_more_text'] = 'meer';
	$handler->display->display_options ['access'] ['type'] = 'role';
	
	$roles = array ();
	$roleNames = array (
			'administrator',
			'directie'
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
	
	$handler->display->display_options ['cache'] ['type'] = 'none';
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
			'field_user_tmp_voorinschrijving_value' => array (
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
			) 
	);
	$handler->display->display_options ['pager'] ['type'] = 'none';
	$handler->display->display_options ['style_plugin'] = 'table';
	$handler->display->display_options ['style_options'] ['columns'] = array (
			'field_user_sms_rijksregisternumm' => 'field_user_sms_rijksregisternumm',
			'counter' => 'counter',
			'uid' => 'uid',
			'realname' => 'realname',
			'field_user_tmp_reg_class' => 'field_user_tmp_reg_class',
			'field_user_sms_godsdienstkeuze_1' => 'field_user_sms_godsdienstkeuze_1',
			'created' => 'created',
			'field_user_tmp_voorinschrijving' => 'field_user_tmp_voorinschrijving',
			'nothing_2' => 'nothing_2',
			'nothing' => 'nothing',
			'nothing_1' => 'nothing_1',
			'views_conditional' => 'views_conditional' 
	);
	$handler->display->display_options ['style_options'] ['default'] = 'realname';
	$handler->display->display_options ['style_options'] ['info'] = array (
			'field_user_sms_rijksregisternumm' => array (
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
			'uid' => array (
					'sortable' => 0,
					'default_sort_order' => 'asc',
					'align' => '',
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
			'field_user_tmp_reg_class' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_user_sms_godsdienstkeuze_1' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-left',
					'separator' => '',
					'empty_column' => 0 
			),
			'created' => array (
					'sortable' => '1',
					'default_sort_order' => 'asc',
					'align' => 'views-align-center',
					'separator' => '',
					'empty_column' => 0 
			),
			'field_user_tmp_voorinschrijving' => array (
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
			'nothing' => array (
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			),
			'nothing_1' => array (
					'align' => '',
					'separator' => '',
					'empty_column' => 0 
			),
			'views_conditional' => array (
					'align' => 'views-align-right',
					'separator' => '',
					'empty_column' => 0 
			) 
	);
	/* Veld: Gebruiker: Rijksregisternummer */
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['id'] = 'field_user_sms_rijksregisternumm';
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['table'] = 'field_data_field_user_sms_rijksregisternumm';
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['field'] = 'field_user_sms_rijksregisternumm';
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Resultatenteller weergeven */
	$handler->display->display_options ['fields'] ['counter'] ['id'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['counter'] ['field'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['label'] = 'Nr.';
	$handler->display->display_options ['fields'] ['counter'] ['counter_start'] = '1';
	$handler->display->display_options ['fields'] ['counter'] ['reverse'] = 0;
	/* Veld: Gebruiker: Uid */
	$handler->display->display_options ['fields'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['fields'] ['uid'] ['table'] = 'users';
	$handler->display->display_options ['fields'] ['uid'] ['field'] = 'uid';
	$handler->display->display_options ['fields'] ['uid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['uid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['uid'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['uid'] ['link_to_user'] = FALSE;
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Leerling';
	/* Veld: Gebruiker: Inschrijving voor klas */
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_class'] ['id'] = 'field_user_tmp_reg_class';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_class'] ['table'] = 'field_data_field_user_tmp_reg_class';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_class'] ['field'] = 'field_user_tmp_reg_class';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_class'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Gebruiker: Aanmaakdatum */
	$handler->display->display_options ['fields'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['table'] = 'users';
	$handler->display->display_options ['fields'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['label'] = '';
	$handler->display->display_options ['fields'] ['created'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['created'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['created'] ['alter'] ['text'] = '<div style="font-size: 8px;">Registratie in argus: [created]</div>';
	$handler->display->display_options ['fields'] ['created'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['created'] ['date_format'] = 'datum_kort_';
	$handler->display->display_options ['fields'] ['created'] ['second_date_format'] = 'search_api_facetapi_YEAR';
	/* Veld: Gebruiker: Voorinschrijving */
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['id'] = 'field_user_tmp_voorinschrijving';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['table'] = 'field_data_field_user_tmp_voorinschrijving';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['field'] = 'field_user_tmp_voorinschrijving';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['alter'] ['text'] = '<div style="font-size: 8px;">Voorinschrijving: [field_user_tmp_voorinschrijving]</div>';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['settings'] = array (
			'format_type' => 'datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_2'] ['id'] = 'nothing_2';
	$handler->display->display_options ['fields'] ['nothing_2'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_2'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_2'] ['label'] = 'Registratiedatums';
	$handler->display->display_options ['fields'] ['nothing_2'] ['alter'] ['text'] = '[field_user_tmp_voorinschrijving][created]';
	/* Veld: acties_inschrijving */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['ui_name'] = 'acties_inschrijving';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nothing'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '<a href="/gebruikersregistratie/leerling/[uid]">dossier heropenen</a> - <a href="/documenten_generator.get/CNT_Inschrijvingsdossier/leerling=[uid]">dossier downloaden</a><br /><a href="/gebruikersregistratie.saveToSmartschool/[uid]">registreren in Smartschool</a>';
	$handler->display->display_options ['fields'] ['nothing'] ['element_label_colon'] = FALSE;
	/* Veld: acties_voorinschrijving */
	$handler->display->display_options ['fields'] ['nothing_1'] ['id'] = 'nothing_1';
	$handler->display->display_options ['fields'] ['nothing_1'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_1'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_1'] ['ui_name'] = 'acties_voorinschrijving';
	$handler->display->display_options ['fields'] ['nothing_1'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nothing_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nothing_1'] ['alter'] ['text'] = '<a href="/gebruikersregistratie/leerling/[uid]">definitief inschrijven</a> - <a href="/documenten_generator.get/CNT_Voorinschrijvingsdossier/leerling=[uid]">dossier downloaden</a>';
	$handler->display->display_options ['fields'] ['nothing_1'] ['element_label_colon'] = FALSE;
	/* Veld: Overzichten: Views Conditional */
	$handler->display->display_options ['fields'] ['views_conditional'] ['id'] = 'views_conditional';
	$handler->display->display_options ['fields'] ['views_conditional'] ['table'] = 'views_conditional';
	$handler->display->display_options ['fields'] ['views_conditional'] ['field'] = 'views_conditional';
	$handler->display->display_options ['fields'] ['views_conditional'] ['label'] = 'Acties';
	$handler->display->display_options ['fields'] ['views_conditional'] ['if'] = 'field_user_sms_rijksregisternumm';
	$handler->display->display_options ['fields'] ['views_conditional'] ['condition'] = '5';
	$handler->display->display_options ['fields'] ['views_conditional'] ['then'] = '[nothing_1]';
	$handler->display->display_options ['fields'] ['views_conditional'] ['or'] = '[nothing]';
	$handler->display->display_options ['fields'] ['views_conditional'] ['strip_tags'] = 0;
	/* Filtercriterium: Gebruiker: Actief */
	$handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['table'] = 'users';
	$handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
	$handler->display->display_options ['filters'] ['status'] ['value'] = '0';
	$handler->display->display_options ['filters'] ['status'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
	/* Filtercriterium: Gebruiker: Registratie in Smartschool (field_user_tmp_reg_smartschool) */
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['id'] = 'field_user_tmp_reg_smartschool_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['table'] = 'field_data_field_user_tmp_reg_smartschool';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['field'] = 'field_user_tmp_reg_smartschool_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['value'] = 'unregistered';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['group'] = 1;
	
	/* Display: Inschrijvingen */
	$handler = $view->new_display ( 'page', 'Inschrijvingen', 'inschrijvingen_overzicht' );
	$handler->display->display_options ['defaults'] ['exposed_form'] = FALSE;
	$handler->display->display_options ['exposed_form'] ['type'] = 'basic';
	$handler->display->display_options ['exposed_form'] ['options'] ['submit_button'] = 'Toepassen';
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button'] = TRUE;
	$handler->display->display_options ['exposed_form'] ['options'] ['reset_button_label'] = 'Opnieuw instellen';
	$handler->display->display_options ['exposed_form'] ['options'] ['exposed_sorts_label'] = 'Sorteren op';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_asc_label'] = 'Oplopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['sort_desc_label'] = 'Aflopend';
	$handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = FALSE;
	$handler->display->display_options ['exposed_block'] = TRUE;
	$handler->display->display_options ['defaults'] ['fields'] = FALSE;
	/* Veld: Gebruiker: Rijksregisternummer */
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['id'] = 'field_user_sms_rijksregisternumm';
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['table'] = 'field_data_field_user_sms_rijksregisternumm';
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['field'] = 'field_user_sms_rijksregisternumm';
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_sms_rijksregisternumm'] ['element_label_colon'] = FALSE;
	/* Veld: Algemeen: Resultatenteller weergeven */
	$handler->display->display_options ['fields'] ['counter'] ['id'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['counter'] ['field'] = 'counter';
	$handler->display->display_options ['fields'] ['counter'] ['label'] = 'Nr.';
	$handler->display->display_options ['fields'] ['counter'] ['counter_start'] = '1';
	$handler->display->display_options ['fields'] ['counter'] ['reverse'] = 0;
	/* Veld: Gebruiker: Uid */
	$handler->display->display_options ['fields'] ['uid'] ['id'] = 'uid';
	$handler->display->display_options ['fields'] ['uid'] ['table'] = 'users';
	$handler->display->display_options ['fields'] ['uid'] ['field'] = 'uid';
	$handler->display->display_options ['fields'] ['uid'] ['label'] = '';
	$handler->display->display_options ['fields'] ['uid'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['uid'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['uid'] ['link_to_user'] = FALSE;
	/* Veld: Echte naam: Werkelijke naam */
	$handler->display->display_options ['fields'] ['realname'] ['id'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['table'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['field'] = 'realname';
	$handler->display->display_options ['fields'] ['realname'] ['label'] = 'Leerling';
	/* Veld: Gebruiker: Inschrijving voor klas */
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_class'] ['id'] = 'field_user_tmp_reg_class';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_class'] ['table'] = 'field_data_field_user_tmp_reg_class';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_class'] ['field'] = 'field_user_tmp_reg_class';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_class'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Gebruiker: Godsdienstkeuze */
	$handler->display->display_options ['fields'] ['field_user_sms_godsdienstkeuze_1'] ['id'] = 'field_user_sms_godsdienstkeuze_1';
	$handler->display->display_options ['fields'] ['field_user_sms_godsdienstkeuze_1'] ['table'] = 'field_data_field_user_sms_godsdienstkeuze';
	$handler->display->display_options ['fields'] ['field_user_sms_godsdienstkeuze_1'] ['field'] = 'field_user_sms_godsdienstkeuze';
	/* Veld: Gebruiker: Aanmaakdatum */
	$handler->display->display_options ['fields'] ['created'] ['id'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['table'] = 'users';
	$handler->display->display_options ['fields'] ['created'] ['field'] = 'created';
	$handler->display->display_options ['fields'] ['created'] ['label'] = '';
	$handler->display->display_options ['fields'] ['created'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['created'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['created'] ['alter'] ['text'] = '<div style="font-size: 8px;">Registratie in argus: [created]</div>';
	$handler->display->display_options ['fields'] ['created'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['created'] ['date_format'] = 'datum_kort_';
	$handler->display->display_options ['fields'] ['created'] ['second_date_format'] = 'search_api_facetapi_YEAR';
	/* Veld: Gebruiker: Voorinschrijving */
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['id'] = 'field_user_tmp_voorinschrijving';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['table'] = 'field_data_field_user_tmp_voorinschrijving';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['field'] = 'field_user_tmp_voorinschrijving';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['alter'] ['alter_text'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['alter'] ['text'] = '<div style="font-size: 8px;">Voorinschrijving: [field_user_tmp_voorinschrijving]</div>';
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_user_tmp_voorinschrijving'] ['settings'] = array (
			'format_type' => 'datum_kort_',
			'fromto' => 'both',
			'multiple_number' => '',
			'multiple_from' => '',
			'multiple_to' => '',
			'show_remaining_days' => 0,
			'show_repeat_rule' => 'show' 
	);
	/* Veld: Gebruiker: Registratie in Smartschool */
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_smartschool'] ['id'] = 'field_user_tmp_reg_smartschool';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_smartschool'] ['table'] = 'field_data_field_user_tmp_reg_smartschool';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_smartschool'] ['field'] = 'field_user_tmp_reg_smartschool';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_smartschool'] ['label'] = '';
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_smartschool'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_smartschool'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['field_user_tmp_reg_smartschool'] ['settings'] = array (
			'conditions' => array (
					0 => array (
							'condition' => '' 
					) 
			) 
	);
	/* Veld: Overzichten: Views Conditional */
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['id'] = 'views_conditional_1';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['table'] = 'views_conditional';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['field'] = 'views_conditional';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['label'] = '';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['element_label_colon'] = FALSE;
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['if'] = 'field_user_tmp_reg_smartschool';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['condition'] = '1';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['equalto'] = 'unregistered';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['then'] = '<span style="font-size: 8px !important">Registratie Smartschool: <span style="color: red">niet geregistreerd</span>';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['or'] = '<span style="font-size: 8px !important">Registratie Smartschool: [field_user_tmp_reg_smartschool]</span>';
	$handler->display->display_options ['fields'] ['views_conditional_1'] ['strip_tags'] = 0;
	/* Veld: Algemeen: Aangepaste tekst */
	$handler->display->display_options ['fields'] ['nothing_2'] ['id'] = 'nothing_2';
	$handler->display->display_options ['fields'] ['nothing_2'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_2'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_2'] ['label'] = 'Registratiedatums';
	$handler->display->display_options ['fields'] ['nothing_2'] ['alter'] ['text'] = '[field_user_tmp_voorinschrijving][created]
[views_conditional_1]';
	/* Veld: acties_inschrijving */
	$handler->display->display_options ['fields'] ['nothing'] ['id'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing'] ['ui_name'] = 'acties_inschrijving';
	$handler->display->display_options ['fields'] ['nothing'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nothing'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nothing'] ['alter'] ['text'] = '<a href="/gebruikersregistratie/leerling/[uid]">dossier heropenen</a> - <a href="/documenten_generator.get/CNT_Inschrijvingsdossier/leerling=[uid]">dossier downloaden</a><br /><a href="/gebruikersregistratie.saveToSmartschool/[uid]">registreren in Smartschool</a>';
	$handler->display->display_options ['fields'] ['nothing'] ['element_label_colon'] = FALSE;
	/* Veld: acties_voorinschrijving */
	$handler->display->display_options ['fields'] ['nothing_1'] ['id'] = 'nothing_1';
	$handler->display->display_options ['fields'] ['nothing_1'] ['table'] = 'views';
	$handler->display->display_options ['fields'] ['nothing_1'] ['field'] = 'nothing';
	$handler->display->display_options ['fields'] ['nothing_1'] ['ui_name'] = 'acties_voorinschrijving';
	$handler->display->display_options ['fields'] ['nothing_1'] ['label'] = '';
	$handler->display->display_options ['fields'] ['nothing_1'] ['exclude'] = TRUE;
	$handler->display->display_options ['fields'] ['nothing_1'] ['alter'] ['text'] = '<a href="/gebruikersregistratie/leerling/[uid]">definitief inschrijven</a> - <a href="/documenten_generator.get/CNT_Voorinschrijvingsdossier/leerling=[uid]">dossier downloaden</a>';
	$handler->display->display_options ['fields'] ['nothing_1'] ['element_label_colon'] = FALSE;
	/* Veld: Overzichten: Views Conditional */
	$handler->display->display_options ['fields'] ['views_conditional'] ['id'] = 'views_conditional';
	$handler->display->display_options ['fields'] ['views_conditional'] ['table'] = 'views_conditional';
	$handler->display->display_options ['fields'] ['views_conditional'] ['field'] = 'views_conditional';
	$handler->display->display_options ['fields'] ['views_conditional'] ['label'] = 'Acties';
	$handler->display->display_options ['fields'] ['views_conditional'] ['if'] = 'field_user_sms_rijksregisternumm';
	$handler->display->display_options ['fields'] ['views_conditional'] ['condition'] = '5';
	$handler->display->display_options ['fields'] ['views_conditional'] ['then'] = '[nothing_1]';
	$handler->display->display_options ['fields'] ['views_conditional'] ['or'] = '[nothing]';
	$handler->display->display_options ['fields'] ['views_conditional'] ['strip_tags'] = 0;
	$handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
	$handler->display->display_options ['filter_groups'] ['groups'] = array (
			1 => 'OR',
			2 => 'AND' 
	);
	$handler->display->display_options ['defaults'] ['filters'] = FALSE;
	/* Filtercriterium: Gebruiker: Registratie in Smartschool (field_user_tmp_reg_smartschool) */
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['id'] = 'field_user_tmp_reg_smartschool_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['table'] = 'field_data_field_user_tmp_reg_smartschool';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['field'] = 'field_user_tmp_reg_smartschool_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['value'] = 'unregistered';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value'] ['group'] = 1;
	/* Filtercriterium: Schooljaar */
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['id'] = 'field_user_tmp_reg_smartschool_value_1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['table'] = 'field_data_field_user_tmp_reg_smartschool';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['field'] = 'field_user_tmp_reg_smartschool_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['ui_name'] = 'Schooljaar';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['group'] = 1;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['expose'] ['operator_id'] = 'field_user_tmp_reg_smartschool_value_1_op';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['expose'] ['label'] = 'Registratie in Smartschool (field_user_tmp_reg_smartschool)';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['expose'] ['operator'] = 'field_user_tmp_reg_smartschool_value_1_op';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['expose'] ['identifier'] = 'field_user_tmp_reg_smartschool_value_1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['is_grouped'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['group_info'] ['label'] = 'Schooljaar';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['group_info'] ['identifier'] = 'field_user_tmp_reg_smartschool_value_1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['group_info'] ['optional'] = FALSE;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['group_info'] ['default_group'] = '1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['group_info'] ['default_group_multiple'] = array (
			1 => '1' 
	);
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_smartschool_value_1'] ['group_info'] ['group_items'] = array (
			1 => array (
					'title' => '2016-2017',
					'operator' => 'contains',
					'value' => '2016' 
			),
			2 => array (
					'title' => '2017-2018',
					'operator' => 'contains',
					'value' => '2017' 
			) 
	);
	/* Filtercriterium: Gebruiker: Inschrijving voor klas (field_user_tmp_reg_class) */
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['id'] = 'field_user_tmp_reg_class_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['table'] = 'field_data_field_user_tmp_reg_class';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['field'] = 'field_user_tmp_reg_class_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['group'] = 2;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['operator_id'] = 'field_user_tmp_reg_class_value_op';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['label'] = 'Klas';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['operator'] = 'field_user_tmp_reg_class_value_op';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['identifier'] = 'field_user_tmp_reg_class_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['autocomplete_field'] = 'field_user_tmp_reg_class';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value'] ['expose'] ['autocomplete_dependent'] = 0;
	/* Filtercriterium: Type */
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['id'] = 'field_user_sms_rekeningnummer_ge_value';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['table'] = 'field_data_field_user_sms_rekeningnummer_ge';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['field'] = 'field_user_sms_rekeningnummer_ge_value';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['ui_name'] = 'Type';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['group'] = 2;
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['expose'] ['operator_id'] = 'field_user_sms_rekeningnummer_ge_value_op';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['expose'] ['label'] = 'Rekeningnummer gezin (field_user_sms_rekeningnummer_ge)';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['expose'] ['operator'] = 'field_user_sms_rekeningnummer_ge_value_op';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['expose'] ['identifier'] = 'field_user_sms_rekeningnummer_ge_value';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['is_grouped'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['group_info'] ['label'] = 'Type';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['group_info'] ['identifier'] = 'field_user_sms_rekeningnummer_ge_value';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['group_info'] ['widget'] = 'radios';
	$handler->display->display_options ['filters'] ['field_user_sms_rekeningnummer_ge_value'] ['group_info'] ['group_items'] = array (
			1 => array (
					'title' => 'Voorinschrijving',
					'operator' => 'empty',
					'value' => '1' 
			),
			2 => array (
					'title' => 'Definitief',
					'operator' => 'not empty',
					'value' => '1' 
			) 
	);
	/* Filtercriterium: School */
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['id'] = 'field_user_tmp_reg_class_value_1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['table'] = 'field_data_field_user_tmp_reg_class';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['field'] = 'field_user_tmp_reg_class_value';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['ui_name'] = 'School';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['group'] = 2;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['expose'] ['operator_id'] = 'field_user_tmp_reg_class_value_1_op';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['expose'] ['label'] = 'Inschrijving voor klas (field_user_tmp_reg_class)';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['expose'] ['operator'] = 'field_user_tmp_reg_class_value_1_op';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['expose'] ['identifier'] = 'field_user_tmp_reg_class_value_1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['expose'] ['multiple'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['is_grouped'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['group_info'] ['label'] = 'School';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['group_info'] ['identifier'] = 'field_user_tmp_reg_class_value_1';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['group_info'] ['widget'] = 'radios';
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['group_info'] ['default_group_multiple'] = array (
			1 => '1' 
	);
	$handler->display->display_options ['filters'] ['field_user_tmp_reg_class_value_1'] ['group_info'] ['group_items'] = array ();
	/* Filtercriterium: Gebruiker: Godsdienstkeuze (field_user_sms_godsdienstkeuze) */
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['id'] = 'field_user_sms_godsdienstkeuze_value';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['table'] = 'field_data_field_user_sms_godsdienstkeuze';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['field'] = 'field_user_sms_godsdienstkeuze_value';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['operator'] = 'contains';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['group'] = 2;
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['exposed'] = TRUE;
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['operator_id'] = 'field_user_sms_godsdienstkeuze_value_op';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['label'] = 'Godsdienstkeuze';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['operator'] = 'field_user_sms_godsdienstkeuze_value_op';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['identifier'] = 'field_user_sms_godsdienstkeuze_value';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['remember_roles'] = array ();
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['autocomplete_items'] = '10';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['autocomplete_min_chars'] = '0';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['autocomplete_field'] = 'field_user_sms_godsdienstkeuze_1';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['autocomplete_raw_suggestion'] = '1';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['autocomplete_raw_dropdown'] = '1';
	$handler->display->display_options ['filters'] ['field_user_sms_godsdienstkeuze_value'] ['expose'] ['autocomplete_dependent'] = 0;
	$handler->display->display_options ['qtip_instance'] = 'standaard';
	$handler->display->display_options ['path'] = 'gebruikersregistratie/leerling-beheer';
	$handler->display->display_options ['menu'] ['type'] = 'normal';
	$handler->display->display_options ['menu'] ['title'] = 'Inschrijvingen';
	if (menu_load ( 'menu-modules' )) {
		$menu = 'menu-modules';
	} else {
		$menu = 'navigation';
	}
	$handler->display->display_options ['menu'] ['name'] = $menu;
	
	$translatables ['Gebruikersregistratie'] = array (
			t ( 'Master' ),
			t ( 'Inschrijvingen' ),
			t ( 'meer' ),
			t ( 'Toepassen' ),
			t ( 'Opnieuw instellen' ),
			t ( 'Sorteren op' ),
			t ( 'Oplopend' ),
			t ( 'Aflopend' ),
			t ( 'Uitgebreide opties' ),
			t ( 'Nr.' ),
			t ( 'Leerling' ),
			t ( 'Inschrijving voor klas' ),
			t ( '<div style="font-size: 8px;">Registratie in argus: [created]</div>' ),
			t ( '<div style="font-size: 8px;">Voorinschrijving: [field_user_tmp_voorinschrijving]</div>' ),
			t ( 'Registratiedatums' ),
			t ( '[field_user_tmp_voorinschrijving][created]' ),
			t ( '<a href="/gebruikersregistratie/leerling/[uid]">dossier heropenen</a> - <a href="/documenten_generator.get/CNT_Inschrijvingsdossier/leerling=[uid]">dossier downloaden</a><br /><a href="/gebruikersregistratie.saveToSmartschool/[uid]">registreren in Smartschool</a>' ),
			t ( '<a href="/gebruikersregistratie/leerling/[uid]">definitief inschrijven</a> - <a href="/documenten_generator.get/CNT_Voorinschrijvingsdossier/leerling=[uid]">dossier downloaden</a>' ),
			t ( 'Acties' ),
			t ( 'Godsdienstkeuze' ),
			t ( '[field_user_tmp_voorinschrijving][created]
[views_conditional_1]' ),
			t ( 'Registratie in Smartschool (field_user_tmp_reg_smartschool)' ),
			t ( 'Schooljaar' ),
			t ( 'Klas' ),
			t ( 'Rekeningnummer gezin (field_user_sms_rekeningnummer_ge)' ),
			t ( 'Type' ),
			t ( 'Inschrijving voor klas (field_user_tmp_reg_class)' ),
			t ( 'School' ) 
	);
	$export ['gebruikersregistratie'] = $view;
	
	return $export;
}
