<?php

/**
 * @file
 * content_lock.ajax.inc
 */

/**
 * AJAX callback to lock a node manually.
 *
 * @param object $node
 * 
 *   The node to lock.
 * @param string $token
 *   The CSRF token.
 */
function content_lock_node_ajax_callback($entity_id, $token, $ajax = NULL) {
  $is_ajax = $ajax === 'ajax';

  if (!drupal_valid_token($token, $entity_id)) {
    return MENU_ACCESS_DENIED;
  }

  global $user;

  // Lock current entity.
  content_lock_locking($entity_id, $user->uid);

  // Add the javascript that unlocks the node when the user navigates away
  // from the page.
  $form = array('nid' => array('#value' => $entity_id));
  content_lock_js($form);

  if ($is_ajax) {
    $commands = array();
    $commands[] = ajax_command_remove('div.messages');
    $commands[] = ajax_command_before('#block-system-main', theme('status_messages'));
    ajax_deliver(array('#type' => 'ajax', '#commands' => $commands));
  }
  else {
    drupal_set_message(t('The content is locked now.'));
    drupal_goto();
  }
}
