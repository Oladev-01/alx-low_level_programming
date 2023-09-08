#include <stdio.h>
/**
 * main - this function is for printing alphabets
 *
 * Return: will return 0 for success
 */

int main(void)
{
	int i;

	i = 'a';

	while (i <= 'z')

	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
