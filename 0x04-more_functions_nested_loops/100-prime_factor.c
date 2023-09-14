#include <stdio.h>
/**
 *main - this is the entry point
 *Return: returns 0
 */
int main(void)
{
	long int num = 612852475143;
	long int start_divide = 2;
	long int factor;

	while (num > 1)
	{
		if (num % start_divide == 0)
		{
			factor = start_divide;
			num = num / start_divide;
		}
		else
		{
			start_divide++;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
