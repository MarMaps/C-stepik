//сдвиг прямоугольника на dx

#include <stdio.h>

struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

void move(struct Rect * p, int dx)
{
    p->x += dx;
}

int main()
{
	struct Rect pr;
	int dx;

	scanf ("%d%d%d%d", &pr.x, &pr.y, &pr.width, &pr.height);
	scanf("%d", &dx);
	
    move(&pr, dx);

    printf("%d %d %d %d\n", pr.x, pr.y, pr.width, pr.height);

    return 0;
}