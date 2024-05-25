#include "search_algos.h"
/**
 * exponential_search - this function uses exponential algorithm
 *  to search through a sorted list of array for a target value
 * @array: this is the pointer to the first data in the array
 * @size: the size of the array
 * @value: the target value
 * Return: the index where the value is found in the array
 * or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t exp = 1, low, high;

	if (!array)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	while (exp < size && array[exp] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}
	low = exp / 2;
	high = exp < size ? exp : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (bina_search(array, value, low, high));
}

/**
 * bina_search - this function implements binary search algorithm
 * @value: the value being searched
 * @array: the pointer to the first data in the array
 * @low: the starting index
 * @high: the range of iteration
 * Return: the index or -1
*/
int bina_search(int array[], int value, size_t low, size_t high)
{
	size_t mid, i;

	if (array[low] == value)
		return (low);
	if (array[high] == value)
		return (high);

	while (low <= high)
	{
		mid = floor((high + low) / 2);
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] < value)
			low = mid + 1;
		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
