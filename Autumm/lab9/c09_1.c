#include <stdio.h>
int main()
{
int x,y;
printf("Input x and y: ");
scanf("%d %d",&x,&y);
printf("x\ty\tx>y\tx<y\tx>=y\tx<=y\tx==y\tx!=y\n");
printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",x,y,x>y,x<y,x>=y,x<=y,x==y,x!=y);
x=x+y;
y=x-y;
x=x-y;
printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",x,y,x>y,x<y,x>=y,x<=y,x==y,x!=y);
return 0;
}
