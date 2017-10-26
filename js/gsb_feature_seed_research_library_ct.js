(function ($) {
  Drupal.behaviors.gsb_feature_event_ct = {
    attach: function (context, settings) {

        // clear the fields based on select type principal investiagotor
        $("[name*='field_srl_principal_investigator[und][0][field_faculty_or_other][und]']").each(function(){
          $(this).on('change', function () {
            key = $(this).attr('id').match(/\d+/);
            if ($(this).val() == "Other") {
              $("[name='field_srl_principal_investigator[und]["+key+"][field_person_fac_single_ref][und][0][target_id]']").val('');
            }
            else {
              $("[name='field_srl_principal_investigator[und]["+key+"][field_other_name][und][0][value]']").val('');
              $("[name='field_srl_principal_investigator[und]["+key+"][field_link_single][und][0][url]']").val('');
            }
          });
        });

        // clear the fields based on select type co-investiagotor
        $("[name*='field_srl_co_investigators[und][0][field_faculty_or_other][und]']").each(function(){
          $(this).on('change', function () {
            key = $(this).attr('id').match(/\d+/);
            if ($(this).val() == "Other") {
              $("[name='field_srl_co_investigators[und]["+key+"][field_person_fac_single_ref][und][0][target_id]']").val('');
            }
            else {
              $("[name='field_srl_co_investigators[und]["+key+"][field_other_name][und][0][value]']").val('');
              $("[name='field_srl_co_investigators[und]["+key+"][field_link_single][und][0][url]']").val('');
            }
          });
        });

    } // end attach
  }

})(jQuery);