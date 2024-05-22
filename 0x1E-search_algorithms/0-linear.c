#include "search_algos.h"
/**
 * linear_search - this function runs a linear search on an array of integers
 * @array: the pointer to the first data in the array
 * @size: the size of the array
 * @value: the data being searched in the array
 * Return: the index of the value if found in the array or -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t search;

	for (search = 0; search < size; search++)
	{
		printf("Value checked array[%ld] = [%d]\n", search, array[search]);
		if (array[search] == value)
		{
			return (search);
		}
	}
	return (-1);
}
