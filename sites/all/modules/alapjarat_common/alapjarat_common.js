(function ($) {
  Drupal.behaviors.exampleModule = {
    attach: function (context, settings) {
      $('#main_menu ul.menu').prepend('<img src="/sites/all/modules/alapjarat_common/images/alapjarat_hamburger.png" id="ham-menu" style="padding: 4px;cursor: pointer;">');
      $('.pane-most-popular-terms').hide();
      $('#ham-menu').click(function() {
      	$('.pane-most-popular-terms').slideToggle();
      });
    }
  };
}(jQuery));