#include "main.h"
/**
 *puts2 - entry
 *@str: string
 *Return: 0
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	int c;
	char *d = str;

	while (*d != '\0')
	{
		d++;
		a++;
	}
	b = a - 1;
	for (c = 0; c <= b; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}

