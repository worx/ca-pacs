<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ca_pacs_content_default_fields() {
  $fields = array();

  // Exported field: field_ca_pacs_pac_activity
  $fields['ca_pacs-field_ca_pacs_pac_activity'] = array(
    'field_name' => 'field_ca_pacs_pac_activity',
    'type_name' => 'ca_pacs',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ca_pacs_pac_activity][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'PAC Activity',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('PAC Activity');

  return $fields;
}
