#include <stdio.h>

int main()
{
    unsigned int x, y, summ, s, d, n;
	printf("Input x and y: ");
	scanf("%u %u",&x,&y);
	summ = x + y;
	printf("Summ = %u\n",summ);
	s = 0;
	n = 1;
	while (summ>0)
	{
		if ((summ % 10)>1)
		{
			d = summ%10;
			summ = (summ/10) + (d/2);
			d = d % 2;
			s = s + d*n;
			n = n*10;
		}
		else
		{
			d = summ%10;
			summ = summ / 10;
			s = s + d*n;
			n = n*10;
		}
	}
	printf("%u + %u = %u\n",x,y,s);
	return 0;
}
