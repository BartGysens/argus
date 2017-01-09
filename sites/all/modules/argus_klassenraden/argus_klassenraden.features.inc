<?php
/**
 * @file
 * argus_klassenraden.features.inc
 */

/**
 * Implements hook_node_info().
 */
function argus_klassenraden_node_info() {
  $items = array(
    'lvs_klassenraad' => array(
      'name' => t('LVS - Klassenraad'),
      'base' => 'node_content',
      'description' => t('Plan en organiseer je <em>klassenraad</em> om er nadien notulen en acties aan te koppelen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'lvs_klassenraad_notitie' => array(
      'name' => t('LVS - Klassenraad - notitie'),
      'base' => 'node_content',
      'description' => t('Maak je administratie rond tijdens de <em>klassenraad</em> en noteer wat er over een bepaalde leerling werd gezegd en welke acties er aan vastgekoppeld worden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
