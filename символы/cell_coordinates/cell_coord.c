//сдвиг координат

#include <stdio.h>

int main() {
    char column;
    int row;

    scanf("%c%d", &column, &row);

    char left_column = column - 1;
    char right_column = column + 1;
    int top_row = row + 1;
    int bottom_row = row - 1;

    printf("%c%d %c%d %c%d %c%d\n", left_column, row, column, top_row, right_column, row, column, bottom_row);

    return 0;
}
