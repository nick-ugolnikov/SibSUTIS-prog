#include <stdio.h>
int main()
{
    long double ln, x, check, d, a, eps;
    long n;
    short z;
    printf("Input x and eps: ");
    scanf("%Le %Le", &x, &eps);
    ln = 0;
    n = 1;
    do
    {
        a = 1;
        for (int i=1; i<=n; ++i)
        {
            z = (i % 2 == 0)*(-1) + (i % 2 == 1);
            a *= x;
            d = z*a / i;
        }
        ln += d;
        printf("%Le\n",ln);
        check = (d > 0)*d - (d < 0)*d;
        n++;
    } while (check > eps);
    printf("ln(1+x) = %Le\n",ln);
    return 0;
}
