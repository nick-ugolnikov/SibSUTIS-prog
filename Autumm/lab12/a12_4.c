#include <stdio.h>
int main()
{
	unsigned int x,a=0,b,n=1,t;
	printf("Enter a b");
	scanf("%u %u",&x,&b);
	x=(x/b)+1*((x%10)>5);
	printf("x=%u\n",x);
	while (x>0)
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
	
