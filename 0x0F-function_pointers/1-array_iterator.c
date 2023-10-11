#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - this function executes the function pointed to by (action)
 * taking a pointer to an array as paramter
 *@array: this is the array being parsed
 *@size: this is the size of the array we want to access
 *@action: pointer to a function
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
