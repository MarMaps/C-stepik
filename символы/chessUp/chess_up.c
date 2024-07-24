//координаты клетки шахматной доски на 1 ряд выше

#include <stdio.h>

int main()
{
    char column, row;
    scanf("%c%c", &column, &row);
    printf("%c%c\n", column, row + 1);
    
    return 0;
}