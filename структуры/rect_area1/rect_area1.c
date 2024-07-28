//вычисление площади прямоугольника по координатам

#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;    // координаты левой верхней вершины
    struct Point rb;    // координаты правой нижней вершины
};

int area(struct Rect a)
{
    return (a.rb.x - a.lt.x) * (a.lt.y - a.rb.y);
}

int main()
{
	struct Rect a = {-7, 5, 5, -3};
	printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
	printf("площадь = %d\n", area(a));

	return 0;
}
