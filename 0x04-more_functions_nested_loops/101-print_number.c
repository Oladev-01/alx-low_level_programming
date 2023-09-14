#include "main.h"
/**
 *print_number - entry point
 *@n: number is an integer
 *Return: return null
 */
void print_number(int n)
{
	int num = 0;

	if (n < num)
	{
		num = -n;
		_putchar(num + '0');
	}

	else if (n == num)
	{
		num = n;
		_putchar(num + '0');
	}
	else if (n > num)
	{
		num = n / 10;
		num = n % 10;
		_putchar(n + '0');
	}
}

