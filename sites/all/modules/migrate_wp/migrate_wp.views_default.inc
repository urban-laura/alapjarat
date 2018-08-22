<?php

function migrate_wp_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'migrate_wp') . '/views', '/\.view/');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }
  }
  return $views;
}