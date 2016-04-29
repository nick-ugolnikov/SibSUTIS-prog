#include <stdio.h>

int main()
{
int i,j,n;
printf("Input n (individual number): ");
scanf("%d",&n);
if (n % 5 == 0)
	{
		i=5;
	}
	else 
	{
		i=n%5;
	}
j = (n - i) / 5 +1;
printf("Coordinates: i=%d,j=%d\n",i,j);
printf("\nInput i,j (coordinates): ");
scanf("%d %d",&i,&j);
n = i + 5 * (j - 1);
printf("Individual number: n=%d\n",n);
return 0;
}
