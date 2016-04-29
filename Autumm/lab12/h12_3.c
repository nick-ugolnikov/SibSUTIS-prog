#include <stdio.h>
int main ()
{
int x;
int y=0, i=0, k;
long int n, r=1;
int  p, f;
printf ("x=");
scanf ("%d",&x);

k=x;
while (k>0) {
  y=(y*10)+(k%10);
  k=k/10;
  i=i+1;
   }
//printf ("i=%d",i);

//выделение мнохителя 10^(n-1)
n=i-1;
while (n!=0) {
  r=r*10;
  n=n-1;
  }
//вывод первого разряда
p=x/r;
printf ("%d ",p);

//вывод 2--(n-1) разряд
while (r!=10) {
  r=r/10;
  f=(x/r)%10;
  printf ("%d ",f);
  }
//вывод последнего разряда
x=x%10;
printf ("%d\n",x);
return 0;
}
