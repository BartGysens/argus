<?php
/**
 * @file
 * argus_maatregelen_bij_schending_van_de_leefregels.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'maatregelen';
  $view->description = 'Maatregelen die gehanteerd kunnen worden voor bij allerlei problematieken.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Maatregelen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sticker onwettige afwezigheid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    216 => '216',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Uitgebreide opties',
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_maatregelen_categorie_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_msl_maatregelen_categorie' => 'field_msl_maatregelen_categorie',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'field_msl_maatregelen_categorie';
  $handler->display->display_options['style_options']['info'] = array(
    'field_msl_maatregelen_categorie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kop: Algemeen: Tekstveld */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Sticker toevoegen';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/msl-oa-sticker">Een nieuwe rode sticker toevoegen</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Voet: Algemeen: Tekstveld */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Sticker toevoegen';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/msl-oa-sticker">Een nieuwe rode sticker toevoegen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_msl_oa_sticker_leerling_target_id']['id'] = 'field_msl_oa_sticker_leerling_target_id';
  $handler->display->display_options['relationships']['field_msl_oa_sticker_leerling_target_id']['table'] = 'field_data_field_msl_oa_sticker_leerling';
  $handler->display->display_options['relationships']['field_msl_oa_sticker_leerling_target_id']['field'] = 'field_msl_oa_sticker_leerling_target_id';
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_msl_oa_sticker_f2_maatreg_target_id']['id'] = 'field_msl_oa_sticker_f2_maatreg_target_id';
  $handler->display->display_options['relationships']['field_msl_oa_sticker_f2_maatreg_target_id']['table'] = 'field_data_field_msl_oa_sticker_f2_maatreg';
  $handler->display->display_options['relationships']['field_msl_oa_sticker_f2_maatreg_target_id']['field'] = 'field_msl_oa_sticker_f2_maatreg_target_id';
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Algemeen: Resultatenteller weergeven */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Nr.';
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['path'] = '/node/edit/[nid]';
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Veld: Gebruiker: Voornaam */
  $handler->display->display_options['fields']['field_user_sms_voornaam']['id'] = 'field_user_sms_voornaam';
  $handler->display->display_options['fields']['field_user_sms_voornaam']['table'] = 'field_data_field_user_sms_voornaam';
  $handler->display->display_options['fields']['field_user_sms_voornaam']['field'] = 'field_user_sms_voornaam';
  $handler->display->display_options['fields']['field_user_sms_voornaam']['relationship'] = 'field_msl_oa_sticker_leerling_target_id';
  $handler->display->display_options['fields']['field_user_sms_voornaam']['label'] = '';
  $handler->display->display_options['fields']['field_user_sms_voornaam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_sms_voornaam']['element_label_colon'] = FALSE;
  /* Veld: Gebruiker: Achternaam */
  $handler->display->display_options['fields']['field_user_sms_naam']['id'] = 'field_user_sms_naam';
  $handler->display->display_options['fields']['field_user_sms_naam']['table'] = 'field_data_field_user_sms_naam';
  $handler->display->display_options['fields']['field_user_sms_naam']['field'] = 'field_user_sms_naam';
  $handler->display->display_options['fields']['field_user_sms_naam']['relationship'] = 'field_msl_oa_sticker_leerling_target_id';
  $handler->display->display_options['fields']['field_user_sms_naam']['label'] = 'Leerling';
  $handler->display->display_options['fields']['field_user_sms_naam']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_sms_naam']['alter']['text'] = '[field_user_sms_naam], [field_user_sms_voornaam]';
  $handler->display->display_options['fields']['field_user_sms_naam']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_sms_naam']['alter']['path'] = 'users/[field_user_sms_naam]-[field_user_sms_voornaam]';
  $handler->display->display_options['fields']['field_user_sms_naam']['alter']['absolute'] = TRUE;
  /* Veld: Inhoud: Datum - fase 1 */
  $handler->display->display_options['fields']['field_msl_oa_sticker_f1_datum']['id'] = 'field_msl_oa_sticker_f1_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f1_datum']['table'] = 'field_data_field_msl_oa_sticker_f1_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f1_datum']['field'] = 'field_msl_oa_sticker_f1_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f1_datum']['label'] = 'Datum fase 1';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f1_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Veld: Inhoud: Datum - fase 2 */
  $handler->display->display_options['fields']['field_msl_oa_sticker_f2_datum']['id'] = 'field_msl_oa_sticker_f2_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f2_datum']['table'] = 'field_data_field_msl_oa_sticker_f2_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f2_datum']['field'] = 'field_msl_oa_sticker_f2_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f2_datum']['label'] = 'Datum fase 2';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f2_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Veld: Inhoud: Datum - fase 3 */
  $handler->display->display_options['fields']['field_msl_oa_sticker_f3_datum']['id'] = 'field_msl_oa_sticker_f3_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f3_datum']['table'] = 'field_data_field_msl_oa_sticker_f3_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f3_datum']['field'] = 'field_msl_oa_sticker_f3_datum';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f3_datum']['label'] = 'Datum fase 3';
  $handler->display->display_options['fields']['field_msl_oa_sticker_f3_datum']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Bewerken';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'msl_oa_sticker' => 'msl_oa_sticker',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Algemeen: Veldenfilter combineren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Leerling';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    81 => 0,
    8 => 0,
    88 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    229 => 0,
    89 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    192 => 0,
    193 => 0,
    194 => 0,
    195 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    209 => 0,
    82 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    216 => 0,
    217 => 0,
    227 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_user_sms_voornaam' => 'field_user_sms_voornaam',
    'field_user_sms_naam' => 'field_user_sms_naam',
  );

  /* Display: Overzicht: maatregelen */
  $handler = $view->new_display('page', 'Overzicht: maatregelen', 'maatregelen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Maatregelen';
  $handler->display->display_options['display_description'] = 'Lijst van alle maatregelen die in ons schoolreglement staan.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_maatregelen_categorie',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_maatregelen_categorie' => 'field_maatregelen_categorie',
    'field_maatregelen_gewicht' => 'field_maatregelen_gewicht',
    'title' => 'title',
    'field_maatregelen_procedure' => 'field_maatregelen_procedure',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_maatregelen_categorie' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maatregelen_gewicht' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maatregelen_procedure' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kop: Algemeen: Tekstveld */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/maatregelen">Een nieuwe maatregel toevoegen</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Voet: Algemeen: Samenvatting van het resultaat */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Getoond @start - @end van @total';
  /* Voet: Algemeen: Tekstveld */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/maatregelen">Een nieuwe maatregel toevoegen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Categorie */
  $handler->display->display_options['fields']['field_maatregelen_categorie']['id'] = 'field_maatregelen_categorie';
  $handler->display->display_options['fields']['field_maatregelen_categorie']['table'] = 'field_data_field_maatregelen_categorie';
  $handler->display->display_options['fields']['field_maatregelen_categorie']['field'] = 'field_maatregelen_categorie';
  $handler->display->display_options['fields']['field_maatregelen_categorie']['label'] = '';
  $handler->display->display_options['fields']['field_maatregelen_categorie']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maatregelen_categorie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maatregelen_categorie']['group_column'] = 'entity_id';
  /* Veld: Inhoud: Gewicht */
  $handler->display->display_options['fields']['field_maatregelen_gewicht']['id'] = 'field_maatregelen_gewicht';
  $handler->display->display_options['fields']['field_maatregelen_gewicht']['table'] = 'field_data_field_maatregelen_gewicht';
  $handler->display->display_options['fields']['field_maatregelen_gewicht']['field'] = 'field_maatregelen_gewicht';
  $handler->display->display_options['fields']['field_maatregelen_gewicht']['label'] = '';
  $handler->display->display_options['fields']['field_maatregelen_gewicht']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maatregelen_gewicht']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maatregelen_gewicht']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '§[field_maatregelen_gewicht] - [title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Procedure */
  $handler->display->display_options['fields']['field_maatregelen_procedure']['id'] = 'field_maatregelen_procedure';
  $handler->display->display_options['fields']['field_maatregelen_procedure']['table'] = 'field_data_field_maatregelen_procedure';
  $handler->display->display_options['fields']['field_maatregelen_procedure']['field'] = 'field_maatregelen_procedure';
  $handler->display->display_options['fields']['field_maatregelen_procedure']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteercriterium: Inhoud: Categorie (field_maatregelen_categorie) */
  $handler->display->display_options['sorts']['field_maatregelen_categorie_value']['id'] = 'field_maatregelen_categorie_value';
  $handler->display->display_options['sorts']['field_maatregelen_categorie_value']['table'] = 'field_data_field_maatregelen_categorie';
  $handler->display->display_options['sorts']['field_maatregelen_categorie_value']['field'] = 'field_maatregelen_categorie_value';
  /* Sorteercriterium: Inhoud: Gewicht (field_maatregelen_gewicht) */
  $handler->display->display_options['sorts']['field_maatregelen_gewicht_value']['id'] = 'field_maatregelen_gewicht_value';
  $handler->display->display_options['sorts']['field_maatregelen_gewicht_value']['table'] = 'field_data_field_maatregelen_gewicht';
  $handler->display->display_options['sorts']['field_maatregelen_gewicht_value']['field'] = 'field_maatregelen_gewicht_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'maatregelen' => 'maatregelen',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Inhoud: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Maatregel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    81 => 0,
    8 => 0,
    88 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    229 => 0,
    89 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    192 => 0,
    193 => 0,
    194 => 0,
    195 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    209 => 0,
    82 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    216 => 0,
    217 => 0,
    227 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
  );
  /* Filtercriterium: Inhoud: Categorie (field_maatregelen_categorie) */
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['id'] = 'field_maatregelen_categorie_value';
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['table'] = 'field_data_field_maatregelen_categorie';
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['field'] = 'field_maatregelen_categorie_value';
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['group'] = 1;
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['expose']['operator_id'] = 'field_maatregelen_categorie_value_op';
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['expose']['label'] = 'Categorie';
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['expose']['operator'] = 'field_maatregelen_categorie_value_op';
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['expose']['identifier'] = 'field_maatregelen_categorie_value';
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    44 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    58 => 0,
    59 => 0,
    60 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    79 => 0,
    6 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    226 => 0,
    81 => 0,
    8 => 0,
    88 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    94 => 0,
    95 => 0,
    96 => 0,
    97 => 0,
    98 => 0,
    99 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    229 => 0,
    89 => 0,
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    115 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    119 => 0,
    120 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    125 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    144 => 0,
    5 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
    149 => 0,
    150 => 0,
    151 => 0,
    152 => 0,
    153 => 0,
    154 => 0,
    155 => 0,
    156 => 0,
    157 => 0,
    158 => 0,
    159 => 0,
    160 => 0,
    161 => 0,
    162 => 0,
    163 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    168 => 0,
    169 => 0,
    170 => 0,
    171 => 0,
    172 => 0,
    173 => 0,
    174 => 0,
    175 => 0,
    176 => 0,
    177 => 0,
    178 => 0,
    179 => 0,
    180 => 0,
    181 => 0,
    182 => 0,
    183 => 0,
    184 => 0,
    185 => 0,
    186 => 0,
    187 => 0,
    188 => 0,
    189 => 0,
    190 => 0,
    191 => 0,
    192 => 0,
    193 => 0,
    194 => 0,
    195 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    209 => 0,
    82 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    216 => 0,
    217 => 0,
    227 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
  );
  $handler->display->display_options['filters']['field_maatregelen_categorie_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'maatregelen/overzicht';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Maatregelen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Selectielijst: maatregelen */
  $handler = $view->new_display('entityreference', 'Selectielijst: maatregelen', 'selectielijst_maatregelen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Maatregelen';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'msl_maatregelen';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['field_language'] = 'und';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_maatregelen_categorie',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_maatregelen_categorie' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Categorie */
  $handler->display->display_options['fields']['field_maatregelen_categorie']['id'] = 'field_maatregelen_categorie';
  $handler->display->display_options['fields']['field_maatregelen_categorie']['table'] = 'field_data_field_maatregelen_categorie';
  $handler->display->display_options['fields']['field_maatregelen_categorie']['field'] = 'field_maatregelen_categorie';
  $handler->display->display_options['fields']['field_maatregelen_categorie']['label'] = '';
  $handler->display->display_options['fields']['field_maatregelen_categorie']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maatregelen_categorie']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_maatregelen_categorie] - [title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteercriterium: Inhoud: Gewicht (field_maatregelen_gewicht) */
  $handler->display->display_options['sorts']['field_maatregelen_gewicht_value']['id'] = 'field_maatregelen_gewicht_value';
  $handler->display->display_options['sorts']['field_maatregelen_gewicht_value']['table'] = 'field_data_field_maatregelen_gewicht';
  $handler->display->display_options['sorts']['field_maatregelen_gewicht_value']['field'] = 'field_maatregelen_gewicht_value';
  /* Sorteercriterium: Inhoud: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextueel filter: Inhoud: Categorie (field_maatregelen_categorie) */
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['id'] = 'field_maatregelen_categorie_value';
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['table'] = 'field_data_field_maatregelen_categorie';
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['field'] = 'field_maatregelen_categorie_value';
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_maatregelen_categorie_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'maatregelen' => 'maatregelen',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $translatables['maatregelen'] = array(
    t('Master'),
    t('Sticker onwettige afwezigheid'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Uitgebreide opties'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Sticker toevoegen'),
    t('<a href="/node/add/msl-oa-sticker">Een nieuwe rode sticker toevoegen</a>'),
    t('Gebruiker entiteit gerefereerd vanaf field_msl_oa_sticker_leerling'),
    t('Inhoud entiteit gerefereerd vanaf field_msl_oa_sticker_f2_maatreg'),
    t('Nr.'),
    t('Leerling'),
    t('[field_user_sms_naam], [field_user_sms_voornaam]'),
    t('Datum fase 1'),
    t('Datum fase 2'),
    t('Datum fase 3'),
    t('Bewerken'),
    t('Overzicht: maatregelen'),
    t('Maatregelen'),
    t('Lijst van alle maatregelen die in ons schoolreglement staan.'),
    t('<a href="/node/add/maatregelen">Een nieuwe maatregel toevoegen</a>'),
    t('Getoond @start - @end van @total'),
    t('§[field_maatregelen_gewicht] - [title]'),
    t('Procedure'),
    t('Maatregel'),
    t('Categorie'),
    t('Selectielijst: maatregelen'),
    t('[field_maatregelen_categorie] - [title]'),
    t('Alle'),
  );
  $export['maatregelen'] = $view;

  return $export;
}
