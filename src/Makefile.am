#
# Copyright (c) 2019-2022 librlog project (see AUTHORS)
#
# This file is part of librlog.
#
# librlog is free software: you can redistribute it and/or modify it under the
# terms of the GNU General Public License as published by the Free Software
# Foundation, either version 3 of the License, or (at your option) any later
# version.
#
# librlog is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
# A PARTICULAR PURPOSE. See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along with
# librlog. If not, see <http://www.gnu.org/licenses/>.
#

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
	gcc -o nul ${AM_CFLAGS} ${librlog_la_CFLAGS} -S ${CHK_SOURCES}
