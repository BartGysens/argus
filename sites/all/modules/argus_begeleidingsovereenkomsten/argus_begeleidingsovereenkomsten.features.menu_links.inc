<?php
/**
 * @file
 * argus_begeleidingsovereenkomsten.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function argus_begeleidingsovereenkomsten_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_msl---begeleidingsovereenkomst:node/add/msl-begeleidingsovereenkomst
  $menu_links['navigation_msl---begeleidingsovereenkomst:node/add/msl-begeleidingsovereenkomst'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/msl-begeleidingsovereenkomst',
    'router_path' => 'node/add/msl-begeleidingsovereenkomst',
    'link_title' => 'MSL - Begeleidingsovereenkomst',
    'options' => array(
      'attributes' => array(
        'title' => 'Een <em>begeleidingsovereenkomst</em> kan afgesloten worden voor volgende redenen: gedrag, afwezigheden, pesten of een laattijdige inschrijving. De procedure houdt in dat een leerling, tijdens het verloop van de overeenkomst, elke week een evaluatie krijgt van de betrokken leerkracht, klastitularis of begeleider. Deze procedure vind je terug in het Intern KwaliteitsZorgsysteem.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_msl---begeleidingsovereenkomst:node/add/msl-begeleidingsovereenkomst',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'navigation_leerlingvolgsysteem:<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('MSL - Begeleidingsovereenkomst');


  return $menu_links;
}
