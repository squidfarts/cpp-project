#!/user/bin/env python3
###################################################################################
#                                                                                 #
# NAME: install.py                                                                #
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
import subprocess, sys

if sys.platform != 'win32':
    subprocess.check_call(["brew", "update"])
    subprocess.check_call(["brew", "install", "ninja"])
    subprocess.check_call(["pip3", "install", "meson==0.50.0", "conan==1.18.0"])
else:
    subprocess.check_call(["pip", "install", "meson==0.50.0", "conan==1.18.0"])
