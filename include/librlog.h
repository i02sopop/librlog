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

#ifndef __LIBRLOG_H__
#define __LIBRLOG_H__

void xwarn(const char *str);
void xwarnf(const char *fmt, ...);
void xerror(const char *str);
void xerrorf(const char *fmt, ...);
void xlog(const char *str);
void xlogf(const char *fmt, ...);
void xprint(const char *str);
void xprintf(const char *fmt, ...);
void xfatal(const char *str);
void xfatalf(const char *fmt, ...);

#endif // __LIBRLOG_H__
