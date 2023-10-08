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
	int a = 0;
	int calc;
	char *ptr;

	calc = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(calc);

	if (ptr == NULL)
		return (NULL);
	while (a < calc)
	{
		ptr[a] = 0;
	}
		return (ptr);

}

