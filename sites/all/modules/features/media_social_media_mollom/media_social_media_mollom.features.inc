<?php
/**
 * @file
 * media_social_media_mollom.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_social_media_mollom_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
