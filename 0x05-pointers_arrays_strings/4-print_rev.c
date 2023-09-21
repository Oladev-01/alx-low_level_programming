#include "main.h"
/**
 *print_rev - entry
 *@s: string
 *Return: 0
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; *s != '\0'; a++)
	{
		s++;
	}

	while (a > 0)
	{
		s--;
		_putchar(*s);
		a--;
	}
	_putchar('\n');
}

