#include "main.h"
/**
 *print_line - entry point
 *@n: number of lines
 *Return: return void
 */
void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (n > a)
	{
	_putchar('_');
	}
	_putchar('\n');
	a++;
	}
}


