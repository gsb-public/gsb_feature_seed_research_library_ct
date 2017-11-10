<?php
/**
 * @file
 * gsb_feature_seed_research_library_ct.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gsb_feature_seed_research_library_ct_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_research_results-field_description'.
  $field_instances['field_collection_item-field_research_results-field_description'] = array(
    'bundle' => 'field_research_results',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'act' => 'act',
          'full_html' => 'full_html',
          'gsb_html_text' => 'gsb_html_text',
          'gsb_wysiwyg_text' => 'gsb_wysiwyg_text',
          'image_resource_caption' => 'image_resource_caption',
          'image_text_equivalent' => 'image_text_equivalent',
          'markdown' => 'markdown',
          'markdown_lite_minus_resources' => 'markdown_lite_minus_resources',
          'paragraphed_plain_text' => 'paragraphed_plain_text',
          'plain_text' => 'plain_text',
          'sidebar' => 'sidebar',
          'slideshow' => 'slideshow',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'act' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'image_resource_caption' => array(
              'weight' => 0,
            ),
            'image_text_equivalent' => array(
              'weight' => 0,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'markdown_lite_minus_resources' => array(
              'weight' => 0,
            ),
            'paragraphed_plain_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'sidebar' => array(
              'weight' => 0,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_research_results-field_file_single_public'.
  $field_instances['field_collection_item-field_research_results-field_file_single_public'] = array(
    'bundle' => 'field_research_results',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_file_single_public',
    'label' => 'PDF',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'replace_existing_files' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_research_results-field_link_single'.
  $field_instances['field_collection_item-field_research_results-field_link_single'] = array(
    'bundle' => 'field_research_results',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_link_single',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_co_investigators-field_faculty_or_other'.
  $field_instances['field_collection_item-field_srl_co_investigators-field_faculty_or_other'] = array(
    'bundle' => 'field_srl_co_investigators',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'UseEntityReference',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_faculty_or_other',
    'label' => 'Select Type',
    'required' => 0,
    'settings' => array(
      'checkall' => array(
        'checkall' => 0,
        'checkall-check-all' => 1,
        'checkall-toggle' => 1,
        'checkall-uncheck-all' => 1,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'checkall' => FALSE,
      ),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_co_investigators-field_link_single'.
  $field_instances['field_collection_item-field_srl_co_investigators-field_link_single'] = array(
    'bundle' => 'field_srl_co_investigators',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_link_single',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_co_investigators-field_other_name'.
  $field_instances['field_collection_item-field_srl_co_investigators-field_other_name'] = array(
    'bundle' => 'field_srl_co_investigators',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_other_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'act' => 'act',
          'full_html' => 'full_html',
          'gsb_html_text' => 'gsb_html_text',
          'gsb_wysiwyg_text' => 'gsb_wysiwyg_text',
          'image_resource_caption' => 'image_resource_caption',
          'image_text_equivalent' => 'image_text_equivalent',
          'markdown' => 'markdown',
          'markdown_lite_minus_resources' => 'markdown_lite_minus_resources',
          'paragraphed_plain_text' => 'paragraphed_plain_text',
          'plain_text' => 'plain_text',
          'sidebar' => 'sidebar',
          'slideshow' => 'slideshow',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'act' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'image_resource_caption' => array(
              'weight' => 0,
            ),
            'image_text_equivalent' => array(
              'weight' => 0,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'markdown_lite_minus_resources' => array(
              'weight' => 0,
            ),
            'paragraphed_plain_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'sidebar' => array(
              'weight' => 0,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_co_investigators-field_person_fac_single_ref'.
  $field_instances['field_collection_item-field_srl_co_investigators-field_person_fac_single_ref'] = array(
    'bundle' => 'field_srl_co_investigators',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_person_fac_single_ref',
    'label' => 'Faculty Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_co_investigators-field_school_department'.
  $field_instances['field_collection_item-field_srl_co_investigators-field_school_department'] = array(
    'bundle' => 'field_srl_co_investigators',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_school_department',
    'label' => 'School or Department ',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_principal_investigator-field_faculty_or_other'.
  $field_instances['field_collection_item-field_srl_principal_investigator-field_faculty_or_other'] = array(
    'bundle' => 'field_srl_principal_investigator',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'UseEntityReference',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_faculty_or_other',
    'label' => 'Select Type',
    'required' => 0,
    'settings' => array(
      'checkall' => array(
        'checkall' => 0,
        'checkall-check-all' => 1,
        'checkall-toggle' => 1,
        'checkall-uncheck-all' => 1,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'checkall' => FALSE,
      ),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_principal_investigator-field_link_single'.
  $field_instances['field_collection_item-field_srl_principal_investigator-field_link_single'] = array(
    'bundle' => 'field_srl_principal_investigator',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_link_single',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_principal_investigator-field_other_name'.
  $field_instances['field_collection_item-field_srl_principal_investigator-field_other_name'] = array(
    'bundle' => 'field_srl_principal_investigator',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_other_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'act' => 'act',
          'full_html' => 'full_html',
          'gsb_html_text' => 'gsb_html_text',
          'gsb_wysiwyg_text' => 'gsb_wysiwyg_text',
          'image_resource_caption' => 'image_resource_caption',
          'image_text_equivalent' => 'image_text_equivalent',
          'markdown' => 'markdown',
          'markdown_lite_minus_resources' => 'markdown_lite_minus_resources',
          'paragraphed_plain_text' => 'paragraphed_plain_text',
          'plain_text' => 'plain_text',
          'sidebar' => 'sidebar',
          'slideshow' => 'slideshow',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'act' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'image_resource_caption' => array(
              'weight' => 0,
            ),
            'image_text_equivalent' => array(
              'weight' => 0,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'markdown_lite_minus_resources' => array(
              'weight' => 0,
            ),
            'paragraphed_plain_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'sidebar' => array(
              'weight' => 0,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_principal_investigator-field_person_fac_single_ref'.
  $field_instances['field_collection_item-field_srl_principal_investigator-field_person_fac_single_ref'] = array(
    'bundle' => 'field_srl_principal_investigator',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_person_fac_single_ref',
    'label' => 'Faculty Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'field_collection_item-field_srl_principal_investigator-field_school_department'.
  $field_instances['field_collection_item-field_srl_principal_investigator-field_school_department'] = array(
    'bundle' => 'field_srl_principal_investigator',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_school_department',
    'label' => 'School or Department',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'use_hierarchical_select_lite' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-seed_research_project-field_abstract'.
  $field_instances['node-seed_research_project-field_abstract'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'more_link' => FALSE,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_link' => FALSE,
          'trim_options' => array(),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'more_link' => FALSE,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_link' => FALSE,
          'trim_options' => array(),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Abstract',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'act' => 0,
          'full_html' => 0,
          'gsb_html_text' => 0,
          'gsb_wysiwyg_text' => 0,
          'image_resource_caption' => 0,
          'image_text_equivalent' => 0,
          'markdown' => 'markdown',
          'markdown_lite_minus_resources' => 0,
          'paragraphed_plain_text' => 0,
          'plain_text' => 0,
          'sidebar' => 0,
          'slideshow' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'act' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'image_resource_caption' => array(
              'weight' => 0,
            ),
            'image_text_equivalent' => array(
              'weight' => 0,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'markdown_lite_minus_resources' => array(
              'weight' => 0,
            ),
            'paragraphed_plain_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'sidebar' => array(
              'weight' => 0,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-seed_research_project-field_award_type'.
  $field_instances['node-seed_research_project-field_award_type'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'limit_depth' => FALSE,
          'path_prefix' => 'taxonomy/term/',
          'separator' => ', ',
          'tid_or_name' => 'tid',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'limit_depth' => FALSE,
          'path_prefix' => 'taxonomy/term/',
          'separator' => ', ',
          'tid_or_name' => 'tid',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_award_type',
    'label' => 'Award Type',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'use_hierarchical_select_lite' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-seed_research_project-field_month'.
  $field_instances['node-seed_research_project-field_month'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_month',
    'label' => 'Month',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'use_hierarchical_select_lite' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 56,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-seed_research_project-field_research_locations'.
  $field_instances['node-seed_research_project-field_research_locations'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'gsb_field_formatter_spotlight_fid_to_image',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'gsb_field_formatter_spotlight_fid_to_image',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_research_locations',
    'label' => 'Research Location(s)',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'act' => 'act',
          'full_html' => 'full_html',
          'gsb_html_text' => 'gsb_html_text',
          'gsb_wysiwyg_text' => 'gsb_wysiwyg_text',
          'image_resource_caption' => 'image_resource_caption',
          'image_text_equivalent' => 'image_text_equivalent',
          'markdown' => 'markdown',
          'markdown_lite_minus_resources' => 'markdown_lite_minus_resources',
          'paragraphed_plain_text' => 'paragraphed_plain_text',
          'plain_text' => 'plain_text',
          'sidebar' => 'sidebar',
          'slideshow' => 'slideshow',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'act' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'image_resource_caption' => array(
              'weight' => 0,
            ),
            'image_text_equivalent' => array(
              'weight' => 0,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'markdown_lite_minus_resources' => array(
              'weight' => 0,
            ),
            'paragraphed_plain_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'sidebar' => array(
              'weight' => 0,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-seed_research_project-field_research_results'.
  $field_instances['node-seed_research_project-field_research_results'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
        ),
        'type' => 'field_collection_list',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
        ),
        'type' => 'field_collection_list',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_research_results',
    'label' => 'Research Results',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-seed_research_project-field_search_field'.
  $field_instances['node-seed_research_project-field_search_field'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'concat_field',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'concat_field_blank',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_search_field',
    'label' => 'Search field',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'selected_fields' => array(
        'concat_field_entity_label' => 'concat_field_entity_label',
        'field_abstract' => 'field_abstract',
        'field_award_type' => 'field_award_type',
        'field_month' => 0,
        'field_research_locations' => 'field_research_locations',
        'field_research_results' => 'field_research_results',
        'field_srl_co_investigators' => 'field_srl_co_investigators',
        'field_srl_principal_investigator' => 'field_srl_principal_investigator',
        'field_status' => 0,
        'field_year' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'concat_field',
      'settings' => array(),
      'type' => 'concat_field_default',
      'weight' => 59,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-seed_research_project-field_srl_co_investigators'.
  $field_instances['node-seed_research_project-field_srl_co_investigators'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
        ),
        'type' => 'field_collection_list',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'translate' => 'Translate',
        ),
        'type' => 'field_collection_list',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_srl_co_investigators',
    'label' => 'Co-Investigators',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-seed_research_project-field_srl_principal_investigator'.
  $field_instances['node-seed_research_project-field_srl_principal_investigator'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_srl_principal_investigator',
    'label' => 'Principal Investigator',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-seed_research_project-field_status'.
  $field_instances['node-seed_research_project-field_status'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'limit_depth' => FALSE,
          'path_prefix' => 'taxonomy/term/',
          'separator' => ', ',
          'tid_or_name' => 'tid',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'limit_depth' => FALSE,
          'path_prefix' => 'taxonomy/term/',
          'separator' => ', ',
          'tid_or_name' => 'tid',
        ),
        'type' => 'gsb_field_formatter_path_term_separator',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'checkall' => array(
        'checkall' => 0,
        'checkall-check-all' => 1,
        'checkall-toggle' => 1,
        'checkall-uncheck-all' => 1,
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'checkall' => FALSE,
      ),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-seed_research_project-field_year'.
  $field_instances['node-seed_research_project-field_year'] = array(
    'bundle' => 'seed_research_project',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_year',
    'label' => 'Year',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'M j Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 57,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abstract');
  t('Award Type');
  t('Co-Investigators');
  t('Description');
  t('Faculty Name');
  t('Month');
  t('Name');
  t('PDF');
  t('Principal Investigator');
  t('Research Location(s)');
  t('Research Results');
  t('School or Department');
  t('School or Department ');
  t('Search field');
  t('Select Type');
  t('Status');
  t('Title');
  t('URL');
  t('Year');

  return $field_instances;
}
