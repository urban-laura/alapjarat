<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Articles archive'),
  'description' => t('A menu to achieve articles by date(month)'),
  'category' => t('Custom Panes'),
  'edit form' => 'alapjarat_common_articles_archive_settings',
  'render callback' => 'alapjarat_common_articles_archive_render',
  'admin info' => 'alapjarat_common_articles_archive_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Edit form.
 */
function alapjarat_common_articles_archive_settings($form, &$form_state) {
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
function alapjarat_common_articles_archive_settings_submit($form, &$form_state) {
  $form_state['conf']['date_format'] = $form_state['values']['date_format'];
}


function alapjarat_common_articles_archive_render($subtype, $conf, $args, $contexts) {
	$block = new stdClass();

	// initial content is blank
	$block->title = t('Archive'); // This will be overridden by the user within the panel options.
	$block->content = alapjarat_common_article_archives_menu();

	return $block;
} 


