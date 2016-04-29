#include <stdio.h>

int main()
{
float x,t2;
int t1,y;
printf("Input x: ");
scanf("%f",&x);
t1 = x;
t2 = x - t1;
y = t1 + (t2 >= 0.5);
printf("x=%f\t y=%d\n",x,y);
return 0;
}
