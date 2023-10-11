#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - this function returns the first index for which the element
 * at that index is greater than 0
 * @array: this is the array to be iterated through
 * @size: this is the size of the array
 * @cmp: this is a pointer to the function that returns a particular integer
 * Return: this returns the index of the first positive
 * element of the array as called by the functions
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

