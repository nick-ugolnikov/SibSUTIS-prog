#include <stdio.h>
int main()
{
int t,y;
float x,z;
printf("Input x: ");
scanf("%f",&x);
t = x;
z = x - t;
y = t + (z >=0.5) - (z <= -0.5);
printf("y=%d\tz=%f\n",y,z);
return 0;
}
