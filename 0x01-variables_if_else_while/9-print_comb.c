#include <stdio.h>
/**
 * main - this function prints all the combination of single digit number-
 * starting from 0
 *
 * Return: must return 0 for success
 *
 */

int main(void)

{

	int i = 0;

	while (i <= 9)

	{
		putchar(i + '0');
		i++;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);

}
