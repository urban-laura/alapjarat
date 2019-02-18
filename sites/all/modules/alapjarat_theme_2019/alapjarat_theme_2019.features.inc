<?php
/**
 * @file
 * alapjarat_theme_2019.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alapjarat_theme_2019_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
