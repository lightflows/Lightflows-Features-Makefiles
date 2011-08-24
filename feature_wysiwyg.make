; DRUPAL VERSION
core = 6.x

; CORE MODULES
projects[] = drupal
projects[views][subdir] = "contrib"

; FILE HANDLING
projects[imagecache][subdir] = "contrib"
projects[imageapi][subdir] = "contrib"
projects[transliteration][subdir] = "contrib"
projects[image_resize_filter][subdir] = "contrib"
projects[imagebrowser][subdir] = "contrib"
projects[imagebrowser][version] = '2.x-dev'

; FEATURES
projects[features][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[ctools][subdir] = "contrib"
projects[input_formats][subdir] = "contrib"

; WYSIWYG
projects[wysiwyg][subdir] = "contrib"
; Add a patch to make wysiwyg exportable.
projects[wysiwyg][patch][] = "http://drupal.org/files/issues/wysiwyg-exportables_and_features_with_ui-1060846-11_1.patch"

; LIBRARIES
projects[libraries][subdir] = "contrib"
projects[jquery_ui][subdir] = "contrib"

; TinyMCE 
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://downloads.sourceforge.net/project/tinymce/TinyMCE/3.2.7/tinymce_3_2_7.zip"
libraries[tinymce][directory_name] = "tinymce"

; jQuery UI
libraries[jquery_ui][download][type] = "get"
;libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery-ui-1.7.3.zip"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"

