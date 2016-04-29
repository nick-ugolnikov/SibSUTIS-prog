#include <stdio.h>

int main()
{
    int array[101], n;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    int gcd, x, y, min;
    for (int i=0; i<n; i++)
    {
        x = array[i];
        y = array[i+1];
        min = (x>y)*x + (x<y)*y;
        gcd = 1;

        for (int j=2; j<=min; j++)
        {
            if ( (x%j == 0) && (y%j == 0) )
            {
                gcd = j;
            }
        }
        printf("(%d,%d) = %d\n",x,y,gcd);
    }
    printf("\n");
    return 0;
}
