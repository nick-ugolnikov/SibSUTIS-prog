#include <stdio.h>

int main()
{
	int x,y;
	printf("Input x,y: ");
	scanf("%d %d", &x, &y);
	
	x = (x>=0)*(x<5000)*x + (x<0)*(x>=-5000)*(10000+x);
	y = (y>=0)*(y<5000)*y + (y<0)*(y>=-5000)*(10000+y);
	printf("x'=%d\ty'=%d\n", x, y);
	if (x + y >= 10000)
		printf("x'+ y'= %d\n", x + y - 10000);
	else printf ("x'+ y'= %d\n", x + y);
	if (x + y < 5000)
		printf("x + y = %d\n", x + y);
	else printf ("x + y = %d\n", x + y - 10000);
	return 0;
}
