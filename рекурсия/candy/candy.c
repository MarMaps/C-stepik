#include <stdio.h>

int delim_konfety(int a)
{
    if (a == 1) {
        return 1;
    }
    
    a = a - (a / 2);
    return delim_konfety(a) + 1;
    //или короче - return a == 1 ? 1 : delim_konfety(a - (a / 2)) + 1;
}

int main()
{
    int konfet;
    scanf("%d", &konfet);

    int detey = delim_konfety(konfet);
    printf("%d\n", detey);

    return 0;
}