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
    int gcd, x, y;
    x = array[0];
    for (int i=1; i<=n; i++)
    {
        int min = 0;
        y = array[i];
        min = (x>y)*x + (x<y)*y;
        gcd = 1;
        for (int j=2; j<=min; j++)
        {
            if ( (x%j == 0) && (y%j == 0) )
            {
                gcd = j;
            }
        }
        x = gcd;
    }
    printf("(");
    for (int i=0; i<n; i++)
    {
        printf("%d , ",array[i]);
    }
    printf("%d) = %d\n",array[n],gcd);
    return 0;
}
