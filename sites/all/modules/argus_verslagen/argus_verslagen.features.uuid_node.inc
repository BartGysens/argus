<?php
/**
 * @file
 * argus_verslagen.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function argus_verslagen_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Wekelijks overleg ICT - 21 november 2016',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'nl',
  'created' => 1479125436,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '87bed8f3-70d1-469b-990f-d1572733d189',
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => FALSE,
  'subdomains' => array(
    0 => 'argus',
  ),
  'num_revisions' => 1,
  'current_revision_id' => 104437,
  'is_current' => TRUE,
  'is_pending' => TRUE,
  'revision_moderation' => TRUE,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><u>Aanwezigen</u>: A, B, C</p>

<p><u>Verontschuldigd</u>:</p>

<p><u>Afwezig</u>:&nbsp;</p>

<p><strong><u>Agenda + verslag</u></strong></p>

<p>- overlopen tickets<br />
- overlopen rooster</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 376,
      ),
      1 => array(
        'tid' => 463,
      ),
    ),
  ),
  'field_image' => array(),
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-11-14 13:10:36 +0100',
  'user_uuid' => '9718f6c5-c82f-44c0-bd7d-5b7a6e06b96c',
);
  $nodes[] = array(
  'title' => 'Vergaderingen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1421225587,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a6f50e46-24d9-4f01-93b8-632fe6e4f678',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><u>Overzicht van de vaste vergaderingen:</u></p>

<ul>
	<li><a href="/vergaderingen/ict/wekelijks-overleg">ICT:&nbsp;maandag om 13u00,&nbsp;wekelijks overleg (laatste maandag van de maand overleg met TAC)</a></li>
	<li><a href="/vergaderingen/mvd/wekelijks-overleg">MVD: maandag om 10u00,&nbsp;tweewekelijks overleg</a></li>
	<li><a href="/vergaderingen/ilb/wekelijks-overleg">Interne leerlingenbegeleiding - ILB: donderdag om 9u20, wekelijks overleg</a></li>
	<li><a href="/vergaderingen/staf/wekelijks-overleg">Staf: woensdag om 9u, wekelijks overleg</a></li>
	<li><a href="/vergaderingen/ikz/wekelijks-overleg">Interne kwaliteitszorg: vrijdag om 9u, maandelijks overleg</a></li>
	<li><a href="/vergaderingen/boc/maandelijks-overleg">Basisoverleg comité: donderdag om 12u00,&nbsp;maandelijks overleg</a></li>
	<li><a href="/vergaderingen/tkz/kwartaaloverleg">Traject Kwaliteitszorg PBD: kwartaaloverleg en jaarlijks overleg</a></li>
</ul>
<u>Overzicht van de ad-hoc vergaderingen:</u>

<ul>
	<li>Beleidsorganen:
	<ul>
		<li><a href="/vergaderingen/schoolraad/adhoc">Schoolraad</a></li>
		<li>Pedagogische raad</li>
	</ul>
	</li>
	<li>Werkgroepen:
	<ul>
		<li><a href="/vergaderingen/werkgroep sanctioneringsbeleid/ad-hoc">Sanctioneringsbeleid</a></li>
	</ul>
	</li>
</ul>
<u>Overzicht van overkoepelende vergaderingen:</u>

<ul>
	<li><a href="/vergaderingen/raad-van-het-go/vierjaarlijks-overleg">Raad van het GO!</a></li>
	<li>Tussenoverleg comite</li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'confidential' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'next_serial' => 1,
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_bar' => 1,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Begin',
    'progressbar_label_confirmation' => 'Voltooid',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'status' => 1,
    'record_exists' => FALSE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(),
    'conditionals' => array(),
  ),
  'comment_count' => 0,
  'domains' => array(
    1 => 1,
  ),
  'domain_site' => FALSE,
  'subdomains' => array(
    0 => 'argus',
  ),
  'num_revisions' => 1,
  'current_revision_id' => 104438,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-01-14 09:53:07 +0100',
  'user_uuid' => '9718f6c5-c82f-44c0-bd7d-5b7a6e06b96c',
);
  return $nodes;
}
