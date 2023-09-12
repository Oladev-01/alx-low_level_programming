#include "main.h"
/**
  *void print_alphabet_x10(void) - this is the entry point of the code
  * this program prints 10 times the alphabet, in lowercase, followed by a new line
  *
  *Return: this should return 0 for success
  */
 void print_alphabet_x10(void)
{
	int me;
	char you;

	for (me = 0; me <= 10; me++)
	{
		for (you = 'a'; you <= 'z'; you++)
		{
			_putchar(you);
		}
	}
	_putchar('\n');
}
