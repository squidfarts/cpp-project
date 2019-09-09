###################################################################################
#                                                                                 #
# NAME: meson.build                                                               #
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



project('cpp-exe', 'cpp',
    version         : '0.1.0',
    license         : 'Apache-2.0',
    meson_version   : '>=0.50.0',
    default_options : 
    [
        'buildtype=release',
        'b_coverage=true',
        'b_lundef=true',
        'werror=true',
        'optimization=3',
        'warning_level=3',
        'cpp_std=c++17'
    ]
)
cc = meson.get_compiler('cpp')
args_for_langs = 'cpp'



##
#
# Meson: Add compiler flags
#
##
if cc.get_id() == 'clang'
    add_project_arguments(
        cc.get_supported_arguments(
            [
            '-Wweak-vtables', 
            '-Wexit-time-destructors',
            '-Wglobal-constructors', 
            '-Wmissing-noreturn' 
            ]
        ), language: args_for_langs)
endif

if cc.get_argument_syntax() == 'gcc'
    add_project_arguments(
        cc.get_supported_arguments(
            [
            '-Wunreachable-code', 
            '-Wmissing-declarations',
            '-Wredundant-decls',
            '-Wundef',
            '-Wwrite-strings',
            '-Wformat',
            '-Wformat-nonliteral',
            '-Wformat-security',
            '-Winit-self',
            '-Wmissing-include-dirs',
            '-Waddress',
            '-Waggregate-return',
            '-Wno-multichar',
            '-Wno-parentheses',
            '-Wno-unused-parameter',
            '-Wno-type-limits',
            '-Wvla',
            '-Wpointer-arith'
            ]
        ), language: args_for_langs)
endif

if cc.get_id() == 'msvc'
    add_project_arguments(
        cc.get_supported_arguments(
            [
            '/w44265', 
            '/w44061', 
            '/w44062', 
            '/wd4018', # implicit signed/unsigned conversion
            '/wd4146', # unary minus on unsigned (beware INT_MIN)
            '/wd4244', # lossy type conversion (e.g. double -> int)
            '/wd4305', # truncating type conversion (e.g. double -> float)
            ]
        ), language: args_for_langs)
endif

unity_dep = dependency('unity', required: get_option('with_tests'), fallback : ['unity', 'unity_dep'])

subdir('src')

install_data(
    sources: [ 'code_of_conduct.md', 'contributing.md', 'LICENSE', 'readme.md' ],
    install_dir: join_paths(get_option('datadir'), meson.project_name()))