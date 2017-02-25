#include <stdio.h>

enum Prov{
	srok_prov = 1,
	vklad_prov,
	srok_vklad_prov
};

int proverka(int srok, int vklad){
	const int max_srok = 365, min_vklad = 10000;
	enum Prov a = srok_prov, b = vklad_prov;
	int prov = 0;
	if (srok > max_srok){
		prov = a;
	}
	if (vklad < min_vklad){
		prov = prov + b;
	}
	return prov;
}

int main()
{
	enum Prov a = srok_prov, b = vklad_prov, c = srok_vklad_prov;
	int srok, vklad, prov;
	printf("Введите срок: ");
	scanf("%d", &srok);
	printf("Введите вклад: ");
	scanf("%d", &vklad);

	prov = proverka(srok, vklad);

	while (prov != 0){
		if (prov == c){
			prov = 0;
			printf("Введите срок еще раз: ");
			scanf("%d", &srok);
			printf("Введите вклад еще раз: ");
			scanf("%d", &vklad);
			prov = proverka(srok, vklad);
		}
		if (prov == a){
			prov = 0;
			printf("Введите срок еще раз: ");
			scanf("%d", &srok);
			prov = proverka(srok, vklad);
		}
		if (prov == b){
			prov = 0;
			printf("Введите вклад еще раз: ");
			scanf("%d", &vklad);
			prov = proverka(srok, vklad);
		}
	}
	printf("%d", prov);
	return 0;
}
