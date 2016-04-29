#include <stdio.h>
int main()
{
    long double ln, x, check, d, a, eps;
    long i;
    short z;
    printf("Input x and eps: ");
    scanf("%Le %Le", &x, &eps);
    a = x;
    ln = x;
    i = 2;
    do
    {
        z = (i % 2 == 0)*(-1) + (i % 2 == 1);
        a *= x;
        d = z*a / i;
        ln += d;
        printf("%Le\n",ln);
        check = (d > 0)*d - (d < 0)*d;
        i++;
    } while (check > eps);
    printf("ln(1+x) = %Le\n",ln);
    return 0;
}
