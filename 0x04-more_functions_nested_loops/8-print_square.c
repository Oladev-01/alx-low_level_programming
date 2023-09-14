#include "main.h"
/**
 *print_square - entry point
 *@size: size of whatever
 *Return: return null
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	_putchar('\n');
	else
	{
	for (a = 0; size > a; a++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

