#include <ctest.h>
#include "deposit.h"

CTEST(arithmetic_suite, simle_sum)
{
	const int time = 365;
	const float deposit = 100000;

	const float result = count_sum(time, deposit);

	const float sum = 112000;
	ASSERT_EQUAL(sum, result);
}
