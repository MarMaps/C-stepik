#include <stdio.h>

int fact (int n) {
    printf("call fact(%d)\n", n);

    if (n == 0) {
        printf("zero! = 1\n");
        return 1;
    }

    int res = n * fact(n - 1);     // из fact вызывается fact - рекурсия

    printf("return %d! = %d\n", n, res);
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);

    int res = fact(n);
    
    return 0;
}