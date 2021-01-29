<?php

/**
 * @file
 * wsdot_services_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_services_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'services_manuals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services Manuals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Publication Number */
  $handler->display->display_options['fields']['field_publication_number']['id'] = 'field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['table'] = 'field_data_field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['field'] = 'field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['label'] = 'publication_number';
  /* Field: Content: Publication Version */
  $handler->display->display_options['fields']['field_publication_version']['id'] = 'field_publication_version';
  $handler->display->display_options['fields']['field_publication_version']['table'] = 'field_data_field_publication_version';
  $handler->display->display_options['fields']['field_publication_version']['field'] = 'field_publication_version';
  $handler->display->display_options['fields']['field_publication_version']['label'] = 'publication_version';
  /* Field: Content: Publication URL */
  $handler->display->display_options['fields']['field_publication_url']['id'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['table'] = 'field_data_field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['field'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['label'] = 'publication_url';
  $handler->display->display_options['fields']['field_publication_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_publication_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_publication_url']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = 'publication_date';
  $handler->display->display_options['fields']['field_publication_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Manual Manager */
  $handler->display->display_options['fields']['field_managers']['id'] = 'field_managers';
  $handler->display->display_options['fields']['field_managers']['table'] = 'field_data_field_managers';
  $handler->display->display_options['fields']['field_managers']['field'] = 'field_managers';
  $handler->display->display_options['fields']['field_managers']['label'] = 'manual_manager';
  /* Field: Content: Originator */
  $handler->display->display_options['fields']['field_originator']['id'] = 'field_originator';
  $handler->display->display_options['fields']['field_originator']['table'] = 'field_data_field_originator';
  $handler->display->display_options['fields']['field_originator']['field'] = 'field_originator';
  $handler->display->display_options['fields']['field_originator']['label'] = 'originator';
  /* Field: Content: Number of Pages */
  $handler->display->display_options['fields']['field_number_of_pages']['id'] = 'field_number_of_pages';
  $handler->display->display_options['fields']['field_number_of_pages']['table'] = 'field_data_field_number_of_pages';
  $handler->display->display_options['fields']['field_number_of_pages']['field'] = 'field_number_of_pages';
  $handler->display->display_options['fields']['field_number_of_pages']['label'] = 'number_pages';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['label'] = 'subject';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Related Publications */
  $handler->display->display_options['fields']['field_related_publications']['id'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['table'] = 'field_data_field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['field'] = 'field_related_publications';
  $handler->display->display_options['fields']['field_related_publications']['label'] = 'related_publications';
  /* Field: Content: Details */
  $handler->display->display_options['fields']['field_details']['id'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['table'] = 'field_data_field_details';
  $handler->display->display_options['fields']['field_details']['field'] = 'field_details';
  $handler->display->display_options['fields']['field_details']['label'] = 'details';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Publication Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_value']['id'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_value']['field'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['value'] = array(
    'engineering' => 'engineering',
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'manuals';
  $export['services_manuals'] = $view;

  $view = new view();
  $view->name = 'services_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Project ID */
  $handler->display->display_options['fields']['field_project_id']['id'] = 'field_project_id';
  $handler->display->display_options['fields']['field_project_id']['table'] = 'field_data_field_project_id';
  $handler->display->display_options['fields']['field_project_id']['field'] = 'field_project_id';
  $handler->display->display_options['fields']['field_project_id']['label'] = 'id';
  $handler->display->display_options['fields']['field_project_id']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Cities */
  $handler->display->display_options['fields']['field_cities']['id'] = 'field_cities';
  $handler->display->display_options['fields']['field_cities']['table'] = 'field_data_field_cities';
  $handler->display->display_options['fields']['field_cities']['field'] = 'field_cities';
  $handler->display->display_options['fields']['field_cities']['label'] = 'cities';
  $handler->display->display_options['fields']['field_cities']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cities']['delta_offset'] = '0';
  /* Field: Field: Counties */
  $handler->display->display_options['fields']['field_counties']['id'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['label'] = 'counties';
  $handler->display->display_options['fields']['field_counties']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_counties']['delta_offset'] = '0';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization_term_ref']['id'] = 'field_organization_term_ref';
  $handler->display->display_options['fields']['field_organization_term_ref']['table'] = 'field_data_field_organization_term_ref';
  $handler->display->display_options['fields']['field_organization_term_ref']['field'] = 'field_organization_term_ref';
  $handler->display->display_options['fields']['field_organization_term_ref']['label'] = 'division';
  $handler->display->display_options['fields']['field_organization_term_ref']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Funding types */
  $handler->display->display_options['fields']['field_funding_types']['id'] = 'field_funding_types';
  $handler->display->display_options['fields']['field_funding_types']['table'] = 'field_data_field_funding_types';
  $handler->display->display_options['fields']['field_funding_types']['field'] = 'field_funding_types';
  $handler->display->display_options['fields']['field_funding_types']['label'] = 'funding';
  $handler->display->display_options['fields']['field_funding_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_funding_types']['delta_offset'] = '0';
  /* Field: Content: Funding Table */
  $handler->display->display_options['fields']['field_funding_table']['id'] = 'field_funding_table';
  $handler->display->display_options['fields']['field_funding_table']['table'] = 'field_data_field_funding_table';
  $handler->display->display_options['fields']['field_funding_table']['field'] = 'field_funding_table';
  $handler->display->display_options['fields']['field_funding_table']['label'] = 'funding_table';
  $handler->display->display_options['fields']['field_funding_table']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Highways */
  $handler->display->display_options['fields']['field_highways']['id'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['table'] = 'field_data_field_highways';
  $handler->display->display_options['fields']['field_highways']['field'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['label'] = 'highways';
  $handler->display->display_options['fields']['field_highways']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_highways']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  /* Field: Content: Phase */
  $handler->display->display_options['fields']['field_project_phase']['id'] = 'field_project_phase';
  $handler->display->display_options['fields']['field_project_phase']['table'] = 'field_data_field_project_phase';
  $handler->display->display_options['fields']['field_project_phase']['field'] = 'field_project_phase';
  $handler->display->display_options['fields']['field_project_phase']['label'] = 'phase';
  $handler->display->display_options['fields']['field_project_phase']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: PIN Report */
  $handler->display->display_options['fields']['field_pin_report']['id'] = 'field_pin_report';
  $handler->display->display_options['fields']['field_pin_report']['table'] = 'field_data_field_pin_report';
  $handler->display->display_options['fields']['field_pin_report']['field'] = 'field_pin_report';
  $handler->display->display_options['fields']['field_pin_report']['label'] = 'pin_report';
  $handler->display->display_options['fields']['field_pin_report']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field: Regions */
  $handler->display->display_options['fields']['field_regions']['id'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['table'] = 'field_data_field_regions';
  $handler->display->display_options['fields']['field_regions']['field'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['label'] = 'regions';
  $handler->display->display_options['fields']['field_regions']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_regions']['delta_offset'] = '0';
  /* Field: Content: Project status */
  $handler->display->display_options['fields']['field_project_status']['id'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status']['field'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['label'] = 'status';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'projects';
  $export['services_projects'] = $view;

  $view = new view();
  $view->name = 'services_rest_areas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services Rest Areas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services Rest Areas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Amenities */
  $handler->display->display_options['fields']['field_rest_areas_amenities']['id'] = 'field_rest_areas_amenities';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['table'] = 'field_data_field_rest_areas_amenities';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['field'] = 'field_rest_areas_amenities';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['label'] = 'amenities';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['delta_offset'] = '0';
  /* Field: Content: Direction */
  $handler->display->display_options['fields']['field_highway_direction']['id'] = 'field_highway_direction';
  $handler->display->display_options['fields']['field_highway_direction']['table'] = 'field_data_field_highway_direction';
  $handler->display->display_options['fields']['field_highway_direction']['field'] = 'field_highway_direction';
  $handler->display->display_options['fields']['field_highway_direction']['label'] = 'direction';
  $handler->display->display_options['fields']['field_highway_direction']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_highway_direction']['delta_offset'] = '0';
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_geolocation_lat_long']['id'] = 'field_geolocation_lat_long';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['table'] = 'field_data_field_geolocation_lat_long';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['field'] = 'field_geolocation_lat_long';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['label'] = 'geolocation';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['type'] = 'services';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Highways */
  $handler->display->display_options['fields']['field_highways']['id'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['table'] = 'field_data_field_highways';
  $handler->display->display_options['fields']['field_highways']['field'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['label'] = 'highways';
  $handler->display->display_options['fields']['field_highways']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_highways']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['label'] = 'location';
  $handler->display->display_options['fields']['field_milepost']['type'] = 'text_plain';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_rest_area_status']['id'] = 'field_rest_area_status';
  $handler->display->display_options['fields']['field_rest_area_status']['table'] = 'field_data_field_rest_area_status';
  $handler->display->display_options['fields']['field_rest_area_status']['field'] = 'field_rest_area_status';
  $handler->display->display_options['fields']['field_rest_area_status']['label'] = 'status';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rest_area' => 'rest_area',
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'rest-areas';
  $export['services_rest_areas'] = $view;

  return $export;
}
