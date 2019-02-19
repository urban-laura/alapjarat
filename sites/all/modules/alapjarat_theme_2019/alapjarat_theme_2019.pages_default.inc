<?php
/**
 * @file
 * alapjarat_theme_2019.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function alapjarat_theme_2019_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article_2019';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Article_2019',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonómia kifejezés from Tartalom (on Tartalom: Published [field_published])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_published-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node edit form from node',
        'keyword' => 'node_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'article_2019',
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
            'theme' => 'alapjarat_theme_2019',
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
  $display->storage_id = 'node_view__article_2019';
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
  $pane->pid = 'new-f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $display->content['new-f9b8d36d-6b73-478d-86c1-efec89da0ec5'] = $pane;
  $display->panels['center'][1] = 'new-f9b8d36d-6b73-478d-86c1-efec89da0ec5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1afacd9d-cf30-4199-ab76-f0dbd4ceab3b';
  $display->content['new-1afacd9d-cf30-4199-ab76-f0dbd4ceab3b'] = $pane;
  $display->panels['center'][2] = 'new-1afacd9d-cf30-4199-ab76-f0dbd4ceab3b';
  $pane = new stdClass();
  $pane->pid = 'new-0361bf6b-5a2e-48ad-9c4a-c222baccfd8e';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'author_picture',
      'image_link' => 'content',
    ),
    'context' => 'relationship_entity_from_field:field_published-node-taxonomy_term_1',
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
  $pane->uuid = '0361bf6b-5a2e-48ad-9c4a-c222baccfd8e';
  $display->content['new-0361bf6b-5a2e-48ad-9c4a-c222baccfd8e'] = $pane;
  $display->panels['center'][3] = 'new-0361bf6b-5a2e-48ad-9c4a-c222baccfd8e';
  $pane = new stdClass();
  $pane->pid = 'new-fead48ef-1d12-41ce-976b-42d1543a1f11';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->uuid = 'fead48ef-1d12-41ce-976b-42d1543a1f11';
  $display->content['new-fead48ef-1d12-41ce-976b-42d1543a1f11'] = $pane;
  $display->panels['center'][4] = 'new-fead48ef-1d12-41ce-976b-42d1543a1f11';
  $pane = new stdClass();
  $pane->pid = 'new-d0cdd85e-e4c4-4699-b007-d28cb0ecd8d3';
  $pane->panel = 'center';
  $pane->type = 'token';
  $pane->subtype = 'node:published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd0cdd85e-e4c4-4699-b007-d28cb0ecd8d3';
  $display->content['new-d0cdd85e-e4c4-4699-b007-d28cb0ecd8d3'] = $pane;
  $display->panels['center'][5] = 'new-d0cdd85e-e4c4-4699-b007-d28cb0ecd8d3';
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
<div class="g-ytsubscribe" data-channelid="UCueleOZ2QFAaVSHXheZlFig" data-layout="default" data-count="default"></div>',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '9354d871-2863-49fb-8ff1-a840d9250d15';
  $display->content['new-9354d871-2863-49fb-8ff1-a840d9250d15'] = $pane;
  $display->panels['center'][6] = 'new-9354d871-2863-49fb-8ff1-a840d9250d15';
  $pane = new stdClass();
  $pane->pid = 'new-3febc495-5010-436c-9e9c-2d5d79305e23';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '3febc495-5010-436c-9e9c-2d5d79305e23';
  $display->content['new-3febc495-5010-436c-9e9c-2d5d79305e23'] = $pane;
  $display->panels['center'][7] = 'new-3febc495-5010-436c-9e9c-2d5d79305e23';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '2f0f4428-94ac-474b-b005-fa5bed80d385';
  $display->content['new-2f0f4428-94ac-474b-b005-fa5bed80d385'] = $pane;
  $display->panels['center'][8] = 'new-2f0f4428-94ac-474b-b005-fa5bed80d385';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $display->content['new-02db2c16-7fdb-420d-91d9-67de62bc9e24'] = $pane;
  $display->panels['center'][9] = 'new-02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $pane = new stdClass();
  $pane->pid = 'new-6645b1c1-1bc8-4299-827a-f164bc2b48ed';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Banner',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '6645b1c1-1bc8-4299-827a-f164bc2b48ed';
  $display->content['new-6645b1c1-1bc8-4299-827a-f164bc2b48ed'] = $pane;
  $display->panels['center'][10] = 'new-6645b1c1-1bc8-4299-827a-f164bc2b48ed';
  $pane = new stdClass();
  $pane->pid = 'new-7b060e40-e85c-4d4b-bab9-cbbc60db21c6';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_11';
  $pane->shown = FALSE;
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '7b060e40-e85c-4d4b-bab9-cbbc60db21c6';
  $display->content['new-7b060e40-e85c-4d4b-bab9-cbbc60db21c6'] = $pane;
  $display->panels['center'][11] = 'new-7b060e40-e85c-4d4b-bab9-cbbc60db21c6';
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $display->content['new-b831b875-bba3-4ce1-ac46-114bbc1082ed'] = $pane;
  $display->panels['center'][12] = 'new-b831b875-bba3-4ce1-ac46-114bbc1082ed';
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'ef380c1f-a01f-40b0-b092-93c95ef8fad6';
  $display->content['new-ef380c1f-a01f-40b0-b092-93c95ef8fad6'] = $pane;
  $display->panels['center'][13] = 'new-ef380c1f-a01f-40b0-b092-93c95ef8fad6';
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
  $display->content['new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0'] = $pane;
  $display->panels['center'][14] = 'new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
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
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'b1cff760-1538-4a59-b4db-5ecfb0085e6c';
  $display->content['new-b1cff760-1538-4a59-b4db-5ecfb0085e6c'] = $pane;
  $display->panels['center'][15] = 'new-b1cff760-1538-4a59-b4db-5ecfb0085e6c';
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
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'b337a832-59be-437f-a00b-c5c6636a85e3';
  $display->content['new-b337a832-59be-437f-a00b-c5c6636a85e3'] = $pane;
  $display->panels['center'][16] = 'new-b337a832-59be-437f-a00b-c5c6636a85e3';
  $pane = new stdClass();
  $pane->pid = 'new-2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tagsa';
  $pane->shown = FALSE;
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
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = '2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $display->content['new-2bcc488a-ca6b-443a-ba17-88d14181e34a'] = $pane;
  $display->panels['center'][17] = 'new-2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article_2019'] = $handler;

  return $export;
}
