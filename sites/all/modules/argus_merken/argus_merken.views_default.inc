<?php
/**
 * @file
 * argus_merken.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_merken_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'merken';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Merken';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Merken';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_merk_merknaam' => 'field_merk_merknaam',
    'field_merk_toepassingsdomein' => 'field_merk_toepassingsdomein',
  );
  $handler->display->display_options['style_options']['default'] = 'field_merk_merknaam';
  $handler->display->display_options['style_options']['info'] = array(
    'field_merk_merknaam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_merk_toepassingsdomein' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Merknaam';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'merk/[title]';
  /* Veld: Inhoud: Toepassingsdomein */
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['id'] = 'field_merk_toepassingsdomein';
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['table'] = 'field_data_field_merk_toepassingsdomein';
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['field'] = 'field_merk_toepassingsdomein';
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['delta_offset'] = '0';
  /* Sorteercriterium: Inhoud: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'merk' => 'merk',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Inhoud: Toepassingsdomein (field_merk_toepassingsdomein) */
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['id'] = 'field_merk_toepassingsdomein_value';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['table'] = 'field_data_field_merk_toepassingsdomein';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['field'] = 'field_merk_toepassingsdomein_value';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['operator_id'] = 'field_merk_toepassingsdomein_value_op';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['label'] = 'Toepassingsdomein (field_merk_toepassingsdomein)';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['operator'] = 'field_merk_toepassingsdomein_value_op';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['identifier'] = 'field_merk_toepassingsdomein_value';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['remember_roles'] = array(
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
    89 => 0,
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
    218 => 0,
    219 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    227 => 0,
    228 => 0,
  );
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['reduce_duplicates'] = TRUE;

  /* Display: Overzicht */
  $handler = $view->new_display('page', 'Overzicht', 'merk_overzicht');
  $handler->display->display_options['display_description'] = 'Overzicht van alle merken waarvoor producten bestaan.';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'merken';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Merken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Merken: selectielijst */
  $handler = $view->new_display('entityreference', 'Merken: selectielijst', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Merken: selectielijst';
  $handler->display->display_options['display_description'] = 'Geselecteerde lijst van merken binnen een bepaald toepassingsdomein.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_merk_toepassingsdomein' => 'field_merk_toepassingsdomein',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'merk/[title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Toepassingsdomein */
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['id'] = 'field_merk_toepassingsdomein';
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['table'] = 'field_data_field_merk_toepassingsdomein';
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['field'] = 'field_merk_toepassingsdomein';
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['label'] = '';
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_merk_toepassingsdomein']['delta_offset'] = '0';
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
    'merk' => 'merk',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Inhoud: Toepassingsdomein (field_merk_toepassingsdomein) */
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['id'] = 'field_merk_toepassingsdomein_value';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['table'] = 'field_data_field_merk_toepassingsdomein';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['field'] = 'field_merk_toepassingsdomein_value';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['value'] = array(
    'ICT' => 'ICT',
  );
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['operator_id'] = 'field_merk_toepassingsdomein_value_op';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['label'] = 'Toepassingsdomein: ICT';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['operator'] = 'field_merk_toepassingsdomein_value_op';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['identifier'] = 'field_merk_toepassingsdomein_value';
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['expose']['remember_roles'] = array(
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
    89 => 0,
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
    218 => 0,
    219 => 0,
    220 => 0,
    221 => 0,
    222 => 0,
    223 => 0,
    224 => 0,
    227 => 0,
    228 => 0,
  );
  $handler->display->display_options['filters']['field_merk_toepassingsdomein_value']['reduce_duplicates'] = TRUE;
  $translatables['merken'] = array(
    t('Master'),
    t('Merken'),
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
    t('Merknaam'),
    t('Toepassingsdomein'),
    t('Toepassingsdomein (field_merk_toepassingsdomein)'),
    t('Overzicht'),
    t('Overzicht van alle merken waarvoor producten bestaan.'),
    t('Merken: selectielijst'),
    t('Geselecteerde lijst van merken binnen een bepaald toepassingsdomein.'),
    t('Toepassingsdomein: ICT'),
  );
  $export['merken'] = $view;

  return $export;
}
