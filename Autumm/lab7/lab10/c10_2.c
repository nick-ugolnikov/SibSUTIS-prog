#include <stdio.h>

int main()
{
	int x,y,t;
	printf("Input x,y: ");
	scanf("%d %d", &x, &y);

	t = -(x>0)*(y<0) - (x<0)*(y>0);
	
	x = (x<5000)*(x>=-5000)*x + (x>=5000)*4999 + (x<-5000)*(-5000);
	x = (x>=0)*x + (x<0)*(10000+x);

	y = (y<5000)*(y>=-5000)*y + (y>=5000)*4999 + (y<-5000)*(-5000);
	y = (y>=0)*y + (y<0)*(10000+y);

	printf("x'=%d\ty'=%d\n", x, y);
	if (t == 0)
		printf("x'* y' = %d\n", x*y);
	else printf("x'* y' = %d\n", x*y - 10000);
	if (t == 0)
		printf("x * y = %d\n", x * y);
	else printf ("x * y = %d\n", 10000 - t*x*y);
	return 0;
}
