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
    int min = array[0], max = array[0];
    for (int i=0; i<=n; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
        if (array[i]<min)
        {
            min = array[i];
        }
    }
    printf("Output: [%d,%d]\n",min,max);
    return 0;
}
