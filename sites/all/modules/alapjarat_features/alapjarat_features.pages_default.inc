<?php
/**
 * @file
 * alapjarat_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function alapjarat_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_2c3793f9-2690-4d2a-9f62-7972906cf6c0';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'a_article' => 'a_article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'alapjarat_theme',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'node_pane',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd01002e5-a6cd-4b74-9c05-c5f1542121bd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_2c3793f9-2690-4d2a-9f62-7972906cf6c0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-771a85da-dccb-4c03-9b86-354f110fb632';
  $pane->panel = 'center';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '771a85da-dccb-4c03-9b86-354f110fb632';
  $display->content['new-771a85da-dccb-4c03-9b86-354f110fb632'] = $pane;
  $display->panels['center'][0] = 'new-771a85da-dccb-4c03-9b86-354f110fb632';
  $pane = new stdClass();
  $pane->pid = 'new-1afacd9d-cf30-4199-ab76-f0dbd4ceab3b';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_title2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1afacd9d-cf30-4199-ab76-f0dbd4ceab3b';
  $display->content['new-1afacd9d-cf30-4199-ab76-f0dbd4ceab3b'] = $pane;
  $display->panels['center'][1] = 'new-1afacd9d-cf30-4199-ab76-f0dbd4ceab3b';
  $pane = new stdClass();
  $pane->pid = 'new-fead48ef-1d12-41ce-976b-42d1543a1f11';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Publikálta:&nbsp;',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fead48ef-1d12-41ce-976b-42d1543a1f11';
  $display->content['new-fead48ef-1d12-41ce-976b-42d1543a1f11'] = $pane;
  $display->panels['center'][2] = 'new-fead48ef-1d12-41ce-976b-42d1543a1f11';
  $pane = new stdClass();
  $pane->pid = 'new-f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $display->content['new-f9b8d36d-6b73-478d-86c1-efec89da0ec5'] = $pane;
  $display->panels['center'][3] = 'new-f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $pane = new stdClass();
  $pane->pid = 'new-3d39f233-a4e3-4c48-a0d9-18b6bbf669d0';
  $pane->panel = 'center';
  $pane->type = 'node_created';
  $pane->subtype = 'node_created';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'my',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Közzétéve:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3d39f233-a4e3-4c48-a0d9-18b6bbf669d0';
  $display->content['new-3d39f233-a4e3-4c48-a0d9-18b6bbf669d0'] = $pane;
  $display->panels['center'][4] = 'new-3d39f233-a4e3-4c48-a0d9-18b6bbf669d0';
  $pane = new stdClass();
  $pane->pid = 'new-9354d871-2863-49fb-8ff1-a840d9250d15';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Youtube Subscriber',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<script src="https://apis.google.com/js/platform.js"></script>
<div class="g-ytsubscribe" data-channelid="UCueleOZ2QFAaVSHXheZlFig" data-layout="full" data-count="default"></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'youtube',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9354d871-2863-49fb-8ff1-a840d9250d15';
  $display->content['new-9354d871-2863-49fb-8ff1-a840d9250d15'] = $pane;
  $display->panels['center'][5] = 'new-9354d871-2863-49fb-8ff1-a840d9250d15';
  $pane = new stdClass();
  $pane->pid = 'new-ce511477-37e9-458f-a8e4-cedc92d8974c';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Facebook like and share',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="fb-like" data-href="%node:url" data-layout="button_count" data-action="like" data-size="small" data-show-faces="false" data-share="false"></div>
<br />
<div class="fb-share-button" data-href="%node:url" data-layout="button" data-size="small" data-mobile-iframe="true"><a target="_blank" href="https://www.facebook.com/sharer/sharer.php?u=https%3A%2F%2Fdevelopers.facebook.com%2Fdocs%2Fplugins%2F&amp;src=sdkpreparse" class="fb-xfbml-parse-ignore">Megosztás</a></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'fb-like-share',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'ce511477-37e9-458f-a8e4-cedc92d8974c';
  $display->content['new-ce511477-37e9-458f-a8e4-cedc92d8974c'] = $pane;
  $display->panels['center'][6] = 'new-ce511477-37e9-458f-a8e4-cedc92d8974c';
  $pane = new stdClass();
  $pane->pid = 'new-2f0f4428-94ac-474b-b005-fa5bed80d385';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Facebook save',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="fb-save" data-uri="%node:url" data-size="large"></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'fb-save',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '2f0f4428-94ac-474b-b005-fa5bed80d385';
  $display->content['new-2f0f4428-94ac-474b-b005-fa5bed80d385'] = $pane;
  $display->panels['center'][7] = 'new-2f0f4428-94ac-474b-b005-fa5bed80d385';
  $pane = new stdClass();
  $pane->pid = 'new-02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subtitled';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $display->content['new-02db2c16-7fdb-420d-91d9-67de62bc9e24'] = $pane;
  $display->panels['center'][8] = 'new-02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $pane = new stdClass();
  $pane->pid = 'new-7b060e40-e85c-4d4b-bab9-cbbc60db21c6';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_11';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:a_article:field_article_header_banner',
        'settings' => array(
          'field_article_header_banner' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_article_header_banner_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'article-header-banner',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '7b060e40-e85c-4d4b-bab9-cbbc60db21c6';
  $display->content['new-7b060e40-e85c-4d4b-bab9-cbbc60db21c6'] = $pane;
  $display->panels['center'][9] = 'new-7b060e40-e85c-4d4b-bab9-cbbc60db21c6';
  $pane = new stdClass();
  $pane->pid = 'new-b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'alapjarat-article',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $display->content['new-b831b875-bba3-4ce1-ac46-114bbc1082ed'] = $pane;
  $display->panels['center'][10] = 'new-b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $pane = new stdClass();
  $pane->pid = 'new-9102749e-8458-4fbd-8499-df7e29bc9bea';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Youtube Subscriber + text',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>Ha videót nézni jobban szeretsz, mint olvasni, ne mulaszd el lecsekkolni YouTube-csatornánkat!</p>
<script src="https://apis.google.com/js/platform.js"></script>
<div class="g-ytsubscribe" data-channelid="UCueleOZ2QFAaVSHXheZlFig" data-layout="full" data-count="default"></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'youtube-text',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '9102749e-8458-4fbd-8499-df7e29bc9bea';
  $display->content['new-9102749e-8458-4fbd-8499-df7e29bc9bea'] = $pane;
  $display->panels['center'][11] = 'new-9102749e-8458-4fbd-8499-df7e29bc9bea';
  $pane = new stdClass();
  $pane->pid = 'new-ef380c1f-a01f-40b0-b092-93c95ef8fad6';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_source';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Forrás:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'ef380c1f-a01f-40b0-b092-93c95ef8fad6';
  $display->content['new-ef380c1f-a01f-40b0-b092-93c95ef8fad6'] = $pane;
  $display->panels['center'][12] = 'new-ef380c1f-a01f-40b0-b092-93c95ef8fad6';
  $pane = new stdClass();
  $pane->pid = 'new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_gallery';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'juicebox_formatter',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
      'image_style' => '',
      'jlib_galleryWidth' => '100%',
      'jlib_galleryHeight' => '80%',
      'jlib_backgroundColor' => '#222222',
      'jlib_textColor' => 'rgba(255,255,255,1)',
      'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
      'jlib_showOpenButton' => 1,
      'jlib_showExpandButton' => 1,
      'jlib_showThumbsButton' => 1,
      'jlib_useThumbDots' => 0,
      'jlib_useFullscreenExpand' => 1,
      'manual_config' => '',
      'custom_parent_classes' => '',
      'linkurl_source' => '',
      'linkurl_target' => '_blank',
      'incompatible_file_action' => 'show_icon_and_link',
      'thumb_style' => 'juicebox_square_thumbnail',
      'caption_source' => '',
      'title_source' => 'title',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
  $display->content['new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0'] = $pane;
  $display->panels['center'][13] = 'new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
  $pane = new stdClass();
  $pane->pid = 'new-b51412a1-b923-4911-8a50-e7e52a3821a8';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mailchimp',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<!-- Begin MailChimp Signup Form -->
<link href="//cdn-images.mailchimp.com/embedcode/classic-10_7.css" rel="stylesheet" type="text/css">
<style type="text/css">
	#mc_embed_signup{background:#fff; clear:left; font:14px Helvetica,Arial,sans-serif; }
	/* Add your own MailChimp form style overrides in your site stylesheet or in this style block.
	   We recommend moving this block and the preceding CSS link to the HEAD of your HTML file. */
