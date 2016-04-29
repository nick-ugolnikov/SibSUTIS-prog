#include <stdio.h> 
int main() 
{ 
float a,b; 
printf("Input a and b: "); 
scanf("%f, %f", &a, &b);
printf("%f + %f\t= %f\n",a,b,a+b);
printf("%f - %f\t= %f\n",a,b,a-b);
printf("%f * %f\t= %f\n",a,b,a*b);
printf("%f / %f\t= %.2f\n",a,b,a/b);
return 0; 
}
