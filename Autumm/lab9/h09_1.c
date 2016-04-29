#include <stdio.h>
int main()
{
int x,y,t;
printf("Input x and y: ");
scanf("%d %d",&x,&y);
t = (x>y)*(x-y)+(x<y)*(y-x);
printf("Output: %d\n",t);
return 0;
}
