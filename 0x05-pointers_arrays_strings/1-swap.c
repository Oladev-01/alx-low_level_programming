#include "main.h"
/**
 *swap_int - entry point
 *@a: first number
 *@b: second number
 *Return: returns 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
