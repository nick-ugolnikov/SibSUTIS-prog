#include <stdio.h>
#include <math.h>

int main()
{
long long int t = pow (2,sizeof(float)*8-1)-1; // 
printf("Sizeof(float): %ld bytes.\nMaximal value: %lld\n",sizeof(float),t);
return 0;
}
