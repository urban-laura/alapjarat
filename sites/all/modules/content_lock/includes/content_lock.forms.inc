<?php

/**
 * @file
 * content_lock.forms.inc
 */

/**
 * Node and revision form handler.
 */
function content_lock_form_node_handler(&$form, &$form_state, $form_id) {
  // Load module inc file.
  module_load_include('inc', 'content_lock', 'includes/content_lock.node');
  content_lock_node_form_handler($form, $form_state, $form_id);
}
