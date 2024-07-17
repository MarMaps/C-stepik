//поменялось значение переменных друг на друга

#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}


int main()
{
    int x, y;
    scanf("%d%d", &x, &y);      // если ввели 2 3

    swap(&x, &y);

    printf("%d %d\n", x, y);    // то напечатает 3 2

    return 0;
}