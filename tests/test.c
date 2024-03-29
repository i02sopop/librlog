/*********************************************************************************
 * Copyright (c) 2019-2024 librlog project (see AUTHORS)                         *
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

#include <stdlib.h>
#include <check.h>
#include <librlog.h>

const int logArgument = 5;

START_TEST (test_warn)
{
	xwarn("lolailo\n");
	xwarnf("lolailo %d\n", logArgument);
}
END_TEST

START_TEST (test_error)
{
	xerror("lerele\n");
	xerrorf("lerele %d\n", logArgument);
}
END_TEST

START_TEST (test_log)
{
	xlog("lerele\n");
	xlogf("lerele %d\n", logArgument);
}
END_TEST

START_TEST (test_print)
{
	xprint("lerele\n");
	xprintf("lerele %d\n", logArgument);
}
END_TEST

Suite *
logs_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("Logs");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_warn);
    tcase_add_test(tc_core, test_error);
    tcase_add_test(tc_core, test_log);
    tcase_add_test(tc_core, test_print);
    suite_add_tcase(s, tc_core);

    return s;
}

int
main() {
	int number_failed;
	Suite *s;
	SRunner *sr;

	s = logs_suite();
	sr = srunner_create(s);

	srunner_run_all(sr, CK_SUBUNIT);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

 return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
