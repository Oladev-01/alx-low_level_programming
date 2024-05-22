#include "search_algos.h"
/**
 * binary_search - this function uses binary search
 *  to find the index of a value in a sorted array
 * @array: the pointer to the first data in the array
 * @size: the size of the array
 * @value: the data being searched for in the array
 * Return: the index of the value in the array or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i, search_idx = 0, last_idx = size - 1;

	if (!array)
		return (-1);
	while (search_idx <= last_idx)
	{
		mid = floor(search_idx + last_idx) / 2;

		printf("Searching in array: ");
		for (i = search_idx; i <= last_idx; i++)
		{
			if (i < last_idx)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] < value)
			search_idx = mid + 1;
		else if (array[mid] > value)
			last_idx = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
