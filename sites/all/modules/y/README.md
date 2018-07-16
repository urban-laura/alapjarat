CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Configuration
 * Troubleshooting
 * FAQ
 * Maintainers


INTRODUCTION
------------

Imagine a cartoon where the protagonist pulls a small pocket knife out of his pocket, selects a tool, opens it up, and an entire full-size chainsaw materializes. He finishes using it, selects another tool, and a computer pops out.... Another tool and a bicycle appears.

Y is a Swiss-army knife of magnificent proportions because it manages arrays of data in YAML configuration files and so many aspects of Drupal are controlled with arrays of data. The Y module includes a basic set of functionality to work with fields, instances, entities, bundles, page displays, data views, layouts, themes, and more.

What simple, small, lightweight, lightning-fast module do you know of that combines much of the functionality of CTools, Features, Views, Panels, and Page Manager all together.

Not that Y has anything to do with all those steadfast Drupal modules, it doesn't. It simply gives you the ability to accomplish similar ends and with no dependencies other than that you have the PHP YAML extension set up and that you use a modern version of PHP >= 7.

How does all this work?

The YAML Configuration (Y) module lets you move bulky array definitions out of code and organize it as YAML within Unifying Concepts called "protocols". (If you are familiar with the concept of a CTools "plugin type", this is a close analog to a "protocol") It can be almost anything. Some protocols such as Field, Instance, Page, Layout, and Entity are built in. With these, you can define entities, fields, and instances, pages and page layouts, query-building and results displays. The ability to create bundles based on Y-defined Entities becomes quite simple.

What does all this do for you? It allows you to configure a Drupal site to a great extent using YAML and with minimal coding.

Y gives you plugin functionality and an extensive suite of YAML callables that perform important tasks like translating text (t()) and setting up paths and filenames for Drupal callbacks. You can also modularize protocols and access protocols from within other protocols. But, be careful, this can be dangerous power. It often takes careful thought.

The bottom line, though, is that the Y module lets you move configuration data out of code and into YAML configuration files, and leave just logic and control as code. It trades User Interfaces for text-editing of YAML. And, it lets you trade more than a hundred thousand of lines of code for a hundred times less code.

If you want to see an example of Y's power, look at its hook_menu() function, follow the trail, and you will see what is possible.

Y is in its infancy. There are already clearly many bits and pieces to add, layouts, functionality, and more. If you want to contribute to Y, please do.

REQUIREMENTS
------------

The one requirement is that your server use a modern version of PHP with version 7 or above and that it have the YAML parsing extension installed and enabled.

INSTALLATION
------------

The Y module is installed just like any other Drupal module. Use the admin interface or drush.

CONFIGURATION
-------------

When Y is installed, it caches the YAML return values. You can use the configuration screen to turn off this caching.

TROUBLESHOOTING
---------------

Y is a very powerful module and puts vast powers at the hands of someone who understands YAML and has a text editor. If something doesn't work out, you can get a white screen of death, and a good debugger will help tremendously in figuring out what happened. A good introductory example of what Y can do can be seen by simply figuring out how its hook_menu() function works, as it uses the Y module to do its thing and it also tosses in a Y plugin into the mix.

FAQ
---

Q: Why is it called 'Y'?

A:
 * 'Y' stands for YAML.
 * A 'Y' has three prongs. If you think of Code and Data being two prongs of what a Drupal site uses to do its thing, then think of the third prong as Configuration -- in YAML configuration files.
 * Y is built in the spirit of C. The C programming language is a terse, powerful language that serves as the basis for almost all modern. Y aspires to be the C programming language of Drupal configuration.
 * Y is built in the spirit of Perl. The Perl programming languag is a terse, powerful language that was the inspiration for PHP. Perl's creator, Larry Wall, advocated "laziness" as a principle quality of great programmers. In abbreviating the YAML upon which it is based as just 'Y', we are being lazy for laziness sake, and by wringing this much power out of such a tiny module, we are being lazy in Larry Wall's spirit, because Y lets us develop in Drupal without even programming in PHP.

Q: Why should we use YAML when we already have JSON?

A:
 * YAML is easy to look at. JSON is efficient, but human-unfriendly. We seek beauty in configuration data, because we will be reading it, writing it, and editing it.
 * JSON is ugly and to read and write. And, who has NOT been burned when they re-arranged JSON array elements and forgot to delete, put-in, or otherwise deal with JSON's OCD craziness when it comes to trailing commas?
 * The JSON parser doesn't have anything resembling the callables of the YAML parser. Callables make it all possible.

Q: JSON is 75-times faster than YAML...?

A: OK, it's not a question, but it deserves an answer... The YAML parser may be 75-times slower than JSON, but after it's done once, we cache it and that's the same for anyone no matter how fast they can serialize or unserialize data. Besides that, comparing the YAML parser to the JSON parser is the WRONG comparison. Instead, compare it to the multitude of database accesses it will take to read extra configuration data out of the MYSQL or other database, and you have a fair comparison. Y should look quite pretty in that comparison.

Q: Why should I convert my module to Y?

A:
  * Your module will get smaller and more efficient.
  * Your module will become easier to understand.
  * You might just be able to ditch 150,000 lines of code by not having to load Ctools, Views, Panels, Page Manager, Features, Entity Construction Kit, and more... and those 150,000 lines of code have to be pulled and interpreted for every single page request. (Of course, we know that if you have a huge budget for a regiment of sysadmins to set up and maintain your varnish, memcache, CDN, and blah, blah, blah, then it can be smoothed out with caching... but not all of us have that army of sysadmins hanging about.)
  * You will be able to perform massive changes to your site without touching a line of PHP.

Q: Any words of warning?

A: Y goes back in time a bit in requiring that you declare the protocols you intend to use before you use them. You may define new protocols to your heart's content and define your own configurations of existing protocols, but this one requirement stands. You may not go around making and using protocols without at least announcing your intentions to the world. Sometimes, when you use a new protocol, you will forget to put it in your list in hook_y() and nothing will happen. Don't worry, it's OK, everyone makes that mistake at the beginning.

MAINTAINERS
-----------

Current maintainers:
 * Hugh Kern (geru) - https://drupal.org/user/2778683
