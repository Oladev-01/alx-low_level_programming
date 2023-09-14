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
	putchar(a + '0');
	}
	putchar('\n');
}
