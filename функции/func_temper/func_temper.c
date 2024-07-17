//перевод градусов из Цельсия в Фаренгейты

#include <stdio.h>

float res(float x) 
{
	float res = x * 9 / 5 + 32;
	return res;
}

int main()
{
	int C;
	scanf("%d", &C);
	float farg = res(C);
	printf("В Цельсия: %d\nВ Фаренгейтах: %f\n", C, farg);

	return 0;
}