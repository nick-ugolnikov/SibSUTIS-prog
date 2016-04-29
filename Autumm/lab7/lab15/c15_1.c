// сортировка выбором
#include <stdio.h>

int main()
{
    int array [100], n, mode;
    //char mode;
    printf("Input n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    //printf("Which mode you would like to work with?\nInput 'd' for debug mode or 'r' for release mode: ");
    //scanf("%c", &mode);
    printf("Which mode you would like to work with?\nInput '1' for debug mode or '0' for release mode: ");
    scanf("%d", &mode);
    if (mode == 1)
    {
        printf("Debug mode:\n");
        for (int i = 0; i < n-1; i++)
        {
            int imin = i;
            for (int j = i+1; j < n; j++)
            {
                if (array[j] < array[imin])
                {
                    imin = j;
                }
            }
            int tmp = array[i];
            array[i] = array[imin];
            array[imin] = tmp;
            printf("i = %d\n",i);
            for (int j = 0; j < n; j++)
            {
                printf("%d ",array[j]);
            }
            printf("\n");
        }

    }
    if (mode == 0)
    {
        for (int i = 0; i < n-1; i++)
        {
            int imin = i;
            for (int j = i+1; j < n; j++)
            {
                if (array[j] < array[imin])
                {
                    imin = j;
                }
            }
            int tmp = array[i];
            array[i] = array[imin];
            array[imin] = tmp;
        }
        printf("Release mode:\n");
        for (int j=0; j < n; j++)
        {
            printf("%d ", array[j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
