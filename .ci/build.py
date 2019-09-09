#!/user/bin/env python3
###################################################################################
#                                                                                 #
# NAME: build.py                                                                  #
#                                                                                 #
# AUTHOR: Michael Brockus.                                                        #
#                                                                                 #
# CONTACT: <mailto:michael@squidfarts.com>                                        #
#                                                                                 #
# NOTICES:                                                                        #
#                                                                                 #
# License: Apache-2.0                                                             #
#                                                                                 #
###################################################################################
import subprocess

subprocess.check_call(['meson', 'setup', 'build_dir', '--buildtype=release', '-Db_coverage=true', '--backend=ninja'])
