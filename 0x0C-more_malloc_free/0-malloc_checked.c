#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - the function allocates memory using malloc
 * @b: the value we are alloctung space for
 * Return: the pointer to the allocated memory space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
