#include "main.h"
/**
 *more_numbers - entry point
 *Return: returns 0
 */
void more_numbers(void)
{
	int b = 0;
	int a;

	while (b < 10)
	{
	for (a = 0; a <= 14; a++)
	{
	if (a > 9)
	{
	_putchar((a / 10) + '0');
	}
	_putchar((a % 10) + '0');
	}
	_putchar('\n');
	b++;
	}
	_putchar('\n');
}

