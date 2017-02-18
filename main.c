#include <stdio.h>

int proverka(int srok, int vklad, int prov){
	if (srok > 365){
		prov++;
	}
	if (vklad < 10000){
		prov++;
	}
	return prov;
}

int main()
{
	int srok, vklad, prov = 0, b = 0;
	printf("Введите срок: ");
	scanf("%d", &srok);
	printf("Введите вклад: ");
	scanf("%d", &vklad);

	prov = proverka(srok, vklad, prov);

	
	printf("%d", prov);
	return 0;
}
