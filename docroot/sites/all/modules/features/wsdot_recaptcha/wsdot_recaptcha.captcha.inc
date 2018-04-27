<?php
/**
 * @file
 * wsdot_recaptcha.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function wsdot_recaptcha_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_login';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['user_login'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_login_block';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['user_login_block'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_pass';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['user_pass'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_register_form';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['user_register_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_14976';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_14976'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_15646';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_15646'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_15916';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_15916'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_16466';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_16466'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_22491';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_22491'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_22496';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_22496'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_25291';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_25291'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_6526';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_6526'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_8911';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_8911'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'webform_client_form_8936';
  $captcha->module = 'recaptcha';
  $captcha->captcha_type = 'reCAPTCHA';
  $export['webform_client_form_8936'] = $captcha;

  return $export;
}
