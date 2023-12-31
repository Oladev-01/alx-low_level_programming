#include "main.h"
/**
 *print_number - entry point
 *@n: number is an integer
 *Return: return null
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('-');
	}
	num /= 10;
	if (num != 0)
	print_number(num);
	_putchar((unsigned int) n % 10 + '0');
}

