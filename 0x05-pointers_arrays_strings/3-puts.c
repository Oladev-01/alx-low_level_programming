#include "main.h"
/**
 *_puts - entry
 *@str: variable str
 *Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
