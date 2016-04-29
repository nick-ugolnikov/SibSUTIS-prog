// количественная мера упорядоченности
#include <stdio.h>

int main()
{
    int array [100], n, inverse = 0;
    printf("Input n: ");
    scanf("%d",&n);
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
    printf("\nTotal value of invertions: %d\n",inverse);
    return 0;
}
