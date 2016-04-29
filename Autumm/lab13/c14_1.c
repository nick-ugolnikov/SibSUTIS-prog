#include <stdio.h>

int main()
{
    int array[101], n;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {
        printf("Input array[i]: ");
        scanf("%d",&array[i]);
    }
    for (int i=0; i<=n; i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\n");
    return 0;
}
