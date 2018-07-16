<?php
/**
 * Created by: hugh
 * Date: 6/3/17
 * Time: 8:06 PM
 */
/**
 * Attempts to directly activate a field that was disabled due to its module
 * being disabled.
 *
 * The normal API function for updating fields, field_update_field(), will not
 * work on disabled fields. As a workaround, this function directly updates the
 * database, but it is up to the caller to clear the cache.
 *
 *  This is mirror of commerce.module equivalent
 *
 * @param $field_name
 *   The name of the field to activate.
 *
 * @return
 *   Boolean indicating whether or not the field was activated.
 */
function y__field_activate($field_name) {
  // Set it to active via a query because field_update_field() does
  // not work on inactive fields.
  $updated = db_update('field_config')
    ->fields(array('active' => 1))
    ->condition('field_name', $field_name, '=')
    ->condition('deleted', 0, '=')
    ->execute();

  return !empty($updated) ? TRUE : FALSE;
}

/**
 * Enables and deletes fields of the specified type.
 *
 *  This is mirror of commerce.module equivalent
 *
 * @param $type
 *   The type of fields to enable and delete.
 */
function y__field_delete_multiple($type, $bundle = NULL) {
  $fields_to_delete = array('type' => $type);
  if ($bundle) {
    $fields_to_delete['bundle'] = $bundle;
  }
  // Read the fields for any active or inactive field of the specified type.
  foreach (field_read_fields($fields_to_delete, array('include_inactive' => TRUE)) as $field_name => $field) {
    y__field_delete($field_name);
  }
}

/**
 * Enables and deletes the specified field.
 *
 * The normal API function for deleting fields, field_delete_field(), will not
 * work on disabled fields. As a workaround, this function first activates the
 * fields of the specified type and then deletes them.
 *
 * This is mirror of commerce.module equivalent
 *
 * @param $field_name
 *   The name of the field to enable and delete.
 */
function y__field_delete($field_name) {
  // In case the field is inactive, first activate it and clear the field cache.
  if (y__field_activate($field_name)) {
    field_cache_clear();
  }

  // Delete the field.
  field_delete_field($field_name);
}

/**
 * Sets property info of fields.
 *
 * @see hook_field_info(),
 * @see entity_metadata_field_entity_property_info()
 * @see entity_field_info_alter()
 * @see https://www.drupal.org/docs/7/api/entity-api/property-info-for-fields
 */
function y__field_property_info_callback(&$info, $entity_type, $field, $instance, $field_type) {
  // $name = $field['field_name'];
  // $property = &$info[$entity_type]['bundles'][$instance['bundle']]['properties'][$name];
  $property = y__protocol('field', 'property_info', $field_type['module']);
  if ($field['cardinality'] != 1) {
    $property['type'] = 'list<' . $property['type'] . '>';
  }

  unset($property['query callback']);
}

/**
 * Deletes any field instance attached to entities of the specified type,
 * regardless of whether or not the field is active.
 *
 * This is mirror of commerce.module equivalent
 *
 * @param $entity_type
 *   The type of entity whose fields should be deleted.
 * @param $bundle
 *   Optionally limit instance deletion to a specific bundle of the specified
 *   entity type.
 */
function y__instance_delete_multiple($entity_type, $bundle = NULL) {
  // Prepare a parameters array to load the specified instances.
  $params = array(
    'entity_type' => $entity_type,
  );

  if (!empty($bundle)) {
    $params['bundle'] = $bundle;
    // Delete this bundle's field bundle settings.
    variable_del('field_bundle_settings_' . $entity_type . '__' . $bundle);
  }
  else {
    // Delete all field bundle settings for this entity type.
    db_delete('variable')
      ->condition('name', db_like('field_bundle_settings_' . $entity_type . '__') . '%', 'LIKE')
      ->execute();
  }

  // Read and delete the matching field instances.
  foreach (field_read_instances($params, array('include_inactive' => TRUE)) as $instance) {
    y__instance_delete($instance);
  }
}

/**
 * Deletes the specified instance and handles field cleanup manually in case the
 * instance is of a disabled field.
 *
 * This is mirror of commerce.module equivalent
 *
 * @param $instance
 *   The field instance info array to be deleted.
 */
