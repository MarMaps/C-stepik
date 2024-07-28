//сдвиг прямоугольника на dx

#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt;    // координаты левой верхней вершины
    struct Point rb;    // координаты правой нижней вершины
};

void move(struct Rect *p, int dx) {
    p->lt.x += dx;
    p->rb.x += dx;
}

int main()
{
	struct Rect pr;
	int dx;

	scanf("%d%d%d%d", &pr.lt.x, &pr.lt.y, &pr.rb.x, &pr.rb.y);
    scanf("%d", &dx);
    
    move(&pr, dx);

    printf("%d %d %d %d\n", pr.lt.x, pr.lt.y, pr.rb.x, pr.rb.y);

    return 0;
}