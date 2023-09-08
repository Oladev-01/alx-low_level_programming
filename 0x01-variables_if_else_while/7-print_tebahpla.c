#include <stdio.h>

/**
 * main - this function prints alphabets in lowercase and in reverse
 *
 * Return: should return 0 for success
 *
 */

int main(void)

{

	char i = 'z';

	while ('a' <= i)

	{
		putchar(i);

		i--;

	}

	putchar('\n');

	return (0);

}
