<?php
/**
 * @file
 * Views related hooks.
 */

/**
 * Implements hook_views_data_alter().
 */
function select_translation_views_data_alter(&$cache) {
  $cache['node']['select_translation'] = array(
    'group' => t('Content translation'),
    'title' => t('Select translation'),
    'help' => t('For all the nodes representing a translation of the same content, only display one of the nodes'),
    'filter' => array(
      'handler' => 'select_translation_filter_handler',
    ),
  );
}

/**
 * Implements hook_views_handlers().
 */
function select_translation_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'select_translation'),
    ),
    'handlers' => array(
      'select_translation_filter_handler' => array(
        'parent' => 'views_handler_filter',
      ),
    ),
  );
}
