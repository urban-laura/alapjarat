(function ($) {
  Drupal.behaviors.aarticle_form = {
    attach: function (context, settings) {
      $('.node-form-options input[type="checkbox"]').click(function() {
        console.log($(this).attr("name"));
        if ($(this).attr("name") == 'status' || $(this).attr("name") == 'sketch' || $(this).attr("name") == 'scheduled') {
          var options = ["status", "sketch", "scheduled"];
          var index = $.inArray($(this).attr('name'), options);
          if (index != -1) {
            options.splice(index, 1);
          }
          options.forEach(function(element, index, array) {
            $('input[name="' + element + '"]').attr("checked", false);
          });
        }
      });
    }
  };
}(jQuery));
