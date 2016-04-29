#include <stdio.h>
int main()
{
int x;
printf("Input x: ");
scanf("%d",&x);
x = (x>=0)*(x<5000)*x - (x>=5000)*(x<10000)*(10000-x);
printf("Output: %d\n",x);
return 0;
}
