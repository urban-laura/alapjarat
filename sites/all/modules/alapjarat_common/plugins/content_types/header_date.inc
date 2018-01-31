<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Header date'),
  'description' => t('a Display of data from the root term of the given TID'),
  'category' => t('Custom Panes'),
  'edit form' => 'alapjarat_common_header_date_settings',
  'render callback' => 'alapjarat_common_header_date_render',
  'admin info' => 'alapjarat_common_header_date_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Edit form.
 */
function alapjarat_common_header_date_settings($form, &$form_state) {
 $conf = $form_state['conf'];

 $form['date_format'] = array(
   '#type' => 'textfield',
   '#title' => t('Date Format'),
   '#default_value' => $conf['date_format'],
 );

 return $form;
}


/**
 * Edit form submit function.
 */
function alapjarat_common_header_date_settings_submit($form, &$form_state) {
  $form_state['conf']['date_format'] = $form_state['values']['date_format'];
}


function alapjarat_common_header_date_render($subtype, $conf, $args, $contexts) {
	$block = new stdClass();

	// initial content is blank
	$block->title = t('This is my title!'); // This will be overridden by the user within the panel options.
	$block->content = date($conf['date_format']);

	return $block;
} 


