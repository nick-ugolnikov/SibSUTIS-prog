#include <stdio.h>

int main()
{
    long double e, d, eps, x, a;
    long i, b;
    printf("Input x and epsilon: ");
    scanf("%Le %Le", &x, &eps);
    e = 1;
    i = 1;
    a = x;
    b = 1;
    do
    {
        d = a / b;
        e += d;
        printf("%Le\n",e);
        a *= x;
        ++i;
        b *= i;
    }
    while (d > eps);
    printf("e ^ x = %Le\n",e);
    return 0;
}
