#include <stdio.h>

int main()
{
    int array[101], b[101], n, l=0;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    for (int i=0; i<=n; i++)
    {
        if (array[i]%2 == 0)
        {
            l++;
            b[l] = i;
            printf("%d ",b[l]);
        }
    }
    printf("\n");
    return 0;
}
