<?php
/**
 * @file
 * gsb_feature_homepage_cta_fpp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_homepage_cta_fpp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
