(function ($) {
  Drupal.behaviors.hamburger = {
    attach: function (context, settings) {
      $('#main_menu').prepend('<a id="ham-menu" style="cursor: pointer;">Hírek</a>');
      $('#mini-panel-hamburger_menu_2019').hide();
      $('#ham-menu').click(function() {
      	$('#mini-panel-hamburger_menu_2019').slideToggle(0);
      	$('#ham-menu').toggleClass("hm-active");
      });

      $('.header .search-tablet').prepend('<div id="mobile-search"></div>');
      $('#search-mobile').hide();
      $('#mobile-search').click(function() {
          $('#search-mobile').slideToggle();
          $('.header').toggleClass("menu-active");
          $('.header').toggleClass("mobile-search-active");
      });

      $('#main_menu').prepend('<div id="mobil-menu"></div>');
      $('#mini-panel-mobil_menu').hide();
      $('#mobil-menu').click(function() {
        $('#mini-panel-mobil_menu').slideToggle();
        $('.header').toggleClass("menu-active");
        $('.header').toggleClass("main-menu-active");
      });

      $('#mini-panel-mobil_menu .pane-content').hide();
      $('#category .view-content').hide();
      $('#connection ul').hide();
      $('#main-menu-2019 .pane-content').show();
      $('#category .pane-content').show();
      $('#car-partners .pane-content').show();
      $('#connection .pane-content').show();
      $('#glossory-list .pane-content').show();

      $('#heading .pane-title').click(function() {
        $('#heading .pane-content').slideToggle();
        $('#heading').toggleClass("m-active");
      });

      $('#category .view-header').click(function() {
        $('#category .view-content').slideToggle();
        $('#category').toggleClass("m-active");
      });

      $('#calculator .pane-title').click(function() {
        $('#calculator .pane-content').slideToggle();
        $('#calculator').toggleClass("m-active");
      });

      $('#most-popular .pane-title').click(function() {
        $('#most-popular .pane-content').slideToggle();
        $('#most-popular').toggleClass("m-active");
      });

      $('#car-partners .view-header').click(function() {
        $('#car-partners .view-content').slideToggle();
        $('#car-partners').toggleClass("m-active");
      });

      $('#connection .pane-title').click(function() {
        $('#connection ul').slideToggle();
        $('#connection .pane-title').toggleClass("m-active");
      });
    }
  };
}(jQuery));