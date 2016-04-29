#include <stdio.h>
int main()
{

unsigned int x,a=0, y, n=1, t;
printf ("x=");
scanf ("%u",&x);

printf ("y=");
scanf ("%u",&y);

x=x*y;
while (x>0) {
  if ((x%10)>1) { //последний разряд недопустим 
      t=x%10;// t=последний разряд
      x=(x/10)+(t/2);
      t=t%2;
      a=a+t*n;
      n=n*10;
 } 
else {
      t=x%10;
	x=x/10;
	 a=a+t*n;
      n=n*10;
 }
}
printf ("a=%u",a);
return 0;
}
