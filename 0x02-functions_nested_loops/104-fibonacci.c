#include <stdio.h>
/**
 *main - entry function
 * prgram to print first 98 fibonnaci number
 * Return: 0 for success
 */
int main(void)
{
	int a;
	unsigned long b = 0, c = 1, sum, d, e, f, g, h, i;

	for (a = 0; a < 92; a++)
	{
		sum = b + c;
		printf("%lu, ", sum);
		b = c;
		c = sum;
	}
	d = b / 10000000000;
	f = c / 10000000000;
	e = b % 10000000000;
	g = c % 10000000000;
	for (a = 93; a < 99; a++)
	{
		h = d + f;
		;
		i = e + g;
		if (e + g > 9999999999)
		{
			h += 1;
			i %= 10000000000;
		}
		printf("%lu%lu", h, i);
		if (a != 98)
			printf(", ");
		d = f;
		e = g;
		f = h;
		g = i;
	}
	printf("\n");
	return (0);
}
