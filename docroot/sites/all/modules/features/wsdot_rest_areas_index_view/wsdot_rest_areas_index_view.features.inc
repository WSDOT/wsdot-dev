<?php

/**
 * @file
 * wsdot_rest_areas_index_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function wsdot_rest_areas_index_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function wsdot_rest_areas_index_view_default_search_api_index() {
  $items = array();
  $items['rest_area_index'] = entity_import('search_api_index', '{
    "name" : "Rest Area Index",
    "machine_name" : "rest_area_index",
    "description" : "Default index for rest area content type nodes",
    "server" : "acquia_search",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "rest_area" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_counties" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_highway_direction" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_highways" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_rest_areas_amenities" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
