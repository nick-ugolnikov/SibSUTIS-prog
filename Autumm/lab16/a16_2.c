#include <stdio.h>

int inputLength ();
int inputArray (int actual_i);
void output (int *a, int actual_i);
void InsertionSort (int *a, int actual_i);
void iInsertionSort (int *a, int current_i);

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
		iInsertionSort(a, i);
		for (int j = 0; j < len; ++j)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}

	printf("\nRelease mode:\n");
	InsertionSort(a, len);
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

void InsertionSort(int *array, int actual_i)
{
	for (int i = 1; i < actual_i; i++)
        {
            int tmp = array[i];
            for (int j = i - 1; j >= 0; j--)
            {
                if (array[j] >= tmp)
                {
                    array[j + 1] = array[j];
                    array[j] = tmp;
                }
            }
        }
}

void iInsertionSort (int *array, int current_i)
{
	int tmp = array[current_i];
    for (int j = current_i - 1; j >= 0; j--)
    {
        if (array[j] >= tmp)
        {
            array[j + 1] = array[j];
            array[j] = tmp;
        }
    }
}
