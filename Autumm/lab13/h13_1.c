#include <stdio.h>

int main()
{
    double x, r;
    int i = 1, yx, binx = 0, binr = 0, n;

    printf("Input x and n: ");
    scanf("%le %d", &x,&n);

    yx = x;
    r = x - (int)x;

    while (yx > 0)
    {
        binx += (yx % 2)*i;
        i *= 10;
        yx /= 2;
    }
    printf("%d.",binx);
    i = 1;

    while ( ((r - (int)r)!= 0) && (i<=n) )
    {
        r *= 2;
        binr = ((int)r >= 1);
        printf("%d",binr);
        i++;
    }
    printf("\n");
    return 0;
}
