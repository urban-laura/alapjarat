<?php
/**
 * @file
 * The datetimepicker settings form.
 */

/**
 *  The timpicker settings form.
 */
function datetimepicker_settings() {
  $form = array();
  $form['timepicker_activation_class'] = array(
    '#type' => t('textfield'),
    '#title' => t('The class used to attach timepickers'),
    '#description' => t('by default "timepicker" is always used, extra classes can be added here (separated by comma, no leading or trailing comma).'),
    '#default_value' => variable_get('timepicker_activation_class', ''),
  );

  $form['datetimepicker_activation_class'] = array(
    '#type' => t('textfield'),
    '#title' => t('The class used to attach datetimepickers'),
    '#description' => t('by default "datetimepicker" is always used, extra classes can be added here (separated by comma, no leading or trailing comma).'),
    '#default_value' => variable_get('datetimepicker_activation_class', ''),
  );

  $form['datetimepicker_default_date_format'] = array(
    '#type' => t('textfield'),
    '#title' => t('The default date format used by the datetimepicker'),
    '#description' => t('warning: <a href="http://docs.jquery.com/UI/Datepicker#option-dateFormat">date formats used by jquery!!</a>'),
    '#default_value' => variable_get('datetimepicker_default_date_format', 'yy-mm-dd'),
  );
  $form['datetimepicker_default_time_format'] = array(
    '#type' => t('textfield'),
    '#title' => t('The default time format used by the datetimepicker'),
    '#description' => t('warning: <a href="http://docs.jquery.com/UI/Datepicker#option-dateFormat">date formats used by jquery!!</a>'),
    '#default_value' => variable_get('datetimepicker_default_time_format', 'hh:mm'),
  );
  $form['datetimepicker_default_separator'] = array(
    '#type' => t('textfield'),
    '#title' => t('The default separator used between date/time'),
    '#description' => t('A space is used by default.'),
    '#default_value' => variable_get('datetimepicker_default_separator', ' '),
  );
  // An example.
  drupal_add_library('system', 'ui.datepicker');
  drupal_add_library('system', 'ui.slider');
  drupal_add_library('datetimepicker', 'jquery-ui-timepicker');
  $form['datetimepicker_example'] = array(
    '#type' => t('textfield'),
    '#title' => t('An date example'),
    '#default_value' => date('Y-m-d H:s'),
    '#attributes' => array('class' => array('datetimepicker')),
  );
  $form['datetimepicker_example_tme'] = array(
    '#type' => t('textfield'),
    '#title' => t('An time example'),
    '#default_value' => date('H:s'),
    '#attributes' => array('class' => array('timepicker')),
  );
  return system_settings_form($form);
}
