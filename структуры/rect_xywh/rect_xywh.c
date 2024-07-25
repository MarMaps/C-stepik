//коордианты верхней левой точки, ширина и высота прямоугольника

#include <stdio.h>

struct Rect0 {
    int x, y;
    int width, height;
};

int main()
{
    struct Rect0 a = {-7, 5, 12, 8};
    printf("%d %d %d %d\n", a.x, a.y, a.width, a.height);

    return 0;
}