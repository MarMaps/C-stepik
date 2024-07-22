#include <stdio.h>

int nod(int a, int b)
{
    if (a % b == 0) {
        return b;
    }

    return nod(b, a % b);
    //или короче - return a % b == 0 ? b : nod(b, a % b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int res = nod(a, b);
    printf("%d\n", res);

    return 0;
}