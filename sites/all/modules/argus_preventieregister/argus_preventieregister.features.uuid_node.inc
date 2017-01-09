<?php
/**
 * @file
 * argus_preventieregister.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function argus_preventieregister_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'C11 Luchtcompressoren',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453369780,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '003e81ec-7adf-4488-8b56-24c609731d41',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 67083,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-21 10:49:40 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'D01 Keukens',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453723692,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '022ad2be-6282-4162-bed3-5ca0530b0e74',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68286,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-25 13:08:12 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E Verslagen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452674775,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '11953c95-95a0-466c-a6ec-203a6811bacb',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron:&nbsp;<a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister" style="color:#C60450" target="_blank">http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister</a></p>

<hr />
<p>De onderwijsinstelling (school,&nbsp;centrum voor volwassenenonderwijs, centrum voor deeltijds onderwijs, academie of internaat/tehuis) stelt een dossier ‘Preventie en Bescherming’ ter beschikking van o.a. de inspectie en de preventieadviseur.&nbsp;&nbsp;<br />
Dit dossier wordt ‘preventieregister’ genoemd en bevat gegevens&nbsp;waarmee de instelling kan aantonen dat zij een welzijnsbeleid voert conform de wet van 4 augustus 1996. De instelling heeft een belangrijke taak inzake preventie en welzijn. Daarbij zijn heel veel personen betrokken. Het opstellen en bijhouden van het preventieregister&nbsp;is een verantwoordelijkheid van de werkgever. In heel wat instellingen houdt de directie/beheerder en de contactpersoon preventie en bescherming het preventieregister up-to-date.</p>

<ol start="5" style="list-style-type:upper-alpha">
	<li><a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/e-verslagen" style="color:#C60450" target="_blank">Verslagen</a>

	<ul>
		<li><a href="/node/68312">E01 Evacuatieoefening</a></li>
		<li><a href="/node/68459">E02 Jaarverslag FOD WASO / PB</a></li>
		<li><a href="/node/68460">E03 Brandpreventieverslag - Brandrisico</a></li>
		<li><a href="/node/68580">E04 Indienst- en buitengebruik- stellingsverslagen</a></li>
		<li><a href="/node/68820">E05 Inspectieverslagen</a></li>
		<li><a href="/node/68821">E06 Basiscomité / Tussencomité (BC en TC)</a></li>
		<li><a href="/node/68827">E07 Preventieverslagen IDPBW</a></li>
		<li><a href="/node/68826">E08 Preventieverslagen EDPBW</a></li>
		<li><a href="/node/68824">E09 Andere</a></li>
	</ul>
	</li>
</ol>

<div><span style="font-size:10px"><u>Opmerking</u><em>: * = (nog) niet van toepassing op onze organisatie</em></span></div>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65858,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-13 09:46:15 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E01 Evacuatieoefening',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453792842,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1999be2c-f2c7-4e05-b61e-594ddd4d6114',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68390,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-26 08:20:42 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A18.2 Zoneringsdossier',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452611602,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1cef4c63-c1aa-467d-b7f8-83f690f1190e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65843,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:13:22 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'B04 Arbeidsmiddelen, PBM en CBM',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452771765,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1e0f3977-6185-44ef-a46a-1239246d92e2',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65984,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-14 12:42:45 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C06 Elektrische installatie: laagspanning',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453215949,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '23bce0d8-239f-420b-bed3-b48d14bd08a8',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66530,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-19 16:05:49 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A11 Preventiebeleidsverklaring',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435566642,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '277d353e-0210-4059-828a-67f589f8c3a9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31440,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 10:30:42 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C21 Andere',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453717035,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '28bfbd90-5918-416a-a01f-87d15c3eea1e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68044,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-25 11:17:15 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A24 Brandpreventiedossier',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452612165,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2a7a9dc8-d665-465b-a349-9fcd8c2bb3ea',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65850,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:22:45 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C Keuringen en periodieke controles',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452674360,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2f08dc66-16ed-4eb5-8b88-6d7092644a79',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron:&nbsp;<a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister" style="color:#C60450" target="_blank">http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister</a></p>

<hr />
<p>De onderwijsinstelling (school,&nbsp;centrum voor volwassenenonderwijs, centrum voor deeltijds onderwijs, academie of internaat/tehuis) stelt een dossier ‘Preventie en Bescherming’ ter beschikking van o.a. de inspectie en de preventieadviseur.&nbsp;&nbsp;<br />
Dit dossier wordt ‘preventieregister’ genoemd en bevat gegevens&nbsp;waarmee de instelling kan aantonen dat zij een welzijnsbeleid voert conform de wet van 4 augustus 1996. De instelling heeft een belangrijke taak inzake preventie en welzijn. Daarbij zijn heel veel personen betrokken. Het opstellen en bijhouden van het preventieregister&nbsp;is een verantwoordelijkheid van de werkgever. In heel wat instellingen houdt de directie/beheerder en de contactpersoon preventie en bescherming het preventieregister up-to-date.</p>

<ol start="3" style="list-style-type:upper-alpha">
	<li><a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/c-keuringen-en-periodieke-controles" style="color:#C60450" target="_blank">Keuringen en periodieke controles</a>

	<ul>
		<li><a href="/node/66428">C01 Brandalarminstallatie</a></li>
		<li><a href="/node/66440">C02 Brandbestrijdingsmiddelen</a></li>
		<li>C03 Centrifuges*</li>
		<li><a href="/node/66446">C04 Hefwerktuigen</a></li>
		<li><a href="/node/66451">C05 Elektrische installatie: hoogspanning</a></li>
		<li><a href="/node/66452">C06 Elektrische installatie: laagspanning</a></li>
		<li><a href="/node/66487">C07 Gasinstallatie</a></li>
		<li>C08 Gasopslagplaats*</li>
		<li><a href="/node/66489">C09 Ladders en verplaatsbare trappen</a></li>
		<li><a href="/node/66488">C10 Liften</a></li>
		<li><a href="/node/67005">C11 Luchtcompressoren</a></li>
		<li><a href="/node/67007">C12 PBM en CBM</a></li>
		<li><a href="/node/67008">C13 Rook- en gasdetectoren</a></li>
		<li><a href="/node/67010">C14 Stellingen</a></li>
		<li>C15 Stookolietanks*</li>
		<li><a href="/node/67022">C16 Veiligheidsverlichting</a></li>
		<li>C17.1 Verwarmingsinstallaties: stookolie*</li>
		<li><a href="/node/67963">C17.2 Verwarmingsinstallaties: (aard)gas</a></li>
		<li><a href="/node/67965">C18 Lasmateriaal</a></li>
		<li>C19 Ioniserende stralingen*</li>
		<li>C20 Sport- en turntoestellen*</li>
		<li><a href="/node/67966">C21 Andere​</a></li>
	</ul>
	</li>
</ol>
​<span style="font-size:10px"><em><u>Opmerking</u>: * = (nog) niet van toepassing op onze organisatie</em></span>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65856,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-13 09:39:20 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A04 Interventiedossier',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435155963,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '330a2358-054a-49f4-9d20-92538ad1d068',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31416,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-24 16:26:03 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A19.1 Rookbeleid',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452611753,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '33988c2a-9c9e-426a-92be-0740703c1317',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65844,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:15:53 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A17 Arbeidsreglementen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435592017,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3c1c2ce5-64f3-49ff-8323-8e6b1afd0443',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31451,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 17:33:37 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E06 Basiscomité / Tussencomité (BC en TC)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1454576417,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3d82b72d-240d-4676-8388-df6632c02564',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68899,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-02-04 10:00:17 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => ' Logboek - preventie: [maand] [jaar]',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1480330813,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4337270f-3da4-43c8-a552-bfe0ee7b62aa',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>Uitgevoerd</h3>

<table border="1" cellpadding="5" cellspacing="1" style="line-height:20.8px; width:100%">
	<tbody>
		<tr>
			<td style="background-color:rgb(255, 255, 204); text-align:center; vertical-align:top"><strong>Datum</strong></td>
			<td style="background-color:rgb(255, 255, 204); text-align:center; vertical-align:top"><strong>Actie</strong></td>
			<td style="background-color:rgb(255, 255, 204); text-align:center; vertical-align:top"><strong>Status / ev. Bijlage(n)</strong></td>
		</tr>
		<tr>
			<td style="vertical-align:top">09/2016</td>
			<td style="vertical-align:top">Plaatsing bijna afgerond: stroomvoorziening &amp; beton gegoten</td>
			<td style="vertical-align:top">&nbsp;</td>
		</tr>
		<tr>
			<td style="vertical-align:top">10/2016</td>
			<td style="vertical-align:top">Herstelling van de vloer praktijk auto 042</td>
			<td style="vertical-align:top">&nbsp;</td>
		</tr>
		<tr>
			<td style="vertical-align:top">21/09/2016</td>
			<td style="vertical-align:top">Controle brandalarminstallatie - alles in orde</td>
			<td style="vertical-align:top">ok</td>
		</tr>
		<tr>
			<td style="vertical-align:top">22/09/2016</td>
			<td style="vertical-align:top">Evacuatieoefening (zie verslag in bijlage)</td>
			<td style="vertical-align:top">ok</td>
		</tr>
	</tbody>
</table>

<div style="page-break-after: always"><span style="display:none">&nbsp;</span></div>

<h3>Gepland / te plannen</h3>

<table border="1" cellpadding="5" cellspacing="1" style="line-height:20.8px; width:100%">
	<tbody>
		<tr>
			<td style="background-color:rgb(255, 255, 204); text-align:center">Datum</td>
			<td style="background-color:rgb(255, 255, 204); text-align:center">Actie</td>
			<td style="background-color:rgb(255, 255, 204); text-align:center">Status / ev. Bijlage(n)</td>
		</tr>
		<tr>
			<td style="vertical-align:top">&nbsp;</td>
			<td style="vertical-align:top">Plafondtegels vervangen in het elab.</td>
			<td style="vertical-align:top">In behandeling</td>
		</tr>
		<tr>
			<td style="vertical-align:top">21/09/2016</td>
			<td style="vertical-align:top">Controle brandalarminstallaties</td>
			<td style="vertical-align:top">Afgehandeld</td>
		</tr>
		<tr>
			<td style="vertical-align:top">26/09/2016</td>
			<td style="vertical-align:top">Controle asbestinventaris</td>
			<td style="vertical-align:top">Afgehandeld</td>
		</tr>
		<tr>
			<td style="vertical-align:top">&nbsp;</td>
			<td style="vertical-align:top">Inrichting fietsatelier met kasten<br />
			Aankoop van materialen: dossier is lopende - dossier is goedgekeurd</td>
			<td style="vertical-align:top">In behandeling</td>
		</tr>
	</tbody>
</table>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
      2 => array(
        'tid' => '13dfe41d-a07d-478c-99d6-20b725e8091c',
        'uuid' => '13dfe41d-a07d-478c-99d6-20b725e8091c',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 98569,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-11-28 12:00:13 +0100',
  'user_uuid' => 'e00565e0-7e3d-455b-9a6f-96e30c04a2e7',
);
  $nodes[] = array(
  'title' => 'E05 Inspectieverslagen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1454575658,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '487f71f4-01cd-469b-a1e6-ba89de875d9c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68898,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-02-04 09:47:38 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'B Inventarisatie',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452674278,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '56103615-9bf8-4c00-8990-779768630b29',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron:&nbsp;<a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister" style="color:#C60450" target="_blank">http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister</a></p>

<hr />
<p>De onderwijsinstelling (school,&nbsp;centrum voor volwassenenonderwijs, centrum voor deeltijds onderwijs, academie of internaat/tehuis) stelt een dossier ‘Preventie en Bescherming’ ter beschikking van o.a. de inspectie en de preventieadviseur.&nbsp;&nbsp;<br />
Dit dossier wordt ‘preventieregister’ genoemd en bevat gegevens&nbsp;waarmee de instelling kan aantonen dat zij een welzijnsbeleid voert conform de wet van 4 augustus 1996. De instelling heeft een belangrijke taak inzake preventie en welzijn. Daarbij zijn heel veel personen betrokken. Het opstellen en bijhouden van het preventieregister&nbsp;is een verantwoordelijkheid van de werkgever. In heel wat instellingen houdt de directie/beheerder en de contactpersoon preventie en bescherming het preventieregister up-to-date.</p>

<ol start="2" style="list-style-type:upper-alpha">
	<li><a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/b-inventarisatie" style="color:#C60450" target="_blank">Inventarisatie</a>

	<ul>
		<li><a href="/node/31375">B01 Asbest</a></li>
		<li><a href="/node/65904">B02 EHBO</a></li>
		<li><a href="/node/44746" target="_blank">B03 Gevaarlijke stoffen en preparaten</a></li>
		<li><a href="/node/65906">B04 Machines, arbeidsmiddelen, persoonlijke en collectieve beschermingsmiddelen</a></li>
		<li><a href="/node/66395">B05 Ongevallen</a></li>
		<li><a href="/node/66396">B06 Controlelijsten</a></li>
		<li>B07 Speeltoestellen en speelterreinen*</li>
		<li>B08 Psychosociale&nbsp;risico\'s*</li>
		<li>B09 Andere*</li>
	</ul>
	</li>
</ol>
<span style="font-size:10px"><em><u>Opmerking</u>: * = (nog) niet van toepassing op onze organisatie</em></span>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65855,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-13 09:37:58 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'B06 Controlelijsten',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453129507,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '56e61099-6a38-48c0-b4c0-3ce15e10452f',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66474,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-18 16:05:07 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'D02 Milieuvergunning',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453724345,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5b65ca09-990b-4ae4-ba73-463e66207259',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68287,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-25 13:19:05 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'B05 Ongevallen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453128626,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5cdd9461-9ab7-40a5-9dcc-e3b36895e591',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66473,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-18 15:50:26 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C02 Beschermingsmiddelen tegen brand',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453200303,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5da35e3c-e629-49f2-80b8-11e2f89cb35a',
  'body' => array(
    'und' => array(
      0 => array(        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66518,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-19 11:45:03 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A18.1 Explosieveiligheidsdocument',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435592587,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6b844009-6f7a-4b41-b64c-a6d845d9eb0e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31452,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 17:43:07 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C04 Hefwerktuigen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453205797,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6c0db123-07f9-4bb3-a169-21655c3ab614',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66524,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-19 13:16:37 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C05 Elektrische installatie: hoogspanning',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453210796,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6ff4662a-598f-4321-a6a0-05dff676baa2',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66529,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-19 14:39:56 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C01 Brandalarminstallaties',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453189541,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '70b501f1-c6d8-42f2-b9af-33e2d00e7ecf',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66506,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-19 08:45:41 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E07 Preventieverslagen IDPBW',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1454584676,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '719fa09c-7a91-4db2-be51-fe7fb2152579',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68905,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-02-04 12:17:56 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A25 Andere',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1456298777,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '74a8f7f0-b154-4ca1-a711-8cff03cc0faa',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 69727,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-02-24 08:26:17 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A07 Noodprocedures',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435236679,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '74f8d9cc-266e-4ae8-98f2-68e5d926056a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31432,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-25 14:51:19 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'B01 Asbest',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435908033,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '79813def-b7d8-42bf-bcac-700de69ec213',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31453,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-07-03 09:20:33 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C16 Veiligheidsverlichting',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453378962,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7bff8891-de4b-42ad-ad1b-77756f93b671',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 67100,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-21 13:22:42 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'D06 Andere',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452612212,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '82ae23af-d2e6-4cf9-b4f2-7ab992ae886a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65851,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:23:32 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A06 Jaaractieplan',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435234577,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '87826bf7-9886-4902-9491-a24ef2f5917e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31431,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-25 14:16:17 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E09 Andere',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1454581583,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8dc57572-e43e-4620-8789-bc2bb9bb777e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68902,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-02-04 11:26:23 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E04 Indienststellings- en buitengebruikstellingsverslagen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453975658,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '93c36535-a634-4a51-95df-b1bfb4201f28',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'num_revisions' => 2,
  'current_revision_id' => 69765,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-28 11:07:38 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A09 Onthaal en begeleiding nieuwe werknemers',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435560715,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '93cea56c-8553-4e2f-be37-ad74cee64a78',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31437,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 08:51:55 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E03 Brandveiligheidsverslag - Brandrisico',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453893179,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '972eb116-9d93-4f9c-b4c4-70284889150c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68538,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-27 12:12:59 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A08 Onderhoudssteekkaarten',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435236987,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e940b64-3062-42ec-8116-57fd2ca32594',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31433,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-25 14:56:27 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C09 Ladders en verplaatsbare trappen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453282069,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a159809c-8823-4d1c-9b36-6afd2bc3fe22',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66567,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-20 10:27:49 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A23 Brandbestrijdingsdienst',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452612102,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a6ce3ee2-2773-465c-a9e6-1f208fba3630',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65849,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:21:42 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A02 CE-attesten en Conformiteitsattesten',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1434544612,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a982648e-6e5c-4473-a2f1-8e6007c5433d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31112,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-17 14:36:52 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A01 Bestelbon - Aankoopprocedure',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1434524281,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b33a51d7-89ff-4ede-91b9-3b59e1f08551',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => FALSE,
    'alias' => 'preventieregister/a01-bestelbon-aankoopprocedure',
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
  'current_revision_id' => 31111,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-17 08:58:01 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C10 Liften',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453281526,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b5675157-3253-4859-a4b2-7fea460f91e2',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66566,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-20 10:18:46 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'D Vergunningen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452674681,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bf99e90c-7b96-401b-ac2b-6cb6a190f82c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron:&nbsp;<a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister" style="color:#C60450" target="_blank">http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister</a></p>

<hr />
<p>De onderwijsinstelling (school,&nbsp;centrum voor volwassenenonderwijs, centrum voor deeltijds onderwijs, academie of internaat/tehuis) stelt een dossier ‘Preventie en Bescherming’ ter beschikking van o.a. de inspectie en de preventieadviseur.&nbsp;&nbsp;<br />
Dit dossier wordt ‘preventieregister’ genoemd en bevat gegevens&nbsp;waarmee de instelling kan aantonen dat zij een welzijnsbeleid voert conform de wet van 4 augustus 1996. De instelling heeft een belangrijke taak inzake preventie en welzijn. Daarbij zijn heel veel personen betrokken. Het opstellen en bijhouden van het preventieregister&nbsp;is een verantwoordelijkheid van de werkgever. In heel wat instellingen houdt de directie/beheerder en de contactpersoon preventie en bescherming het preventieregister up-to-date.</p>

<ol start="4" style="list-style-type:upper-alpha">
	<li><a href="/node/65778" style="color:#C60450">V</a><a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/d-vergunningen" style="color:#C60450" target="_blank">ergunningen</a>

	<ul>
		<li><a href="/node/68208">D01 Keukens - Voedselveiligheid</a></li>
		<li><a href="/node/68209">D02 Milieuvergunning</a></li>
		<li>D03 Ioniserende stralingen*</li>
		<li>D04 Werkvergunning*</li>
		<li><a href="/node/68290">D05 Farmaceutische producten</a></li>
		<li><a href="/node/65773">D06 Andere</a>
		<ul>
			<li>Water - Vlaamse Milieu Maatschappij</li>
			<li>Gevaarlijke producten labo - FAGG</li>
			<li>Afvalbanden - SIBA</li>
			<li>Autovernietiging - FebelAuto</li>
			<li>Afvalverwerking - SITA</li>
			<li>Olieafscheiding - BRACO</li>
			<li>Belgische Auteursvereniging - SABAM</li>
		</ul>
		</li>
	</ul>
	</li>
</ol>

<div><span style="font-size:10px"><u>Opmerking</u><em>: * = (nog) niet van toepassing op onze organisatie</em></span></div>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65857,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-13 09:44:41 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A21 Register van feiten door derden',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452611988,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c21d7865-167d-4e2b-b57f-8efcf45aaa6a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65847,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:19:48 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E02 Jaarverslag',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453891837,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c47e81f5-d5a8-4344-b0f3-6da18af59bd1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68537,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-27 11:50:37 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C17.2 Verwarmingsinstallaties: (aard)gas',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453710402,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c60b09dc-b40e-4a27-bf1d-c3c3b3501fde',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68041,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-25 09:26:42 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C12 Persoonlijke beschermingsmiddelen en collectieve beschermingsmiddelen (PBM en CBM)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453372392,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cb6cb5ab-6876-43fa-b2bc-a887aa84c2da',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 67085,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-21 11:33:12 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A Documenten',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452671940,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cd4c0c55-495f-4cc3-a97b-339c4302ff9e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron:&nbsp;<a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister" style="color:#C60450" target="_blank">http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister</a></p>

<hr />
<p>De onderwijsinstelling (school,&nbsp;centrum voor volwassenenonderwijs, centrum voor deeltijds onderwijs, academie of internaat/tehuis) stelt een dossier ‘Preventie en Bescherming’ ter beschikking van o.a. de inspectie en de preventieadviseur.&nbsp;&nbsp;<br />
Dit dossier wordt ‘preventieregister’ genoemd en bevat gegevens&nbsp;waarmee de instelling kan aantonen dat zij een welzijnsbeleid voert conform de wet van 4 augustus 1996. De instelling heeft een belangrijke taak inzake preventie en welzijn. Daarbij zijn heel veel personen betrokken. Het opstellen en bijhouden van het preventieregister&nbsp;is een verantwoordelijkheid van de werkgever. In heel wat instellingen houdt de directie/beheerder en de contactpersoon preventie en bescherming het preventieregister up-to-date.</p>

<ol start="1" style="list-style-type:upper-alpha">
	<li><a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten" style="color:#C60450" target="_blank">Documenten</a>

	<ul>
		<li><a href="/node/31033">A01 Bestelbon - Aankoopprocedure</a></li>
		<li><a href="/node/31034">A02 CE-attesten en Comformiteitsattesten</a></li>
		<li><a href="/node/31337">A03 Globaal Preventieplan</a></li>
		<li><a href="/node/31338">A04 Interventiedossier</a></li>
		<li><a href="/node/31352">A05 Identificatiedocument</a></li>
		<li><a href="/node/31353">A06 Jaaractieplan</a></li>
		<li><a href="/node/31354">A07 Noodprocedures</a></li>
		<li><a href="/node/31355">A08 Onderhoudssteekkaarten</a></li>
		<li><a href="/node/31359">A09 Onthaalbrochure</a></li>
		<li><a href="/node/31361">A10 Opleidingen</a></li>
		<li><a href="/node/31362">A11 Preventiebeleidsverklaring</a></li>
		<li><a href="/node/31363">A12 Veiligheidsinstructiekaarten</a></li>
		<li><a href="/node/31364">A13 Legionella (Veteranenziekte)</a></li>
		<li><a href="/node/31370">A14 Werken met derden</a></li>
		<li><a href="/node/31371">A15 Stagedoende jongeren</a></li>
		<li><a href="/node/31372">A16 CLB</a></li>
		<li><a href="/node/31373">A17 Arbeidsreglementen</a></li>
		<li><a href="/node/31374">A18.1 Explosieveiligheidsdocument</a></li>
		<li><a href="/node/65765">A18.2 Zoneringsdossier</a></li>
		<li><a href="/node/65766">A19.1 Rookbeleid</a></li>
		<li><a href="/node/65767">A19.2 Beleid alcohol en andere drugs</a></li>
		<li><a href="/node/65768">A20 Elektrische installatie - installatieverantwoordelijke en werkverantwoordelijke</a></li>
		<li><a href="/node/65769">A21 Register van feiten door derden</a></li>
		<li><a href="/node/65770">A22 Evacuatieplannen</a></li>
		<li><a href="/node/65771">A23 Brandbestrijdingsdienst</a></li>
		<li><a href="/node/65772">A24 Brandpreventie</a></li>
		<li><a href="/node/69649">A25 Andere</a>
		<ul>
			<li>Veiligheidsreglementen</li>
			<li>Diagnose Car</li>
		</ul>
		</li>
	</ul>
	</li>
</ol>

<div><span style="font-size:10px"><u>Opmerking</u><em>: * = (nog) niet van toepassing op onze organisatie</em></span></div>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => FALSE,
    'alias' => 'preventieregister/a-documenten',
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
  'current_revision_id' => 65854,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-13 08:59:00 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C18 Lasmateriaal',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453712696,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ce906d04-79dd-4eab-bcf3-3abfb4b2a331',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68043,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-25 10:04:56 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'Preventieregister',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1434476165,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cf009bcf-ccf6-45d0-8933-57060ca06906',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron:&nbsp;<a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister" style="color:#C60450" target="_blank">http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister</a></p>

<hr />
<p>De onderwijsinstelling (school,&nbsp;centrum voor volwassenenonderwijs, centrum voor deeltijds onderwijs, academie of internaat/tehuis) stelt een dossier ‘Preventie en Bescherming’ ter beschikking van o.a. de inspectie en de preventieadviseur.&nbsp;&nbsp;<br />
Dit dossier wordt ‘preventieregister’ genoemd en bevat gegevens&nbsp;waarmee de instelling kan aantonen dat zij een welzijnsbeleid voert conform de wet van 4 augustus 1996. De instelling heeft een belangrijke taak inzake preventie en welzijn. Daarbij zijn heel veel personen betrokken. Het opstellen en bijhouden van het preventieregister&nbsp;is een verantwoordelijkheid van de werkgever. In heel wat instellingen houdt de directie/beheerder en de contactpersoon preventie en bescherming het preventieregister up-to-date.<br />
<br />
Van alle werken in functie van de veiligheid wordt een <a href="/verslagen/logboek/preventie">logboek</a> bijgehouden.</p>

<p>Het preventieregister is verdeeld in&nbsp;vijf rubrieken:</p>

<table border="1" cellpadding="5" cellspacing="1" style="width:100%">
	<tbody>
		<tr>
			<td style="vertical-align:top; width:33%"><span style="font-size:20px"><strong><a href="/node/65776" style="color: rgb(198, 4, 80); line-height: 20.8px;">A Documenten</a></strong></span>

			<ul>
				<li><a href="/node/31033">A01 Bestelbon - Aankoopprocedure</a></li>
				<li><a href="/node/31034">A02 CE-attesten en Comformiteitsattesten</a></li>
				<li><a href="/node/31337">A03 Globaal Preventieplan</a></li>
				<li><a href="/node/31338">A04 Interventiedossier</a></li>
				<li><a href="/node/31352">A05 Identificatiedocument</a></li>
				<li><a href="/node/31353">A06 Jaaractieplan</a></li>
				<li><a href="/node/31354">A07 Noodprocedures</a></li>
				<li><a href="/node/31355">A08 Onderhoudssteekkaarten</a></li>
				<li><a href="/node/31359">A09 Onthaalbrochure</a></li>
				<li><a href="/node/31361">A10 Opleidingen</a></li>
				<li><a href="/node/31362">A11 Preventiebeleidsverklaring</a></li>
				<li><a href="/node/31363">A12 Veiligheidsinstructiekaarten</a></li>
				<li><a href="/node/31364">A13 Legionella (Veteranenziekte)</a></li>
				<li><a href="/node/31370">A14 Werken met derden</a></li>
				<li><a href="/node/31371">A15 Stagedoende jongeren</a></li>
				<li><a href="/node/31372">A16 CLB</a></li>
				<li><a href="/node/31373">A17 Arbeidsreglementen</a></li>
				<li><a href="/node/31374">A18.1 Explosieveiligheidsdocument</a></li>
				<li><a href="/node/65765">A18.2 Zoneringsdossier</a></li>
				<li><a href="/node/65766">A19.1 Rookbeleid</a></li>
				<li><a href="/node/65767">A19.2 Beleid alcohol en andere drugs</a></li>
				<li><a href="/node/65768">A20 Elektrische installatie - installatieverantwoordelijke en werkverantwoordelijke</a></li>
				<li><a href="/node/65769">A21 Register van feiten door derden</a></li>
				<li><a href="/node/65770">A22 Evacuatieplannen</a></li>
				<li><a href="/node/65771">A23 Brandbestrijdingsdienst</a></li>
				<li><a href="/node/65772">A24 Brandpreventie</a></li>
				<li><a href="/node/69649">A25 Andere</a>
				<ul>
					<li>Veiligheidsreglementen</li>
					<li>Diagnose Car</li>
					<li>Watertechniek Teunissen</li>
				</ul>
				</li>
			</ul>
			</td>
			<td style="vertical-align:top; width:33%"><strong><span style="font-size:20px"><a href="/node/65777" style="color: rgb(198, 4, 80); line-height: 20.8px;">B Inventarisatie</a></span></strong>
			<ul>
				<li><a href="/node/31375">B01 Asbest</a></li>
				<li><a href="/node/65904">B02 EHBO</a></li>
				<li><a href="/node/44746" target="_blank">B03 Gevaarlijke stoffen en preparaten</a></li>
				<li><a href="/node/65906">B04 Machines, arbeidsmiddelen, persoonlijke en collectieve beschermingsmiddelen</a></li>
				<li><a href="/node/66395">B05 Ongevallen</a></li>
				<li><a href="/node/66396">B06 Controlelijsten</a></li>
				<li>B07 Speeltoestellen en speelterreinen*</li>
				<li>B08 Psychosociale&nbsp;risico\'s*</li>
				<li>B09 Andere*</li>
			</ul>
			</td>
			<td style="vertical-align:top; width:33%"><strong><span style="font-size:20px"><a href="/node/65778" style="color: rgb(198, 4, 80); line-height: 20.8px;">C Keuringen en periodieke controles</a></span></strong><br />
			<br />
			<a href="/node/72882"><strong>Overzicht - planning</strong></a>
			<ul>
				<li><a href="/node/66428">C01 Brandalarminstallatie</a></li>
				<li><a href="/node/66440">C02 Brandbestrijdingsmiddelen</a></li>
				<li>C03 Centrifuges*</li>
				<li><a href="/node/66446">C04 Hefwerktuigen</a></li>
				<li><a href="/node/66451">C05 Hoogspanning</a></li>
				<li><a href="/node/66452">C06 Laagspanning</a></li>
				<li><a href="/node/66487">C07 Gasinstallatie</a></li>
				<li>C08 Gasopslagplaats*</li>
				<li><a href="/node/66489">C09 Ladders en verplaatsbare trappen</a></li>
				<li><a href="/node/66488">C10 Liften</a></li>
				<li><a href="/node/67005">C11 Luchtcompressoren</a></li>
				<li><a href="/node/67007">C12 PBM en CBM</a></li>
				<li><a href="/node/67008">C13 Rook- en gasdetektoren</a></li>
				<li><a href="/node/67010">C14 Stellingen</a></li>
				<li>C15 Stookolietanks*</li>
				<li><a href="/node/67022">C16 Veiligheidsverlichting</a></li>
				<li>C17.1 Verwarmingsinstallaties: stookolie*</li>
				<li><a href="/node/67963">C17.2 Verwarmingsinstallaties: (aard)gas</a></li>
				<li><a href="/node/67965">C18 Lasmateriaal</a></li>
				<li>C19 Ioniserende stralingen*</li>
				<li>C20 Sport- en turntoestellen*</li>
				<li><a href="/node/67966">C21 Andere​</a></li>
			</ul>
			</td>
		</tr>
		<tr>
			<td style="vertical-align:top"><span style="font-size:20px"><strong><a href="/node/65779" style="color: rgb(198, 4, 80);">D Vergunningen</a></strong></span>
			<ul>
				<li><a href="/node/68208">D01 Keukens - Voedselveiligheid</a></li>
				<li><a href="/node/68209">D02 Milieuvergunning</a></li>
				<li>D03 Ioniserende stralingen*</li>
				<li>D04 Werkvergunning*</li>
				<li><a href="/node/68290">D05 Farmaceutische producten</a></li>
				<li><a href="/node/65773">D06 Andere</a>
				<ul>
					<li>Water - Vlaamse Milieu Maatschappij</li>
					<li>Gevaarlijke producten labo - FAGG</li>
					<li>Afvalbanden - SIBA</li>
					<li>Autovernietiging - FebelAuto</li>
					<li>Afvalverwerking - SITA</li>
					<li>Olieafscheiding - BRACO</li>
					<li>Belgische Auteursvereniging - SABAM</li>
				</ul>
				</li>
			</ul>
			</td>
			<td style="vertical-align:top"><strong><span style="font-size:20px"><a href="/node/65780" style="color: rgb(198, 4, 80);">E Verslagen</a></span></strong>
			<ul>
				<li><a href="/node/68312">E01 Evacuatieoefening</a></li>
				<li><a href="/node/68459">E02 Jaarverslag FOD WASO</a></li>
				<li><a href="/node/68460">E03 Brandpreventieverslag - Brandrisico</a></li>
				<li><a href="/node/68580">E04 Indienst- en buitengebruik- stellingsverslagen</a></li>
				<li><a href="/node/68820">E05 Inspectieverslagen</a></li>
				<li><a href="/node/68821">E06 Basiscomité / Tussencomité (BC en TC)</a></li>
				<li><a href="/node/68827">E07 Preventieverslagen IDPBW</a></li>
				<li><a href="/node/68826">E08 Preventieverslagen EDPBW</a></li>
				<li><a href="/node/68824">E09 Andere</a></li>
			</ul>
			</td>
			<td style="vertical-align:top">&nbsp;</td>
		</tr>
	</tbody>
</table>

<div><u>Opmerking</u><em>: * = (nog) niet van toepassing op onze organisatie</em></div>
<br />
<span style="font-size:10px">(</span><span style="color:rgb(198, 4, 80); font-size:10px">roze&nbsp;</span><span style="font-size:10px">= Gemeenschappelijke Preventiedienst,&nbsp;</span><span style="color:rgb(0, 51, 204); font-size:10px">blauw&nbsp;</span><span style="font-size:10px">= Interne Preventiedienst)</span>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => FALSE,
    'alias' => 'preventieregister',
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
  'current_revision_id' => 31110,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-16 19:36:05 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'B03 Gevaarlijke stoffen en preparaten',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1442394706,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cf54e121-acf4-49f7-81f5-fce18a85c893',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 44824,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-09-16 11:11:46 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A22 Evacuatieplannen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452612036,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd138fe6e-8fdd-4fc2-bd14-52c1f3ece9de',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65848,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:20:36 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C07 Gasinstallatie',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453279661,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd3e94230-4eaa-4a59-a002-da5a783dcb7b',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 66565,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-20 09:47:41 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'E08 Preventieverslagen EDPBW',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1454584291,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd4e55d33-ddb0-4dcb-b63c-94eb7d2c9909',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68904,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-02-04 12:11:31 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A20 Dossier elektrische installatie',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452611926,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'df1cd65d-968f-40f4-b7f3-06044fa6295b',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65846,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:18:46 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A16 CLB',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435591758,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e395c962-f4c4-4db3-bfd5-5a37688d5374',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31450,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 17:29:18 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A05 Identificatiedocument',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435233842,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e5cdae57-1dfc-42f5-ab61-960b1bbe8974',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31430,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-25 14:04:02 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A14 Werken met derden',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435589823,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e898a5b1-e426-4e46-af2e-1f9ae7eaf8e6',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31448,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 16:57:03 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'D05 Farmaceutische producten',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453792087,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e94a5f79-e663-4665-9807-b451eb9cc3a4',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 68368,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-26 08:08:07 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A12 Veiligheidsinstructiekaarten',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435566941,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ea98d18d-d457-4721-99d6-957b24da281d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31441,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 10:35:41 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A19.2 Beleid alcohol en andere drugs',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452611861,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ecd12046-226b-4da6-b228-dfe200abc2cc',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65845,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-12 16:17:41 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C14 Stellingen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453375231,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ed589ee1-ea68-40ab-9cd3-45df3df89617',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 67088,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-21 12:20:31 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A03 Globaal preventieplan',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435155114,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f6719c6d-4154-4078-969e-1150d6c6da0e',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31415,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-24 16:11:54 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'C13 Rook- en gasdetectoren',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1453374266,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f6cf2ce8-6d3a-43e2-99cf-0af9fd9e2663',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 67086,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-21 12:04:26 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'B02 EHBO-registratie',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1452765594,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f708cb9c-47de-4edc-a309-04af97b82792',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 65982,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2016-01-14 10:59:54 +0100',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A13 Legionella (Veteranenziekte)',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435574352,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f7bc10af-c5ac-46cd-a020-86fd19c16a3c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31442,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 12:39:12 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A10 Opleidingen',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435564741,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fab49e44-0c1f-4f2f-a824-803ba297619d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31439,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 09:59:01 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  $nodes[] = array(
  'title' => 'A15 Stagedoende jongeren',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'nl',
  'created' => 1435590889,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fc3774d6-0db1-4837-a224-aad1be48630c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bron: <a href="http://pro.g-o.be/gezondheid-en-preventie/preventie/preventieregister/a-documenten/a1-bestelbon-aankoopprocedure" style="color: #C60450" target="_blank">PB - A01 Bestelbon - Aankoopprocedure</a></p>

<hr />
<h2>Procedure</h2>

<p>(geef hier je procedure of de algemene procedure van de scholengroep, koepel of het ministerie op)</p>

<h2>Documenten</h2>

<p>Selectie van documenten van toepassing binnen onze werking:</p>

<ul>
	<li>(een lijst van allerlei documenten)</li>
</ul>

<p><span style="font-size:10px">(<span style="color:#C60450">roze</span> = Gemeenschappelijke Preventiedienst van het GO!, <span style="color:rgb(0, 51, 204)">blauw</span> = Interne Preventiedienst)</span></p>
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
        'tid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
        'uuid' => '8dda549b-d76f-4fc6-b1c1-730fd0128dc8',
      ),
      1 => array(
        'tid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
        'uuid' => 'a8ecc315-bd13-40b1-9e07-91352b604da4',
      ),
    ),
  ),
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
    'pathauto' => TRUE,
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
  'current_revision_id' => 31449,
  'is_current' => TRUE,
  'is_pending' => FALSE,
  'revision_moderation' => FALSE,
  'date' => '2015-06-29 17:14:49 +0200',
  'user_uuid' => '5e23f66a-32c6-4312-b7cc-2ce2429725c9',
);
  return $nodes;
}
