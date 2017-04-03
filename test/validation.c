#include <ctest.h>
#include "deposit.h"

CTEST(arithmetic_suite, simle_sum)
{
	const int time = 365;
	const float deposit = 100000;

	const int result = check_arg(time, deposit);

	const int counter_check = 0;
	ASSERT_EQUAL(counter_check, result);	
}
