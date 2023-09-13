#include "main.h"
/**
 *print_last_digit - this is the entry point
 *
 *@f: this is my declared variable
 *
 *Return: returns 0 for success
 */
int print_last_digit(int f)
{
	int g;

	g = f % 10;
		if (g < 0)
		{
			g = -g;
		}
		_putchar(g + '0');
			return (g);
}

