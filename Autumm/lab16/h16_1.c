// количественная мера упорядоченности
#include <stdio.h>

int inv (int *array, int length);

int main()
{
    int array [100], n, x;
    printf("Input n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    x = inv (array, n);
    printf("\nTotal value of invertions: %d\n",x);
    return 0;
}

int inv (int *array, int length)
{
    int inverse = 0;
    for (int i=0; i<length; i++)
    {
        for (int j=i+1; j<length; j++)
        {
            if (array[i] > array[j])
            {
                inverse++;
            }
        }
    }
    return inverse;
}
