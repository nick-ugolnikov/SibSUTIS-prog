#include <stdio.h>

int main()
{
	unsigned char x;
	int y;
	for (int i=1; i!=257; i++)
	{
		x=i;
		y=i;
		printf("i=%d\tx=%hhu\n",i,x);
	}
	printf("Total iterations: %d.\n",y);	
	return 0;
}
