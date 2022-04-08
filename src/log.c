/*********************************************************************************
 * Copyright (c) 2019-2022 librlog project (see AUTHORS)                         *
 *                                                                               *
 * This file is part of librlog.                                                 *
 *                                                                               *
 * librlog is free software: you can redistribute it and/or modify it under the  *
 * terms of the GNU General Public License as published by the Free Software     *
 * Foundation, either version 3 of the License, or (at your option) any later    *
 * version.                                                                      *
 *                                                                               *
 * librlog is distributed in the hope that it will be useful, but WITHOUT ANY    *
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR *
 * A PARTICULAR PURPOSE.  See the GNU General Public License for more details.   *
 *                                                                               *
 * You should have received a copy of the GNU General Public License along with  *
 * librlog. If not, see <http://www.gnu.org/licenses/>.                          *
 ********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#include <librlog.h>

void
xwarn(const char *str) {
	xwarnf(str);
}

void
xwarnf(const char *fmt, ...) {
	va_list ap;
	int out = dup(2);

	va_start(ap, fmt);
	vdprintf(out, fmt, ap);
	va_end(ap);
}

void
xerror(const char *str) {
	xerrorf(str);
}

void
xerrorf(const char *fmt, ...) {
	va_list ap;
	int out = dup(2);

	va_start(ap, fmt);
	vdprintf(out, fmt, ap);
	va_end(ap);
}

void
xprint(const char *str) {
	xprintf(str);
}

void
xprintf(const char *fmt, ...) {
	va_list ap;
	int out = dup(1);

	va_start(ap, fmt);
	vdprintf(out, fmt, ap);
	va_end(ap);
}

void
xlog(const char *str) {
	xlogf(str);
}

void
xlogf(const char *fmt, ...) {
	va_list ap;
	int out = dup(1);

	va_start(ap, fmt);
	vdprintf(out, fmt, ap);
	va_end(ap);
}

void
xfatal(const char *str) {
	xfatalf(str);
}

void
xfatalf(const char *fmt, ...) {
	va_list ap;
	int out = dup(1);

	va_start(ap, fmt);
	vdprintf(out, fmt, ap);
	va_end(ap);
	exit(-1);
}
