#include "main.h"
#include <stdio.h>
/**
 *reset_to_98- this is the entry funtion
 *@n: this is the variable pointed to
 *Return: returns 0
 */
void reset_to_98(int *n)
{
	int *ptr = &*n;

	*ptr = 98;
	putchar(*ptr + '0');
}

