#include <stdio.h>

enum check{
	time_check = 1,
	deposit_check,
	time_deposit_check
};

int check_arg(int time, int deposit){
	enum check a = time_check, b = deposit_check;
	const int max_time = 365, min_deposit = 10000;
	int counter_check = 0;

	if (time > max_time){
		counter_check = a;
	}
	if (deposit < min_deposit){
		counter_check = counter_check + b;
	}

	return counter_check;
}

int main()
{
	enum check a = time_check, b = deposit_check, c = time_deposit_check;
	int time, deposit, counter_check;

	printf("Введите срок (не больше 365): ");
	scanf("%d", &time);
	printf("Введите вклад (не меньше 10000): ");
	scanf("%d", &deposit);

	counter_check = check_arg(time, deposit);

	while (counter_check != 0){
		if (counter_check == c){
			counter_check = 0;

			printf("Введите срок (не больше 365): ");
			scanf("%d", &time);
			printf("Введите вклад (не меньше 10000): ");
			scanf("%d", &deposit);

			counter_check = check_arg(time, deposit);
		}
		if (counter_check == a){
			counter_check = 0;

			printf("Введите срок (не больше 365): ");
			scanf("%d", &time);

			counter_check = check_arg(time, deposit);
		}
		if (counter_check == b){
			counter_check = 0;

			printf("Введите вклад (не меньше 10000): ");
			scanf("%d", &deposit);

			counter_check = check_arg(time, deposit);
		}
	}


	return 0;
}
