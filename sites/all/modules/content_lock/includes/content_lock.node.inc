<?php

/**
 * @file
 * content_lock.node.inc
 */

/**
 * Node and node revision handler.
 */
function content_lock_node_form_handler(&$form, &$form_state, $form_id) {
  global $user;

  // Check node object.
  $node = empty($form['#node']) ? NULL : $form['#node'];
  if (is_null($node) || !is_object($node)) {
    return;
  }

  // Check node ID.
  $nid = empty($form['nid']['#value']) ? NULL : $form['nid']['#value'];
  if (is_null($nid) || !is_numeric($nid)) {
    return;
  }

  $destination = 'node/' . $nid;

  // Ensure user acquire a lock when reverting a node to an older revision.
  if (!empty($form['#node_revision']) && is_object($form['#node_revision'])) {
    $node = $form['#node_revision'];
    $nid = $node->nid;
    $destination = 'node/' . $nid . '/revisions';
  }

  // Check node body or format is valid.
  if (!empty($node->body) && is_array($node->body) && !empty($node->body[$node->language][0]['format'])) {
    // The content_lock_is_lockable() needs to know the original
    // node format. We either dig up a stashed content_lock_old_format or
    // initialize it here.
    // Only touch node edit forms and then only if the form is `normal'
    // and has a body with a format (#1183678).
    $old_format = $node->body[$node->language][0]['format'];
    if (!empty($node->content_lock_old_format)) {
      $old_format = $node->content_lock_old_format;
    }
    if (!empty($form_state['values']['content_lock_old_format'])) {
      $old_format = $form_state['values']['content_lock_old_format'];
    }
    // Set content lock existing format.
    $node->content_lock_old_format = $old_format;

    $form['content_lock_old_format'] = array(
      '#type' => 'hidden',
      '#value' => $node->content_lock_old_format,
    );
  }

  // Add skip locking hook for other modules.
  $skip_lock = FALSE;
  $result = module_invoke_all('content_lock_skip_locking', $node, $form_id, $form, $form_state);
  foreach ($result as $bool) {
    if (is_bool($bool)) {
      $skip_lock = $skip_lock || $bool;
    }
  }

  if ($skip_lock === FALSE) {
    // Adding cancel button, if configured.
    if (variable_get('content_lock_admin_cancelbutton', TRUE)) {
      _content_lock_node_form_handler_button($form, $form_state, $form_id);
    }

    $menu_item = menu_get_item();
    if (empty($_GET['content_lock_token']) || !drupal_valid_token($_GET['content_lock_token'], $menu_item['href'])) {
      // Add ajax library.
      drupal_add_library('system', 'drupal.ajax');

      drupal_set_message(t('The page you are editing could not be locked automatically. Please !link to make sure other people cannot accidentally overwrite your changes.', array(
        '!link' => l(t('lock the page'), 'ajax/content_lock/' . $nid . '/lock/' . drupal_get_token($nid) . '/nojs/', array('attributes' => array('class' => array('use-ajax')))),
      )), 'error');
      if (!content_lock_is_path_protected($menu_item['path'])) {
        watchdog('content_lock', 'Attempt to load the node_form form at menu path %path which is not protected from CSRF. Developers who want to create custom node editing pages and protect them with hook_content_lock_path_protected() or use protection_menu_token module to protect this path.', array('%path' => $menu_item['path']), WATCHDOG_WARNING);
      }
    }
    else {
      // Finally set the lock if everything passed.
      if (content_lock_locking($nid, $user->uid) == FALSE) {
        // Could not lock node, it's locked by someone else.
        drupal_goto($destination);
      }
    }
  }
}

/**
 * Node and node revision handler button.
 */
function _content_lock_node_form_handler_button(&$form, $form_state, $form_id) {
  // If we're on the node form.
  $node = empty($form['#node']) ? NULL : $form['#node'];
  $nid = empty($form['nid']['#value']) ? NULL : $form['nid']['#value'];
  if (!empty($form['#node_revision'])) {
    $node = $form['#node_revision'];
    $nid = $node->nid;
  }

  if (!empty($node) && !empty($nid)
    && ($form_id == $node->type . '_node_form' || $form_id == 'node_revision_revert_confirm')
  ) {
    // Revert node.
    if ($form_id == 'node_revision_revert_confirm') {
      /* Hijack the default cancel link to become a lock-releasing link */
      $destination = 'node/' . $nid . '/revisions';
      if (!empty($form['actions']['cancel']['#href'])) {
        $destination = $form['actions']['cancel']['#href'];
      }
      $form['actions']['cancel']['#href'] = 'admin/content/' . $nid . '/content_lock/releaseown';
      $form['actions']['cancel'] += array('#options' => array());
      $form['actions']['cancel']['#options'] += array(
        'query' => array(
          'token' => content_lock_get_release_token($nid),
          'destination' => $destination,
        ),
      );
    }
    // If we're editing a node (not adding).
    else {
      if ($node->nid) {
        $form['actions']['cancel'] = array(
          '#type' => 'button',
          '#weight' => 2000,
          '#value' => t('Cancel edit'),
          '#validate' => array('_content_lock_node_form_handler_cancel_submit'),
        );

        if (isset($form['actions']['delete'])) {
          $form['actions']['delete']['#weight'] = 2001;
        }
      }
    }
  }
}

/**
 * Callback for a cancel request on a node form.
 */
function _content_lock_node_form_handler_cancel_submit(&$form, &$form_state) {
  // Release the node.
  // Load module inc file.
  module_load_include('inc', 'content_lock', 'includes/content_lock.pages');
  content_lock_release_own_item($form['#node']->nid, TRUE, TRUE);
}
