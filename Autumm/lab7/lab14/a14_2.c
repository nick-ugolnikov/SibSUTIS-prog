#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool increase = false, decrease = false;
    float array[101], x;
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%f",&array[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (array[i] < array [i+1])
        {
            increase = true;
        }
        else increase = false;
        if (array[i] > array [i+1])
        {
            decrease  = true;
        }
        else decrease = false;
    }

    printf("Input x: ");
    scanf("%f",&x);

    if (increase)
        {
            if (array[0] > x)
            {
                printf("%f %f ",x,array[0]);
            }
        }
    if (decrease)
        {
            if (array[0] < x)
            {
                printf("%f %f ",x,array[0]);
            }
        }

    for (int i=0; i<=n; i++)
    {
        if (increase)
        {
            if ( (array[i] < x) && (x < array[i+1]) )
            {
                printf("%f %f ",array[i],x);
            }
            else printf("%f ",array[i]);
        }
        else if (decrease)
            {
                if ( (array[i] > x) && (x > array[i+1]) )
                {
                    printf("%f %f ",array[i],x);
                }
                else printf("%f ",array[i]);
            }
            else printf("%f ",array[i]);
    }

    if (increase)
        {
            if (array[n] < x)
            {
                printf("%f %f ",array[n],x);
            }
        }
    if (decrease)
        {
            if (array[n] > x)
            {
                printf("%f %f ",array[n],x);
            }
        }

    printf("\n");
    return 0;
}
