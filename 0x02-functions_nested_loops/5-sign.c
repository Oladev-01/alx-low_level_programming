#include "main.h"
/**
 *print_sign - this is the entry point
 *
 *@n: this is the declared parameter
 *
 *Return: this should return 0 for success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
