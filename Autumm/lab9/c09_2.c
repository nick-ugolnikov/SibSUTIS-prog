#include <stdio.h>
int main()
{
int x;
printf("Input x: ");
scanf("%d",&x);
x = ((x>=0)-(x<0))*x;
printf("%d\n",x);
return 0;
}
