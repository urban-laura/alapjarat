(function ($) {
  Drupal.behaviors.alapjarat_mc = {
    attach: function (context, settings) {
    
      $('.alapjarat-mc-gallery-item-video .mc-video').hover(
 		function() {
 			$(this).parent().next().show();
 		}, function() {
 			$(this).parent().next().hide();
 		}
      );

      $('.alapjarat-mc-gallery-item-image .mc-image').hover(
 		function() {
 			$(this).next().show();
 		}, function() {
 			$(this).next().hide();
 		}
      );


    }
  };
}(jQuery));
