#include <ctest.h>
#include "deposit.h"

CTEST(arithmetic_suite, simle_sum)
{
	const int time = 5;
	const float deposit = 99999;

	const float result = count_sum(time, deposit);

	const float sum = 89999.1;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_0_30_min_deposit)
{
	const int time = 0;
	const float deposit = 10000;

	const float result = count_sum(time, deposit);

	const float sum = 9000;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_0_30_border_deposit)
{
	const int time = 30;
	const float deposit = 100000;

	const float result = count_sum(time, deposit);

	const float sum = 90000;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_31_120_min_deposit)
{
	const int time = 31;
	const float deposit = 10000;

	const float result = count_sum(time, deposit);

	const float sum = 10200;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_31_120_border_deposit)
{
	const int time = 120;
	const float deposit = 100000;

	const float result = count_sum(time, deposit);

	const float sum = 102000;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_121_240_min_deposit)
{
	const int time = 121;
	const float deposit = 10000;

	const float result = count_sum(time, deposit);

	const float sum = 10600;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_121_240_dorder_deposit)
{
	const int time = 240;
	const float deposit = 100000;

	const float result = count_sum(time, deposit);

	const float sum = 106000;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_241_365_min_deposit)
{
	const int time = 241;
	const float deposit = 10000;

	const float result = count_sum(time, deposit);

	const float sum = 11200;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_241_365_border_deposit)
{
	const int time = 365;
	const float deposit = 100000;

	const float result = count_sum(time, deposit);

	const float sum = 112000;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_0_30_border_depositb)
{
	const int time = 30;
	const float deposit = 100001;

	const float result = count_sum(time, deposit);

	const float sum = 90000.9;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_31_120_border_depositb)
{
	const int time = 120;
	const float deposit = 100001;

	const float result = count_sum(time, deposit);

	const float sum = 103001.03;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_121_240_border_depositb)
{
	const int time = 240;
	const float deposit = 100001;

	const float result = count_sum(time, deposit);

	const float sum = 108001.08;
	ASSERT_DBL_NEAR(sum, result);
}

CTEST(arithmetic_suite, time_241_365_border_depositb)
{
	const int time = 365;
	const float deposit = 100001;

	const float result = count_sum(time, deposit);

	const float sum = 115001.15;
	ASSERT_DBL_NEAR(sum, result);
}
