#include <stdio.h>
/**
 *main - entry
 *Return: 0
 */
int main(void)
{
	int a = 0;
	long j = 1, c = 2;

	while (a < 50)
	{
	if (a == 0)
	printf("%ld", j);
	else if (a == 1)
	printf(", %ld", c);
	else
	{
	c = c + j;
	j = c - j;
	printf(", %ld", c);
	}
	a++;
	}
	printf("\n");
	return (0);
}
