<?php
/**
 * @file
 * argus_volgkaarten.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_volgkaarten_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'msl_volgkaarten';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MSL - Volgkaarten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volgkaarten';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
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
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
    ),
    'name' => array(
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
    'field_msl_volgkaart_status_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 25, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_msl_volgkaart_leerling' => 'field_msl_volgkaart_leerling',
    'field_msl_volgkaart_afgehaald' => 'field_msl_volgkaart_afgehaald',
    'field_msl_volgkaart_status' => 'field_msl_volgkaart_status',
    'field_msl_bo_type' => 'field_msl_bo_type',
    'field_msl_bo_aanleiding' => 'field_msl_bo_aanleiding',
    'field_msl_bo_startdatum' => 'field_msl_bo_startdatum',
    'field_msl_bo_einddatum' => 'field_msl_bo_einddatum',
    'field_msl_bo_volgkaarten' => 'field_msl_bo_volgkaarten',
  );
  $handler->display->display_options['style_options']['default'] = 'field_msl_volgkaart_leerling';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msl_volgkaart_leerling' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msl_volgkaart_afgehaald' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msl_volgkaart_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msl_bo_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msl_bo_aanleiding' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msl_bo_startdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msl_bo_einddatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_msl_bo_volgkaarten' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Kop: Algemeen: Tekstveld */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Volgkaart toevoegen';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/msl-volgkaart">Een nieuwe volgkaart toevoegen</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Voet: Algemeen: Tekstveld */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Volgkaart toevoegen';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/msl-volgkaart">Een nieuwe volgkaart toevoegen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Relatie: Referentie naar een entiteit: Refererende entiteit */
  $handler->display->display_options['relationships']['reverse_field_msl_bo_volgkaarten_node']['id'] = 'reverse_field_msl_bo_volgkaarten_node';
  $handler->display->display_options['relationships']['reverse_field_msl_bo_volgkaarten_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_msl_bo_volgkaarten_node']['field'] = 'reverse_field_msl_bo_volgkaarten_node';
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_msl_volgkaart_leerling_target_id']['id'] = 'field_msl_volgkaart_leerling_target_id';
  $handler->display->display_options['relationships']['field_msl_volgkaart_leerling_target_id']['table'] = 'field_data_field_msl_volgkaart_leerling';
  $handler->display->display_options['relationships']['field_msl_volgkaart_leerling_target_id']['field'] = 'field_msl_volgkaart_leerling_target_id';
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_msl_bo_volgkaarten_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Leerling */
  $handler->display->display_options['fields']['field_msl_volgkaart_leerling']['id'] = 'field_msl_volgkaart_leerling';
  $handler->display->display_options['fields']['field_msl_volgkaart_leerling']['table'] = 'field_data_field_msl_volgkaart_leerling';
  $handler->display->display_options['fields']['field_msl_volgkaart_leerling']['field'] = 'field_msl_volgkaart_leerling';
  $handler->display->display_options['fields']['field_msl_volgkaart_leerling']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_msl_volgkaart_leerling']['settings'] = array(
    'link' => 1,
  );
  /* Veld: Inhoud: Afgehaald */
  $handler->display->display_options['fields']['field_msl_volgkaart_afgehaald']['id'] = 'field_msl_volgkaart_afgehaald';
  $handler->display->display_options['fields']['field_msl_volgkaart_afgehaald']['table'] = 'field_data_field_msl_volgkaart_afgehaald';
  $handler->display->display_options['fields']['field_msl_volgkaart_afgehaald']['field'] = 'field_msl_volgkaart_afgehaald';
  $handler->display->display_options['fields']['field_msl_volgkaart_afgehaald']['settings'] = array(
    'format_type' => 'dag_en_datum_lang_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_msl_volgkaart_status']['id'] = 'field_msl_volgkaart_status';
  $handler->display->display_options['fields']['field_msl_volgkaart_status']['table'] = 'field_data_field_msl_volgkaart_status';
  $handler->display->display_options['fields']['field_msl_volgkaart_status']['field'] = 'field_msl_volgkaart_status';
  $handler->display->display_options['fields']['field_msl_volgkaart_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_msl_volgkaart_status']['alter']['text'] = 'ok';
  $handler->display->display_options['fields']['field_msl_volgkaart_status']['hide_empty'] = TRUE;
  /* Veld: Inhoud: Type */
  $handler->display->display_options['fields']['field_msl_bo_type']['id'] = 'field_msl_bo_type';
  $handler->display->display_options['fields']['field_msl_bo_type']['table'] = 'field_data_field_msl_bo_type';
  $handler->display->display_options['fields']['field_msl_bo_type']['field'] = 'field_msl_bo_type';
  $handler->display->display_options['fields']['field_msl_bo_type']['relationship'] = 'reverse_field_msl_bo_volgkaarten_node';
  /* Veld: Inhoud: Aanleiding */
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['id'] = 'field_msl_bo_aanleiding';
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['table'] = 'field_data_field_msl_bo_aanleiding';
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['field'] = 'field_msl_bo_aanleiding';
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['relationship'] = 'reverse_field_msl_bo_volgkaarten_node';
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['alter']['more_link_text'] = '(meer)';
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_msl_bo_aanleiding']['settings'] = array(
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => ' (meer)',
    'trim_options' => array(
      'text' => 'text',
    ),
  );
  /* Veld: Inhoud: Startdatum */
  $handler->display->display_options['fields']['field_msl_bo_startdatum']['id'] = 'field_msl_bo_startdatum';
  $handler->display->display_options['fields']['field_msl_bo_startdatum']['table'] = 'field_data_field_msl_bo_startdatum';
  $handler->display->display_options['fields']['field_msl_bo_startdatum']['field'] = 'field_msl_bo_startdatum';
  $handler->display->display_options['fields']['field_msl_bo_startdatum']['relationship'] = 'reverse_field_msl_bo_volgkaarten_node';
  $handler->display->display_options['fields']['field_msl_bo_startdatum']['settings'] = array(
    'format_type' => 'datum_kort_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Veld: Inhoud: Einddatum */
  $handler->display->display_options['fields']['field_msl_bo_einddatum']['id'] = 'field_msl_bo_einddatum';
  $handler->display->display_options['fields']['field_msl_bo_einddatum']['table'] = 'field_data_field_msl_bo_einddatum';
  $handler->display->display_options['fields']['field_msl_bo_einddatum']['field'] = 'field_msl_bo_einddatum';
  $handler->display->display_options['fields']['field_msl_bo_einddatum']['relationship'] = 'reverse_field_msl_bo_volgkaarten_node';
  $handler->display->display_options['fields']['field_msl_bo_einddatum']['settings'] = array(
    'format_type' => 'datum_kort_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'msl_volgkaart' => 'msl_volgkaart',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Gebruiker: Naam (onbewerkt) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_msl_volgkaart_leerling_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Leerling';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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
  /* Filtercriterium: Inhoud: Status (field_msl_volgkaart_status) */
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['id'] = 'field_msl_volgkaart_status_value';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['table'] = 'field_data_field_msl_volgkaart_status';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['field'] = 'field_msl_volgkaart_status_value';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['expose']['operator_id'] = 'field_msl_volgkaart_status_value_op';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['expose']['label'] = 'Status (field_msl_volgkaart_status)';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['expose']['operator'] = 'field_msl_volgkaart_status_value_op';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['expose']['identifier'] = 'field_msl_volgkaart_status_value';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['group_info']['identifier'] = 'field_msl_volgkaart_status_value';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_msl_volgkaart_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Ingediend',
      'operator' => 'longerthan',
      'value' => '0',
    ),
    2 => array(
      'title' => 'Niet ok',
      'operator' => 'empty',
      'value' => '2',
    ),
  );

  /* Display: Overzicht: volgkaarten */
  $handler = $view->new_display('page', 'Overzicht: volgkaarten', 'msl_volgkaarten');
  $handler->display->display_options['display_description'] = 'Een overzicht van alle volgkaarten.';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'volgkaarten/overzicht';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Volgkaarten';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $translatables['msl_volgkaarten'] = array(
    t('Master'),
    t('Volgkaarten'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Selecteer een van de filters en klik op \'Toepassen\' om het resultaat te zien'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Volgkaart toevoegen'),
    t('<a href="/node/add/msl-volgkaart">Een nieuwe volgkaart toevoegen</a>'),
    t('Inhoud referencing Inhoud from field_msl_bo_volgkaarten'),
    t('Gebruiker entity referenced from field_msl_volgkaart_leerling'),
    t('Leerling'),
    t('Afgehaald'),
    t('Status'),
    t('ok'),
    t('Type'),
    t('Aanleiding'),
    t('(meer)'),
    t('Startdatum'),
    t('Einddatum'),
    t('Status (field_msl_volgkaart_status)'),
    t('Overzicht: volgkaarten'),
    t('Een overzicht van alle volgkaarten.'),
  );
  $export['msl_volgkaarten'] = $view;

  return $export;
}