</style>
<div id="mc_embed_signup">
<form action="https://ecdh.us15.list-manage.com/subscribe/post?u=ba2de3b04f01f0c0af7a1d614&amp;id=d48ce2c620" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
    <div id="mc_embed_signup_scroll">





<!--CSAK EHHEZ NYÚLJATOK-->
<p>Iratkozz fel hírlevelünkre! Minden 500. feliratkozó után 5db Alapjáratos pólót sorsolunk ki.</p>
<div class="mc-field-group">
	<input type="text" value="" placeholder="A neved" name="MMERGE2" class="required" id="mce-MMERGE2">
</div>
<div class="mc-field-group">
<input type="email" value="" placeholder="Az e-mail címed"  name="EMAIL" class="required email" id="mce-EMAIL">
</div>
<div class="mc-field-group input-group">
<a href="/adatkezelesi-szabalyzat" target="_blank"><input type="radio" class="required" value="Elfogadom az adatkezelési szabályzatot."  name="MMERGE1" id="mce-MMERGE1-0">Elfogadom az adatkezelési szabályzatot.</a>
</div>
<div class="mc-field-group input-group consent">
<input type="radio" class="required" value="Hozzájárulok ahhoz, hogy az Alapjárat hírlevelet küldjön számomra." name="MMERGE3" id="mce-MMERGE3-0"><label for="mce-MMERGE3-0">Hozzájárulok ahhoz, hogy az Alapjárat hírlevelet küldjön számomra.</label>
</div>




	<div id="mce-responses" class="clear">
		<div class="response" id="mce-error-response" style="display:none"></div>
		<div class="response" id="mce-success-response" style="display:none"></div>
	</div>    <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
    <div style="position: absolute; left: -5000px;" aria-hidden="true"><input type="text" name="b_ba2de3b04f01f0c0af7a1d614_d48ce2c620" tabindex="-1" value=""></div>
    <div class="clear"><input type="submit" value="Feliratkozás" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
    </div>
</form>
</div>
<script type=\'text/javascript\' src=\'//s3.amazonaws.com/downloads.mailchimp.com/js/mc-validate.js\'></script><script type=\'text/javascript\'>(function($) {window.fnames = new Array(); window.ftypes = new Array();fnames[2]=\'MMERGE2\';ftypes[2]=\'text\';fnames[0]=\'EMAIL\';ftypes[0]=\'email\';fnames[1]=\'MMERGE1\';ftypes[1]=\'radio\';fnames[3]=\'MMERGE3\';ftypes[3]=\'radio\'; /*
 * Translated default messages for the $ validation plugin.
 * Locale: HU
 */
$.extend($.validator.messages, {
	required: "Kötelező megadni.",
	email: "Érvényes e-mail címnek kell lennie.",
});}(jQuery));var $mcj = jQuery.noConflict(true);</script>
<!--End mc_embed_signup-->',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'b51412a1-b923-4911-8a50-e7e52a3821a8';
  $display->content['new-b51412a1-b923-4911-8a50-e7e52a3821a8'] = $pane;
  $display->panels['center'][14] = 'new-b51412a1-b923-4911-8a50-e7e52a3821a8';
  $pane = new stdClass();
  $pane->pid = 'new-3321a608-7268-4d00-b08f-7d25bebd77b1';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Facebook like and share',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>Ha tetszett az írás, kérlek oszd meg a Facebookon! Köszönöm!</p>
<div class="fb-like" data-href="%node:url" data-layout="button_count" data-action="like" data-size="small" data-show-faces="false" data-share="false"></div>
<div class="fb-share-button" data-href="%node:url" data-layout="button" data-size="small" data-mobile-iframe="true"><a target="_blank" href="https://www.facebook.com/sharer/sharer.php?u=https%3A%2F%2Fdevelopers.facebook.com%2Fdocs%2Fplugins%2F&amp;src=sdkpreparse" class="fb-xfbml-parse-ignore">Megosztás</a></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'fb2',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '3321a608-7268-4d00-b08f-7d25bebd77b1';
  $display->content['new-3321a608-7268-4d00-b08f-7d25bebd77b1'] = $pane;
  $display->panels['center'][15] = 'new-3321a608-7268-4d00-b08f-7d25bebd77b1';
  $pane = new stdClass();
  $pane->pid = 'new-ad8fb0e9-318c-4b64-89f1-6ead3a24f52f';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'social_media_links-social-media-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'ad8fb0e9-318c-4b64-89f1-6ead3a24f52f';
  $display->content['new-ad8fb0e9-318c-4b64-89f1-6ead3a24f52f'] = $pane;
  $display->panels['center'][16] = 'new-ad8fb0e9-318c-4b64-89f1-6ead3a24f52f';
  $pane = new stdClass();
  $pane->pid = 'new-b337a832-59be-437f-a00b-c5c6636a85e3';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'article3-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'article3',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'b337a832-59be-437f-a00b-c5c6636a85e3';
  $display->content['new-b337a832-59be-437f-a00b-c5c6636a85e3'] = $pane;
  $display->panels['center'][17] = 'new-b337a832-59be-437f-a00b-c5c6636a85e3';
  $pane = new stdClass();
  $pane->pid = 'new-2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tagsa';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Címkék:',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = '2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $display->content['new-2bcc488a-ca6b-443a-ba17-88d14181e34a'] = $pane;
  $display->panels['center'][18] = 'new-2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $pane = new stdClass();
  $pane->pid = 'new-b1cff760-1538-4a59-b4db-5ecfb0085e6c';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Facebook comments',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="fb-comments" data-href="%node:url" data-width="100%" data-numposts="5"></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = 'b1cff760-1538-4a59-b4db-5ecfb0085e6c';
  $display->content['new-b1cff760-1538-4a59-b4db-5ecfb0085e6c'] = $pane;
  $display->panels['center'][19] = 'new-b1cff760-1538-4a59-b4db-5ecfb0085e6c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_2c3793f9-2690-4d2a-9f62-7972906cf6c0'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_975d7ab9-65cc-4102-83ed-c4d75a750263';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'pages' => 'pages',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'alapjarat_theme',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'pages',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '33eea609-1cf5-42f5-85c5-d1dec2ee886c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_975d7ab9-65cc-4102-83ed-c4d75a750263';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-be79751e-2b15-4e15-a87f-c2c32a54d6e9';
  $pane->panel = 'center';
  $pane->type = 'token';
  $pane->subtype = 'node:title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'be79751e-2b15-4e15-a87f-c2c32a54d6e9';
  $display->content['new-be79751e-2b15-4e15-a87f-c2c32a54d6e9'] = $pane;
  $display->panels['center'][0] = 'new-be79751e-2b15-4e15-a87f-c2c32a54d6e9';
  $pane = new stdClass();
  $pane->pid = 'new-58bf2422-183b-4d41-8bc0-5b5ad1e750ba';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_textp';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '58bf2422-183b-4d41-8bc0-5b5ad1e750ba';
  $display->content['new-58bf2422-183b-4d41-8bc0-5b5ad1e750ba'] = $pane;
  $display->panels['center'][1] = 'new-58bf2422-183b-4d41-8bc0-5b5ad1e750ba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_975d7ab9-65cc-4102-83ed-c4d75a750263'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_6f6c6cf6-04a3-4e51-980e-778e0e96d8ef';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Social',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'social',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'amp_request',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd9487e91-7155-4ae2-a726-1dbc9f40d988';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__panel_context_6f6c6cf6-04a3-4e51-980e-778e0e96d8ef';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e3d7209a-83a2-4fb2-8334-387113c13972';
  $pane->panel = 'middle';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e3d7209a-83a2-4fb2-8334-387113c13972';
  $display->content['new-e3d7209a-83a2-4fb2-8334-387113c13972'] = $pane;
  $display->panels['middle'][0] = 'new-e3d7209a-83a2-4fb2-8334-387113c13972';
  $pane = new stdClass();
  $pane->pid = 'new-7269b6bd-662d-4609-8ba1-e6782a8e9a55';
  $pane->panel = 'middle';
  $pane->type = 'page_slogan';
  $pane->subtype = 'page_slogan';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7269b6bd-662d-4609-8ba1-e6782a8e9a55';
  $display->content['new-7269b6bd-662d-4609-8ba1-e6782a8e9a55'] = $pane;
  $display->panels['middle'][1] = 'new-7269b6bd-662d-4609-8ba1-e6782a8e9a55';
  $pane = new stdClass();
  $pane->pid = 'new-4a754db5-7fbe-4d60-b970-c379d279c961';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<a href="https://www.instagram.com/alapjarat">@alapjarat</a>

