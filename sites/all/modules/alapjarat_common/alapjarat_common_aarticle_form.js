(function ($) {
  Drupal.behaviors.aarticle_form = {
    attach: function (context, settings) {
      $('.node-form-options input[type="checkbox"]').click(function() {
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

      var stored = {
        menu: null,
        secondaryMenu: null,
      }
      
      function setCategory(source, store) {
        sel = $('.node-a_article-form .field-name-field-' + source + ' select option:selected').text();
        $('.node-a_article-form .field-name-field-tags .form-item label:contains("' + sel + '")').prev().attr('checked', 'checked').attr('disabled', 'disabled');
        if (store[store] !== null) {
          $('.node-a_article-form .field-name-field-tags .form-item label:contains("' + stored[store] + '")').prev().removeAttr('checked').removeAttr('readonly');
        }
        stored[store] = sel;
      }

      setCategory('menu', 'menu');
      $('.node-a_article-form .field-name-field-menu select').change(function() {
        setCategory('menu', 'menu');
      });

      setCategory('secondary-menu', 'secondaryMenu');
      $('.node-a_article-form .field-name-field-secondary-menu select').change(function() {
        setCategory('secondary-menu', 'secondaryMenu');
      });
    }
  };
}(jQuery));
