###################################################################################
#                                                                                 #
# NAME: src/main/exe/meson.build                                                  #
#                                                                                 #
# AUTHOR: Michael Brockus.                                                        #
#                                                                                 #
# CONTACT: <mailto:michael@squidfarts.com>                                        #
#                                                                                 #
# NOTICES:                                                                        #
#                                                                                 #
# License: Apache 2.0 :http://www.apache.org/licenses/LICENSE-2.0                 #
#                                                                                 #
###################################################################################


subdir('include')
subdir('src')

exe_main = executable(meson.project_name(), 'main.cc',
    dependencies: [ exe_dep ],
    install: true)

test('Test exe', exe_main)