<?php
/**
 * @file
 * argus_gebruikers.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function argus_gebruikers_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[user:name] | [site:name]',
      ),
      'image_src' => array(
        'value' => '[user:picture:url]',
      ),
      'og:title' => array(
        'value' => '[user:name]',
      ),
      'og:type' => array(
        'value' => 'profile',
      ),
      'profile:username' => array(
        'value' => '[user:name]',
      ),
      'og:image' => array(
        'value' => '[user:picture:url]',
      ),
      'twitter:title' => array(
        'value' => '[user:name]',
      ),
      'twitter:image' => array(
        'value' => '[user:picture:url]',
      ),
    ),
  );

  return $config;
}
