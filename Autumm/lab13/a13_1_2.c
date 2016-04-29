#include <stdio.h>

int main()
{
    long double d , e, eps, x, a;
    long b, n;
    printf("Input x and epsilon: ");
    scanf("%Le %Le", &x, &eps);
    e = 1;
    n = 1;
    do
    {
        a = x;
        b = 1;
        for (int i = 2; i<=n; ++i)
        {
            a *= x;
            b *= i;
        }
        d = a / b;
        e += d;
        printf("%Le\n",e);
        ++n;
    }
    while (d > eps);
    printf("e ^ x = %Le\n",e);
    return 0;
}
