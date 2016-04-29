//Сортировка вставкой (отладка в виде подпрограммы)
#include <stdio.h>

int inputLength ();
int inputArray (int actual_i);
void output (int *a, int actual_i);
void debug (int *array, int actual_i);
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

	debug(a, len);

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

void debug (int *array, int actual_i)
{
	printf("\nDebug mode:\n");

	float omega = 1, inverse_max = 0;
	inverse_max = actual_i*(1 + actual_i)/2 - actual_i;

	for (int i = 0; i < actual_i; ++i)
	{
		int inverse = 0;
		iInsertionSort(array, i);
		for (int j=i+1; j<actual_i; j++)
        {
            if (array[i] > array[j])
            {
                inverse++;
            }
        }
		for (int j = 0; j < actual_i; ++j)
		{
			printf("%d ", array[j]);
			if ( (j > i) && (array[i] > array[j]) )
            {
                inverse++;
            }
		}
		omega  = inverse / inverse_max;
		printf("\n");
		printf("Absolute and relevative value of invertions: %d , %f\n\n", inverse, omega);
	}
}
