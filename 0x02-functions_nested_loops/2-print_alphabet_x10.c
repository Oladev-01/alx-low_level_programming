#include "main.h"
/**
  *void print_alphabet_x10(void) - this is the entry point of the code
  * this program prints 10 times the alphabet, in lowercase, followed by a new line
  *
  *Return: this should return 0 for success
  */
 void print_alphabet_x10(void)
{
	int me = 0;
	char you;

	while (me <= 10)

	{
		for (you <= 'z')
		{
		_putchar(you);
		you++;
		}
	}
	_putchar('\n');
	me++;
}
