; DRUPAL VERSION
core = 6.x

;LIGHTFLOWS FEATURES & MODULES
projects[lightflows_images][subdir] = "custom"
projects[lightflows_images][type] = "module"
projects[lightflows_images][download][type] = "git"
projects[lightflows_images][download][url]="git://github.com/lightflows/Lightflows-Images.git"

projects[lightflows_wysiwyg][subdir] = "features"
projects[lightflows_wysiwyg][type] = "module"
projects[lightflows_wysiwyg][download][type] = "git"
projects[lightflows_wysiwyg][download][url]="git://github.com/lightflows/Lightflows-WYSIWYG.git"

projects[lightflows_wysiwyg][subdir] = "custom"
projects[lightflows_wysiwyg][type] = "module"
projects[lightflows_wysiwyg][download][type] = "git"
projects[lightflows_wysiwyg][download][url]="git@github.com:lightflows/WYSIWYG-Media-Embed-Hack.git"

projects[shortcode_custom_tags][subdir] = "custom"
projects[shortcode_custom_tags][type] = "module"
projects[shortcode_custom_tags][download][type] = "git"
projects[shortcode_custom_tags][download][url]="git@github.com:lightflows/Lightflows-Shortcodes.git"

; FILE HANDLING
projects[transliteration][subdir] = "contrib"
projects[imce][subdir] = "contrib"
projects[imce_wysiwyg][subdir] = "contrib"

; FEATURES
projects[features][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[exportables][subdir] = "contrib"
projects[libraries][subdir] = "contrib"

; WYSIWYG
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg_filter][subdir] = "contrib"
projects[input_formats][subdir] = "contrib"
projects[shortcode][subdir] = "contrib"

; Add a patch to make wysiwyg exportable.
projects[wysiwyg][patch][] = "http://drupal.org/files/issues/wysiwyg-exportables_and_features_with_ui-1060846-11_1.patch"

;IMAGE CAPTIONS
projects[image_caption][subdir] = "contrib"
projects[wysiwyg][subdir] = "contrib"

; LIBRARIES
projects[libraries][subdir] = "contrib"
projects[jquery_ui][subdir] = "contrib"

; TinyMCE 
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://downloads.sourceforge.net/project/tinymce/TinyMCE/3.2.7/tinymce_3_2_7.zip"
libraries[tinymce][directory_name] = "tinymce"

; CKEditor
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.2.1/ckeditor_3.2.1.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; jQuery UI
libraries[jquery_ui][download][type] = "get"
;libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery-ui-1.7.3.zip"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"



