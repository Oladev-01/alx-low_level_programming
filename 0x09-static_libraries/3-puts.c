#include "main.h"
/**
 *_puts - entry
 *@str: variable str
 *Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
