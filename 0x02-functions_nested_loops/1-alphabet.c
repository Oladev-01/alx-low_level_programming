#include "main.h"
/**
 * print_alphabet - this program prints the characters in lowercase
 *
 * Return: this should return 0 for success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
