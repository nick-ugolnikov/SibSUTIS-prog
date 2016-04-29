#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    bool ok = false;
    unsigned int x, y, summ, s = 0, d, p;
	printf("Input x and y: ");
	scanf("%u %u",&x,&y);
	summ = x + y;
	printf("Summ = %u\n",summ);
	while (summ>0)
	{
        d = summ % 10;
        if (ok)
        {
            d += p;
            ok = false;
        };
        if (d > 1)
        {
            s = 10*s + (d%2);
            p = d / 2;
            ok = true;
        }
        else
        {
            s = 10*s + d;
            ok = false;
        }
        summ /= 10;
	}
	printf("%u + %u = %u\n",x,y,s);
	return 0;
}
