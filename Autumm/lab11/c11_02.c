#include <stdio.h>

int main()
{
	char x;
	unsigned char choice = 1;
	while (choice != 0)
	{		
		printf("Input signed integer: ");
		scanf("%hhd",&x);
		printf("Signed representation: %hhu\n",x);
		printf("Want to continue? (1/0): ");
		scanf("%hhu",&choice);
	}
	printf("Exiting!\n");
	return 0;
}
