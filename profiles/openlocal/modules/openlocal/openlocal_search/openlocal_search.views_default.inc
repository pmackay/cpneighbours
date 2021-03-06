<?php
/**
 * @file
 * openlocal_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openlocal_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'openlocal_organisation_facet_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_openlocal_index';
  $view->human_name = 'OpenLocal Organisation Facet Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'row large-collapse';
  $handler->display->display_options['style_options']['column_classes'] = 'columns large-6';
  $handler->display->display_options['style_options']['first_column_classes'] = '';
  $handler->display->display_options['style_options']['last_column_classes'] = '';
  $handler->display->display_options['style_options']['row_classes'] = 'row';
  $handler->display->display_options['style_options']['first_row_classes'] = '';
  $handler->display->display_options['style_options']['last_row_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_openlocal_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_openlocal_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Primary Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'search_api_index_openlocal_index';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'openlocal_panel_shallow',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Description */
  $handler->display->display_options['fields']['field_ol_description']['id'] = 'field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['table'] = 'search_api_index_openlocal_index';
  $handler->display->display_options['fields']['field_ol_description']['field'] = 'field_ol_description';
  $handler->display->display_options['fields']['field_ol_description']['label'] = '';
  $handler->display->display_options['fields']['field_ol_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ol_description']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Categories */
  $handler->display->display_options['fields']['field_featured_categories']['id'] = 'field_featured_categories';
  $handler->display->display_options['fields']['field_featured_categories']['table'] = 'search_api_index_openlocal_index';
  $handler->display->display_options['fields']['field_featured_categories']['field'] = 'field_featured_categories';
  $handler->display->display_options['fields']['field_featured_categories']['label'] = '';
  $handler->display->display_options['fields']['field_featured_categories']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_categories']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_featured_categories']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_featured_categories']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ol-grid-teaser">
<div class="views-field ol-grid-teaser-title">[title]</div>
<div>[field_featured_image]</div>
<div class="views-field">[field_ol_description]</div>
<div class="views-field ol-grid-teaser-categories">[field_featured_categories]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_openlocal_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ol_organisation' => 'ol_organisation',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_openlocal_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Grid */
  $handler = $view->new_display('panel_pane', 'Grid', 'grid');
  $export['openlocal_organisation_facet_search'] = $view;

  return $export;
}
