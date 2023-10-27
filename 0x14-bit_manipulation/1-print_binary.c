#include "main.h"
/**
 * print_binary - this function converts integers to binary
 * @n: the integer to be converted
 *Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0, num;
	unsigned long int size = n;

	if (size == 0)
	{
		_putchar('0');
		return;
	}
	while (size > 0)
	{
		i++;
		size >>= 1;
	}
	i--;
	while (i >= 0)
	{
		num = (n >> i) & 1;
		_putchar(num ? '1' : '0');
		i--;
	}
}
