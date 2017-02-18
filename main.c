#include <stdio.h>

int proverka(int srok, int vklad, int prov){
	if (srok > 365){
		prov++;
	}
	if (vklad < 10000){
		prov = prov + 10;
	}
	return prov;
}

int main()
{
	int srok, vklad, prov = 0;
	printf("Введите срок: ");
	scanf("%d", &srok);
	printf("Введите вклад: ");
	scanf("%d", &vklad);

	prov = proverka(srok, vklad, prov);

	while (prov != 0){
		if (prov == 11){
			printf("Введите срок: ");
			scanf("%d", &srok);
			printf("Введите вклад: ");
			scanf("%d", &vklad);
			prov = proverka(srok, vklad, prov);
		}
		if (prov == 1){
			printf("Введите срок: ");
			scanf("%d", &srok);
			prov = proverka(srok, vklad, prov);
		}
		if (prov == 10){
			printf("Введите вклад: ");
			scanf("%d", &vklad);
			prov = proverka(srok, vklad, prov);
		}
	}
	printf("%d", prov);
	return 0;
}
