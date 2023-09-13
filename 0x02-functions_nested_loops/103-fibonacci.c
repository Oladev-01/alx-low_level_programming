#include <stdio.h>
/**
 *main - entry
 *less than 4,000,000
 *
 *Return: 0
 */
int main(void)
{
	int a = 0;
	long b = 1, c = 2, plus = c;

	while (c + b < 4000000)
	{
	c = c + b;
	if (c % 2 == 0)
	plus = plus + c;
	b = c - b;
	a++;
	}
	printf("%ld\n", plus);
	return (0);
}
