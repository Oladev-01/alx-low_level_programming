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
		return (1);
		_putchar(43);
	}

	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}

	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}

	else
	{
		_putchar(64);
	}

	return (0);
}
