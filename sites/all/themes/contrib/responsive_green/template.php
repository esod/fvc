<?php
/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 */

/**
 * Implements hook_html_head_alter().
 */
function responsive_green_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

/**
 * Insert themed breadcrumb page navigation at top of the node content.
 */
function responsive_green_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Use CSS to hide titile .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    // Comment below line to hide current page to breadcrumb.
    $breadcrumb[] = drupal_get_title();
    $output .= '<nav class="breadcrumb">' . implode(' » ', $breadcrumb) . '</nav>';
    return $output;
  }
}

/**
 * Override or insert variables into the page template.
 */
function responsive_green_preprocess_page(&$vars) {
  if (isset($vars['main_menu'])) {
    $vars['main_menu'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'main-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }
  else {
    $vars['main_menu'] = FALSE;
  }
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_menu'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'secondary-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }
  else {
    $vars['secondary_menu'] = FALSE;
  }
  if (module_exists('i18n_menu')) {
    $vars['main_menu_tree'] = i18n_menu_translated_tree(variable_get('menu_main_links_source', 'main-menu'));
  }
  else {
    $vars['main_menu_tree'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
  }
  $vars['twitter'] = theme_get_setting('twitter', 'responsive_green');
  $vars['facebook'] = theme_get_setting('facebook', 'responsive_green');
  $vars['googleplus'] = theme_get_setting('googleplus', 'responsive_green');
  $vars['linkedin'] = theme_get_setting('linkedin', 'responsive_green');
  $vars['theme_path_social'] = base_path() . drupal_get_path('theme', 'responsive_green');
  $vars['display'] = theme_get_setting('display', 'responsive_green');
  $vars['sdisplay'] = theme_get_setting('sdisplay', 'responsive_green');

  //Initialize slideshow using theme settings
  //$vars['effect'] = theme_get_setting('slideshow_effect', 'responsive_green'); //Wait for fade bug to be resolved
  $vars['slideshow_direction'] = theme_get_setting('slideshow_direction','responsive_green');
  $vars['effect_time'] = theme_get_setting('slideshow_effect_time','responsive_green')*1000;
  $vars['slideshow_controls'] = theme_get_setting('slideshow_controls','responsive_green');
  $vars['slideshow_random'] = theme_get_setting('slideshow_random','responsive_green');
  $vars['slideshow_pause'] = theme_get_setting('slideshow_pause','responsive_green');
  $vars['slideshow_touch'] = theme_get_setting('slideshow_touch','responsive_green');

  // The images. TODO: move into a custom module
  $vars['img1'] = base_path() . drupal_get_path('theme', 'responsive_green') . '/images/road-closed-ahead-lo.png';
  $vars['img2'] = base_path() . drupal_get_path('theme', 'responsive_green') . '/images/lifereimagined.jpg';
  $vars['img3'] = base_path() . drupal_get_path('theme', 'responsive_green') . '/images/vision-life-different.jpg';
  $vars['img4'] = base_path() . drupal_get_path('theme', 'responsive_green') . '/images/steps-to-setting-goals.jpg';
  
  // Pass the slideshow settings to Drupal.settings
  drupal_add_js(array(
    'custom_slideshow' => array(
      //'effect' => $effect, // Wait for fade bug to be resolved
      'slideshow_direction' => $vars['slideshow_direction'],
      'effect_time' => $vars['effect_time'],
      'slideshow_controls' => $vars['slideshow_controls'],
      'slideshow_random' => $vars['slideshow_random'],
      'slideshow_pause' => $vars['slideshow_pause'],
      'slideshow_touch' => $vars['slideshow_touch']
    )
  ), 'setting');

}

/**
 * Add styles for theme color schemes.
 */
if (!(theme_get_setting('theme_color','responsive_green') == 'default')):
	$theme_color = theme_get_setting('theme_color','responsive_green');
	drupal_add_css(drupal_get_path('theme', 'responsive_green') . '/css/color-schemes/' . $theme_color . '/style.css', array('group' => CSS_THEME, 'weight' => 120));
	drupal_add_css(drupal_get_path('theme', 'responsive_green') . '/css/color-schemes/' . $theme_color . '/media.css', array('group' => CSS_THEME, 'weight' => 121));
endif;

/**
 * Add files for custom buttons.
 */
if (!(theme_get_setting('button_color','responsive_green') == '')):
	drupal_add_css(drupal_get_path('theme', 'responsive_green') . '/css/buttons.css');
endif;

function responsive_green_button($variables) {
	$button_color = theme_get_setting('button_color','responsive_green');
	if($button_color == '') {
		$button_classes = '';
	} else {
		$button_classes = ' button small round ';
	}	
	$element = $variables['element'];
	$element['#attributes']['type'] = 'submit';
	element_set_attributes($element, array('id', 'name', 'value'));

	$element['#attributes']['class'][] = 'form-' . $element['#button_type'] . $button_classes . $button_color;
	if (!empty($element['#attributes']['disabled'])) {
	$element['#attributes']['class'][] = 'form-button-disabled';
	}

	return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

/**
 * Add Google Fonts.
 */
function responsive_green_preprocess_html(&$variables) {
  drupal_add_css('http://fonts.googleapis.com/css?family=Vollkorn:400italic,400,700', array('type' => 'external'));
  drupal_add_css('http://fonts.googleapis.com/css?family=Oxygen:400,700', array('type' => 'external'));
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function responsive_green_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Override or insert variables into the node template.
 */
function responsive_green_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}

function responsive_green_page_alter($page) {
  $viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
    'name' => 'viewport',
    'content' => 'width=device-width'
    ),
  );
  drupal_add_html_head($viewport, 'viewport');
}
