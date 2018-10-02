<?php

/**
 * @file
 * Common pages for the Content Lock module.
 */

/**
 * Build an overview of locked documents.
 *
 * @param object $account
 *    User account.
 *
 * @return string
 *    Overview list.
 *
 * @throws \Exception
 */
function content_lock_overview($account = NULL) {
  global $user;
  // @TODO old checkout code, review.
  $header = array(
    array(
      'data' => t('Title'),
      'field' => 'n.title',
      'sort' => 'asc',
    ),
  );
  // In the case of an admin, we do not have uid, as he sees all locks.
  if (!is_object($account)) {
    $header[] = array('data' => t('Username'), 'field' => 'u.name');
    $uid = NULL;
  }
  // Otherwise we have the account of the user just being views as argument.
  else {
    $uid = $account->uid;
  }
  $header[] = array('data' => t('Locked since'), 'field' => 'c.timestamp');
  if ($uid == $user->uid || user_access('administer checked out documents')) {
    $header[] = t('Operations');
  }

  $query = db_select('content_lock', 'c')
    ->extend('TableSort')
    ->fields('c');
  $n = $query->join('node', 'n', '%alias.nid = c.entity_id');
  $query->fields($n, array('title'));
  $u = $query->join('users', 'u', '%alias.uid = c.uid');
  $query->fields($u, array('name'));
  if ($uid) {
    $query->condition('c.uid', $uid);
  }
  $query->orderByHeader($header);

  $rows = array();
  foreach ($query->execute() as $data) {
    $url = $uid ? "admin/content/" . $data->entity_id . "/content_lock/releaseown" : 'admin/content/content_lock/release/' . $data->entity_id;
    $row = array();
    $row[] = l($data->title, "node/$data->entity_id");
    if (!$uid) {
      $row[] = theme('username', array('account' => user_load($data->uid)));
    }
    $row[] = format_date($data->timestamp, 'small');
    if ($uid == $user->uid || user_access('administer checked out documents')) {
      $row[] = l(t('release lock'), $url, array('query' => array('token' => content_lock_get_release_token($data->entity_id))));
    }
    $rows[] = $row;
  }

  $output = theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array('id' => 'content_lock'),
    'empty' => t('No locked documents.'),
  ));
  $output .= theme('pager', array('quantity' => 50));

  return $output;
}

/**
 * Menu callback.
 *
 * Release a locked node for all users or a specific user.
 *
 * @param int $nid
 *   A node id.
 * @param object $account
 *   A user object. If passed, the lock will only be released if this
 *   user owned it.
 *
 * @return int
 *   This function will execute a redirect and not return.
 *
 * @throws \Exception
 */
function content_lock_release_item($nid, $account = NULL) {
  global $user;
  if (empty($_GET['token']) || !drupal_valid_token($_GET['token'], "content_lock/release/$nid")) {
    return MENU_ACCESS_DENIED;
  }
  if (!$account && content_lock_verbose()) {
    /*
     * Enable our "lock released" message to inform the user who
     * likely owned the lock which is to be broken.
     */
    $lock = content_lock_fetch_lock($nid);
  }
  content_lock_release($nid, $account ? $account->uid : NULL);
  if (content_lock_verbose()) {
    if (!empty($lock) && !$account && $user->uid != $lock->uid) {
      $lock_account = user_load($lock->uid);
      drupal_set_message(t('The editing lock held by !user has been released.', array('!user' => theme('username', array('account' => $lock_account)))), 'status', FALSE);
    }
    else {
      drupal_set_message(t('The editing lock has been released.'), 'status', FALSE);
    }
  }
  drupal_goto($account ? "user/{$account->uid}/content_lock" : 'admin/content/content_lock');
}

/**
 * Release the lock of a node.
 *
 * We are using the current users uid, so the user only can delete his
 * own locks. We never fail, as if the lock does not exist,
 * the node is unlocked anyway.
 *
 * @param bool $response
 *   When set to FALSE, indicates that the request was made through
 *   ajax. This means that we shouldn't talk to the user. It also
 *   means that we should compare the ajax_key to fix the page Reload
 *   bug (http://drupal.org/node/1049708). In the page reload bug, the
 *   browser sends a request to load the edit page and simultaneously
 *   sends an AJAX request asking for the node to be unlocked. By
 *   changing the ajax_key when responding to the browser, we can
 *   detect that the soon-to-come ajax request is from the previous
 *   page load and that it should be ignored.
 * @param bool $ignore_token
 *   Use this to disable the anti-CSRF token check. This should only
 *   be disabled when some other means is being used to prevent
 *   CSRF. Drupal forms, for example, are already protected by the
 *   equivalent of a token—we need not and may not go adding tokens to
 *   the node forms we hijack.
 *
 * @return int
 *   Return int.
 */
function content_lock_release_own_item($nid, $response = TRUE, $ignore_token = FALSE) {
  global $user;
  if (!$ignore_token) {
    if (!isset($_GET['token']) || !drupal_valid_token($_GET['token'], "content_lock/release/$nid")) {
      return MENU_ACCESS_DENIED;
    }
  }
  if ($nid != NULL) {
    /*
     * Imply that this is an AJAX request if we aren't expected to
     * interface with a human.
     */
    if (!$response) {
      $lock = content_lock_fetch_lock($nid);
      if (empty($lock) || strcmp($_GET['k'], $lock->ajax_key)) {
        // We have no lock or the key doesn't match. Don't unlock the node.
        drupal_exit();;
      }
    }
    content_lock_release($nid, $user->uid);
    // Set drupal_get_messages().
    if ($response) {
      drupal_goto("node/$nid");
    }
    else {
      drupal_exit();;
    }
  }
  else {
    // If a user was creating a node and canceled.
    if ($response) {
      drupal_goto();
    }
    else {
      drupal_exit();;
    }
  }
}
