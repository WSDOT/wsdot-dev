<?php
/**
 * @file
 * wsdot_structurally_deficient_bridges_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_structurally_deficient_bridges_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'structurally_deficient_bridges';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Structurally Deficient Bridges';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field: Counties */
  $handler->display->display_options['fields']['field_counties']['id'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['label'] = 'County';
  $handler->display->display_options['fields']['field_counties']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_counties']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Highways */
  $handler->display->display_options['fields']['field_highways']['id'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['table'] = 'field_data_field_highways';
  $handler->display->display_options['fields']['field_highways']['field'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['label'] = 'Highway';
  $handler->display->display_options['fields']['field_highways']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highways']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Milepost */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Bridge Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Bridge Number */
  $handler->display->display_options['fields']['field_bridge_number']['id'] = 'field_bridge_number';
  $handler->display->display_options['fields']['field_bridge_number']['table'] = 'field_data_field_bridge_number';
  $handler->display->display_options['fields']['field_bridge_number']['field'] = 'field_bridge_number';
  $handler->display->display_options['fields']['field_bridge_number']['element_label_colon'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = 'Year Built';
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = 'Span Type';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  /* Field: Content: Problem(s) */
  $handler->display->display_options['fields']['field_challenges']['id'] = 'field_challenges';
  $handler->display->display_options['fields']['field_challenges']['table'] = 'field_data_field_challenges';
  $handler->display->display_options['fields']['field_challenges']['field'] = 'field_challenges';
  $handler->display->display_options['fields']['field_challenges']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_short_status']['id'] = 'field_short_status';
  $handler->display->display_options['fields']['field_short_status']['table'] = 'field_data_field_short_status';
  $handler->display->display_options['fields']['field_short_status']['field'] = 'field_short_status';
  $handler->display->display_options['fields']['field_short_status']['element_label_colon'] = FALSE;
  /* Field: Content: Legislative District */
  $handler->display->display_options['fields']['field_legislative_district']['id'] = 'field_legislative_district';
  $handler->display->display_options['fields']['field_legislative_district']['table'] = 'field_data_field_legislative_district';
  $handler->display->display_options['fields']['field_legislative_district']['field'] = 'field_legislative_district';
  $handler->display->display_options['fields']['field_legislative_district']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legislative_district']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
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
    'structurally_deficient_bridges' => 'structurally_deficient_bridges',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['structurally_deficient_bridges'] = $view;

  return $export;
}
