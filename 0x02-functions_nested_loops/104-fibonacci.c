#include <stdio.h>
/**
 *main - entry function
 * prgram to print first 98 fibonnaci number
 * Return: 0 for success
 */
int main(void)
{
	int a = 1;
	int b = 2;
	unsigned int hold;
	int count = 2;

	printf("%d, %d, ", a, b);
	while (count < 98)
	{
		hold = a + b;

		if (count == 97)
		{
			printf("%u\n", hold);
		}
		else
		{
			printf("%u, ", hold);
		}

		a = b;
		b = hold;
		count++;
	}

	return (0);
}
