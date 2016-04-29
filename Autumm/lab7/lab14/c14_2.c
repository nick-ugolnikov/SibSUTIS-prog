#include <stdio.h>

int main()
{
    int array[101], n, min, max, imax = 0, imin  = 0, tmp;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    max = array[0];
    min = array[0];
    for (int i=1; i<=n; i++)
    {
        if (array[i]>max)
        {
            imax = i;
            max = array[i];
        }
        if (array[i]<min)
        {
            imin = i;
            min = array[i];
        }
    }
    tmp = array[imax];
    array[imax] = array [imin];
    array [imin] = tmp;
    for (int i=0; i<=n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
