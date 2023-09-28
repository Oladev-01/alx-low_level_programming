#include "main.h"
/**
 *_puts_recursion - entry function for code
 *@s: string to print
 * Return: null
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
