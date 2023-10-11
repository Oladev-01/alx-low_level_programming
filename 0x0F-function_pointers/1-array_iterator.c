#include "function_pointers.h"
#include <stdio.h>
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
	if (array == NULL || action == NULL)
		return;
	int i;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
