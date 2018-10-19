(function ($) {
  Drupal.behaviors.aarticle_form = {
    attach: function (context, settings) {
      $('.node-form-options input').click(function() {
      	var options = ["status", "sketch", "scheduled"];
      	var index = $.inArray($(this).attr('name'), options);
		if (index != -1) {
		  options.splice(index, 1);
		}
		options.forEach(function(element, index, array) {
		  $('input[name="' + element + '"]').attr("checked", false);
		});
      	
      });
    }
  };
}(jQuery));
