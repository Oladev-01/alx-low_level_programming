#include "main.h"
/**
 *print_diagonal - entry point
 *@n: number of times to print
 *Return: return 0
 */
void print_diagonal(int n)
{
	int a = 0;

	if (n <= 0)
	_putchar('\n');
	else
	{
	while (a < n)
	{
	a++;
	_putchar('\\');
	}
	_putchar('\n');
	}
}
