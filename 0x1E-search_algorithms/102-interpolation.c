#include "search_algos.h"
/**
 * interpolation_search - this function uses interpolation algorithm to search
 * through a sorted array of data
 * @array: the pointer to the first data in the array
 * @size: the size of the array
 * @value: the value being searched for
 * Return: the index where the value is in the array or -1 if
 * not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array || size == 0)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
		 (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}
