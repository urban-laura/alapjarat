<?php
/**
 * @file
 * alapjarat_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function alapjarat_features_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_test|node|a_article|form';
  $field_group->group_name = 'group_test';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'a_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teszt',
    'weight' => '21',
    'children' => array(
      0 => 'field_test_name',
      1 => 'field_test_image',
      2 => 'field_test_options',
      3 => 'field_test_features_pro',
      4 => 'field_test_features_contra',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Teszt',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-test field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_test|node|a_article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Teszt');

  return $field_groups;
}
