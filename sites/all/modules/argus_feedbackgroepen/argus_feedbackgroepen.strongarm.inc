<?php
/**
 * @file
 * argus_feedbackgroepen.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function argus_feedbackgroepen_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_feedbackgroep';
  $strongarm->value = array(
    'view_own' => array(
      0 => 3,
      1 => 86,
      2 => 225,
      3 => 274,
      4 => 218,
      5 => 219,
    ),
    'view' => array(
      0 => 216,
      1 => 3,
      2 => 86,
      3 => 225,
      4 => 274,
      5 => 218,
      6 => 219,
    ),
  );
  $export['content_access_feedbackgroep'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__feedbackgroep';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__feedbackgroep'] = $strongarm;

  return $export;
}