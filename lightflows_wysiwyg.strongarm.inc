<?php

/**
 * Implementation of hook_strongarm().
 */
function lightflows_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'allowed_html_1';
  $strongarm->value = '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>';
  $export['allowed_html_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_1';
  $strongarm->value = 1;
  $export['filter_html_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_help_1';
  $strongarm->value = 1;
  $export['filter_html_help_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_nofollow_1';
  $strongarm->value = FALSE;
  $export['filter_html_nofollow_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_1';
  $strongarm->value = '72';
  $export['filter_url_length_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_2';
  $strongarm->value = '72';
  $export['filter_url_length_2'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_3';
  $strongarm->value = '72';
  $export['filter_url_length_3'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_4';
  $strongarm->value = '72';
  $export['filter_url_length_4'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_6';
  $strongarm->value = '72';
  $export['filter_url_length_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_7';
  $strongarm->value = '72';
  $export['filter_url_length_7'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'format';
  $strongarm->value = '6';
  $export['format'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_caption_node_types';
  $strongarm->value = array(
    'page' => 'page',
    'story' => 'story',
  );
  $export['image_caption_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => '0',
      'quota' => '0',
      'tuquota' => '0',
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => '0',
      'directories' => array(
        0 => array(
          'name' => 'admin',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Authenticated User',
      'usertab' => 1,
      'filesize' => '1',
      'quota' => '2',
      'tuquota' => '0',
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => '1',
      'directories' => array(
        0 => array(
          'name' => 'authenticated_users/u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array();
  $export['imce_roles_profiles'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_allow_comments_1';
  $strongarm->value = '0';
  $export['wysiwyg_filter_allow_comments_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_allow_comments_6';
  $strongarm->value = '0';
  $export['wysiwyg_filter_allow_comments_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_nofollow_domains_1';
  $strongarm->value = array();
  $export['wysiwyg_filter_nofollow_domains_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_nofollow_domains_6';
  $strongarm->value = array();
  $export['wysiwyg_filter_nofollow_domains_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_nofollow_policy_1';
  $strongarm->value = 'disabled';
  $export['wysiwyg_filter_nofollow_policy_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_nofollow_policy_6';
  $strongarm->value = 'disabled';
  $export['wysiwyg_filter_nofollow_policy_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_style_urls_1';
  $strongarm->value = array();
  $export['wysiwyg_filter_style_urls_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_style_urls_6';
  $strongarm->value = array();
  $export['wysiwyg_filter_style_urls_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_border-1_1';
  $strongarm->value = array(
    'border' => 0,
    'border-top' => 0,
    'border-right' => 0,
    'border-bottom' => 0,
    'border-left' => 0,
    'border-width' => 0,
    'border-top-width' => 0,
    'border-right-width' => 0,
    'border-bottom-width' => 0,
    'border-left-width' => 0,
  );
  $export['wysiwyg_filter_styles_border-1_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_border-1_6';
  $strongarm->value = array(
    'border' => 'border',
    'border-top' => 'border-top',
    'border-right' => 'border-right',
    'border-bottom' => 'border-bottom',
    'border-left' => 'border-left',
    'border-width' => 'border-width',
    'border-top-width' => 'border-top-width',
    'border-right-width' => 'border-right-width',
    'border-bottom-width' => 'border-bottom-width',
    'border-left-width' => 'border-left-width',
  );
  $export['wysiwyg_filter_styles_border-1_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_border-2_1';
  $strongarm->value = array(
    'border-color' => 0,
    'border-top-color' => 0,
    'border-right-color' => 0,
    'border-bottom-color' => 0,
    'border-left-color' => 0,
    'border-style' => 0,
    'border-top-style' => 0,
    'border-right-style' => 0,
    'border-bottom-style' => 0,
    'border-left-style' => 0,
  );
  $export['wysiwyg_filter_styles_border-2_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_border-2_6';
  $strongarm->value = array(
    'border-color' => 'border-color',
    'border-top-color' => 'border-top-color',
    'border-right-color' => 'border-right-color',
    'border-bottom-color' => 'border-bottom-color',
    'border-left-color' => 'border-left-color',
    'border-style' => 'border-style',
    'border-top-style' => 'border-top-style',
    'border-right-style' => 'border-right-style',
    'border-bottom-style' => 'border-bottom-style',
    'border-left-style' => 'border-left-style',
  );
  $export['wysiwyg_filter_styles_border-2_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_box_1';
  $strongarm->value = array(
    'margin' => 'margin',
    'margin-top' => 'margin-top',
    'margin-right' => 'margin-right',
    'margin-bottom' => 'margin-bottom',
    'margin-left' => 'margin-left',
    'padding' => 0,
    'padding-top' => 0,
    'padding-right' => 0,
    'padding-bottom' => 0,
    'padding-left' => 0,
  );
  $export['wysiwyg_filter_styles_box_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_box_6';
  $strongarm->value = array(
    'margin' => 'margin',
    'margin-top' => 'margin-top',
    'margin-right' => 'margin-right',
    'margin-bottom' => 'margin-bottom',
    'margin-left' => 'margin-left',
    'padding' => 'padding',
    'padding-top' => 'padding-top',
    'padding-right' => 'padding-right',
    'padding-bottom' => 'padding-bottom',
    'padding-left' => 'padding-left',
  );
  $export['wysiwyg_filter_styles_box_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_color_1';
  $strongarm->value = array(
    'color' => 0,
    'background' => 0,
    'background-color' => 0,
    'background-image' => 0,
    'background-repeat' => 0,
    'background-attachment' => 0,
    'background-position' => 0,
  );
  $export['wysiwyg_filter_styles_color_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_color_6';
  $strongarm->value = array(
    'color' => 0,
    'background' => 0,
    'background-color' => 0,
    'background-image' => 0,
    'background-repeat' => 0,
    'background-attachment' => 0,
    'background-position' => 0,
  );
  $export['wysiwyg_filter_styles_color_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_dimension_1';
  $strongarm->value = array(
    'height' => 0,
    'line-height' => 0,
    'max-height' => 0,
    'max-width' => 0,
    'min-height' => 0,
    'min-width' => 0,
    'width' => 0,
  );
  $export['wysiwyg_filter_styles_dimension_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_dimension_6';
  $strongarm->value = array(
    'height' => 'height',
    'width' => 'width',
    'line-height' => 0,
    'max-height' => 0,
    'max-width' => 0,
    'min-height' => 0,
    'min-width' => 0,
  );
  $export['wysiwyg_filter_styles_dimension_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_font_1';
  $strongarm->value = array(
    'font' => 0,
    'font-family' => 0,
    'font-size' => 0,
    'font-size-adjust' => 0,
    'font-stretch' => 0,
    'font-style' => 0,
    'font-variant' => 0,
    'font-weight' => 0,
  );
  $export['wysiwyg_filter_styles_font_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_font_6';
  $strongarm->value = array(
    'font' => 0,
    'font-family' => 0,
    'font-size' => 0,
    'font-size-adjust' => 0,
    'font-stretch' => 0,
    'font-style' => 0,
    'font-variant' => 0,
    'font-weight' => 0,
  );
  $export['wysiwyg_filter_styles_font_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_layout_1';
  $strongarm->value = array(
    'clear' => 'clear',
    'float' => 'float',
    'display' => 0,
    'position' => 0,
    'visibility' => 0,
  );
  $export['wysiwyg_filter_styles_layout_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_layout_6';
  $strongarm->value = array(
    'float' => 'float',
    'clear' => 0,
    'display' => 0,
    'position' => 0,
    'visibility' => 0,
  );
  $export['wysiwyg_filter_styles_layout_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_list_1';
  $strongarm->value = array(
    'list-style' => 0,
    'list-style-image' => 0,
    'list-style-position' => 0,
    'list-style-type' => 0,
  );
  $export['wysiwyg_filter_styles_list_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_list_6';
  $strongarm->value = array(
    'list-style-position' => 'list-style-position',
    'list-style-type' => 'list-style-type',
    'list-style' => 0,
    'list-style-image' => 0,
  );
  $export['wysiwyg_filter_styles_list_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_positioning_1';
  $strongarm->value = array(
    'left' => 'left',
    'right' => 'right',
    'bottom' => 0,
    'clip' => 0,
    'overflow' => 0,
    'top' => 0,
    'vertical-align' => 0,
    'z-index' => 0,
  );
  $export['wysiwyg_filter_styles_positioning_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_positioning_6';
  $strongarm->value = array(
    'left' => 'left',
    'right' => 'right',
    'bottom' => 0,
    'clip' => 0,
    'overflow' => 0,
    'top' => 0,
    'vertical-align' => 0,
    'z-index' => 0,
  );
  $export['wysiwyg_filter_styles_positioning_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_table_1';
  $strongarm->value = array(
    'border-collapse' => 0,
    'border-spacing' => 0,
    'caption-side' => 0,
    'empty-cells' => 0,
    'table-layout' => 0,
  );
  $export['wysiwyg_filter_styles_table_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_table_6';
  $strongarm->value = array(
    'border-collapse' => 'border-collapse',
    'border-spacing' => 'border-spacing',
    'caption-side' => 'caption-side',
    'empty-cells' => 'empty-cells',
    'table-layout' => 'table-layout',
  );
  $export['wysiwyg_filter_styles_table_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_text_1';
  $strongarm->value = array(
    'text-align' => 0,
    'text-decoration' => 0,
    'text-indent' => 0,
    'text-transform' => 0,
    'letter-spacing' => 0,
    'word-spacing' => 0,
    'white-space' => 0,
    'direction' => 0,
    'unicode-bidi' => 0,
  );
  $export['wysiwyg_filter_styles_text_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_text_6';
  $strongarm->value = array(
    'text-align' => 'text-align',
    'text-decoration' => 0,
    'text-indent' => 0,
    'text-transform' => 0,
    'letter-spacing' => 0,
    'word-spacing' => 0,
    'white-space' => 0,
    'direction' => 0,
    'unicode-bidi' => 0,
  );
  $export['wysiwyg_filter_styles_text_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_user_1';
  $strongarm->value = array(
    'cursor' => 0,
    'outline' => 0,
    'outline-width' => 0,
    'outline-style' => 0,
    'outline-color' => 0,
    'zoom' => 0,
  );
  $export['wysiwyg_filter_styles_user_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_user_6';
  $strongarm->value = array(
    'cursor' => 0,
    'outline' => 0,
    'outline-width' => 0,
    'outline-style' => 0,
    'outline-color' => 0,
    'zoom' => 0,
  );
  $export['wysiwyg_filter_styles_user_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_classes_1';
  $strongarm->value = array(
    0 => 'callout',
    2 => 'caption',
  );
  $export['wysiwyg_filter_valid_classes_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_classes_6';
  $strongarm->value = array(
    0 => 'caption',
    2 => 'callout',
  );
  $export['wysiwyg_filter_valid_classes_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_parsed_1';
  $strongarm->value = array(
    'a' => array(
      'href' => array(
        'required' => TRUE,
      ),
      'target' => array(
        'values' => array(
          0 => '_blank',
        ),
      ),
      'title' => array(),
      'class' => array(),
    ),
    'b' => array(),
    'blockquote' => array(),
    'br' => array(),
    'cite' => array(),
    'code' => array(),
    'dd' => array(),
    'div' => array(
      'align' => array(
        'values' => array(
          0 => 'center',
          1 => 'justify',
          2 => 'left',
          3 => 'right',
        ),
      ),
      'class' => array(),
    ),
    'dl' => array(),
    'dt' => array(),
    'em' => array(),
    'h2' => array(),
    'h3' => array(),
    'h4' => array(),
    'h5' => array(),
    'h6' => array(),
    'hr' => array(),
    'i' => array(),
    'img' => array(
      'src' => array(),
      'class' => array(),
      'title' => array(),
      'width' => array(),
      'height' => array(),
      'style' => array(),
    ),
    'li' => array(),
    'ol' => array(),
    'p' => array(
      'align' => array(
        'values' => array(
          0 => 'center',
          1 => 'justify',
          2 => 'left',
          3 => 'right',
        ),
      ),
      'class' => array(),
    ),
    'span' => array(),
    'strong' => array(),
    'ul' => array(),
  );
  $export['wysiwyg_filter_valid_elements_parsed_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_parsed_6';
  $strongarm->value = array(
    'a' => array(
      'href' => array(
        'required' => TRUE,
      ),
      'target' => array(
        'values' => array(
          0 => '_blank',
        ),
      ),
      'title' => array(),
      'class' => array(),
    ),
    'b' => array(),
    'blockquote' => array(),
    'br' => array(),
    'cite' => array(),
    'code' => array(),
    'dd' => array(),
    'div' => array(
      'align' => array(
        'values' => array(
          0 => 'center',
          1 => 'justify',
          2 => 'left',
          3 => 'right',
        ),
      ),
      'class' => array(),
    ),
    'dl' => array(),
    'dt' => array(),
    'em' => array(),
    'h2' => array(),
    'h3' => array(),
    'h4' => array(),
    'h5' => array(),
    'h6' => array(),
    'hr' => array(),
    'i' => array(),
    'img' => array(
      'src' => array(),
      'class' => array(),
      'title' => array(),
      'width' => array(),
      'height' => array(),
      'style' => array(),
    ),
    'li' => array(),
    'ol' => array(),
    'p' => array(
      'align' => array(
        'values' => array(
          0 => 'center',
          1 => 'justify',
          2 => 'left',
          3 => 'right',
        ),
      ),
      'class' => array(),
    ),
    'span' => array(),
    'strong' => array(),
    'ul' => array(),
  );
  $export['wysiwyg_filter_valid_elements_parsed_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_raw_1';
  $strongarm->value = 'a[!href|target<_blank|title|class],
div[align<center?justify?left?right|class],
p[align<center?justify?left?right|class],
img[src|class|title|width|height|style],
h2,h3,h4,h5,h6,br,hr,span,em/i,strong/b,cite,code,blockquote,ul,ol,li,dl,dt,dd';
  $export['wysiwyg_filter_valid_elements_raw_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_raw_6';
  $strongarm->value = 'a[!href|target<_blank|title|class],
div[align<center?justify?left?right|class],
p[align<center?justify?left?right|class],
img[src|class|title|width|height|style],
h2,h3,h4,h5,h6,br,hr,span,em/i,strong/b,cite,code,blockquote,ul,ol,li,dl,dt,dd';
  $export['wysiwyg_filter_valid_elements_raw_6'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_ids_1';
  $strongarm->value = array();
  $export['wysiwyg_filter_valid_ids_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_ids_6';
  $strongarm->value = array();
  $export['wysiwyg_filter_valid_ids_6'] = $strongarm;

  return $export;
}
