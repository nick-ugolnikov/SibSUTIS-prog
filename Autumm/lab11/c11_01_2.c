#include <stdio.h>

int main()
{
	int y;
	unsigned short x;
	for (int i=100; i!=0x10001; i++)
	{
		x=i;
		y=i;
		printf("i=%d\tx=%hu\n",i,x);
	}
	printf("Total: %d iterations.\n",y-99);
	return 0;
}
