#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - this function allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of the array
 *
 * Return: a pointer to the memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int calc;
	void *ptr;

	calc = nmemb * size;

	if (nmemb == NULL || size == NULL)
		return (NULL);

	ptr = malloc(calc);

	if (calc == NULL)
		return (NULL);

		memset(ptr, 0, calc);
		return (ptr);

}