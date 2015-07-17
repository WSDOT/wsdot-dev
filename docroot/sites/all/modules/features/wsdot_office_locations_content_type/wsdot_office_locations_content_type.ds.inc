<?php
/**
 * @file
 * wsdot_office_locations_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function wsdot_office_locations_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|offices|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'offices';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => 'OfficesTitle',
        'ft' => array(),
      ),
    ),
  );
  $export['node|offices|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|offices|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'offices';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_street_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="StreetAddress">',
          'suffix' => '</div>',
        ),
      ),
    ),
    'field_mailing_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="MailingAddress"',
          'suffix' => '</div>',
        ),
      ),
    ),
    'field_phone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<span class="phone">',
          'suffix' => '</span>&nbsp;&nbsp;',
        ),
      ),
    ),
    'field_fax_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="FaxNumber">',
          'suffix' => '</div>',
        ),
      ),
    ),
    'field_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="email">',
          'suffix' => '</div>',
        ),
      ),
    ),
    'field_office_map' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="OfficeMap">',
          'suffix' => '</div>',
        ),
      ),
    ),
    'field_toll_free_phone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<br><span class="TollFree">',
          'suffix' => '</span>&nbsp;&nbsp;',
        ),
      ),
    ),
    'field_phone_misc' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<span class="PhoneMisc">',
          'suffix' => '</span>',
        ),
      ),
    ),
    'field_toll_free_misc' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
          'prefix' => '<span class="TollFreeMisc">',
          'suffix' => '</span>',
        ),
      ),
    ),
    'field_office_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<br><br>',
          'suffix' => '<br>',
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|offices|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function wsdot_office_locations_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|offices|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'offices';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_street_address',
        3 => 'field_mailing_address',
        4 => 'field_phone',
        5 => 'field_phone_misc',
        6 => 'field_toll_free_phone',
        7 => 'field_toll_free_misc',
        8 => 'field_fax_number',
        9 => 'field_website',
        10 => 'field_email',
        11 => 'field_office_map',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_street_address' => 'ds_content',
      'field_mailing_address' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_phone_misc' => 'ds_content',
      'field_toll_free_phone' => 'ds_content',
      'field_toll_free_misc' => 'ds_content',
      'field_fax_number' => 'ds_content',
      'field_website' => 'ds_content',
      'field_email' => 'ds_content',
      'field_office_map' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|offices|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|offices|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'offices';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_office_name',
        2 => 'field_street_address',
        3 => 'field_mailing_address',
        4 => 'field_phone',
        5 => 'field_phone_misc',
        6 => 'field_toll_free_phone',
        7 => 'field_toll_free_misc',
        8 => 'field_fax_number',
        9 => 'field_email',
        10 => 'field_office_map',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_office_name' => 'ds_content',
      'field_street_address' => 'ds_content',
      'field_mailing_address' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_phone_misc' => 'ds_content',
      'field_toll_free_phone' => 'ds_content',
      'field_toll_free_misc' => 'ds_content',
      'field_fax_number' => 'ds_content',
      'field_email' => 'ds_content',
      'field_office_map' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|offices|full'] = $ds_layout;

  return $export;
}
