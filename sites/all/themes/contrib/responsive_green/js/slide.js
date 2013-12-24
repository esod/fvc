/**
 * @file
 * Responsive Green Slider Javascript.
 *
 */
(function ($) {
Drupal.behaviors.slider = {
attach: function (context, settings) {
  $(window).load(function() {
    $("#single-post-slider").flexslider({
      animation: 'slide',
      slideshow: true,
      controlNav: true,
      smoothHeight: true,
      slideshowSpeed: 2000,
      direction: 'horizontal',
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
