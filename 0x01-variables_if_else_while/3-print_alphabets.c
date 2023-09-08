#include <stdio.h>
/**
 * main - this function is to print the alphabets in both lower and upper case
 *
 * Return: this should return 0 for success
 */

int main(void)
{
	char i = 'a';

	char m = 'A';

	while (i <= 'z')
	{
		putchar(i);

		i++;
	}

	while (m <= 'Z')

	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);


}

