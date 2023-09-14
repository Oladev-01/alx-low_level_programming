#include "main.h"
/**
 *print_triangle - entry point
 *@size: size of the triangle
 *Return: return null
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
		for (b = 1; b <= size - a; b++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= a; c++)
		{
		_putchar(35);
		}
		_putchar('\n');
		}

	}

}
