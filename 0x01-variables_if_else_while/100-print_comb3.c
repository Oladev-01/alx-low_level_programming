#include <stdio.h>

/**
 * main - this function prints the combination of two possible numbers
 *
 * Return: should return 0 for success
 *
 */
int main(void)

{
	int w, x;

	for (w = 0; w < 9; w++)
	{
		for (x = w + 1; x <= 9; x++)
	{
		putchar(w + '0');
		putchar(x + '0');
		if (w != 8 || x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
			putchar('\n');

	return (0);

}


