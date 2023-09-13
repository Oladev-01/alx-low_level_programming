#include "main.h"
/**
 *print_times_table - entry point
 *@n: range of numbers of my multiplication table
 *
 *Return: return 0 for sucess
 */
void print_times_table(int n)
{
	int a, b, c;

	if (a >= 0 && n <= 15)
	{
	for (n = 0; n <= a; b++)
	{
	_putchar('0');
	for (b = 1; b <= n; b++)
	{
	_putchar(',');
	_putchar(' ');
	c = a * b;
	if (c <= 99)
	_putchar(' ');
	if (c <= 9)
	_putchar(' ');
	if (c >= 100)
	{
	_putchar((b / 100) + '0');
	_putchar(((b / 10)) % 10 + '0');
	}
	else if (b <= 99 && b >= 10)
	{
	_putchar((b / 10) + '0');
	}
	_putchar((b % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
