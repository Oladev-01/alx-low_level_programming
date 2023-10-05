#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function returns no. of cents for a change
 * @argc: number of arguments
 * @argv: change to get the number of cents
 * Return: the number of coins
 */
int main(int argc, char *argv[])
{
	int num, hold;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num < 0)
		{
			printf("0\n");
			return (0);
		}
		if (num >= 25)
		{
			hold = num / 25;
			num = num % 25;
		}
		if (num >= 10)
		{
			hold = hold + (num / 10);
			num = num % 10;
		}
		if (num >= 5)
		{
			hold = hold + (num / 5);
			num = num % 5;
		}
		if (num >= 2)
		{
			hold = hold + (num / 2);
			num = num % 2;
		}
		hold = hold + num;
		printf("%d\n", hold);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
