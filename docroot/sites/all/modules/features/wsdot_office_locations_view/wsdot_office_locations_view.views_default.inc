<?php
/**
 * @file
 * wsdot_office_locations_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_office_locations_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'offices_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Offices View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Office Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Fax Number */
  $handler->display->display_options['fields']['field_fax_number']['id'] = 'field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['table'] = 'field_data_field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['field'] = 'field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['element_label_type'] = 'p';
  /* Field: Content: Mailing Address */
  $handler->display->display_options['fields']['field_mailing_address']['id'] = 'field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address']['field'] = 'field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address']['element_label_type'] = 'p';
  /* Field: Content: Office Map */
  $handler->display->display_options['fields']['field_office_map']['id'] = 'field_office_map';
  $handler->display->display_options['fields']['field_office_map']['table'] = 'field_data_field_office_map';
  $handler->display->display_options['fields']['field_office_map']['field'] = 'field_office_map';
  $handler->display->display_options['fields']['field_office_map']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['field_office_map']['click_sort_column'] = 'url';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'span';
  /* Field: Content: Phone Misc */
  $handler->display->display_options['fields']['field_phone_misc']['id'] = 'field_phone_misc';
  $handler->display->display_options['fields']['field_phone_misc']['table'] = 'field_data_field_phone_misc';
  $handler->display->display_options['fields']['field_phone_misc']['field'] = 'field_phone_misc';
  $handler->display->display_options['fields']['field_phone_misc']['element_label_type'] = 'p';
  /* Field: Content: Street Address */
  $handler->display->display_options['fields']['field_street_address']['id'] = 'field_street_address';
  $handler->display->display_options['fields']['field_street_address']['table'] = 'field_data_field_street_address';
  $handler->display->display_options['fields']['field_street_address']['field'] = 'field_street_address';
  /* Field: Content: Toll Free Phone */
  $handler->display->display_options['fields']['field_toll_free_phone']['id'] = 'field_toll_free_phone';
  $handler->display->display_options['fields']['field_toll_free_phone']['table'] = 'field_data_field_toll_free_phone';
  $handler->display->display_options['fields']['field_toll_free_phone']['field'] = 'field_toll_free_phone';
  $handler->display->display_options['fields']['field_toll_free_phone']['element_label_type'] = 'p';
  /* Field: Content: Toll Free Phone Misc */
  $handler->display->display_options['fields']['field_toll_free_misc']['id'] = 'field_toll_free_misc';
  $handler->display->display_options['fields']['field_toll_free_misc']['table'] = 'field_data_field_toll_free_misc';
  $handler->display->display_options['fields']['field_toll_free_misc']['field'] = 'field_toll_free_misc';
  $handler->display->display_options['fields']['field_toll_free_misc']['element_label_type'] = 'p';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'offices' => 'offices',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'offices';
  $export['offices_view'] = $view;

  return $export;
}
