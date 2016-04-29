// количественная мера упорядоченности
#include <stdio.h>

int main()
{
    int array [100], n, inverse = 0;
    float omega = 1, inverse_max = 0;
    printf("Input n: ");
    scanf("%d",&n);
    inverse_max = n*(1+n)/2 - n;
    for (int i = 0; i < n; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    for (int i=0; i<n; i++)
    {
        printf("%d ",array[i]);
        for (int j=i+1; j<n; j++)
        {
            if (array[i] > array[j])
            {
                inverse++;
            }
        }
    }
    /*
    for (int i=n; i >= 0; i--)
    {
        for (int j=i-1; j>=0; j--)
        {
            if (array[i] > array[j])
            {
                inverse_max += 1;
            }
        }
    }
    */
    omega  = inverse / inverse_max;
    printf("\nRelevative value of invertions: %f\n",omega);
    return 0;
}
