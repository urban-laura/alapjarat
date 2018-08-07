<?php
/**
 * @file
 * alapj_rat_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function alapj_rat_features_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: administrator2.
  $roles['administrator2'] = array(
    'name' => 'administrator2',
    'weight' => 3,
  );

  return $roles;
}
