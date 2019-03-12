(function ($) {
  Drupal.behaviors.hamburger = {
    attach: function (context, settings) {
      $('#main_menu').prepend('<a id="ham-menu" style="cursor: pointer;">Hírek</a>');
      $('#mini-panel-hamburger_menu_2019').hide();
      $('#ham-menu').click(function() {
      	$('#mini-panel-hamburger_menu_2019').slideToggle(0);
      	$('#ham-menu').toggleClass("hm-active");
      });
      $('#main_menu').prepend('<div id="mobil-menu"></div>');
      $('#mini-panel-mobil_menu').hide();
      $('#mobil-menu').click(function() {
        $('#mini-panel-mobil_menu').slideToggle();
      });
      $('#mini-panel-mobil_menu .pane-content').hide();
      $('#heading .pane-title').click(function() {
        $('#heading .pane-content').slideToggle();
      });
      $('#calculator .pane-title').click(function() {
        $('#calculator .pane-content').slideToggle();
      });
      $('#most-popular .pane-title').click(function() {
        $('#most-popular .pane-content').slideToggle();
      });
    }
  };
}(jQuery));