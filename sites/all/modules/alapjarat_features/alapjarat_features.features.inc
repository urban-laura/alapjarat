<?php
/**
 * @file
 * alapjarat_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alapjarat_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alapjarat_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_pub_defaults().
 */
function alapjarat_features_custom_pub_defaults() {
  $options = array();
  // Exported option: scheduled
  $options['scheduled'] = array(
    'type' => 'scheduled',
    'name' => t('Ütemezve'),
    'node_types' => array(
      'a_article' => t('Alapjárat Article'),
    ),
  );

  // Exported option: sketch
  $options['sketch'] = array(
    'type' => 'sketch',
    'name' => t('Piszkozat'),
    'node_types' => array(
      'a_article' => t('Alapjárat Article'),
    ),
  );

  return $options;
}

/**
 * Implements hook_image_default_styles().
 */
function alapjarat_features_image_default_styles() {
  $styles = array();

  // Exported image style: 1_big.
  $styles['1_big'] = array(
    'label' => '1 big',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 4_small.
  $styles['4_small'] = array(
    'label' => '4 small',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 275,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: alapjarat.
  $styles['alapjarat'] = array(
    'label' => 'alapjarat_article',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 735,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article3.
  $styles['article3'] = array(
    'label' => 'article3',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 116,
          'height' => 88,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: big.
  $styles['big'] = array(
    'label' => 'Big',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 334,
          'height' => 174,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: category.
  $styles['category'] = array(
    'label' => 'pane',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 213,
          'height' => 111,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: helpful_small.
  $styles['helpful_small'] = array(
    'label' => 'helpful_small',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 135,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: impresszum.
  $styles['impresszum'] = array(
    'label' => 'Impress',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: premium_partner.
  $styles['premium_partner'] = array(
    'label' => 'premium_partner',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 158,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: recreation_partners.
  $styles['recreation_partners'] = array(
    'label' => 'recreation_partners',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 104,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: right.
  $styles['right'] = array(
    'label' => 'right',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 116,
          'height' => 116,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: world_small.
  $styles['world_small'] = array(
    'label' => 'actual_small',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 139,
          'height' => 73,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function alapjarat_features_node_info() {
  $items = array(
    'a_article' => array(
      'name' => t('Alapjárat Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '0',
      'title_label' => '',
      'help' => '',
    ),
    'banner0' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible) '),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Esemény'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Event name'),
      'help' => '',
    ),
    'impress' => array(
      'name' => t('Impress'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Név'),
      'help' => '',
    ),
    'pages' => array(
      'name' => t('Oldalak'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function alapjarat_features_default_search_api_index() {
  $items = array();
  $items['article_index'] = entity_import('search_api_index', '{
    "name" : "article index",
    "machine_name" : "article_index",
    "description" : null,
    "server" : "mysql",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "a_article" ] },
      "index_directly" : 1,
      "cron_limit" : "200",
      "fields" : {
        "created" : { "type" : "date" },
        "field_published" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_published_date" : { "type" : "date" },
        "field_subtitled:value" : { "type" : "text" },
        "field_text:value" : { "type" : "text" },
        "field_title" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "field_title" : true, "field_text:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "field_title" : true, "field_text:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "field_title" : true, "field_text:value" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_title" : true, "field_text:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "field_title" : true, "field_text:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : { "field_title" : true, "field_text:value" : true },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function alapjarat_features_default_search_api_server() {
  $items = array();
  $items['mysql'] = entity_import('search_api_server', '{
    "name" : "mysql",
    "machine_name" : "mysql",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 1,
      "indexes" : { "article_index" : {
          "field_title" : {
            "table" : "search_api_db_article_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_article_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_text:value" : {
            "table" : "search_api_db_article_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_article_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_article_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_published" : {
            "table" : "search_api_db_article_index",
            "column" : "field_published",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_published_date" : {
            "table" : "search_api_db_article_index",
            "column" : "field_published_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "search_api_viewed" : {
            "table" : "search_api_db_article_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_subtitled:value" : {
            "table" : "search_api_db_article_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_article_index",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
