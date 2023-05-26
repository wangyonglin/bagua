#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])

m4_define(version_major,1)
m4_define(version_minor,3)
m4_define(version_patch,m4_esyscmd([git rev-list --count HEAD | tr -d '\n']))

AC_INIT([eight-trigrambrazier], [version_major.version_minor.version_patch],[admin@wangyonglin.com])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([src/user/src/main.cpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
LIBTOOL
LT_INIT
# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CONFIG_FILES([Makefile])
AC_CONFIG_FILES([src/taoism/Makefile])
AC_CONFIG_FILES([src/user/Makefile])
AC_OUTPUT
