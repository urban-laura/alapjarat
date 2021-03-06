<?php

/**
 * @file
 */
?>
<!DOCTYPE html>
<html<?php print $html_attributes . $rdf_namespaces; ?>>
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>

  <!-- Atmedia -->
  <script src="//gemhu.adocean.pl/files/js/ado.js"></script>
  <script>
  /* (c)AdOcean 2003-2019 */
          if(typeof ado!=="object"){ado={};ado.config=ado.preview=ado.placement=ado.master=ado.slave=function(){};}
          ado.config({mode: "old", xml: false, consent: true, characterEncoding: true});
          ado.preview({enabled: true});
  </script>

  <script>
  /* (c)AdOcean 2003-2019, MASTER: alapjarat.hu.osszoldal */
  ado.master({id: 'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7', server: 'gemhu.adocean.pl' });
  </script>
  <!-- Atmedia -->

  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=0" />
</head>
<body class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <div id="fb-root"></div>

<!--Facebook-->
  <script>(function(d, s, id) {
    var js, fjs = d.getElementsByTagName(s)[0];
    if (d.getElementById(id)) return;
    js = d.createElement(s); js.id = id;
    js.src = 'https://connect.facebook.net/hu_HU/sdk.js#xfbml=1&version=v3.1&appId=138113533468308&autoLogAppEvents=1';
    fjs.parentNode.insertBefore(js, fjs);
  }(document, 'script', 'facebook-jssdk'));</script>

  <!--Atmedia measure rating -->
  <!-- (C)2000-2019 Gemius SA - gemiusPrism  / alapjarat.hu/Fooldal -->
  <script>
  <!--//--><![CDATA[//><!--
  var pp_gemius_identifier = 'bVBKsU7YR6CPRTyw0Kw3JqdynA6UakvI42U90kHExgn.X7';
  // lines below shouldn't be edited
  function gemius_pending(i) { window[i] = window[i] || function() {var x = window[i+'_pdata'] = window[i+'_pdata'] || []; x[x.length]=arguments;};};gemius_pending('gemius_hit'); gemius_pending('gemius_event'); gemius_pending('pp_gemius_hit'); gemius_pending('pp_gemius_event');(function(d,t) {try {var gt=d.createElement(t),s=d.getElementsByTagName(t)[0],l='http'+((location.protocol=='https:')?'s':''); gt.setAttribute('async','async');gt.setAttribute('defer','defer'); gt.src=l+'://gahu.hit.gemius.pl/xgemius.js'; s.parentNode.insertBefore(gt,s);} catch (e) {}})(document,'script');
  //--><!]]>
  </script>

  <div id="skip">
    <a href="#content"><?php print t('Jump to Navigation'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

  <!-- Atmedia -->
  <div id="adoceangemhuyaetlpkfde"></div>
  <script>
  /* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.extra */
  ado.slave('adoceangemhuyaetlpkfde', {myMaster: 'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7' });
  </script>
  <!-- Atmedia -->
  
</body>
</html>
