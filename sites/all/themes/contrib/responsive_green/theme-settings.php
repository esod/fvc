<?php
/**
 * @file
 * Theme setting callbacks for the Responsive Green theme.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function responsive_green_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['responsive_green_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Responsive Green Settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  
  $form['responsive_green_settings']['tabs'] = array(
    '#type' => 'vertical_tabs',
  );
  
  $form['responsive_green_settings']['tabs']['breadcrumb'] = array(
    '#type' => 'fieldset',
    '#title' => t('Breadcrumbs'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['responsive_green_settings']['tabs']['breadcrumb']['breadcrumbs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show breadcrumbs in a page'),
    '#default_value' => theme_get_setting('breadcrumbs', 'responsive_green'),
    '#description'   => t("Check this option to show breadcrumbs in page. Uncheck to hide."),
  );
  $form['responsive_green_settings']['tabs']['social'] = array(
    '#type' => 'fieldset',
    '#title' => t('Social Icon'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['responsive_green_settings']['tabs']['social']['display'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show Social Icon'),
    '#default_value' => theme_get_setting('display', 'responsive_green'),
    '#description'   => t("Check this option to show Social Icon. Uncheck to hide."),
  );
  $form['responsive_green_settings']['tabs']['social']['twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter URL'),
    '#default_value' => theme_get_setting('twitter', 'responsive_green'),
    '#description' => t("Enter your Twitter Profile URL. example:: http://www.xyz.com"),
  );
  $form['responsive_green_settings']['tabs']['social']['facebook'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook URL'),
    '#default_value' => theme_get_setting('facebook', 'responsive_green'),
    '#description'   => t("Enter your Facebook Profile URL. example:: http://www.xyz.com"),
  );
  $form['responsive_green_settings']['tabs']['social']['linkedin'] = array(
    '#type' => 'textfield',
    '#title' => t('LinkedIn URL'),
    '#default_value' => theme_get_setting('linkedin', 'responsive_green'),
    '#description'   => t("Enter your LinkedIn Profile URL. example:: http://www.xyz.com"),
  );
  if(module_exists('custom_slideshow')) {
    $form['responsive_green_settings']['tabs']['plugins'] = array(
      '#type' => 'fieldset',
      '#title' => t('Plugins'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    
      $form['responsive_green_settings']['tabs']['plugins']['slideshow'] = array(
        '#type' => 'fieldset',
        '#title' => t('Front-page Slideshow'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
      );
      
      $form['responsive_green_settings']['tabs']['plugins']['slideshow']['slideshow_js'] = array(
          '#type' => 'checkbox',
          '#title' => t('Include Slideshow javascript code'),
          '#description'   => t('Use the checkbox to include or not the javascript code (Flexslider) for the Slideshow. <br>More info <a href="http://flexslider.woothemes.com/" target="_blank">http://flexslider.woothemes.com</a>.'),
          '#default_value' => theme_get_setting('slideshow_js','responsive_green'),
      );    
  
      $form['responsive_green_settings']['tabs']['plugins']['slideshow']['slideshow_effect'] = array(
          '#type' => 'select',
          '#title' => t('Effects'),
          '#description'   => t('From the drop-down menu, select the Slideshow effect you prefer.'),
          '#default_value' => theme_get_setting('slideshow_effect','responsive_green'),
          '#options' => array(
          'slide' => t('Slide'),
          'fade' => t('Fade'),
          ),
      );
  
      $form['responsive_green_settings']['tabs']['plugins']['slideshow']['slideshow_effect_time'] = array(
          '#type' => 'textfield',
          '#title' => t('Effect duration (sec)'),
          '#default_value' => theme_get_setting('slideshow_effect_time','responsive_green'),
      );
  
      $form['responsive_green_settings']['tabs']['plugins']['slideshow']['slideshow_random'] = array(
          '#type' => 'checkbox',
          '#title' => t('Randomize slide order'),
          '#default_value' => theme_get_setting('slideshow_random','responsive_green'),
      );
  
      $form['responsive_green_settings']['tabs']['plugins']['slideshow']['slideshow_pause'] = array(
          '#type' => 'checkbox',
          '#title' => t('Pause Slideshow on hover'),
          '#default_value' => theme_get_setting('slideshow_pause','responsive_green'),
      );
  
      $form['responsive_green_settings']['tabs']['plugins']['slideshow']['slideshow_controls'] = array(
          '#type' => 'checkbox',
          '#title' => t('Display Slideshow controls'),
          '#default_value' => theme_get_setting('slideshow_controls','responsive_green'),
      );
  
      $form['responsive_green_settings']['tabs']['plugins']['slideshow']['slideshow_touch'] = array(
          '#type' => 'checkbox',
          '#title' => t('Allow touch swipe navigation'),
          '#default_value' => theme_get_setting('slideshow_touch','responsive_green'),
      );
  }
}
