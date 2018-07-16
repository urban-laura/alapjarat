(function ($) {
  Drupal.behaviors.datetimepicker = {

    attach: function (context, settings) {
      Drupal.behaviors.datetimepicker.timepicker();
      Drupal.behaviors.datetimepicker.datetimepicker();
    },

    timepicker: function (context, settings) {
      var items = $('.timepicker,' + Drupal.settings.timepicker.classes);
      if (items.length > 0) {
        $.each(items, function (index, item) {
          if (!!$(item).timepicker) {
            $(item).timepicker({
              dateFormat: Drupal.settings.datetimepicker.default_date_format,
              timeFormat: Drupal.settings.datetimepicker.default_time_format,
              separator: Drupal.settings.datetimepicker.default_separator,
              defaultDate: $(item).val()
            });
          }
        });
      }
    },

    datetimepicker: function (context, settings) {
      var items = $('.datetimepicker,' + Drupal.settings.datetimepicker.classes);
      if (items.length > 0) {
        $.each(items, function (index, item) {
          if (!!$(item).datetimepicker) {
            $(item).datetimepicker({
              dateFormat: Drupal.settings.datetimepicker.default_date_format,
              timeFormat: Drupal.settings.datetimepicker.default_time_format,
              separator: Drupal.settings.datetimepicker.default_separator,
              defaultDate: $(item).val()
            });
          }
        });
      }
    },

    load: function (context, settings) {
    }
  };
  $(function () {
    Drupal.behaviors.datetimepicker.load();

  });
}(jQuery));
