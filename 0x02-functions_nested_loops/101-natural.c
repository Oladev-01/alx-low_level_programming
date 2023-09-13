#include <stdio.h>
/**
 *main - entry
 *Return: 0
 */
int main(void)
{
	int a, b;

	b = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	b = b + a;
	}
	a++;
	}
	printf("%d\n",  b);
	return (0);
}
