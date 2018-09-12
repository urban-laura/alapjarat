<?php
/**
 * @file
 * alapjarat_features.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function alapjarat_features_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_register_form';
  $captcha->module = 'hidden_captcha';
  $captcha->captcha_type = 'Hidden CAPTCHA';
  $export['user_register_form'] = $captcha;

  return $export;
}
