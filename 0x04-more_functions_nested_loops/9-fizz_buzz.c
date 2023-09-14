#include <stdio.h>
/**
 *main - entry point
 *
 *Return: return 0 for success
 */
int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
	if (a % 10 == 3)
	{
		printf("Fizz ");
	}
	else if (a % 10 == 5)
	{
		printf("Buzz ");
	}
	else if (a % 10 == 3 && a % 10 == 5)
	{
		printf("FizzBuzz ");
	}
	else
	{
		printf("%d ", a);
	}
	}
	printf("\n");
	return (0);
}
