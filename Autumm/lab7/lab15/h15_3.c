// сортировка вставкой
#include <stdio.h>

int main()
{
    int array [100], n, mode;
    printf("Input n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("Which mode you would like to work with?\nInput '1' for debug mode or '0' for release mode: ");
    scanf("%d", &mode);
    if (mode == 1)
    {
        printf("Debug mode:\n");
        float omega = 1, inverse_max = n*(1+n)/2 - n;
        for (int i = 1; i < n; i++)
        {
            int inverse = 0;
            int tmp = array[i];
            for (int j = i - 1; j >= 0; j--)
            {
                if (array[j] >= tmp)
                {
                    array[j + 1] = array[j];
                    array[j] = tmp;
                }
            }
            for (int j=i+1; j<n; j++)
            {
                if (array[i] > array[j])
                {
                    inverse++;
                }
            }
            for (int k = 0; k < n; k++)
            {
                printf("%d ",array[k]);
            }
            printf("\n");
            omega  = inverse / inverse_max;
            printf("\nAbsolute and relevative values of invertions: %d %f\n",inverse,omega);
        }

    }
    if (mode == 0)
    {
        printf("Release mode:\n");
        for (int i = 1; i < n; i++)
        {
            int tmp = array[i];
            for (int j = i - 1; j >= 0; j--)
            {
                if (array[j] >= tmp)
                {
                    array[j + 1] = array[j];
                    array[j] = tmp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",array[i]);
        }
    }
    printf("\n");
    return 0;
}
