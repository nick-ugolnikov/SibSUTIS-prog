#include <stdio.h>

int main()
{
	int x,d;
	printf("Input x: ");
	scanf("%d",&x);
	while (x>0)
	{
		d = x % 10;
		printf("%d ",d);
		x = x / 10;
	}
	printf("\n");
	return 0;
}
