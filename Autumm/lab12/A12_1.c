#include <stdio.h>
int main()
{
	unsigned int x,a,b,n,t;
	printf("Enter a b ");
	scanf("%u %u",&x,&b);
	x=x-b;
	a=0;
	printf("x=%u\n",x);
	n=1;
	while(x>0)
	{
		if((x%10)>1)
		{
			t=(x%10)/9;
			x=x/10;
			a=a+t*n;
			n=n*10;
		}
		else
		{
			t=x%10;
			x=x/10;
			a=a+t*n;
			n=n*10;
		}
	printf("x=%u\ta=%u\n",x,a);
	}
	printf("Otvet=%u\n",a);
	return 0;
}
