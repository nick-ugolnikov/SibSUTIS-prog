#include <stdio.h>

int main()
{
int i,j,n;
printf("Input n (individual number): ");
scanf("%d",&n);
i = n % 5;
j = n / 5;
printf("Coordinates: i=%d,j=%d\n",i,j);
printf("\nInput i,j (coordinates): ");
scanf("%d %d",&i,&j);
n = i + 5 * j;
printf("Individual number: n=%d\n",n);
return 0;
}
