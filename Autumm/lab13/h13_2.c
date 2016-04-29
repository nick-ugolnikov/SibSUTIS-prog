#include <stdio.h>

int main()
{
    int gcd, x, y, t, t1, t2, e, i=1, f=0;

    printf("Input x and y: ");
    scanf("%d %d",&x,&y);

    if (y>x)
    {
        t = x;
        x = y;
        y = t;
    }
    e = y;
    while ((i < e) && (f != 1))
    {
        t1 = y / i;
        t2 = y % i;
        if ((t2 == 0) && (x % t1 == 0))
        {
            gcd = t1;
            f = 1;
        }
        else if ((t2 == 0) && (x % i == 0))
        {
            gcd = i;
        }
        i++;
        e = t1;
    }
    printf ("The greatest common division is %d\n",gcd);
    return 0;
}
