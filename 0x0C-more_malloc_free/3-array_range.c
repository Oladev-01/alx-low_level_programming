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
	int *ptr, a = 0;

	if (min > max)
	{
		return (NULL);
	}
		ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
		if (ptr == NULL)
		{
			return (NULL);
		}
			while (min <= max)
			{
				ptr[a] = min;
				a++;
				min++;
			}

		return (ptr);
}
