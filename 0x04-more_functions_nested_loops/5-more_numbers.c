#include "main.h"
/**
 *more_numbers - entry point
 *Return: returns 0
 */
void more_numbers(void)
{
	int b = 1;
	int a;

	while (b < 11)
	{
	for (a = 0; a <= 14; a++)
	{
	if (a >= 10)
	{
	_putchar((a / 10) + '0');
	}
	_putchar((a % 10) + '0');
	}
	_putchar('\n');
	b++;
	}

}

