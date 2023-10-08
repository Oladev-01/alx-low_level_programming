#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - this function creates an array of integers
 * @min: minimum number of element
 * @max: maximum number of elements
 * Return: a pointer to the array of integers
*/
int *array_range(int min, int max)
{
	int *ptr, a;

	if (min > max)
		return (NULL);
		int size = max - min + 1;

		ptr = malloc(size * sizeof(int));
		if (ptr == NULL)
		return (NULL);
		for (a = 0; a < size; a++)
		{
			ptr[a] = min + a;
		}
		return (ptr);
}
