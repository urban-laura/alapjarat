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
  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=0" />

  <!-- Atmedia script -->
  <script type="text/javascript" src="//gemhu.adocean.pl/files/js/ado.js"></script>
  <script type="text/javascript">
  /* (c)AdOcean 2003-2019 */
          if(typeof ado!=="object"){ado={};ado.config=ado.preview=ado.placement=ado.master=ado.slave=function(){};}
          ado.config({mode: "old", xml: false, consent: true, characterEncoding: true});
          ado.preview({enabled: true});
  </script>

  <script type="text/javascript">
  /* (c)AdOcean 2003-2019, MASTER: alapjarat.hu.teszt */
  ado.master({id: 'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7', server: 'gemhu.adocean.pl' });
  </script>
  <!-- Atmedia script -->


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
  
  <!-- Atmedia script -->
  <div id="adoceangemhuyaetlpkfde"></div>
  <script type="text/javascript">
  /* (c)AdOcean 2003-2019, alapjarat.hu.teszt.extra */
    ado.slave('adoceangemhuyaetlpkfde', {myMaster: 'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7' });
  </script>
  <!-- Atmedia script -->
  
</body>
</html>
