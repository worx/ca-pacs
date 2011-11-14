<?php

/**
 * Define the function ca_pacs_admin_settings_form().
 *
 * This function will create the admin settings page.
 */
function ca_pacs_admin_settings_form() {
  $form = array();

  $form['ca_pacs_list'] = array(
    '#type' => 'select',
    '#title' => t('Advertiser\'s List Template'),
    '#options' => array(
      'ca_pacs_list_template_one' => t('Template One'),
      'ca_pacs_list_template_two' => t('Template Two'),
      'ca_pacs_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_pacs_list_template', 'ca_pacs_list_template_one'),
    '#required' => TRUE,
  );
  $form['ca_pacs_node'] = array(
    '#type' => 'select',
    '#title' => t('Advertiser\'s Node Template'),
    '#options' => array(
      'ca_pacs_node_template_one' => t('Template One'),
      'ca_pacs_node_template_two' => t('Template Two'),
      'ca_pacs_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_pacs_node_template', 'ca_pacs_node_template_one'),
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_pacs_admin_settings_form_submit'),
  );

  return $form;
}

/*
 * Define the function ca_pacs_admin_settings_form_submit().
 *
 * This function will save the admin settings page.
 */
function ca_pacs_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_pacs_list_template', $form_state['values']['ca_pacs_list']);
  variable_set('ca_pacs_node_template', $form_state['values']['ca_pacs_node']);
  drupal_set_message('Configuration has been saved.');
}
