(function ($) {
  Drupal.behaviors.hamburger = {
    attach: function (context, settings) {
      $('#main_menu ul.menu').prepend('<a id="ham-menu" style="cursor: pointer;">Hírek</a>');
      $('#mini-panel-hamburger_menu_2019').hide();
      $('#ham-menu').click(function() {
      	$('#mini-panel-hamburger_menu_2019').slideToggle();
      });
    }
  };
}(jQuery));




