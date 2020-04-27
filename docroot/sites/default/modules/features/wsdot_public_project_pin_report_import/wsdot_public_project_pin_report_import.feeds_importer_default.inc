<?php

/**
 * @file
 * wsdot_public_project_pin_report_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function wsdot_public_project_pin_report_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wsdot_public_project_pin_report_import';
  $feeds_importer->config = array(
    'name' => 'WSDOT Public Project PIN Report Import',
    'description' => 'Imports WSDOT Public Project PIN Reports',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
        'cache_http_result' => TRUE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'use_tidy' => 0,
        'sources' => array(
          'id' => array(
            'name' => 'Id',
            'value' => 'id',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'title' => array(
            'name' => 'Title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'html' => array(
            'name' => 'Html',
            'value' => 'html',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
        ),
        'context' => array(
          'value' => '//report',
        ),
        'display_errors' => 1,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'html',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'pin_report',
        'insert_new' => '1',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['wsdot_public_project_pin_report_import'] = $feeds_importer;

  return $export;
}
