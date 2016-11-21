/**
 * @file
 * Responsive Green Slider Javascript.
 *
 * See @link http://www.woothemes.com/flexslider/ for more settings
 */
(function ($) {
Drupal.behaviors.slider = {
attach: function (context, settings) {
  
  //var effect = Drupal.settings.custom_slideshow.effect;
  var slideshow_direction = Drupal.settings.custom_slideshow.slideshow_direction;
  var effect_time = Drupal.settings.custom_slideshow.effect_time;
  var slideshow_controls = Drupal.settings.custom_slideshow.slideshow_controls;
  var slideshow_random = Drupal.settings.custom_slideshow.slideshow_random;
  var slideshow_pause = Drupal.settings.custom_slideshow.slideshow_pause;
  var slideshow_touch = Drupal.settings.custom_slideshow.slideshow_touch;
 
  $(window).load(function() {
    $("#single-post-slider").flexslider({
      animation: 'slide',
      direction: slideshow_direction,
      slideshowSpeed: effect_time,
      controlNav: slideshow_controls,
      randomize: slideshow_random,
      pauseOnHover: slideshow_pause,
      touch: slideshow_touch,
      slideshow: true,
      smoothHeight: true,
      start: function(slider) {
        slider.container.click(function(e) {
          if(!slider.animating) {
            slider.flexAnimate(slider.getTarget('next'));
          }
        });
      }
    });
  });
}
};
})(jQuery);
