#include <stdio.h>
/**
 * main - this function prints all alphabets in lowercase except e and q
 *
 * Return: should return 0 for success
 *
 */

int main(void)

{

	char i = 'a';

	while (i <= 'z')

	{
		if (i != 'e' && i != 'q')
		{

		putchar(i);

		}

			i++;
	}
	putchar('\n');
		return (0);

}

