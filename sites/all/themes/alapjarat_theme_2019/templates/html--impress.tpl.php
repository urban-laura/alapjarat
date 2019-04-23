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
  <meta property="og:image" content="https://alapjarat.hu/sites/all/themes/alapjarat_theme_2019/images/impress.jpg">
  <meta property="og:description" content="Az Alapjárat szerkesztősége">
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

  

  <div id="skip">
    <a href="#content"><?php print t('Jump to Navigation'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
