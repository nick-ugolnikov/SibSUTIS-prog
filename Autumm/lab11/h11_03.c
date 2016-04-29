#include <stdio.h>
#include <stdbool.h>

int main()
{
	float x , y , a, eps;
	int n=0;
	printf("Input a and epsilon: ");
	scanf("%f %f",&a,&eps);
	x = a;
	y = 2*a;
	while ((y - x) >= eps) 
	{
		printf("x[%d] = %.20f\n",n,x);
		y = x;
		x = 0.5*(a/x + x);
		n++;
	}	
	printf("Root = %.20f\n",x);
	return 0;
}