<a href="https://alapjarat.hu">
<button type="button">Alapjárat weboldal</button>
</a>

<a href="https://www.facebook.com/alapjarat">
<button type="button">Alapjárat Facebook oldal</button>
</a>

<a href="https://www.youtube.com/channel/UCueleOZ2QFAaVSHXheZlFig">
<button type="button">Alapjárat YouTube csatorna</button>
</a>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'social-link',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4a754db5-7fbe-4d60-b970-c379d279c961';
  $display->content['new-4a754db5-7fbe-4d60-b970-c379d279c961'] = $pane;
  $display->panels['middle'][2] = 'new-4a754db5-7fbe-4d60-b970-c379d279c961';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_6f6c6cf6-04a3-4e51-980e-778e0e96d8ef'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_d3b53892-900b-480a-b3e8-992a3d69013b';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'amp_request',
          'settings' => NULL,
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'social',
          ),
          'context' => 'argument_string_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'alapjarat_theme',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 9,
          1 => 8,
          2 => 6,
          3 => 3,
          4 => 2,
          5 => 1,
          6 => 4,
          7 => 5,
          8 => 7,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_menu',
          1 => 'search',
        ),
        'parent' => 'main',
        'class' => 'main_menu',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'logo',
          1 => 'banner',
        ),
        'parent' => 'main',
        'class' => 'letterhead',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'second_menu',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'logo' => array(
        'type' => 'region',
        'title' => 'logo',
        'width' => '40',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'banner' => array(
        'type' => 'region',
        'title' => 'banner',
        'width' => '60',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'letterhead_banner',
        'hide_empty' => 0,
      ),
      'second_menu' => array(
        'type' => 'region',
        'title' => 'second menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'second_menu',
        'hide_empty' => 0,
      ),
      'main_menu' => array(
        'type' => 'region',
        'title' => 'main menu',
        'width' => '79.99999450748106',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'search' => array(
        'type' => 'region',
        'title' => 'search',
        'width' => '20.000005492518945',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'search',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_content',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_content' => array(
        'type' => 'region',
        'title' => 'first',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'first',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_text',
          1 => 'banner_',
        ),
        'parent' => 'main',
        'class' => 'maincontent',
        'hide_empty' => 0,
      ),
      'footer_text' => array(
        'type' => 'region',
        'title' => 'main content',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'main_content',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'time',
          1 => 'so',
        ),
        'parent' => 'main',
        'class' => 'top',
        'hide_empty' => 0,
      ),
      'so' => array(
        'type' => 'region',
        'title' => 'social menu',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'social_menu',
        'hide_empty' => 0,
      ),
      'time' => array(
        'type' => 'region',
        'title' => 'time',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_',
          1 => 'footer_text_',
        ),
        'parent' => 'main',
        'class' => 'my_footer',
        'hide_empty' => 0,
      ),
      'footer_' => array(
        'type' => 'region',
        'title' => 'footer',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'class' => 'second_menu_footer',
        'hide_empty' => 0,
      ),
      'footer_text_' => array(
        'type' => 'region',
        'title' => 'footer text',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'banner_' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'right',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'admin_menu',
          1 => 'user',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'admin_menu' => array(
        'type' => 'region',
        'title' => 'Admin menu',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => 'editor-menu',
        'hide_empty' => 0,
      ),
      'user' => array(
        'type' => 'region',
        'title' => 'user',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => 'user_name',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'drupal_message',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'drupal_message' => array(
        'type' => 'region',
        'title' => 'Drupal message',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'banner' => NULL,
      'logo' => NULL,
      'second_menu' => NULL,
      'main_menu' => NULL,
      'search' => NULL,
      'main_content' => NULL,
      'footer' => NULL,
      'footer_text' => NULL,
      'so' => NULL,
      'time' => NULL,
      'footer_' => NULL,
      'footer_text_' => NULL,
      'banner_' => NULL,
      'admin_menu' => NULL,
      'user' => NULL,
      'drupal_message' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd742165c-f337-4e3b-955d-af0e6c0a3a21';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__panel_context_d3b53892-900b-480a-b3e8-992a3d69013b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-edab7bbd-e406-40d1-94d1-1aa406b2ff43';
  $pane->panel = 'admin_menu';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-admin-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'my_admin_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'edab7bbd-e406-40d1-94d1-1aa406b2ff43';
  $display->content['new-edab7bbd-e406-40d1-94d1-1aa406b2ff43'] = $pane;
  $display->panels['admin_menu'][0] = 'new-edab7bbd-e406-40d1-94d1-1aa406b2ff43';
  $pane = new stdClass();
  $pane->pid = 'new-eba687b9-9c67-4cd3-a84b-0d000cff9dfb';
  $pane->panel = 'admin_menu';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-writer-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'my_admin_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eba687b9-9c67-4cd3-a84b-0d000cff9dfb';
  $display->content['new-eba687b9-9c67-4cd3-a84b-0d000cff9dfb'] = $pane;
  $display->panels['admin_menu'][1] = 'new-eba687b9-9c67-4cd3-a84b-0d000cff9dfb';
  $pane = new stdClass();
  $pane->pid = 'new-190a53dc-2617-4b01-b1d8-afa8df05f755';
  $pane->panel = 'banner';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div style="width: auto; height:auto; margin-top:1%; overflow:hidden;"><iframe style="overflow:hidden; border: none; height: 120px; width:620px;" id="frame" src="" width="200" height="100" border="0" allowtransparency="true" scrolling="no" frameborder="0"></iframe>
<script>
var frames = Array(\'https://alapjarat.hu/wp-content/uploads/reklam/mahbanner_600x100/\', 50,
\'https://alapjarat.hu/wp-content/uploads/reklam/MA600x100/\', 50,
\'https://alapjarat.hu/wp-content/uploads/reklam/mahbanner_600x100/\', 50,
\'https://alapjarat.hu/wp-content/uploads/reklam/MA600x100/\', 50);
var i = 0, len = frames.length;
function ChangeSrc() {
if (i >= len) { i = 0; } // start over
document.getElementById(\'frame\').src = frames[i++];
setTimeout(\'ChangeSrc()\', (frames[i++]*250));
}
window.onload = ChangeSrc;
</script>
</div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '190a53dc-2617-4b01-b1d8-afa8df05f755';
  $display->content['new-190a53dc-2617-4b01-b1d8-afa8df05f755'] = $pane;
  $display->panels['banner'][0] = 'new-190a53dc-2617-4b01-b1d8-afa8df05f755';
  $pane = new stdClass();
  $pane->pid = 'new-881a9290-856d-4efc-a161-8701b3bb35fc';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '881a9290-856d-4efc-a161-8701b3bb35fc';
  $display->content['new-881a9290-856d-4efc-a161-8701b3bb35fc'] = $pane;
  $display->panels['banner_'][0] = 'new-881a9290-856d-4efc-a161-8701b3bb35fc';
  $pane = new stdClass();
  $pane->pid = 'new-f61dfe76-f43f-43f9-8023-3c3ab717ea4b';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f61dfe76-f43f-43f9-8023-3c3ab717ea4b';
  $display->content['new-f61dfe76-f43f-43f9-8023-3c3ab717ea4b'] = $pane;
  $display->panels['banner_'][1] = 'new-f61dfe76-f43f-43f9-8023-3c3ab717ea4b';
  $pane = new stdClass();
  $pane->pid = 'new-402a6f7e-5cc4-44f5-9df0-e98c87946429';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '402a6f7e-5cc4-44f5-9df0-e98c87946429';
  $display->content['new-402a6f7e-5cc4-44f5-9df0-e98c87946429'] = $pane;
  $display->panels['banner_'][2] = 'new-402a6f7e-5cc4-44f5-9df0-e98c87946429';
  $pane = new stdClass();
  $pane->pid = 'new-ee3e2e68-ea1d-48fa-9cd5-c12dfb76282d';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ee3e2e68-ea1d-48fa-9cd5-c12dfb76282d';
  $display->content['new-ee3e2e68-ea1d-48fa-9cd5-c12dfb76282d'] = $pane;
  $display->panels['banner_'][3] = 'new-ee3e2e68-ea1d-48fa-9cd5-c12dfb76282d';
  $pane = new stdClass();
  $pane->pid = 'new-9ded4e28-117d-47d8-9765-7e91a175953b';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'event-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'event',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9ded4e28-117d-47d8-9765-7e91a175953b';
  $display->content['new-9ded4e28-117d-47d8-9765-7e91a175953b'] = $pane;
  $display->panels['banner_'][4] = 'new-9ded4e28-117d-47d8-9765-7e91a175953b';
  $pane = new stdClass();
  $pane->pid = 'new-a8c1980b-585e-4e5a-badf-55ff6cbd6659';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'a8c1980b-585e-4e5a-badf-55ff6cbd6659';
  $display->content['new-a8c1980b-585e-4e5a-badf-55ff6cbd6659'] = $pane;
  $display->panels['banner_'][5] = 'new-a8c1980b-585e-4e5a-badf-55ff6cbd6659';
  $pane = new stdClass();
  $pane->pid = 'new-395e5750-1941-4452-b3b5-8534c38b3575';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '395e5750-1941-4452-b3b5-8534c38b3575';
  $display->content['new-395e5750-1941-4452-b3b5-8534c38b3575'] = $pane;
  $display->panels['banner_'][6] = 'new-395e5750-1941-4452-b3b5-8534c38b3575';
  $pane = new stdClass();
  $pane->pid = 'new-c8812251-416b-419c-b50b-5e823a41e6cf';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'random_article',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'c8812251-416b-419c-b50b-5e823a41e6cf';
  $display->content['new-c8812251-416b-419c-b50b-5e823a41e6cf'] = $pane;
  $display->panels['banner_'][7] = 'new-c8812251-416b-419c-b50b-5e823a41e6cf';
  $pane = new stdClass();
  $pane->pid = 'new-4dcf002a-8586-418f-bc1b-01c0fb114881';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '4dcf002a-8586-418f-bc1b-01c0fb114881';
  $display->content['new-4dcf002a-8586-418f-bc1b-01c0fb114881'] = $pane;
  $display->panels['banner_'][8] = 'new-4dcf002a-8586-418f-bc1b-01c0fb114881';
  $pane = new stdClass();
  $pane->pid = 'new-fa7beeb9-b21d-435f-bf8d-b534789fc597';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'fa7beeb9-b21d-435f-bf8d-b534789fc597';
  $display->content['new-fa7beeb9-b21d-435f-bf8d-b534789fc597'] = $pane;
  $display->panels['banner_'][9] = 'new-fa7beeb9-b21d-435f-bf8d-b534789fc597';
  $pane = new stdClass();
  $pane->pid = 'new-76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $pane->panel = 'banner_';
  $pane->type = 'articles_archive';
  $pane->subtype = 'articles_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'date_format' => '',
    'override_title' => 1,
    'override_title_text' => 'Archive',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'archive',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $display->content['new-76900dcc-6cdf-4260-a00a-3ca5a66737ff'] = $pane;
  $display->panels['banner_'][10] = 'new-76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $pane = new stdClass();
  $pane->pid = 'new-acc7fff8-679b-449e-8261-cce16e0227dc';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'banner5',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'acc7fff8-679b-449e-8261-cce16e0227dc';
  $display->content['new-acc7fff8-679b-449e-8261-cce16e0227dc'] = $pane;
  $display->panels['banner_'][11] = 'new-acc7fff8-679b-449e-8261-cce16e0227dc';
  $pane = new stdClass();
  $pane->pid = 'new-a1f996d5-04d0-4fdd-8546-87c16ec60c6b';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'banner5',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'a1f996d5-04d0-4fdd-8546-87c16ec60c6b';
  $display->content['new-a1f996d5-04d0-4fdd-8546-87c16ec60c6b'] = $pane;
  $display->panels['banner_'][12] = 'new-a1f996d5-04d0-4fdd-8546-87c16ec60c6b';
  $pane = new stdClass();
  $pane->pid = 'new-de8223ae-43c8-480e-a237-9cf0a7d05392';
  $pane->panel = 'drupal_message';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'de8223ae-43c8-480e-a237-9cf0a7d05392';
  $display->content['new-de8223ae-43c8-480e-a237-9cf0a7d05392'] = $pane;
  $display->panels['drupal_message'][0] = 'new-de8223ae-43c8-480e-a237-9cf0a7d05392';
  $pane = new stdClass();
  $pane->pid = 'new-3a7c7032-c145-4da4-92fb-07d76d6d7557';
  $pane->panel = 'footer_';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-second-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a7c7032-c145-4da4-92fb-07d76d6d7557';
  $display->content['new-3a7c7032-c145-4da4-92fb-07d76d6d7557'] = $pane;
  $display->panels['footer_'][0] = 'new-3a7c7032-c145-4da4-92fb-07d76d6d7557';
  $pane = new stdClass();
  $pane->pid = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $pane->panel = 'footer_text';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $display->content['new-adeb6074-bbf7-4668-863f-d1d56eaccfb9'] = $pane;
  $display->panels['footer_text'][0] = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $pane = new stdClass();
  $pane->pid = 'new-7f94bf9a-9041-4f26-9992-7065122d13e2';
  $pane->panel = 'footer_text_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>© Copyright 2019, alapjarat.hu &amp; <a href="https://www.ecdh.hu" target="_blank">ecdh.hu</a>Minden jog fenntartva.</p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'footer_text',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f94bf9a-9041-4f26-9992-7065122d13e2';
  $display->content['new-7f94bf9a-9041-4f26-9992-7065122d13e2'] = $pane;
  $display->panels['footer_text_'][0] = 'new-7f94bf9a-9041-4f26-9992-7065122d13e2';
  $pane = new stdClass();
  $pane->pid = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane->panel = 'logo';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'logo',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cdf61b2-331e-4559-aa53-586ba40ff595';
  $display->content['new-8cdf61b2-331e-4559-aa53-586ba40ff595'] = $pane;
  $display->panels['logo'][0] = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane = new stdClass();
  $pane->pid = 'new-5c3bc418-9028-4ab9-a45a-01c532d0b312';
  $pane->panel = 'logo';
  $pane->type = 'page_slogan';
  $pane->subtype = 'page_slogan';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5c3bc418-9028-4ab9-a45a-01c532d0b312';
  $display->content['new-5c3bc418-9028-4ab9-a45a-01c532d0b312'] = $pane;
  $display->panels['logo'][1] = 'new-5c3bc418-9028-4ab9-a45a-01c532d0b312';
  $pane = new stdClass();
  $pane->pid = 'new-7b06fd4c-abe6-429a-9da9-cb639ea1b034';
  $pane->panel = 'main_content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'hamburger_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7b06fd4c-abe6-429a-9da9-cb639ea1b034';
  $display->content['new-7b06fd4c-abe6-429a-9da9-cb639ea1b034'] = $pane;
  $display->panels['main_content'][0] = 'new-7b06fd4c-abe6-429a-9da9-cb639ea1b034';
  $pane = new stdClass();
  $pane->pid = 'new-319da000-6189-42d9-828d-ae6039657b7b';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'one',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '319da000-6189-42d9-828d-ae6039657b7b';
  $display->content['new-319da000-6189-42d9-828d-ae6039657b7b'] = $pane;
  $display->panels['main_content'][1] = 'new-319da000-6189-42d9-828d-ae6039657b7b';
  $pane = new stdClass();
  $pane->pid = 'new-21b2ec35-e1c9-4a7f-95da-ed96d647cc18';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'four',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '21b2ec35-e1c9-4a7f-95da-ed96d647cc18';
  $display->content['new-21b2ec35-e1c9-4a7f-95da-ed96d647cc18'] = $pane;
  $display->panels['main_content'][2] = 'new-21b2ec35-e1c9-4a7f-95da-ed96d647cc18';
  $pane = new stdClass();
  $pane->pid = 'new-64e87cc0-5355-498b-81f7-28674aa25d77';
  $pane->panel = 'main_content';
  $pane->type = 'company_search';
  $pane->subtype = 'company_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'whatever' => NULL,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '64e87cc0-5355-498b-81f7-28674aa25d77';
  $display->content['new-64e87cc0-5355-498b-81f7-28674aa25d77'] = $pane;
  $display->panels['main_content'][3] = 'new-64e87cc0-5355-498b-81f7-28674aa25d77';
  $pane = new stdClass();
  $pane->pid = 'new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $pane->panel = 'main_menu';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'main_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $display->content['new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb'] = $pane;
  $display->panels['main_menu'][0] = 'new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $pane = new stdClass();
  $pane->pid = 'new-e5212a53-93b2-48f3-ba23-3334fc843c59';
  $pane->panel = 'search';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-search_page-page';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'search',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e5212a53-93b2-48f3-ba23-3334fc843c59';
  $display->content['new-e5212a53-93b2-48f3-ba23-3334fc843c59'] = $pane;
  $display->panels['search'][0] = 'new-e5212a53-93b2-48f3-ba23-3334fc843c59';
  $pane = new stdClass();
  $pane->pid = 'new-86e8d848-d560-4aef-9090-0595b1b02f9f';
  $pane->panel = 'search';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-search_api_search-page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'search',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '86e8d848-d560-4aef-9090-0595b1b02f9f';
  $display->content['new-86e8d848-d560-4aef-9090-0595b1b02f9f'] = $pane;
  $display->panels['search'][1] = 'new-86e8d848-d560-4aef-9090-0595b1b02f9f';
  $pane = new stdClass();
  $pane->pid = 'new-ae65dd0a-44cc-4a48-9889-283725898c83';
  $pane->panel = 'second_menu';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-second-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'second_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ae65dd0a-44cc-4a48-9889-283725898c83';
  $display->content['new-ae65dd0a-44cc-4a48-9889-283725898c83'] = $pane;
  $display->panels['second_menu'][0] = 'new-ae65dd0a-44cc-4a48-9889-283725898c83';
  $pane = new stdClass();
  $pane->pid = 'new-93f022a4-1d48-48c1-9116-b7f301b96d85';
  $pane->panel = 'so';
  $pane->type = 'block';
  $pane->subtype = 'social_media_links-social-media-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'social_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '93f022a4-1d48-48c1-9116-b7f301b96d85';
  $display->content['new-93f022a4-1d48-48c1-9116-b7f301b96d85'] = $pane;
  $display->panels['so'][0] = 'new-93f022a4-1d48-48c1-9116-b7f301b96d85';
  $pane = new stdClass();
  $pane->pid = 'new-b5cc256f-0f65-4bb4-a954-00c4f06893ad';
  $pane->panel = 'time';
  $pane->type = 'header_date';
  $pane->subtype = 'header_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'date_format' => '<b>Y-m-d</b>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'time',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b5cc256f-0f65-4bb4-a954-00c4f06893ad';
  $display->content['new-b5cc256f-0f65-4bb4-a954-00c4f06893ad'] = $pane;
  $display->panels['time'][0] = 'new-b5cc256f-0f65-4bb4-a954-00c4f06893ad';
  $pane = new stdClass();
  $pane->pid = 'new-8f77f31f-7d66-4c63-b2fe-09cec42bbabd';
  $pane->panel = 'user';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => 'Hello %user:name',
    'format' => 'plain_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'user_name',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8f77f31f-7d66-4c63-b2fe-09cec42bbabd';
  $display->content['new-8f77f31f-7d66-4c63-b2fe-09cec42bbabd'] = $pane;
  $display->panels['user'][0] = 'new-8f77f31f-7d66-4c63-b2fe-09cec42bbabd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_d3b53892-900b-480a-b3e8-992a3d69013b'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_fcce8c2e-f1de-4cc1-b2aa-8b53d165f96c';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'AMP',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'amp_request',
          'settings' => NULL,
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'social',
          ),
          'context' => 'argument_string_1',
          'not' => TRUE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1d38707d-5806-466f-a55d-5968361901fc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__panel_context_fcce8c2e-f1de-4cc1-b2aa-8b53d165f96c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cb5c1f5a-fecd-45d0-953d-c1a02215fcd5';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'AMP dev message',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<strong>Alapjárat AMP Theme</strong>',
    'format' => 'fullhtml',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cb5c1f5a-fecd-45d0-953d-c1a02215fcd5';
  $display->content['new-cb5c1f5a-fecd-45d0-953d-c1a02215fcd5'] = $pane;
  $display->panels['middle'][0] = 'new-cb5c1f5a-fecd-45d0-953d-c1a02215fcd5';
  $pane = new stdClass();
  $pane->pid = 'new-f98a45b8-d186-4002-bfbf-8fd130fe756e';
  $pane->panel = 'middle';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f98a45b8-d186-4002-bfbf-8fd130fe756e';
  $display->content['new-f98a45b8-d186-4002-bfbf-8fd130fe756e'] = $pane;
  $display->panels['middle'][1] = 'new-f98a45b8-d186-4002-bfbf-8fd130fe756e';
  $pane = new stdClass();
  $pane->pid = 'new-f05c0e0a-beb8-4290-803a-b9368be96916';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f05c0e0a-beb8-4290-803a-b9368be96916';
  $display->content['new-f05c0e0a-beb8-4290-803a-b9368be96916'] = $pane;
  $display->panels['middle'][2] = 'new-f05c0e0a-beb8-4290-803a-b9368be96916';
  $pane = new stdClass();
  $pane->pid = 'new-7eb07ba5-13fb-408d-b6c8-e2b1c4be82b9';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_title2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'amp_text',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7eb07ba5-13fb-408d-b6c8-e2b1c4be82b9';
  $display->content['new-7eb07ba5-13fb-408d-b6c8-e2b1c4be82b9'] = $pane;
  $display->panels['middle'][3] = 'new-7eb07ba5-13fb-408d-b6c8-e2b1c4be82b9';
  $pane = new stdClass();
  $pane->pid = 'new-8bb2b7b9-a05c-4c46-bdd0-cd8027f179cb';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'i18n_taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => 'Publikálta:&nbsp;',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8bb2b7b9-a05c-4c46-bdd0-cd8027f179cb';
  $display->content['new-8bb2b7b9-a05c-4c46-bdd0-cd8027f179cb'] = $pane;
  $display->panels['middle'][4] = 'new-8bb2b7b9-a05c-4c46-bdd0-cd8027f179cb';
  $pane = new stdClass();
  $pane->pid = 'new-4dac4d1f-67d3-4eb8-8d51-8fec0a378924';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'i18n_taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => 'Kategória:&nbsp;',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4dac4d1f-67d3-4eb8-8d51-8fec0a378924';
  $display->content['new-4dac4d1f-67d3-4eb8-8d51-8fec0a378924'] = $pane;
  $display->panels['middle'][5] = 'new-4dac4d1f-67d3-4eb8-8d51-8fec0a378924';
  $pane = new stdClass();
  $pane->pid = 'new-8af5b824-bdf2-4461-834c-c2313898f022';
  $pane->panel = 'middle';
  $pane->type = 'node_created';
  $pane->subtype = 'node_created';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'my',
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => 'Közzétéve:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '8af5b824-bdf2-4461-834c-c2313898f022';
  $display->content['new-8af5b824-bdf2-4461-834c-c2313898f022'] = $pane;
  $display->panels['middle'][6] = 'new-8af5b824-bdf2-4461-834c-c2313898f022';
  $pane = new stdClass();
  $pane->pid = 'new-c2b4ebff-6611-4ab5-8866-484560f92a05';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subtitled';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'amp_text',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'c2b4ebff-6611-4ab5-8866-484560f92a05';
  $display->content['new-c2b4ebff-6611-4ab5-8866-484560f92a05'] = $pane;
  $display->panels['middle'][7] = 'new-c2b4ebff-6611-4ab5-8866-484560f92a05';
  $pane = new stdClass();
  $pane->pid = 'new-f9ff6bcc-3c48-435e-8bef-da8629c86450';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'amp_text',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'f9ff6bcc-3c48-435e-8bef-da8629c86450';
  $display->content['new-f9ff6bcc-3c48-435e-8bef-da8629c86450'] = $pane;
  $display->panels['middle'][8] = 'new-f9ff6bcc-3c48-435e-8bef-da8629c86450';
  $pane = new stdClass();
  $pane->pid = 'new-f88bdd57-371c-4322-b963-13fa35e37bf4';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_source';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'amp_text',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => 'Forrás:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'f88bdd57-371c-4322-b963-13fa35e37bf4';
  $display->content['new-f88bdd57-371c-4322-b963-13fa35e37bf4'] = $pane;
  $display->panels['middle'][9] = 'new-f88bdd57-371c-4322-b963-13fa35e37bf4';
  $pane = new stdClass();
  $pane->pid = 'new-3d0efbbf-66f7-4b28-9558-ce503b083185';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'social_media_links-social-media-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '3d0efbbf-66f7-4b28-9558-ce503b083185';
  $display->content['new-3d0efbbf-66f7-4b28-9558-ce503b083185'] = $pane;
  $display->panels['middle'][10] = 'new-3d0efbbf-66f7-4b28-9558-ce503b083185';
  $pane = new stdClass();
  $pane->pid = 'new-e5d0794e-91d8-43aa-9f63-36db163a3f73';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tagsa';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'i18n_taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => 'Címkék:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'e5d0794e-91d8-43aa-9f63-36db163a3f73';
  $display->content['new-e5d0794e-91d8-43aa-9f63-36db163a3f73'] = $pane;
  $display->panels['middle'][11] = 'new-e5d0794e-91d8-43aa-9f63-36db163a3f73';
  $pane = new stdClass();
  $pane->pid = 'new-c6cd6e93-22d6-4517-acd9-c5e8200d7bdc';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-second-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'c6cd6e93-22d6-4517-acd9-c5e8200d7bdc';
  $display->content['new-c6cd6e93-22d6-4517-acd9-c5e8200d7bdc'] = $pane;
  $display->panels['middle'][12] = 'new-c6cd6e93-22d6-4517-acd9-c5e8200d7bdc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_fcce8c2e-f1de-4cc1-b2aa-8b53d165f96c'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_0252e099-98a4-466e-8d7e-d7b18f3fd1d5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Menu',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'menu' => 'menu',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b92a06fa-8965-4e9f-8a39-71c15dad0378';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_0252e099-98a4-466e-8d7e-d7b18f3fd1d5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41e04b92-0de8-4054-80e7-812a2bdcc4ee';
  $pane->panel = 'center';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41e04b92-0de8-4054-80e7-812a2bdcc4ee';
  $display->content['new-41e04b92-0de8-4054-80e7-812a2bdcc4ee'] = $pane;
  $display->panels['center'][0] = 'new-41e04b92-0de8-4054-80e7-812a2bdcc4ee';
  $pane = new stdClass();
  $pane->pid = 'new-90c1191c-7ee8-43b8-a305-40924c1129b0';
  $pane->panel = 'center';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '90c1191c-7ee8-43b8-a305-40924c1129b0';
  $display->content['new-90c1191c-7ee8-43b8-a305-40924c1129b0'] = $pane;
  $display->panels['center'][1] = 'new-90c1191c-7ee8-43b8-a305-40924c1129b0';
  $pane = new stdClass();
  $pane->pid = 'new-5de361b5-24ce-4cbd-9036-466b1553f2fd';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_page-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'menu_pane',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5de361b5-24ce-4cbd-9036-466b1553f2fd';
  $display->content['new-5de361b5-24ce-4cbd-9036-466b1553f2fd'] = $pane;
  $display->panels['center'][2] = 'new-5de361b5-24ce-4cbd-9036-466b1553f2fd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_0252e099-98a4-466e-8d7e-d7b18f3fd1d5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_45f85b32-52a3-428f-8837-e0697d77f9e5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Published',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'published' => 'published',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3481ffbb-f8f2-4479-add6-036dd7f0bf96';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_45f85b32-52a3-428f-8837-e0697d77f9e5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-17215841-1466-43b4-882d-c0db7933f439';
  $pane->panel = 'center';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => 'Published:&nbsp;',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17215841-1466-43b4-882d-c0db7933f439';
  $display->content['new-17215841-1466-43b4-882d-c0db7933f439'] = $pane;
  $display->panels['center'][0] = 'new-17215841-1466-43b4-882d-c0db7933f439';
  $pane = new stdClass();
  $pane->pid = 'new-a9689af3-86e0-4928-b1bb-d1f35067014e';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_page-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'published',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a9689af3-86e0-4928-b1bb-d1f35067014e';
  $display->content['new-a9689af3-86e0-4928-b1bb-d1f35067014e'] = $pane;
  $display->panels['center'][1] = 'new-a9689af3-86e0-4928-b1bb-d1f35067014e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_45f85b32-52a3-428f-8837-e0697d77f9e5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_4a2a8b7c-b55f-4530-9a69-7c59554c9b39';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Glossary',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'glossary' => 'glossary',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c84b93d6-13ca-412d-b548-4840669107f0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_4a2a8b7c-b55f-4530-9a69-7c59554c9b39';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3947e4d0-3308-497e-9ba8-ef7f153590f3';
  $pane->panel = 'center';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3947e4d0-3308-497e-9ba8-ef7f153590f3';
  $display->content['new-3947e4d0-3308-497e-9ba8-ef7f153590f3'] = $pane;
  $display->panels['center'][0] = 'new-3947e4d0-3308-497e-9ba8-ef7f153590f3';
  $pane = new stdClass();
  $pane->pid = 'new-0822fdbb-7f10-472f-a09f-b949fe640ba3';
  $pane->panel = 'center';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0822fdbb-7f10-472f-a09f-b949fe640ba3';
  $display->content['new-0822fdbb-7f10-472f-a09f-b949fe640ba3'] = $pane;
  $display->panels['center'][1] = 'new-0822fdbb-7f10-472f-a09f-b949fe640ba3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_4a2a8b7c-b55f-4530-9a69-7c59554c9b39'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_4d7dd930-5942-4877-8d5c-75b8813db990';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Tags',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'tags' => 'tags',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b7597dfa-d5e8-4177-a8a0-f95bae038d31';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_4d7dd930-5942-4877-8d5c-75b8813db990';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-32741185-bc5a-4da0-ad1d-1141b1fbc553';
  $pane->panel = 'center';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => 'Címke:&nbsp;',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '32741185-bc5a-4da0-ad1d-1141b1fbc553';
  $display->content['new-32741185-bc5a-4da0-ad1d-1141b1fbc553'] = $pane;
  $display->panels['center'][0] = 'new-32741185-bc5a-4da0-ad1d-1141b1fbc553';
  $pane = new stdClass();
  $pane->pid = 'new-6c9e1905-2084-48a5-8271-b4a2a34f9695';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_page-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'tag',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6c9e1905-2084-48a5-8271-b4a2a34f9695';
  $display->content['new-6c9e1905-2084-48a5-8271-b4a2a34f9695'] = $pane;
  $display->panels['center'][1] = 'new-6c9e1905-2084-48a5-8271-b4a2a34f9695';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_4d7dd930-5942-4877-8d5c-75b8813db990'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_b7de97a1-6e49-4500-81c1-315983bc3fa9';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'category' => 'category',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '72840d86-7f74-4530-b98a-36e88a7b29ea';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_b7de97a1-6e49-4500-81c1-315983bc3fa9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8651ec95-5920-46f6-bbf7-91f9e8432442';
  $pane->panel = 'center';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => 'Kategória:&nbsp;',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8651ec95-5920-46f6-bbf7-91f9e8432442';
  $display->content['new-8651ec95-5920-46f6-bbf7-91f9e8432442'] = $pane;
  $display->panels['center'][0] = 'new-8651ec95-5920-46f6-bbf7-91f9e8432442';
  $pane = new stdClass();
  $pane->pid = 'new-d52d7466-4a43-4f7f-aab8-73b6669ba73e';
  $pane->panel = 'center';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'category',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd52d7466-4a43-4f7f-aab8-73b6669ba73e';
  $display->content['new-d52d7466-4a43-4f7f-aab8-73b6669ba73e'] = $pane;
  $display->panels['center'][1] = 'new-d52d7466-4a43-4f7f-aab8-73b6669ba73e';
  $pane = new stdClass();
  $pane->pid = 'new-54e1e621-c91f-4469-9327-826c60abc2f0';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'category',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '54e1e621-c91f-4469-9327-826c60abc2f0';
  $display->content['new-54e1e621-c91f-4469-9327-826c60abc2f0'] = $pane;
  $display->panels['center'][2] = 'new-54e1e621-c91f-4469-9327-826c60abc2f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_b7de97a1-6e49-4500-81c1-315983bc3fa9'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function alapjarat_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'archive';
  $page->task = 'page';
  $page->admin_title = 'Archive';
  $page->admin_description = '';
  $page->path = 'archive';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_archive__panel';
  $handler->task = 'page';
  $handler->subtask = 'archive';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Archive';
  $display->uuid = '142be34e-3991-42fd-b229-043696a7271d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_archive__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1354caae-372b-44e1-82a9-d9328087fb71';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'archive_1-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'archive_list',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1354caae-372b-44e1-82a9-d9328087fb71';
  $display->content['new-1354caae-372b-44e1-82a9-d9328087fb71'] = $pane;
  $display->panels['center'][0] = 'new-1354caae-372b-44e1-82a9-d9328087fb71';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1354caae-372b-44e1-82a9-d9328087fb71';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['archive'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'front-page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'alapjarat_theme',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
        ),
        'parent' => 'canvas',
        'class' => 'front_page',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'helpfu__info_a',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'helpfu__info_a' => array(
        'type' => 'region',
        'title' => 'front_page_post',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'front_page_post',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one' => NULL,
      'four' => NULL,
      'helpfu__info_a' => NULL,
      'helpfu__info_b' => NULL,
      'our_partners' => NULL,
      'big_world' => NULL,
      'tech' => NULL,
    ),
    'one' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dffecd62-0e61-470b-afd9-4b94533760c6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f7c10d36-03ee-4a87-95a9-302db162185c';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'actual_A',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f7c10d36-03ee-4a87-95a9-302db162185c';
  $display->content['new-f7c10d36-03ee-4a87-95a9-302db162185c'] = $pane;
  $display->panels['helpfu__info_a'][0] = 'new-f7c10d36-03ee-4a87-95a9-302db162185c';
  $pane = new stdClass();
  $pane->pid = 'new-d9e78d34-58c5-4ec5-82e6-18bd0ac7860d';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'actual_B',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd9e78d34-58c5-4ec5-82e6-18bd0ac7860d';
  $display->content['new-d9e78d34-58c5-4ec5-82e6-18bd0ac7860d'] = $pane;
  $display->panels['helpfu__info_a'][1] = 'new-d9e78d34-58c5-4ec5-82e6-18bd0ac7860d';
  $pane = new stdClass();
  $pane->pid = 'new-adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'helpful_info_a',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $display->content['new-adb5c561-2bcd-4f27-b3c4-190021c89a78'] = $pane;
  $display->panels['helpfu__info_a'][2] = 'new-adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $pane = new stdClass();
  $pane->pid = 'new-e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'helpful_info_b',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $display->content['new-e071e0df-eddf-4cbb-a4d4-b345b0874258'] = $pane;
  $display->panels['helpfu__info_a'][3] = 'new-e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $pane = new stdClass();
  $pane->pid = 'new-19304669-0460-407f-a728-3394a3ea5305';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'tech',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '19304669-0460-407f-a728-3394a3ea5305';
  $display->content['new-19304669-0460-407f-a728-3394a3ea5305'] = $pane;
  $display->panels['helpfu__info_a'][4] = 'new-19304669-0460-407f-a728-3394a3ea5305';
  $pane = new stdClass();
  $pane->pid = 'new-74c19443-0e8a-4910-9f2d-7e7397baac54';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'test',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '74c19443-0e8a-4910-9f2d-7e7397baac54';
  $display->content['new-74c19443-0e8a-4910-9f2d-7e7397baac54'] = $pane;
  $display->panels['helpfu__info_a'][5] = 'new-74c19443-0e8a-4910-9f2d-7e7397baac54';
  $pane = new stdClass();
  $pane->pid = 'new-3b283b5d-51f9-477f-b2e8-09afb885f957';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_11';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'article_4',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '3b283b5d-51f9-477f-b2e8-09afb885f957';
  $display->content['new-3b283b5d-51f9-477f-b2e8-09afb885f957'] = $pane;
  $display->panels['helpfu__info_a'][6] = 'new-3b283b5d-51f9-477f-b2e8-09afb885f957';
  $pane = new stdClass();
  $pane->pid = 'new-e3a78746-0520-4fe2-856f-c817791bc841';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'article_4',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'e3a78746-0520-4fe2-856f-c817791bc841';
  $display->content['new-e3a78746-0520-4fe2-856f-c817791bc841'] = $pane;
  $display->panels['helpfu__info_a'][7] = 'new-e3a78746-0520-4fe2-856f-c817791bc841';
  $pane = new stdClass();
  $pane->pid = 'new-1365bb4f-d3ea-4956-81fb-93f5ac6af9b7';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_13';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'article_4',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '1365bb4f-d3ea-4956-81fb-93f5ac6af9b7';
  $display->content['new-1365bb4f-d3ea-4956-81fb-93f5ac6af9b7'] = $pane;
  $display->panels['helpfu__info_a'][8] = 'new-1365bb4f-d3ea-4956-81fb-93f5ac6af9b7';
  $pane = new stdClass();
  $pane->pid = 'new-fea2ac7e-ef2b-45b2-a872-dad447734920';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_14';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'article_4',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'fea2ac7e-ef2b-45b2-a872-dad447734920';
  $display->content['new-fea2ac7e-ef2b-45b2-a872-dad447734920'] = $pane;
  $display->panels['helpfu__info_a'][9] = 'new-fea2ac7e-ef2b-45b2-a872-dad447734920';
  $pane = new stdClass();
  $pane->pid = 'new-7fdf7742-dbdb-4557-862f-58f0219c2185';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_15';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'article_4',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '7fdf7742-dbdb-4557-862f-58f0219c2185';
  $display->content['new-7fdf7742-dbdb-4557-862f-58f0219c2185'] = $pane;
  $display->panels['helpfu__info_a'][10] = 'new-7fdf7742-dbdb-4557-862f-58f0219c2185';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'impress';
  $page->task = 'page';
  $page->admin_title = 'Impress';
  $page->admin_description = '';
  $page->path = 'impress';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_impress__panel';
  $handler->task = 'page';
  $handler->subtask = 'impress';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'db3c2fd6-c9e7-450e-b5dc-e01fe9b3eef9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_impress__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ddeb7f33-f6b1-4e48-9880-edf246978907';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'impress',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ddeb7f33-f6b1-4e48-9880-edf246978907';
  $display->content['new-ddeb7f33-f6b1-4e48-9880-edf246978907'] = $pane;
  $display->panels['center'][0] = 'new-ddeb7f33-f6b1-4e48-9880-edf246978907';
  $pane = new stdClass();
  $pane->pid = 'new-3bc58db7-e69d-4b25-a497-ed35d5b57e61';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'impress_yes',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3bc58db7-e69d-4b25-a497-ed35d5b57e61';
  $display->content['new-3bc58db7-e69d-4b25-a497-ed35d5b57e61'] = $pane;
  $display->panels['center'][1] = 'new-3bc58db7-e69d-4b25-a497-ed35d5b57e61';
  $pane = new stdClass();
  $pane->pid = 'new-1e944404-e0ed-4281-9062-8c96e24ffff1';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'impress_yes',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1e944404-e0ed-4281-9062-8c96e24ffff1';
  $display->content['new-1e944404-e0ed-4281-9062-8c96e24ffff1'] = $pane;
  $display->panels['center'][2] = 'new-1e944404-e0ed-4281-9062-8c96e24ffff1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ddeb7f33-f6b1-4e48-9880-edf246978907';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['impress'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'impress_admin';
  $page->task = 'page';
  $page->admin_title = 'Admin';
  $page->admin_description = '';
  $page->path = 'admin/%admin';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'admin' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
      'keyword' => 'admin',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_impress_admin__panel';
  $handler->task = 'page';
  $handler->subtask = 'impress_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0af4076e-291c-45b9-bbb8-984e853a46f3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_impress_admin__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4ea0dd68-3576-45ee-9905-0642593ab142';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      3 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impresszum',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
      4 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Impress',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<ul class="admin-list">
<li class="clearfix">
<span class="label"><a href=\'impress/1\'>Az Alapjárat szerkesztősége</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'impress/2\'>Külsős munkatársaink</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'impress/3\'>Korábbi munkatársaink</a></span>
<div class="description"></div>
</li>
</ul>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4ea0dd68-3576-45ee-9905-0642593ab142';
  $display->content['new-4ea0dd68-3576-45ee-9905-0642593ab142'] = $pane;
  $display->panels['center'][0] = 'new-4ea0dd68-3576-45ee-9905-0642593ab142';
  $pane = new stdClass();
  $pane->pid = 'new-552d5ae7-aa0f-4b30-840e-0614615df077';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'partner',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Partners',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<ul class="admin-list">
<li class="clearfix">
<span class="label"><a href=\'partners/1\'>Prémium autós partnerek</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'partners/2\'>Prémium szabadidős partnerek</a></span>
<div class="description"></div>
</li>
</ul>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '552d5ae7-aa0f-4b30-840e-0614615df077';
  $display->content['new-552d5ae7-aa0f-4b30-840e-0614615df077'] = $pane;
  $display->panels['center'][1] = 'new-552d5ae7-aa0f-4b30-840e-0614615df077';
  $pane = new stdClass();
  $pane->pid = 'new-edea5471-f535-4417-9d37-d7e0a959ccd8';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'banner',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Banner',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<ul class="admin-list">
<li class="clearfix">
<span class="label"><a href=\'banner/random\'>Random Bannerek</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'banner/fix/1\'>Fix Banner1</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'banner/fix/2\'>Fix Banner2</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'banner/fix/3\'>Fix Banner3</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'banner/fix/4\'>Fix Banner4</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'banner/fix/5\'>Fix Banner5</a></span>
<div class="description"></div>
</li>
</ul>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'edea5471-f535-4417-9d37-d7e0a959ccd8';
  $display->content['new-edea5471-f535-4417-9d37-d7e0a959ccd8'] = $pane;
  $display->panels['center'][2] = 'new-edea5471-f535-4417-9d37-d7e0a959ccd8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['impress_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'media_pege';
  $page->task = 'page';
  $page->admin_title = 'Media page';
  $page->admin_description = '';
  $page->path = 'media/%tids';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'tids' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_media_pege__panel';
  $handler->task = 'page';
  $handler->subtask = 'media_pege';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '07ea4e73-9539-4a70-b64b-55bf265eab22';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_media_pege__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1c10fc55-bbc9-4276-9d77-eb7c1a6908be';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'media_title',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1c10fc55-bbc9-4276-9d77-eb7c1a6908be';
  $display->content['new-1c10fc55-bbc9-4276-9d77-eb7c1a6908be'] = $pane;
  $display->panels['center'][0] = 'new-1c10fc55-bbc9-4276-9d77-eb7c1a6908be';
  $pane = new stdClass();
  $pane->pid = 'new-f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'empty',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'media',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2';
  $display->content['new-f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2'] = $pane;
  $display->panels['center'][1] = 'new-f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['media_pege'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pages';
  $page->task = 'page';
  $page->admin_title = 'Pages';
  $page->admin_description = '';
  $page->path = 'pages/%nid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'nid' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pages__panel';
  $handler->task = 'page';
  $handler->subtask = 'pages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'pages',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd999e5f2-504c-48fe-8575-301b77a1ea62';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_pages__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e6156fce-0893-43e0-8eea-bd19537885a8';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pages/121',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e6156fce-0893-43e0-8eea-bd19537885a8';
  $display->content['new-e6156fce-0893-43e0-8eea-bd19537885a8'] = $pane;
  $display->panels['center'][0] = 'new-e6156fce-0893-43e0-8eea-bd19537885a8';
  $pane = new stdClass();
  $pane->pid = 'new-68cad4c6-fa46-45d8-91be-a747e43a6909';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pages/124',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '68cad4c6-fa46-45d8-91be-a747e43a6909';
  $display->content['new-68cad4c6-fa46-45d8-91be-a747e43a6909'] = $pane;
  $display->panels['center'][1] = 'new-68cad4c6-fa46-45d8-91be-a747e43a6909';
  $pane = new stdClass();
  $pane->pid = 'new-2fdc47cc-cfc0-48ae-925a-f6f3a751a0bd';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pages/122',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2fdc47cc-cfc0-48ae-925a-f6f3a751a0bd';
  $display->content['new-2fdc47cc-cfc0-48ae-925a-f6f3a751a0bd'] = $pane;
  $display->panels['center'][2] = 'new-2fdc47cc-cfc0-48ae-925a-f6f3a751a0bd';
  $pane = new stdClass();
  $pane->pid = 'new-6752a60c-33a9-4f2b-955d-d400ba60aaf4';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pages/123',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6752a60c-33a9-4f2b-955d-d400ba60aaf4';
  $display->content['new-6752a60c-33a9-4f2b-955d-d400ba60aaf4'] = $pane;
  $display->panels['center'][3] = 'new-6752a60c-33a9-4f2b-955d-d400ba60aaf4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pages'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'partners';
  $page->task = 'page';
  $page->admin_title = 'Partners';
  $page->admin_description = '';
  $page->path = 'partners';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_partners__panel';
  $handler->task = 'page';
  $handler->subtask = 'partners';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'partner',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f0836b46-dc90-4ae0-ab15-0514ebd2613f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_partners__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8a32afea-dea1-42a9-bd55-7945462a8d02';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'premium',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8a32afea-dea1-42a9-bd55-7945462a8d02';
  $display->content['new-8a32afea-dea1-42a9-bd55-7945462a8d02'] = $pane;
  $display->panels['center'][0] = 'new-8a32afea-dea1-42a9-bd55-7945462a8d02';
  $pane = new stdClass();
  $pane->pid = 'new-659139d9-388e-410f-b1fe-6b50201fa6cc';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'recreation',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '659139d9-388e-410f-b1fe-6b50201fa6cc';
  $display->content['new-659139d9-388e-410f-b1fe-6b50201fa6cc'] = $pane;
  $display->panels['center'][1] = 'new-659139d9-388e-410f-b1fe-6b50201fa6cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['partners'] = $page;

  return $pages;

}
