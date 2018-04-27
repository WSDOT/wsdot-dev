<?php
/**
 * @file
 * wsdot_recaptcha.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_recaptcha_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
