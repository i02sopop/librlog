AC_INIT([librlog],[0.0.2],[palvarez@ritho.net])
AC_PREREQ([2.69])
AC_CONFIG_SRCDIR([src/log.c])
AC_CONFIG_AUX_DIR([.build-aux])
dnl AC_CONFIG_SUBDIRS([subdir])
AM_INIT_AUTOMAKE([foreign -Wall -Werror dist-bzip2 subdir-objects])

dnl Maintainer mode
AM_MAINTAINER_MODE([enable])

dnl Check programs
dnl Find and test de C compiler
AC_PROG_CC
AC_LANG_C
AM_PROG_CC_C_O
AM_PROG_AR

AC_PROG_INSTALL
AC_PROG_MAKE_SET

AC_CHECK_TOOL([VALGRIND], [valgrind])

dnl LIBTOOL macros
LT_INIT
AC_SUBST([LIBTOOL_DEPS])

dnl Check libraries
PKG_CHECK_MODULES([CHECK], [check >= 0.15.2])

dnl Checking headers 
AC_CHECK_HEADERS([stdio.h])
AC_CHECK_HEADERS([stdlib.h])
AC_CHECK_HEADERS([unistd.h])
AC_CHECK_HEADERS([stdarg.h])
AC_CHECK_HEADER_STDBOOL
AC_HEADER_STDC

dnl Check typedefs, structs and compilers characteristics

dnl Checking library functions
AC_CHECK_FUNCS(vdprintf,,AC_MSG_ERROR(vdprintf is not defined))

AC_FUNC_ERROR_AT_LINE
AC_FUNC_MALLOC
AC_FUNC_REALLOC

dnl Variables for Makefiles.
AC_SUBST([PROJ_DIR], [`pwd`])

AC_SUBST([INCLUDE_DIR], [${PROJ_DIR}/include])
AC_SUBST([SOURCE_DIR], [${PROJ_DIR}/src])
dnl AC_SUBST([MAKE], [make])

dnl Output files
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile src/Makefile tests/Makefile])

dnl Generate output
AC_OUTPUT
