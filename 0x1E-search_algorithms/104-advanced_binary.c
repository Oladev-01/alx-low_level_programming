#include "search_algos.h"
/**
 * advanced_binary - this function uses binary search
 *  to find the index of a value in a sorted array
 * @array: the pointer to the first data in the array
 * @size: the size of the array
 * @value: the data being searched for in the array
 * Return: the index of the value in the array or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid, i, search_idx = 0, last_idx = size - 1, first;
	bool isfound = false;

	if (!array)
		return (-1);
	while (search_idx <= last_idx)
	{
		mid = floor((search_idx + last_idx) / 2);
		printf("Searching in array: ");
		for (i = search_idx; i <= last_idx; i++)
		{
			if (i < last_idx)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] == value)
		{
			first = mid;
			last_idx = mid;
			isfound = true;
		}
		if (search_idx == last_idx)
			break;
		else if (array[mid] < value)
			search_idx = mid + 1;
		else if (array[mid] > value)
			last_idx = mid - 1;
	}
	if (isfound)
		return (first);
	return (-1);
}
