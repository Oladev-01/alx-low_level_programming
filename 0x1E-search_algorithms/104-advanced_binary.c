#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * advanced_binary - this function uses binary search
 * to find the index of a value in a sorted array
 * @array: the pointer to the first element of the array
 * @size: the size of the array
 * @value: the value being searched for in the array
 * Return: the index of the value in the array or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - this function makes a recursive binary search
 * @array: the pointer to the first element of the array
 * @low: the start of the range
 * @high: the end of the range
 * @value: the value being searched
 * Return: the index or -1
 */
int advanced_binary_recursive(int array[], size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		mid = floor((high + low) / 2);
		if (array[mid] == value)
		{
			if (mid == low || low == high || array[mid - 1] != value)
				return (mid);
			return (advanced_binary_recursive(array, low, mid, value));
		}
		else if (array[mid] < value)
		{
			return (advanced_binary_recursive(array, mid + 1, high, value));
		}
		else if (array[mid] > value)
		{
			return (advanced_binary_recursive(array, low, mid, value));
		}

	}
	return (-1);
}
