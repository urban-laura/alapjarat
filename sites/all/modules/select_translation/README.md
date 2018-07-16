drupal_select_translation
=========================

Drupal 7 port of Select Translation module.

This is based on the archive posted at https://drupal.org/node/1098708.
Given that the project seems abandoned, I hosted it on github.

It also includes a much better views filter handler that uses left joins instead of correlated (dependent) sub-queries,
which should prove to work much faster when there are a lot of nodes in the database.

Credits:
--------
Big thanks to Alice Heaton for the original D6 module.
https://drupal.org/user/60899

citronica and citronica's husband for providing the initial port to D7.
https://drupal.org/user/354488

zuuperman for the option_definition fix.
https://drupal.org/user/361625

The helpful people at stack overflow that helped optimize the query.
http://stackoverflow.com/questions/21985917/optimize-mysql-query-with-dependent-sub-query/21986190?noredirect=1#comment33324875_21986190

