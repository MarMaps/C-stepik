//вычисление площади треугольника по формуле Герона(даны коорд точки)

#include <stdio.h>
#include <math.h>

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    
    float p = (a + b +c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

int main()
{
   int x1, y1, x2, y2, x3, y3;

   scanf("%d%d", &x1, &y1);
   scanf("%d%d", &x2, &y2);
   scanf("%d%d", &x3, &y3);
    
   float res = area(x1, y1, x2, y2, x3, y3);
   printf("%.3f\n", res);
   return 0;

}