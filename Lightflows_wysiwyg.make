; DRUPAL VERSION
core = 6.x

;LIGHTFLOWS FEATURES & MODULES
projects[lightflows_images][subdir] = "custom"
projects[lightflows_images][type] = "module"
projects[lightflows_images][download][type] = "git"
projects[lightflows_images][download][url]="git://github.com/lightflows/Lightflows-Images.git"

projects[wysiwyg_starter][subdir] = "features"
projects[wysiwyg_starter][type] = "module"
projects[wysiwyg_starter][download][type] = "git"
projects[wysiwyg_starter][download][url]="git@github.com:lightflows/WYSIWYG-Starter.git"

projects[lightflows_wysiwyg][subdir] = "custom"
projects[lightflows_wysiwyg][type] = "module"
projects[lightflows_wysiwyg][download][type] = "git"
projects[lightflows_wysiwyg][download][url]="git@github.com:lightflows/WYSIWYG-Media-Embed-Hack.git"

;projects[shortcode_custom_tags][subdir] = "custom"
;projects[shortcode_custom_tags][type] = "module"
;projects[shortcode_custom_tags][download][type] = "git"
;projects[shortcode_custom_tags][download][url]="git@github.com:lightflows/Lightflows-Shortcodes.git"

; FILE HANDLING
projects[transliteration][subdir] = "contrib"
projects[imce][subdir] = "contrib"
projects[imce_wysiwyg][subdir] = "contrib"

; FEATURES
projects[features][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[exportables][version] = 2.0-beta1
projects[exportables][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[ctools][subdir] = "contrib"

; WYSIWYG
projects[wysiwyg][subdir] = "contrib"
projects[input_formats][subdir] = "contrib"
projects[wysiwyg_filter][subdir] = "custom"
projects[wysiwyg_filter][type] = "module"
projects[wysiwyg_filter][download][type] = "git"
projects[wysiwyg_filter][download][url]="git@github.com:lightflows/WYSIWYG-Filter.git"

;SHORTCODE
projects[shortcode][subdir] = "custom"
projects[shortcode][type] = "module"
projects[shortcode][download][type] = "git"
projects[shortcode][download][url]="git@github.com:lightflows/Shortcode.git"

projects[shortcode][subdir] = "custom"
projects[shortcode][type] = "module"
projects[shortcode][download][type] = "git"
projects[shortcode][download][url]="git@github.com:lightflows/shortcode-lightflows-tags.git"


; Add a patch to make wysiwyg exportable.
projects[wysiwyg][patch][] = "http://drupal.org/files/issues/wysiwyg-exportables_and_features_with_ui-1060846-11_1.patch"

;IMAGE CAPTIONS
projects[image_caption][subdir] = "custom"
projects[image_caption][type] = "module"
projects[image_caption][download][type] = "git"
projects[image_caption][download][url]="git@github.com:lightflows/Image-caption.git"

; TinyMCE 
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://sourceforge.net/projects/tinymce/files/TinyMCE/3.3.9.2/tinymce_3_3_9_2.zip/download"
libraries[tinymce][directory_name] = "tinymce"

; CKEditor
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.1/ckeditor_3.6.1.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

;CKEDITOR STYLE SHEETS
projects[ckeditor_styles][subdir] = "custom"
projects[ckeditor_styles][type] = "module"
projects[ckeditor_styles][download][type] = "git"
projects[ckeditor_styles][download][url]="git@github.com:lightflows/CKEditor-Styles.git"

; jQuery UI
projects[jquery_ui][subdir] = "contrib"
libraries[jquery_ui][download][type] = "get"
;libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery-ui-1.7.3.zip"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"



