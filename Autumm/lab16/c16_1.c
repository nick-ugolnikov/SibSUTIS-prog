//Сортировка выбором (подпрограмма)
#include <stdio.h>

int inputLength ();
int inputArray (int actual_i);
void output (int *a, int actual_i);
void SelectionSort (int *a, int actual_i);
void ISelectionSort (int *a, int actual_i, int current_i);

int main ()
{
	int n = 100, a[n];
	int len = inputLength();

	for (int i = 0; i < len; ++i)
	{
		a[i] = inputArray(i);
	}
	
	printf("\nDebug mode:\n");
	for (int i = 0; i < len; ++i)
	{
		ISelectionSort(a, len, i);
		for (int j = 0; j < len; ++j)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}

	printf("\nRelease mode:\n");
	SelectionSort(a, len);
	output(a, len);
	return 0;
}

int inputLength()
{
	printf("Enter actual size of your array: ");
	int actual_i;
	scanf("%d", &actual_i);
	printf("\n"); 
	return actual_i;
}

int inputArray (int current_i)
{
	printf("Input a[%d]: ", current_i);
	int a;
	scanf("%d", &a);
	return a;
}

void output (int *a, int actual_i)
{
	printf("\nSorted array:\n");
	for (int i = 0; i < actual_i; ++i)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}

void SelectionSort (int *a, int actual_i)
{
	for (int i = 0; i < actual_i - 1; i++)
	{
		int imin = i;
    	for (int j = i+1; j < actual_i; j++)
    	{
        	if (a[j] < a[imin])
        	{
        		imin = j;
        	}
    	}
    	int tmp = a[i];
    	a[i] = a[imin];
    	a[imin] = tmp;
    }
}

void ISelectionSort (int *a, int actual_i, int current_i)
{
	int imin = current_i;
	for (int j = current_i + 1; j < actual_i; j++)
	{
		if (a[j] < a[imin])
		{
			imin = j;
		}
	}
	int tmp = a[current_i];
	a[current_i] = a[imin];
	a[imin] = tmp;
}