<?php
/**
 * @file
 * alapjarat_features.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function alapjarat_features_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['hu'] = array(
  'site_name' => 'Alapjárat',
  'site_slogan' => '<h1>Magyar autós közösség</h1>',
);

return $realm_variables;
}