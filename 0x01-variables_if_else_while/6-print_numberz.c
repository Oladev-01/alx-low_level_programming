#include <stdio.h>

/**
 * main - this function is for printing numbers in base 10.-
 * i.e from 0 to 9
 *
 * Return: this should return 0 for success
 *
 */

int main(void)

{

	int i = 0;

	while (i <= 9)

	{
		putchar(i + '0');

		i++;

	}
	putchar('\n');

	return (0);

}
