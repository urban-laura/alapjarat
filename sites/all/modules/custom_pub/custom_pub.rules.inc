<?php
/**
 * @file
 * Rules integration for Custom Publishing Options module.
 *
 * @addtogroup rules
 * @{
 */

/**
 * Implements hook_rules_condition_info().
 */
function custom_pub_rules_condition_info() {
  $items = array();
  $items['custom_pub_node_has_option'] = array(
    'label' => t('Content has custom publishing option'),
    'parameter' => array(
      'node' => array(
      'type' => 'node',
      'label' => t('Content'),
    ),
    'option' => array(
      'type' => 'text',
      'label' => t('Custom publishing option'),
      'options list' => 'custom_pub_types_list',
    ),
  ),
    'group' => t('Node'),
    'access callback' => 'rules_node_integration_access',
    'base' => 'custom_pub_rules_condition_node_has_option',
  );

  return $items;
}

/**
 * Implements hook_rules_action_info().
 */
function custom_pub_rules_action_info() {
  return array(
    'custom_pub_rules_action_set_publish_type' => array(
      'label' => t('Set a Custom Publishing Option value'),
      'group' => t('Node'),
      'parameter' => array(
        'node' => array(
          'type' => 'node',
          'label' => t('Content'),
        ),
        'option' => array(
          'type' => 'text',
          'label' => t('Custom publishing option'),
          'options list' => 'custom_pub_types_list',
        ),
        'toggled' => array(
          'type' => 'integer',
          'label' => t('Toggled state'),
          'options list' => 'custom_pub_rules_action_set_publish_type_options',
        ),
      ),
    ),
  );
}

/**
 * Return if the node contains the requested option.
 * @param $node
 * @param $option
 * @return bool
 */
function custom_pub_rules_condition_node_has_option($node, $option) {
  return (bool) $node->$option;
}

/**
 * Gets the list of options for the "custom_pub_rules_action_set_publish_type" Rule Action.
 *
 * @return array
 */
function custom_pub_rules_action_set_publish_type_options() {
  return array(
    1 => t('Toggle on'),
    0 => t('Toggle off'),
  );
}

/**
 * Toggles the "on" or "off" state of a Custom Publishing option for a node.
 *
 * @param object $node The node to update.
 * @param string $type The machine name of the custom publishing option.
 * @param integer $toggled "1" for "On" and "0" for "Off".
 */
function custom_pub_rules_action_set_publish_type($node, $type, $toggled) {
  $types = variable_get('custom_pub_types', array());
  // Check if the publishing option is applicable for this node.
  if (!empty($type) && in_array($node->type, array_keys($types[$type]['node_types']))) {
    $node->$type = (bool) $toggled;
    watchdog('action', 'Toggled @type %title custom publishing option: @label to @action',
      array(
        '@action' => ($toggled ? 'on' : 'off'),
        '@type' => node_type_get_types('name', $node),
        '%title' => $node->title,
        '@label' => $types[$type]['name']
      ));
  }
}