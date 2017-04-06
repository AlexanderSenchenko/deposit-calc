#include <ctest.h>
#include "deposit.h"

CTEST(arithmetic_suite, test_1)
{
	const int time = 365;
	const int deposit = 10000;

	const int result = check_arg(time, deposit);

	const int counter_check = 0;
	ASSERT_EQUAL(counter_check, result);

	
}

CTEST(arithmetic_suite, time_deposit_exit)
{
	const int time = 366;
	const int deposit = 9999;

	const int result = check_arg(time, deposit);

	const int counter_check = 3;
	ASSERT_EQUAL(counter_check, result);
}

CTEST(arithmetic_suite, time_exit)
{
	const int time = 366;
	const int deposit = 10000;

	const int result = check_arg(time, deposit);

	const int counter_check = 1;
	ASSERT_EQUAL(counter_check, result);
}

CTEST(arithmetic_suite, deposit_exit)
{
	const int time = 365;
	const int deposit = 9999;

	const int result = check_arg(time, deposit);

	const int counter_check = 2;
	ASSERT_EQUAL(counter_check, result);
}

CTEST(arithmetic_suite, teme_negative)
{
	const int time = -1;
	const int deposit = 10000;

	const int result = check_arg(time, deposit);

	const int counter_check = 1;
	ASSERT_EQUAL(counter_check, result);
}
