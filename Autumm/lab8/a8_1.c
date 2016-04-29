#include <stdio.h>

int main()
{
float a,b;
printf("Input a,b: ");
scanf("%f %f",&a,&b);
printf("a=%f b=%f\n",a,b);
a = a ^ b;
b = a ^ b;
a = a ^ b;
printf("a=%f b=%f\n",a,b);
return 0;
}
