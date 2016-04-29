#include <stdio.h>

int main()
{
    int gcd, x, y, min;

    printf("Input x and y: ");
    scanf("%d %d",&x,&y);

    min = (x>y)*x + (x<y)*y;

    for (int i=2; i<=min; i++)
    {
        if ( (x%i == 0) && (y%i == 0) )
        {
            gcd = i;
        }
    }

    printf ("The greatest common division is %d\n",gcd);
    return 0;
}
