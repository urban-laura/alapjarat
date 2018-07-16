<?php

function theme_yviews( $variables ) {
  $function = (!isset($variables['function']) || !function_exists($variables['function'])) 
    ? 'y__views' 
    : $variables['function'];
  $arguments = $variables['arguments'] ?? array();
  $elements = $function($arguments);
  return drupal_render( $elements );
}