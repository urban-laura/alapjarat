<?php

function _y__theme_tag( $value, $tag, $attributes ) {
  $output = $prefix = $suffix = '';
  if( $value ) {
    if( $tag ) {
      $prefix = '<'. $tag . drupal_attributes($attributes) . '>';
      $suffix = '</' . $tag . '>';
    }
    if( !is_scalar($value) ) {
      $value = '<pre>' . yaml_emit((array) $value) . '</pre>';
    }
    $output = $prefix . t($value) . $suffix;
  }
  return( $output );
}

function theme_yvalue( $variables ) {
  $output = '';
  $title = _y__theme_tag($variables['title'] . $variables['title_separator'], $variables['title_tag'], $variables['title_attributes']);
  if( $variables['options'] && isset($variables['options'][$variables['value']])) {
    $variables['value'] = $variables['options'][$variables['value']];
  }
  if( $value = _y__theme_tag($variables['value'], $variables['value_tag'], $variables['value_attributes']) ) {
    switch ($variables['title_display']) {
      case 'after':
        $output = $value . ' ' . $title;
        break;
      case 'hidden':
        $output = $value;
        break;
      case 'before':
      default:
        $output = $title . ' ' . $value;
        break;
    }
  }
  return $output ? _y__theme_tag($output, $variables['wrapper_tag'], $variables['wrapper_attributes']) : '';
}

