#include "main.h"
/**
 *print_numbers - entry point
 *
 *Return: return 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
	a++;
	_putchar(a + '0');
	}
	_putchar('\n');
}
