#include <stdio.h>

int main()
{
	int x,i=0;
	printf("Input x: ");
	scanf("%d",&x);
	while (x>0)
	{
		i++;
		x = x / 10;
	}
	printf("Output: %d\n",i);
	return 0;
}
