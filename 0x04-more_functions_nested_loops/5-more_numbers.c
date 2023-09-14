#include "main.h"
/**
 *more_numbers - entry point
 *Return: returns 0
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b <= 10; b++)
	{
	for (a = 0; a <= 14; a++)
	{
	_putchar(a + '0');
	_putchar('\n');
	}
	}
	_putchar('\n');
}

