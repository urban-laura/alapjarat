source 'https://rubygems.org'

group :development do

  # Sass, Compass and extensions.
  gem 'sass'          # Sass.
  # Explicit version due to
  # https://github.com/chriseppstein/sass-globbing/issues/19
  gem 'sass-globbing', '1.1.0' # Import Sass files based on globbing pattern.
  # These are here to keep the sass version in check.
  # The libraries are installed in the sass/components directory.
  gem 'bourbon'       # Import Bourbon SASS framework.
  gem 'neat'          # Import Bourbon Neat grid framework

  # Dependency to prevent polling. Setup for multiple OS environments.
  # Optionally remove the lines not specific to your OS.
  # https://github.com/guard/guard#efficient-filesystem-handling
  gem 'rb-inotify', '~> 0.9', :require => false      # Linux
  gem 'rb-fsevent', :require => false                # Mac OSX
  gem 'rb-fchange', :require => false                # Windows

end
