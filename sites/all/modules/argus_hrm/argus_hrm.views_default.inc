<?php
/**
 * @file
 * argus_hrm.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function argus_hrm_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hrm';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HRM';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'HRM';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    86 => '86',
    225 => '225',
    217 => '217',
    219 => '219',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'counter' => 'counter',
    'field_personeelslid' => 'field_personeelslid',
    'field_tijdstip' => 'field_tijdstip',
    'field_functioneringsg_status' => 'field_functioneringsg_status',
    'field_planningsgesprek_status_1' => 'field_planningsgesprek_status_1',
    'field_evaluatiegesprek_status' => 'field_evaluatiegesprek_status',
    'nothing_1' => 'nothing_1',
    'type' => 'type',
    'edit_node' => 'edit_node',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'counter' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personeelslid' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tijdstip' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_functioneringsg_status' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_planningsgesprek_status_1' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_evaluatiegesprek_status' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Kop: Algemeen: Tekstveld */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/hrm-evaluatiegesprek">Een evaluatiegesprek toevoegen</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Voet: Algemeen: Samenvatting van het resultaat */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Getoond @start - @end van @total';
  /* Voet: Algemeen: Tekstveld */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/hrm-evaluatiegesprek">Een evaluatiegesprek toevoegen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Relatie: Referentie naar een entiteit: Gerefereerde entiteit */
  $handler->display->display_options['relationships']['field_personeelslid_target_id']['id'] = 'field_personeelslid_target_id';
  $handler->display->display_options['relationships']['field_personeelslid_target_id']['table'] = 'field_data_field_personeelslid';
  $handler->display->display_options['relationships']['field_personeelslid_target_id']['field'] = 'field_personeelslid_target_id';
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
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Veld: Inhoud: Personeelslid */
  $handler->display->display_options['fields']['field_personeelslid']['id'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['table'] = 'field_data_field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['field'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Tijdstip */
  $handler->display->display_options['fields']['field_tijdstip']['id'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['table'] = 'field_data_field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['field'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_tijdstip']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: status - functioneringsgesprek */
  $handler->display->display_options['fields']['field_functioneringsg_status']['id'] = 'field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['table'] = 'field_data_field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['field'] = 'field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['ui_name'] = 'status - functioneringsgesprek';
  $handler->display->display_options['fields']['field_functioneringsg_status']['label'] = '';
  $handler->display->display_options['fields']['field_functioneringsg_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_functioneringsg_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_functioneringsg_status']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: status - planningsgesprek */
  $handler->display->display_options['fields']['field_planningsgesprek_status_1']['id'] = 'field_planningsgesprek_status_1';
  $handler->display->display_options['fields']['field_planningsgesprek_status_1']['table'] = 'field_data_field_planningsgesprek_status';
  $handler->display->display_options['fields']['field_planningsgesprek_status_1']['field'] = 'field_planningsgesprek_status';
  $handler->display->display_options['fields']['field_planningsgesprek_status_1']['ui_name'] = 'status - planningsgesprek';
  $handler->display->display_options['fields']['field_planningsgesprek_status_1']['label'] = '';
  $handler->display->display_options['fields']['field_planningsgesprek_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_planningsgesprek_status_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_planningsgesprek_status_1']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: status - evaluatiegesprek */
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['id'] = 'field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['table'] = 'field_data_field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['field'] = 'field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['ui_name'] = 'status - evaluatiegesprek';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['label'] = '';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Algemeen: Aangepaste tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_functioneringsg_status][field_planningsgesprek_status_1][field_evaluatiegesprek_status]';
  /* Veld: Inhoud: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Veld: Algemeen: Aangepaste tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Acties';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] - <a href="/documenten_generator.get/BRF_HRM_Planningsgesprek_uitnodiging/id=[nid]">uitnodiging</a> - <a href="/documenten_generator.get/VSG_HRM_Planningsgesprek/id=[nid]">verslag</a>';
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
    'hrm_evaluatiegesprek' => 'hrm_evaluatiegesprek',
    'hrm_functioneringsgesprek' => 'hrm_functioneringsgesprek',
    'hrm_planningsgesprek' => 'hrm_planningsgesprek',
  );
  /* Filtercriterium: Echte naam: Naam */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'field_personeelslid_target_id';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Personeelslid';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
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
    306 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    307 => 0,
    247 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    310 => 0,
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
    308 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    313 => 0,
    314 => 0,
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
    321 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    322 => 0,
    226 => 0,
    243 => 0,
    81 => 0,
    319 => 0,
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
    317 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    107 => 0,
    108 => 0,
    318 => 0,
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
    315 => 0,
    316 => 0,
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
    293 => 0,
    192 => 0,
    193 => 0,
    299 => 0,
    194 => 0,
    195 => 0,
    300 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    296 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    297 => 0,
    309 => 0,
    302 => 0,
    209 => 0,
    298 => 0,
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
    304 => 0,
    285 => 0,
    227 => 0,
    295 => 0,
    323 => 0,
    324 => 0,
    325 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
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
    326 => 0,
    327 => 0,
  );
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_suggestion'] = '1';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_dropdown'] = '1';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['qtip_instance'] = 'standaard';

  /* Display: Planningsgesprekken */
  $handler = $view->new_display('page', 'Planningsgesprekken', 'hrm_planningsgesprekken_overview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Planningsgesprekken';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_personeelslid' => 'field_personeelslid',
    'field_tijdstip' => 'field_tijdstip',
    'field_planningsgesprek_status' => 'field_planningsgesprek_status',
    'type' => 'type',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personeelslid' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tijdstip' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_planningsgesprek_status' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
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
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/hrm-planningsgesprek">Een planningsgesprek toevoegen</a>';
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
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/hrm-planningsgesprek">Een planningsgesprek toevoegen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Veld: Inhoud: Personeelslid */
  $handler->display->display_options['fields']['field_personeelslid']['id'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['table'] = 'field_data_field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['field'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Tijdstip */
  $handler->display->display_options['fields']['field_tijdstip']['id'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['table'] = 'field_data_field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['field'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_tijdstip']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_planningsgesprek_status']['id'] = 'field_planningsgesprek_status';
  $handler->display->display_options['fields']['field_planningsgesprek_status']['table'] = 'field_data_field_planningsgesprek_status';
  $handler->display->display_options['fields']['field_planningsgesprek_status']['field'] = 'field_planningsgesprek_status';
  $handler->display->display_options['fields']['field_planningsgesprek_status']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Veld: Algemeen: Aangepaste tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Acties';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] - <a href="/documenten_generator.get/BRF_HRM_Planningsgesprek_uitnodiging/id=[nid]">uitnodiging</a> - <a href="/documenten_generator.get/VSG_HRM_Planningsgesprek/id=[nid]">verslag</a>';
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
    'hrm_planningsgesprek' => 'hrm_planningsgesprek',
  );
  /* Filtercriterium: Echte naam: Naam */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'field_personeelslid_target_id';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Personeelslid';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
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
    306 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    307 => 0,
    247 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    310 => 0,
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
    308 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    313 => 0,
    314 => 0,
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
    321 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    322 => 0,
    226 => 0,
    243 => 0,
    81 => 0,
    319 => 0,
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
    317 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    107 => 0,
    108 => 0,
    318 => 0,
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
    315 => 0,
    316 => 0,
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
    293 => 0,
    192 => 0,
    193 => 0,
    299 => 0,
    194 => 0,
    195 => 0,
    300 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    296 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    297 => 0,
    309 => 0,
    302 => 0,
    209 => 0,
    298 => 0,
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
    304 => 0,
    285 => 0,
    227 => 0,
    295 => 0,
    323 => 0,
    324 => 0,
    325 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
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
    326 => 0,
    327 => 0,
  );
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_suggestion'] = '1';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_dropdown'] = '1';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'hrm/planningsgesprekken';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Planningsgesprekken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Functioneringsgesprekken */
  $handler = $view->new_display('page', 'Functioneringsgesprekken', 'hrm_functioneringsgesprekken_overview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Functioneringsgesprekken';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_personeelslid' => 'field_personeelslid',
    'field_tijdstip' => 'field_tijdstip',
    'field_functioneringsg_status' => 'field_functioneringsg_status',
    'type' => 'type',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personeelslid' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tijdstip' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_functioneringsg_status' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
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
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/hrm-functioneringsgesprek">Een functioneringsgesprek toevoegen</a>';
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
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/add/hrm-functioneringsgesprek">Een functioneringsgesprek toevoegen</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Veld: Inhoud: Personeelslid */
  $handler->display->display_options['fields']['field_personeelslid']['id'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['table'] = 'field_data_field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['field'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Tijdstip */
  $handler->display->display_options['fields']['field_tijdstip']['id'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['table'] = 'field_data_field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['field'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_tijdstip']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_functioneringsg_status']['id'] = 'field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['table'] = 'field_data_field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['field'] = 'field_functioneringsg_status';
  $handler->display->display_options['fields']['field_functioneringsg_status']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Veld: Algemeen: Aangepaste tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Acties';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] - <a href="/documenten_generator.get/BRF_HRM_Functioneringsgesprek_uitnodiging/id=[nid]">uitnodiging</a> - <a href="/documenten_generator.get/VSG_HRM_Functioneringsgesprek/id=[nid]">verslag</a>';
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
    'hrm_functioneringsgesprek' => 'hrm_functioneringsgesprek',
  );
  /* Filtercriterium: Echte naam: Naam */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'field_personeelslid_target_id';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Personeelslid';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
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
    306 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    307 => 0,
    247 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    310 => 0,
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
    308 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    313 => 0,
    314 => 0,
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
    321 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    322 => 0,
    226 => 0,
    243 => 0,
    81 => 0,
    319 => 0,
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
    317 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    107 => 0,
    108 => 0,
    318 => 0,
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
    315 => 0,
    316 => 0,
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
    293 => 0,
    192 => 0,
    193 => 0,
    299 => 0,
    194 => 0,
    195 => 0,
    300 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    296 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    297 => 0,
    309 => 0,
    302 => 0,
    209 => 0,
    298 => 0,
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
    304 => 0,
    285 => 0,
    227 => 0,
    295 => 0,
    323 => 0,
    324 => 0,
    325 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
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
    326 => 0,
    327 => 0,
  );
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_suggestion'] = '1';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_dropdown'] = '1';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'hrm/functioneringsgesprekken';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Functioneringsgesprekken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Evaluatiegesprekken */
  $handler = $view->new_display('page', 'Evaluatiegesprekken', 'hrm_evaluatiegesprekken_overview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Evaluatiegesprekken';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    86 => '86',
    225 => '225',
    217 => '217',
    219 => '219',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_personeelslid' => 'field_personeelslid',
    'field_tijdstip' => 'field_tijdstip',
    'field_evaluatiegesprek_status' => 'field_evaluatiegesprek_status',
    'type' => 'type',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personeelslid' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tijdstip' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_evaluatiegesprek_status' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => '1',
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
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
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
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
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/hrm-evaluatiegesprek">Een evaluatiegesprek toevoegen</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Veld: Inhoud: Personeelslid */
  $handler->display->display_options['fields']['field_personeelslid']['id'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['table'] = 'field_data_field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['field'] = 'field_personeelslid';
  $handler->display->display_options['fields']['field_personeelslid']['settings'] = array(
    'link' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Tijdstip */
  $handler->display->display_options['fields']['field_tijdstip']['id'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['table'] = 'field_data_field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['field'] = 'field_tijdstip';
  $handler->display->display_options['fields']['field_tijdstip']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_tijdstip']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_tijdstip']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['id'] = 'field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['table'] = 'field_data_field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['field'] = 'field_evaluatiegesprek_status';
  $handler->display->display_options['fields']['field_evaluatiegesprek_status']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Veld: Inhoud: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Veld: Algemeen: Aangepaste tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Acties';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit_node] - <a href="/documenten_generator.get/BRF_HRM_Evaluatiegesprek_uitnodiging/id=[nid]">uitnodiging</a> - <a href="/documenten_generator.get/VSG_HRM_Evaluatiegesprek/id=[nid]">verslag</a>';
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
    'hrm_evaluatiegesprek' => 'hrm_evaluatiegesprek',
  );
  /* Filtercriterium: Echte naam: Naam */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'field_personeelslid_target_id';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Personeelslid';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
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
    306 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    307 => 0,
    247 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
    42 => 0,
    43 => 0,
    310 => 0,
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
    308 => 0,
    55 => 0,
    56 => 0,
    57 => 0,
    313 => 0,
    314 => 0,
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
    321 => 0,
    83 => 0,
    84 => 0,
    85 => 0,
    80 => 0,
    86 => 0,
    225 => 0,
    87 => 0,
    322 => 0,
    226 => 0,
    243 => 0,
    81 => 0,
    319 => 0,
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
    317 => 0,
    100 => 0,
    101 => 0,
    102 => 0,
    103 => 0,
    104 => 0,
    105 => 0,
    106 => 0,
    107 => 0,
    108 => 0,
    318 => 0,
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
    315 => 0,
    316 => 0,
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
    293 => 0,
    192 => 0,
    193 => 0,
    299 => 0,
    194 => 0,
    195 => 0,
    300 => 0,
    196 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    296 => 0,
    202 => 0,
    203 => 0,
    204 => 0,
    205 => 0,
    206 => 0,
    207 => 0,
    208 => 0,
    297 => 0,
    309 => 0,
    302 => 0,
    209 => 0,
    298 => 0,
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
    304 => 0,
    285 => 0,
    227 => 0,
    295 => 0,
    323 => 0,
    324 => 0,
    325 => 0,
    218 => 0,
    219 => 0,
    228 => 0,
    220 => 0,
    221 => 0,
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
    326 => 0,
    327 => 0,
  );
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_suggestion'] = '1';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_dropdown'] = '1';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['qtip_instance'] = 'standaard';
  $handler->display->display_options['path'] = 'hrm/evaluatiegesprekken';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Evaluatiegesprekken';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-modules';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['hrm'] = array(
    t('Master'),
    t('HRM'),
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
    t('<a href="/node/add/hrm-evaluatiegesprek">Een evaluatiegesprek toevoegen</a>'),
    t('Getoond @start - @end van @total'),
    t('Gebruiker entity referenced from field_personeelslid'),
    t('Nr.'),
    t('Personeelslid'),
    t('Tijdstip'),
    t('Status'),
    t('[field_functioneringsg_status][field_planningsgesprek_status_1][field_evaluatiegesprek_status]'),
    t('Type'),
    t('Acties'),
    t('[edit_node] - <a href="/documenten_generator.get/BRF_HRM_Planningsgesprek_uitnodiging/id=[nid]">uitnodiging</a> - <a href="/documenten_generator.get/VSG_HRM_Planningsgesprek/id=[nid]">verslag</a>'),
    t('Planningsgesprekken'),
    t('<a href="/node/add/hrm-planningsgesprek">Een planningsgesprek toevoegen</a>'),
    t('Functioneringsgesprekken'),
    t('<a href="/node/add/hrm-functioneringsgesprek">Een functioneringsgesprek toevoegen</a>'),
    t('[edit_node] - <a href="/documenten_generator.get/BRF_HRM_Functioneringsgesprek_uitnodiging/id=[nid]">uitnodiging</a> - <a href="/documenten_generator.get/VSG_HRM_Functioneringsgesprek/id=[nid]">verslag</a>'),
    t('Evaluatiegesprekken'),
    t('[edit_node] - <a href="/documenten_generator.get/BRF_HRM_Evaluatiegesprek_uitnodiging/id=[nid]">uitnodiging</a> - <a href="/documenten_generator.get/VSG_HRM_Evaluatiegesprek/id=[nid]">verslag</a>'),
  );
  $export['hrm'] = $view;

  return $export;
}
