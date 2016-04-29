#include <stdio.h>

int main()
{
    int x, y, t;

    printf("Input x and y: ");
    scanf("%d %d",&x,&y);

    if (y>x)
    {
        t = x;
        x = y;
        y = t;
    }
    while (x % y !=0)
    {
        t =  x % y;
        x = y;
        y = t;
    }
    printf ("The greatest common division is %d\n",y);
    return 0;
}