function y__instance_delete($instance) {
  // First activate the instance's field if necessary.
  $field_name = $instance['field_name'];
  $activated = y__field_activate($field_name);

  // Clear the field cache if we just activated the field.
  if ($activated) {
    field_cache_clear();
  }

  // Then delete the instance.
  field_delete_instance($instance, FALSE);

  // Now check to see if there are any other instances of the field left.
  $field = field_info_field($field_name);

  if (count($field['bundles']) == 0) {
    field_delete_field($field_name);
  }
  elseif ($activated) {
    // If there are remaining instances but the field was originally disabled,
    // disabled it again now.
    $field['active'] = 0;
    field_update_field($field);
  }
}

/**
 * Create an instance of a field for a bundle. Quickly instantiate a field
 * instance and its associated field.
 */
function y__instance_create($instancedefiningmodule, $instancename, $entity_type, $bundle, $info) { //, $label, $weight = 0, $units = array(), $display = array()) {
  y__field_activate($instancename);
  if (empty($info['definition'])) { // || empty($yinfo[$info['definition']])) {
    watchdog('YAML', 'Invalid field instance definition specified [:fieldname]', array(':fieldname' => $instancename));
    return;
  }
  field_cache_clear();
  $field = field_info_field($instancename);
  $instance = field_info_instance($entity_type, $instancename, $bundle);

  if (empty($field)) {
    $fieldinfo = y__protocol('instance', 'field', $instancedefiningmodule);
    $field = $fieldinfo[$info['definition']];
    $field['field_name'] = $instancename;
    field_create_field($field);
  }

  if (empty($instance)) {
    $instance = $info['instance'] ?? array();
    $instance += y__protocol('instance', 'instance', $instancedefiningmodule);
    $instance['field_name'] = $instancename;
    $instance['bundle'] = $bundle;
    $instance['entity_type'] = $entity_type;

    $entity_info = entity_get_info($entity_type);

    $entity_info['view modes'] += array(
      'default' => array(),
    );
    $weight = 0;
    $display = array('label' => 'hidden', 'settings' => array());
    $displaydef = y__protocol('instance', 'display', $instancedefiningmodule);
    foreach ($entity_info['view modes'] as $view_mode => $data) {
      $instance['display'][$view_mode] = $displaydef[$view_mode] ?? array();
      $instance['display'][$view_mode] += $display + array('weight' => $weight++);
    }
    field_create_instance($instance);
  }
  else { // instance info exists, needs to be updated for bundle and entity
    $change = FALSE;
    $existinginstance = $instance;
    foreach (array(
               'entity_type' => $entity_type,
               'bundle' => $bundle
             ) as $instancefield => $instanceinfo) {
      if (!is_array($existinginstance[$instancefield])) {
        $existinginstance[$instancefield] = array($existinginstance[$instancefield]);
        $change = TRUE;
      }
      else {
        if ($existinginstance[$instancefield]) {
          $existinginstance[$instancefield][] += is_array($instanceinfo) ? $instanceinfo : array($instanceinfo);
          $change = TRUE;
        }
      }
    }
    if ($change) {
      _field_write_instance($existinginstance, TRUE);
    }
  }
}

/**
 * Create instances from definitions in a protocol
 * @param $protocol
 * @param $requestingmodule
 */
function y__instance_create_defaults($protocol, $requestingmodule) {
  $bundleinfo = y__protocol($protocol, 'bundle', $requestingmodule);
  foreach (y__protocol($protocol, 'fields', $requestingmodule) as $bundle => $fields) {
    foreach ($fields as $fieldname => $fieldinfo) {
      $instancedefiningmodule = $fieldinfo['instance defining module'] ?? ($bundleinfo[$bundle]['module'] ?? $requestingmodule);
      $targetentity = $fieldinfo['target entity'] ?? ($bundleinfo[$bundle]['entity'] ?? '');
      if (!$targetentity) {
        drupal_set_message('No target entity defined for instance ' . $requestingmodule . ':' . $fieldname);
        continue;
      }
      y__instance_create($instancedefiningmodule, $fieldname, $targetentity, $bundle, $fieldinfo);
    }
  }
}