//перевод из большой латинской буквы в малую

#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    x += 32;

    printf("%c\n", x);

    /*int letter = getchar();
    int small = letter - 'A' + 'a';
    putchar(small);*/
    return 0;
}