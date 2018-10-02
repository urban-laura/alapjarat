<?php

/**
 * @file
 * content_lock.func.inc
 */

/**
 * Form alter handler callback.
 */
function _content_lock_form_handler(&$form, &$form_state, $form_id, $callback = '') {
  // Load module inc file.
  module_load_include('inc', 'content_lock', 'includes/content_lock.forms');

  if (!empty($callback) && function_exists($callback)) {
    $callback($form, $form_state, $form_id);
  }
}

/**
 * Check lock status.
 *
 * @param int $uid
 *    User ID.
 * @param int $nid
 *    Node ID.
 *
 * @return bool
 *    Return TRUE OR FALSE.
 */
function _content_lock_still_locked($uid, $entity_id, $entity_type = 'node') {
  $query = db_select('content_lock', 'c')
    ->condition('entity_id', $entity_id)
    ->condition('entity_type', $entity_type)
    ->condition('uid', $uid)
    ->countQuery();
  $result = $query->execute();

  return (bool) $result->fetchField();
}

/**
 * Release all locks.
 */
function _content_lock_release_all_user_locks($uid) {
  db_delete('content_lock')
    ->condition('uid', $uid)
    ->execute();
}

/**
 * Save lock warning.
 *
 * @param string $message
 *    Message string.
 * @param int $nid
 *    Node id.
 */
function _content_lock_save_lock_warning($message, $nid) {
  if (empty($_SESSION['content_lock'])) {
    $_SESSION['content_lock'] = '';
  }
  $data = unserialize($_SESSION['content_lock']);
  if (!is_array($data)) {
    $data = array();
  }

  if (array_key_exists($nid, $data)) {
    return;
  }

  $data[$nid] = $message;
  $_SESSION['content_lock'] = serialize($data);
}

/**
 * Show warnings.
 */
function _content_lock_show_warnings() {
  global $user;
  if (empty($_SESSION['content_lock'])) {
    return;
  }
  $data = unserialize($_SESSION['content_lock']);
  if (!is_array($data) || count($data) == 0) {
    return;
  }
  foreach ($data as $nid => $messsage) {
    if (_content_lock_still_locked($user->uid, $nid)) {
      drupal_set_message($messsage, 'warning', FALSE);
    }
  }
  $_SESSION['content_lock'] = '';
}

/**
 * Warn pending locks.
 *
 * For every lock a user current have on any nodes, print a warning message
 * with an link to release this node.
 *
 * @param int $uid
 *    User ID.
 */
function _content_lock_show_warnings_pending($uid) {
  // Cache.
  static $warned_nodes = array();
  static $content_lock_messages_printed = FALSE;
  if ($content_lock_messages_printed) {
    return;
  }

  if (!array_key_exists($uid, $warned_nodes)) {
    // Load form db.
    $warned_nodes[$uid] = array();
    $query = db_select('content_lock', 'c')
      ->fields('c', array('entity_id'))
      ->fields('c', array('entity_type'))
      ->condition('c.uid', $uid);
    $n = $query->leftJoin('node', 'n', '%alias.nid = c.entity_id');
    $query->fields($n, array('title'));

    // Fetch locked entities.
    foreach ($query->execute() as $lock) {
      $warned_nodes[$uid][] = $lock;
    }
  }

  foreach ($warned_nodes[$uid] as $lock) {
    $nodetitle_link = l($lock->title, "node/{$lock->entity_id}");
    $token = content_lock_get_release_token($lock->entity_id);
    $releasethelock_link = l(t('release the lock'), "admin/content/{$lock->entity_id}/content_lock/releaseown", array('query' => array('token' => $token)));
    _content_lock_save_lock_warning(t("The node '!nodetitle_link' is locked by you. You may want to '!releasethelock_link' in order to allow others to edit.", array(
      '!nodetitle_link' => $nodetitle_link,
      '!releasethelock_link' => $releasethelock_link,
    )), $lock->entity_id);
  }
  $content_lock_messages_printed = TRUE;
}

/**
 * Save locking into database.
 */
function _content_lock_locking_save($entity_id, $uid, $entity_type = 'node') {
  $result = db_merge('content_lock')
    ->key(array(
      'entity_id' => $entity_id,
      'entity_type' => $entity_type,
    ))
    ->fields(array(
      'entity_id' => $entity_id,
      'entity_type' => $entity_type,
      'uid' => $uid,
      'timestamp' => REQUEST_TIME,
      'ajax_key' => rand(),
    ))
    ->execute();

  return $result;
}

/**
 * Delete locking item from database.
 */
function _content_lock_locking_delete($entity_id, $uid, $entity_type = 'node') {
  $query = db_delete('content_lock')
    ->condition('entity_type', $entity_type)
    ->condition('entity_id', $entity_id);
  if (!empty($uid)) {
    $query->condition('uid', $uid);
  }

  $result = $query->execute();

  return $result;
}
