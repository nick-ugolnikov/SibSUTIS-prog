#include <stdio.h>
int main()
{
float x,y;
printf("Input x,y: ");
scanf("%f %f",&x,&y);
printf("Test 1: %d\n", (x > -1) && (x < 1) && 
(y > -1) && (y < 1));
printf("Test 2: %d\n", ( ( (x > -1) && (x < 1) ) || ( (x >= 5) && (x < 15) ) ) 
&& ( (y > -1) && (y < 1) ) );
printf("Test 3: %d\n", ( ( (x > -1) && (x < 1) ) || ( (x >= 5) && (x < 15) ) ) &&
 ( ((y > -1) && (y < 1)) || ((y >= 2) && (y <= 3)) ));
return 0;
}
