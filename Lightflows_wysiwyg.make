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

; FILE HANDLING
projects[transliteration][subdir] = "contrib"
projects[imce][subdir] = "contrib"
projects[imce_wysiwyg][subdir] = "contrib"

; FEATURES
projects[features][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[Exportables][subdir] = "contrib"
projects[Libraries][subdir] = "contrib"

; WYSIWYG
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg_filter][subdir] = "contrib"
projects[input_formats][subdir] = "contrib"

; Add a patch to make wysiwyg exportable.
projects[wysiwyg][patch][] = "http://drupal.org/files/issues/wysiwyg-exportables_and_features_with_ui-1060846-11_1.patch"

;IMAGE CAPTIONS
projects[Image_caption][subdir] = "contrib"
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



