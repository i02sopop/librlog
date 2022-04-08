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

TESTS = check_librlog
check_PROGRAMS = check_librlog
check_librlog_SOURCES = test.c
check_librlog_CFLAGS = -I$(INCLUDE_DIR) -DLOCALEDIR=\"$(localedir)\" $(CHECK_CFLAGS)
check_librlog_LDADD = $(SOURCE_DIR)/librlog.la $(CHECK_LIBS)

memory:
	@for test in $(TESTS); do \
		valgrind --leak-check=full ./$$test; \
	done
