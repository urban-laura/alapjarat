<?php
/**
 * Created by: hugh
 * Date: 7/31/17
 * Time: 8:59 PM
 */
/**
 * Implements hook_entity_property_info_alter().
 * This may or may not be a good idea...
 * It is a demonstration of how y can automatically implement hooks for subscribing modules.
 * In this case, y will implement hook_entity_property_info_alter() for any module
 * implementing an entity using y -- one less hook to implement.
 * It would be quite easy to do this with MANY superfluous hooks.
 */
function y_entity_property_info_alter(&$info) {
  y__protocol('entity', 'property info alter', NULL, $info);
}

/**
 * Get rich extra fields information. This can be used as a basis for implementing
 * hook_field_extra_fields()
 */
function y__entity_extraFields($entityType, $bundle=NULL) {
  static $entityproperties = NULL;
  static $extraentityproperties = NULL;
  static $extrapropertybundles = NULL;
  static $extradatabundles = NULL;
  static $extraentity = NULL;
  static $rootentity = NULL;
  $entityinfo = entity_get_info($entityType);
  $bundleprotocol = $entityinfo['bundle protocol'] ?? '';
  $weight = 0;
  if ($entityproperties === NULL) {
    $entityproperties = y__protocol('entity', 'properties', $entityinfo['module']??NULL)[$entityType] ?? array();
  }
  if ($extraentityproperties === NULL) {
    $extraentityproperties = y__protocol('entity', 'extra fields', $entityinfo['module']??NULL)[$entityType] ?? array();
  }
  if ($extrapropertybundles === NULL) {
    $extrapropertybundles = $bundleprotocol ? y__protocol($bundleprotocol, 'properties') : array();
  }
  if ($extradatabundles === NULL) {
    $extradatabundles = $bundleprotocol ? y__protocol($bundleprotocol, 'data') : array();
  }
  $extras = array();
  // first make entries for all generic entity extras
  foreach ($extraentityproperties as $name => $info) {
    $defaults = array(
      'label' => $info['label'] ?? $entityproperties[$name]['label'] ?? $name,
      'description' => $info['description'] ?? $entityproperties['description'] ?? '',
      'weight' => $info['weight'] ?? $weight++
    );
    $info += $defaults + array('form' => array(), 'display' => array());
    $info['form'] += $defaults;
    $info['display'] += $defaults;
    $info['type'] = 'property';
    $extras[$entityType][$entityType][$name] = $info;
  }

  // add entries for bundle properties
  foreach ($extrapropertybundles as $bundlename => $bundleproperties) {
    foreach ($bundleproperties as $name => $info) {
      $info = $info ?? array();
      $info += $extras[$entityType][$entityType][$name];
      $info['form'] += $extras[$entityType][$entityType][$name]['form'];
      $info['display'] += $extras[$entityType][$entityType][$name]['display'];
      $extras[$entityType][$bundlename][$name] = $info;
    }
  }
  // add entries for declared bundle data items
  foreach ($extradatabundles as $bundlename => $dataset) {
    foreach ($dataset as $name => $info) {
      if ($info === NULL) {
        $info = array();
      }
      if (!is_array($info)) {
        $info = array($info);
      }
      $normname = y__term_normalize($name, 'words');
      $camelname = y__term_normalize($name, 'camel');
      $weight = 0;
      $defaults = array(
        'label' => ucfirst($normname),
        'description' => ucfirst($normname),
        'weight' => $weight++
      );
      $info += $defaults + array('form' => array(), 'display' => array());
      $info['type'] = 'data';
      $info['form'] += $defaults;
      $info['display'] += $defaults;
      $extras[$entityType][$bundlename][$camelname] = $info;
    }
  }
  return $bundle ? ($extras[$entityType][$bundle] ?? array()) : $extras[$entityType];
}

/**
 * Implements hook_entitytype_view() for any entities that want to use it.
 * @param $entity
 * @param $view_mode
 * @param $langcode
 */
function y__entity_view($entity, $view_mode, $langcode) {
  $entityType = $entity->entityType();
  $entityInfo = entity_get_info($entityType);
  $entityProperties = entity_get_property_info($entityType);
  $extrafields = y__entity_extraFields($entityType);
  $bundle = $entity->type;
  $tokens = y__token_build_list(array_keys($extrafields[$entityType][$entity->type]));
  $substitution = y__token_set_values($tokens, $entity);

  foreach ($extrafields[$entityType][$entity->type] as $name => $info) {
    $label = t($info['label'] ?? ucfirst($name));
    $accesscallback = isset($extrafields[$entityType][$name]['access callback']) ? $extrafields[$entityType][$name]['access callback'] : NULL;
    if ($accesscallback === NULL) {
      $accesscallback = isset($entityProperties['properties'][$name]['access callback']) ? $entityProperties['properties'][$name]['access callback'] : NULL;
      if ($accesscallback === NULL) {
        $accesscallback = isset($entityInfo['property access callback'])
          ? $entityInfo['property access callback']
          : NULL;
      }
    }
    $access = (is_string($accesscallback) && function_exists($accesscallback)) ? $accesscallback('view', $name, $entityType, $entity) : $accesscallback;
    $value = $info['type'] == 'property' ? ($entity->$name ?? '') : ($entity->data[$name] ?? '');
    $default_render = array(
      '#theme' => 'yvalue',
      '#title' => $label,
      '#value' => $value,
      '#access' => $access,
    );
    $render = ($extrafields[$entityType][$bundle][$name]['view mode'][$view_mode] ?? array());
    $render += ($extrafields[$entityType][$bundle][$name]['display render'] ?? array());
    $render += ($extrafields[$entityType][$entityType][$name]['view mode'][$view_mode] ?? array());
    $render += ($extrafields[$entityType][$entityType][$name]['display render'] ?? array());
    $render += $default_render;
    $entity->content[] = $render;
  }
  $entity->content = y__token_substitute($entity->content, $substitution);
}

/**
 * Create some default entities
 * @param $bundleprotocol
 * @param $module
 */
function y__bundle_create_defaults($bundleprotocol, $module) {
  foreach (y__protocol($bundleprotocol, 'bundle', $module) as $bundle => $info) {
    $defaults = array('type' => $bundle, 'label' => t(ucfirst($bundle)));
    $info['create'] += $defaults;
    $entity = entity_create($info['entity type'], $info['create']);
    $entity->save();
  }
}

