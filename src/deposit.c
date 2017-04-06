#include "deposit.h"

enum check{
	time_check = 1,
	deposit_check,
	time_deposit_check
};

int check_arg(int time, float deposit)
{
	const int max_time = 365, min_deposit = 10000;
	int counter_check = 0;

	if (time > max_time || time < 0){
		counter_check = time_check;
	}
	if (deposit < min_deposit){
		counter_check = counter_check + deposit_check;
	}

	return counter_check;
}

float count_sum(int time, float deposit)
{
	int border_deposit = 100000, precent;
	float sum;

	if (deposit <= border_deposit){

		if (time <= 30){
			precent = -10;
		} else if (time <= 120){
			precent = 2;
		} else if (time <= 240){
			precent = 6;
		} else {
			precent = 12;
		}

		sum = deposit + (deposit * precent)/100;
	} else {

		if (time <= 30){
			precent = -10;
		} else if (time <= 120){
			precent = 3;
		} else if (time <= 240){
			precent = 8;
		} else {
			precent = 15;
		}

		sum = deposit + (deposit * precent)/100;
	}

	return sum;
}
