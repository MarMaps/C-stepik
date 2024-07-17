//вычисление расстояния между 2 точками

#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
	float res = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	res = sqrt(res);
	return res;
}

int main()
{
	int x1, y1, x2, y2;

	scanf("%d%d", &x1, &y1);
	scanf("%d%d", &x2, &y2);

	float len = dist(x1, y1, x2, y2);
	printf("%f\n", len);

	return 0;
}