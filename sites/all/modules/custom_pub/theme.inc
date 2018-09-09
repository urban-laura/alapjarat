<?php
/**
 * @file
 * Theme functions for Custom Publishing Options.
 */

/**
 * Return markup for the edit form.
 */
function theme_custom_pub_edit_form($vars) {
  $form = $vars['form'];
  $type = $form['type']['#value'];
  $head = array(
    t('Label'),
    t('Machine Name'),
    t('Node Types'),
    array('data' => '', 'class' => array('close-custom-pub-table')),
  );
  $rows = array(
    array(
      drupal_render($form['state']),
      $type['type'] . drupal_render($form['stateh']),
      drupal_render($form['node_types']),
      drupal_render_children($form),
    ),
  );
  $title = t('Edit ' . $type['name'] . ' option');
  $tvars = array(
    'header' => $head,
    'rows' => $rows,
    'caption' => $title,
  );
  return theme('table', $tvars);
}
