// сортировка пузырьком
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
        int x = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j=0; j<i; j++)
            {
                if (array[j] > array [j + 1])
                {
                    int t = array[j];
                    array [j] = array [j+1];
                    array[j+1] = t;
                }
            }
            int inverse = 0;
            for (int j=0; j<=n; j++)
            {
                if (array[x] > array[j])
                {
                    inverse++;
                }
            }
            for (int k = 0; k < n; k++)
            {
                printf("%d ",array[k]);
            }
            omega  = inverse / inverse_max;
            printf("\nAbsolute and relevative values of invertions: %d %f\n",inverse,omega);
            x++;

        }

    }
    if (mode == 0)
    {
        printf("Release mode:\n");
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j=0; j<i; j++)
            {
                if (array[j] > array [j + 1])
                {
                    int t = array[j];
                    array [j] = array [j+1];
                    array[j+1] = t;
                }
            }
        }
        for (int i=0; i<n; i++)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
    return 0;
}
