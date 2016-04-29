#include <stdio.h>

int main()
{
int a,b,tmp;
printf("Input a,b: ");
scanf("%d %d",&a,&b);
printf("a=%d b=%d\n",a,b);
tmp = a;
a = b;
b = tmp;
printf("a=%d b=%d\n",a,b);
return 0;
}
