#include <stdio.h>
#include "deposit.h"

enum check{
	time_check = 1,
	deposit_check,
	time_deposit_check
};

int main()
{
	int time, counter_check = time_deposit_check;
	float sum, deposit;

	while (counter_check != 0){
		if (counter_check == time_deposit_check){
			counter_check = 0;

			printf("Введите срок (не больше 365): ");
			scanf("%d", &time);
			printf("Введите вклад (не меньше 10000): ");
			scanf("%f", &deposit);

			counter_check = check_arg(time, deposit);
		}
		if (counter_check == time_check){
			counter_check = 0;

			printf("Введите срок (не больше 365): ");
			scanf("%d", &time);

			counter_check = check_arg(time, deposit);
		}
		if (counter_check == deposit_check){
			counter_check = 0;

			printf("Введите вклад (не меньше 10000): ");
			scanf("%f", &deposit);

			counter_check = check_arg(time, deposit);
		}
	}

	sum = count_sum(time, deposit);

	printf("%.2f\n", sum);

	return 0;
}
