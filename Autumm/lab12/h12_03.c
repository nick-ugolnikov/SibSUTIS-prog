#include <stdio.h>
#include <math.h>

int main()
{
    int x,d,i;
    printf("Input x: ");
    scanf("%d");
    i = (int)log10((double)x);
    d = x / ((int)pow(10,i));
    printf("%d ",d);
    x /= 10;
    i--;
    while (x>0)
    {
        d = (x / ( (int)pow(10,i) ) ) % 10;
        printf("%d ",d);
        i--;
        x /= 10;
    }
    printf("\n");
    return 0;
}
