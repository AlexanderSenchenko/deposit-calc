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

int count_sum(int time, int deposit){
	int border_deposit = 100000, precent;
	float sum;

	if (deposit <= border_deposit){
		precent = precent_before_border(time);
		sum = deposit + (deposit * precent)/100;
	} else {
		precent = precent_after_border(time);
		sum = deposit + (deposit * precent)/100;
	}

	return sum;
}

int precent_brfore_border(int time){
	int precent;

	if (time <= 30){
		precent = -10;
	} else if (time <= 120){
		precent = 2;
	} else if (time <= 240){
		precent = 6;
	} else {
		precent = 12;
	}

	return precent;
}

int precent_after_border(int time){
	int precent;

	if (time <= 30){
		precent = -10;
	} else if (time <= 120){
		precent = 3;
	} else if (time <= 240){
		precent = 8;
	} else {
		precent = 15;
	}

	return precent;
}

int main()
{
	int time, deposit, counter_check;
	float sum;

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

	sum = count_sum(time, deposit);

	printf("%f\n", sum);

	return 0;
}
