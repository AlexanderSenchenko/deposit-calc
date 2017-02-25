#include <stdio.h>

enum check{
	time_check = 1,
	deposit_check,
	time_deposit_check
};

int check_arg(int time, int deposit){
	const int max_time = 365, min_deposit = 10000;
	int counter_check = 0;

	if (time > max_time){
		counter_check = time_check;
	}
	if (deposit < min_deposit){
		counter_check = counter_check + deposit_check;
	}

	return counter_check;
}

int main()
{
	int time, deposit, counter_check;

	printf("Введите срок (не больше 365): ");
	scanf("%d", &time);
	printf("Введите вклад (не меньше 10000): ");
	scanf("%d", &deposit);

	counter_check = check_arg(time, deposit);

	while (counter_check != 0){
		if (counter_check == time_deposit_check){
			counter_check = 0;

			printf("Введите срок (не больше 365): ");
			scanf("%d", &time);
			printf("Введите вклад (не меньше 10000): ");
			scanf("%d", &deposit);

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
			scanf("%d", &deposit);

			counter_check = check_arg(time, deposit);
		}
	}

	return 0;
}
