<?php
/**
 * @file
 * argus_vakgroepen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_vakgroepen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vakgroepen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vakgroepen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vakgroepen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    216 => '216',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_vgwg_vak' => 'field_vgwg_vak',
    'field_vgwg_omschrijving' => 'field_vgwg_omschrijving',
    'realname' => 'realname',
    'nid' => 'nid',
    'field_vak_beschrijving' => 'field_vak_beschrijving',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vgwg_vak' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vgwg_omschrijving' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'realname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vak_beschrijving' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_vgwg_vak_target_id']['id'] = 'field_vgwg_vak_target_id';
  $handler->display->display_options['relationships']['field_vgwg_vak_target_id']['table'] = 'field_data_field_vgwg_vak';
  $handler->display->display_options['relationships']['field_vgwg_vak_target_id']['field'] = 'field_vgwg_vak_target_id';
  $handler->display->display_options['relationships']['field_vgwg_vak_target_id']['label'] = 'Inhoud entity referenced from field_vgwg_vak';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Inhoud: Vakken */
  $handler->display->display_options['fields']['field_vgwg_vak']['id'] = 'field_vgwg_vak';
  $handler->display->display_options['fields']['field_vgwg_vak']['table'] = 'field_data_field_vgwg_vak';
  $handler->display->display_options['fields']['field_vgwg_vak']['field'] = 'field_vgwg_vak';
  $handler->display->display_options['fields']['field_vgwg_vak']['label'] = 'Vak(ken)';
  $handler->display->display_options['fields']['field_vgwg_vak']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_vgwg_vak']['alter']['path'] = 'vak/';
  $handler->display->display_options['fields']['field_vgwg_vak']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vgwg_vak']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_vgwg_vak']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_vgwg_vak']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_vgwg_vak']['multi_type'] = 'ul';
  /* Veld: Inhoud: Omschrijving */
  $handler->display->display_options['fields']['field_vgwg_omschrijving']['id'] = 'field_vgwg_omschrijving';
  $handler->display->display_options['fields']['field_vgwg_omschrijving']['table'] = 'field_data_field_vgwg_omschrijving';
  $handler->display->display_options['fields']['field_vgwg_omschrijving']['field'] = 'field_vgwg_omschrijving';
  $handler->display->display_options['fields']['field_vgwg_omschrijving']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Veld: Inhoud: Beschrijving */
  $handler->display->display_options['fields']['field_vak_beschrijving']['id'] = 'field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['table'] = 'field_data_field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['field'] = 'field_vak_beschrijving';
  $handler->display->display_options['fields']['field_vak_beschrijving']['relationship'] = 'field_vgwg_vak_target_id';
  $handler->display->display_options['fields']['field_vak_beschrijving']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_vak_beschrijving']['group_columns'] = array(
    'entity_id' => 'entity_id',
    'value' => 'value',
  );
  /* Sorteercriterium: Inhoud: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Titel';
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
    'vakgroep' => 'vakgroep',
  );
  /* Filtercriterium: Inhoud: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  /* Filtercriterium: Inhoud: Leerkracht (field_uurrooster_les_leerkracht) */
  $handler->display->display_options['filters']['field_uurrooster_les_leerkracht_target_id']['id'] = 'field_uurrooster_les_leerkracht_target_id';
  $handler->display->display_options['filters']['field_uurrooster_les_leerkracht_target_id']['table'] = 'field_data_field_uurrooster_les_leerkracht';
  $handler->display->display_options['filters']['field_uurrooster_les_leerkracht_target_id']['field'] = 'field_uurrooster_les_leerkracht_target_id';

  /* Display: Vakgroepen */
  $handler = $view->new_display('page', 'Vakgroepen', 'vakgroepen_overzicht');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_voorzitter' => 'field_voorzitter',
    'field_vgwg_leden' => 'field_vgwg_leden',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_voorzitter' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vgwg_leden' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Vakgroep';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] - [nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Veld: Veld: Voorzitter */
  $handler->display->display_options['fields']['field_voorzitter']['id'] = 'field_voorzitter';
  $handler->display->display_options['fields']['field_voorzitter']['table'] = 'field_data_field_voorzitter';
  $handler->display->display_options['fields']['field_voorzitter']['field'] = 'field_voorzitter';
  $handler->display->display_options['fields']['field_voorzitter']['settings'] = array(
    'link' => '1',
  );
  /* Veld: Inhoud: Leden */
  $handler->display->display_options['fields']['field_vgwg_leden']['id'] = 'field_vgwg_leden';
  $handler->display->display_options['fields']['field_vgwg_leden']['table'] = 'field_data_field_vgwg_leden';
  $handler->display->display_options['fields']['field_vgwg_leden']['field'] = 'field_vgwg_leden';
  $handler->display->display_options['fields']['field_vgwg_leden']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_vgwg_leden']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_vgwg_leden']['multi_type'] = 'ol';
  $handler->display->display_options['fields']['field_vgwg_leden']['separator'] = ' - ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteercriterium: Inhoud: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Titel';
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
    'vakgroep' => 'vakgroep',
  );
  /* Filtercriterium: Inhoud: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Vakgroep';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    245 => 0,
    246 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    247 => 0,
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
    248 => 0,
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
    269 => 0,
    61 => 0,
    62 => 0,
    63 => 0,
    64 => 0,
    249 => 0,
    250 => 0,
    65 => 0,
    66 => 0,
    67 => 0,
    68 => 0,
    69 => 0,
    70 => 0,
    71 => 0,
    270 => 0,
    72 => 0,
    73 => 0,
    74 => 0,
    75 => 0,
    76 => 0,
    77 => 0,
    78 => 0,
    251 => 0,
    252 => 0,
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
    243 => 0,
    81 => 0,
    229 => 0,
    8 => 0,
    280 => 0,
    279 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
    93 => 0,
    264 => 0,
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
    107 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    114 => 0,
    265 => 0,
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
    271 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    266 => 0,
    267 => 0,
    130 => 0,
    131 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    268 => 0,
    137 => 0,
    138 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    230 => 0,
    272 => 0,
    273 => 0,
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
    286 => 0,
    278 => 0,
    164 => 0,
    165 => 0,
    166 => 0,
    167 => 0,
    276 => 0,
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
    288 => 0,
    289 => 0,
    82 => 0,
    283 => 0,
    210 => 0,
    211 => 0,
    212 => 0,
    213 => 0,
    214 => 0,
    215 => 0,
    274 => 0,
    216 => 0,
    284 => 0,
    217 => 0,
    290 => 0,
    285 => 0,
    227 => 0,
    287 => 0,
    242 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    277 => 0,
    239 => 0,
    234 => 0,
    235 => 0,
    236 => 0,
    237 => 0,
    238 => 0,
    291 => 0,
    292 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = '1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = '1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'vakgroepen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vakgroepen';
  $handler->display->display_options['menu']['name'] = 'menu-modules';

  /* Display: Vakgroepen: selectielijst */
  $handler = $view->new_display('entityreference', 'Vakgroepen: selectielijst', 'vakgroepen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteercriterium: Inhoud: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vakgroep' => 'vakgroep',
  );
  $translatables['vakgroepen'] = array(
    t('Master'),
    t('Vakgroepen'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Inhoud entity referenced from field_vgwg_vak'),
    t('Titel'),
    t('Vak(ken)'),
    t('Omschrijving'),
    t('Nid'),
    t('Beschrijving'),
    t('Vakgroep'),
    t('[title] - [nid]'),
    t('Voorzitter'),
    t('Leden'),
    t('Vakgroepen: selectielijst'),
  );
  $export['vakgroepen'] = $view;

  return $export;
}
