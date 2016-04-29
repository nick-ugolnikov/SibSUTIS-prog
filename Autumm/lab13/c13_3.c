#include <stdio.h>

int main()
{
    int gcd, x, y;

    printf("Input x and y: ");
    scanf("%d %d",&x,&y);

    while ( !((x==0) || (y==0)) )
    {
        if (x>=y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    if (x==0)
    {
        gcd = y;
    }
    else
    {
        gcd = x;
    }
    printf ("The greatest common division is %d\n",gcd);
    return 0;
}
