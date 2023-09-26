#include <stdio.h>
/**
*print_diagsums - entry functions
*@a: pointer to a square matrix
*@size: size of the matrix
*Return: null
*/
void print_diagsums(int *a, int size)
{

	int sum_1 = 0;

	int sum_2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[i * size + i];
		sum_2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", sum_1);
	printf("%d\n", sum_2);
}
