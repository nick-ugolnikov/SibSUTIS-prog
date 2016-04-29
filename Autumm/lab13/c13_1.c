#include <stdio.h>

int main()
{
    float x;
    int f=0, bin=0, i=1;

    printf("Input x: ");
    scanf("%f",&x);
    f = x;
    printf("f = %d\n",f);
    while (f>0)
    {
        bin += (f%2)*i;
        i *= 10;
        f /= 2;
    }
    printf("Output: %d\n",bin);
    return 0;
}
