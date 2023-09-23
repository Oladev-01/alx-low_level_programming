#include "main.h"
/**
 *_strlen - entry
 *@s: string
 *Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 *puts_half - entry
 *@str: string
 *Return: 0
 */
void puts_half(char *str)
{
	int len, half;

	len = _strlen(str);
	half = len / 2;

	while (half < len)
	{
		if (len % 2 == 0)
		{
			_putchar(str[half]);
		}
		else
		{
			_putchar(str[half + 1]);
		}
		half++;
	}
	_putchar('\n');
}
