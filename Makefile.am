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

SUBDIRS=src tests
ACLOCAL_AMFLAGS=-I m4
EXTRA_DIST=.build-aux/config.rpath
EXTRA_CLEAN=.build-aux ABOUT-NLS Makefile Makefile.in aclocal.m4 autom4te.cache \
			config.h* config.log config.status configure m4 stamp-h1 \
			tests/Makefile tests/Makefile.in src/Makefile src/Makefile.in \
			src/.deps libtool

.PHONY: check-syntax
check-syntax:
	gcc -o nul ${AM_CFLAGS} -S ${CHK_SOURCES}

.PHONY: clean-all
clean-all: clean
	@rm -f *~
	@for i in ${SUBDIRS}; do \
		rm -f $$i/*~ ; \
	done
	@for i in ${EXTRA_CLEAN}; do \
		rm -fr $$i; \
	done

.PHONY: tests
tests:
	@$(MAKE) check
	@$(MAKE) -C tests memory
