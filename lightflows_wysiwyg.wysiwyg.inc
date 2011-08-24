<?php

/**
 * Implementation of hook_default_wysiwyg().
 */
function lightflows_wysiwyg_default_wysiwyg() {
  $export = array();

  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'tinymce';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'underline' => 1,
        'strikethrough' => 1,
        'justifyleft' => 1,
        'justifycenter' => 1,
        'justifyright' => 1,
        'justifyfull' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'outdent' => 1,
        'indent' => 1,
        'undo' => 1,
        'redo' => 1,
        'link' => 1,
        'unlink' => 1,
        'anchor' => 1,
        'image' => 1,
        'cleanup' => 1,
        'blockquote' => 1,
        'hr' => 1,
        'removeformat' => 1,
      ),
      'advimage' => array(
        'advimage' => 1,
      ),
      'font' => array(
        'formatselect' => 1,
        'styleselect' => 1,
      ),
      'table' => array(
        'tablecontrols' => 1,
      ),
      'wordcount' => array(
        'wordcount' => 1,
      ),
      'imce' => array(
        'imce' => 1,
      ),
      'drupal' => array(
        'break' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 0,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 1,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => 'callout=callout
caption=caption',
  );
  $wysiwyg->machine = 'filtered_html';
  $export['filtered_html'] = $wysiwyg;

  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'ckeditor';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'Bold' => 1,
        'Italic' => 1,
        'Underline' => 1,
        'Strike' => 1,
        'JustifyLeft' => 1,
        'JustifyCenter' => 1,
        'JustifyRight' => 1,
        'JustifyBlock' => 1,
        'BulletedList' => 1,
        'NumberedList' => 1,
        'Outdent' => 1,
        'Indent' => 1,
        'Undo' => 1,
        'Redo' => 1,
        'Link' => 1,
        'Unlink' => 1,
        'Anchor' => 1,
        'Image' => 1,
        'Blockquote' => 1,
        'Source' => 1,
        'HorizontalRule' => 1,
        'Cut' => 1,
        'Copy' => 1,
        'Paste' => 1,
        'PasteText' => 1,
        'PasteFromWord' => 1,
        'ShowBlocks' => 1,
        'RemoveFormat' => 1,
        'Format' => 1,
        'Flash' => 1,
        'Iframe' => 1,
        'SpellChecker' => 1,
        'Scayt' => 1,
      ),
      'imce' => array(
        'imce' => 1,
      ),
      'drupal' => array(
        'break' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 0,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 1,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => 'callout=callout
caption=caption',
  );
  $wysiwyg->machine = 'filtered_html_ck';
  $export['filtered_html_ck'] = $wysiwyg;

  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'tinymce';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'underline' => 1,
        'strikethrough' => 1,
        'justifyleft' => 1,
        'justifycenter' => 1,
        'justifyright' => 1,
        'justifyfull' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'outdent' => 1,
        'indent' => 1,
        'undo' => 1,
        'redo' => 1,
        'link' => 1,
        'unlink' => 1,
        'anchor' => 1,
        'image' => 1,
        'cleanup' => 1,
        'code' => 1,
        'hr' => 1,
        'cut' => 1,
        'copy' => 1,
        'paste' => 1,
        'removeformat' => 1,
      ),
      'advimage' => array(
        'advimage' => 1,
      ),
      'font' => array(
        'formatselect' => 1,
        'styleselect' => 1,
      ),
      'paste' => array(
        'pastetext' => 1,
        'pasteword' => 1,
      ),
      'table' => array(
        'tablecontrols' => 1,
      ),
      'media' => array(
        'media' => 1,
      ),
      'wordcount' => array(
        'wordcount' => 1,
      ),
      'imce' => array(
        'imce' => 1,
      ),
      'drupal' => array(
        'break' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 0,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 1,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => 'callout=callout
caption=caption',
  );
  $wysiwyg->machine = 'full_html';
  $export['full_html'] = $wysiwyg;

  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'ckeditor';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'Bold' => 1,
        'Italic' => 1,
        'Underline' => 1,
        'Strike' => 1,
        'JustifyLeft' => 1,
        'JustifyCenter' => 1,
        'JustifyRight' => 1,
        'JustifyBlock' => 1,
        'BulletedList' => 1,
        'NumberedList' => 1,
        'Outdent' => 1,
        'Indent' => 1,
        'Undo' => 1,
        'Redo' => 1,
        'Link' => 1,
        'Unlink' => 1,
        'Anchor' => 1,
        'Image' => 1,
        'Blockquote' => 1,
        'Source' => 1,
        'PasteText' => 1,
        'PasteFromWord' => 1,
        'ShowBlocks' => 1,
        'RemoveFormat' => 1,
        'Format' => 1,
        'Styles' => 1,
        'Flash' => 1,
        'CreateDiv' => 1,
        'Iframe' => 1,
        'SpellChecker' => 1,
        'Scayt' => 1,
      ),
      'imce' => array(
        'imce' => 1,
      ),
      'MediaEmbed' => array(
        'MediaEmbed' => 1,
      ),
      'drupal' => array(
        'break' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 0,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 1,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => 'callout=callout
caption=caption',
  );
  $wysiwyg->machine = 'full_html_ck';
  $export['full_html_ck'] = $wysiwyg;

  return $export;
}
