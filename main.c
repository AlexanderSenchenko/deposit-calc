#include <stdio.h>

int proverka(int srok, int vklad){
	const int max_srok = 365, min_vklad = 10000;
	int prov = 0;
	if (srok > max_srok){
		prov++;
	}
	if (vklad < min_vklad){
		prov = prov + 10;
	}
	return prov;
}

int main()
{
	int srok, vklad, prov;
	printf("Введите срок: ");
	scanf("%d", &srok);
	printf("Введите вклад: ");
	scanf("%d", &vklad);

	prov = proverka(srok, vklad);

	while (prov != 0){
		if (prov == 11){
			prov = 0;
			printf("Введите срок еще раз: ");
			scanf("%d", &srok);
			printf("Введите вклад еще раз: ");
			scanf("%d", &vklad);
			prov = proverka(srok, vklad);
		}
		if (prov == 1){
			prov = 0;
			printf("Введите срок еще раз: ");
			scanf("%d", &srok);
			prov = proverka(srok, vklad);
		}
		if (prov == 10){
			prov = 0;
			printf("Введите вклад еще раз: ");
			scanf("%d", &vklad);
			prov = proverka(srok, vklad);
		}
	}
	printf("%d", prov);
	return 0;
}
