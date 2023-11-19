#include <stdio.h>
/**
 * main - this program prints all the integers in base 16
 * Return: 0 on success
 */
int main(void)
{
	int c, d;

	for (c = 0; c < 16; c++)
	{
		if (c > 9)
		{
			d = c + 87;
			putchar(d);
		}
		else
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}


