#include <stdio.h>

/**
 * main - this function is to print all hexadecimal numbers
 *
 * Return: should return 0 for sucess
 *
 */

int main(void)

{
	int i = 0;
	char lekan = 'a';


	while (i <= 9)

	{
		putchar(i);

			i++;

	}

	while (lekan <= 'f')

	{
		putchar(lekan);

		lekan++;

	}

	putchar('\n');

	return (0);

}


