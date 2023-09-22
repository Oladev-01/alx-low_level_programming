#include "main.h"
/**
 *puts2 - entry
 *@str: string
 *Return: 0
 */
void puts2(char *str)
{
int i;

	for  (i = 0; *str != '\0'; i++)
	{
		if (*str == 0 || *str % 2 == 0)
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
