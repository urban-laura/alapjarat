<?php
/**
 * @file
 * alapj_rat_features.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function alapj_rat_features_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => 0,
  );
  // Exported language: hu.
  $languages['hu'] = array(
    'language' => 'hu',
    'name' => 'Hungarian',
    'native' => 'Magyar',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'hu',
    'weight' => 0,
  );
  return $languages;
}
