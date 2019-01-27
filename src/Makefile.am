AM_CFLAGS=-O3
AUTOMAKE_OPTIONS=std-options subdir-objects
lib_LTLIBRARIES = librlog.la

librlog_ladir=$(PROJ_DIR)
librlog_la_SHORTNAME = lrl
librlog_la_CFLAGS=-I$(INCLUDE_DIR)
librlog_la_LIBADD=
librlog_la_LDFLAG=
librlog_la_SOURCES=log.c
include_HEADERS=$(INCLUDE_DIR)/librlog.h

.PHONY: check-syntax
check-syntax:
	gcc -o nul ${AM_CFLAGS} ${c_project_CFLAGS} -S ${CHK_SOURCES}
