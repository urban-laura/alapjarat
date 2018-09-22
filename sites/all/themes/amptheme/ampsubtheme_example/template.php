<?php

/**
 * Preprocess all templates.
 */
function ampsubtheme_example_preprocess(&$vars, $hook) {
  $vars['ampsubtheme_path_file'] = DRUPAL_ROOT . '/' . drupal_get_path('theme', 'ampsubtheme_example');
}

/**
 * Implements hook_preprocess_HOOK() for HTML document templates.
 *
 * Example of a preprocess hook for a subtheme that could be used to change
 * variables in templates in order to support custom styling of AMP pages.
 */
function ampsubtheme_example_preprocess_html(&$variables) {

}
