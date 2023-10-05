#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number count for arguments passed
 * @argv: the arguments passed
 * Return: should return the minimum number of coins for that change
 */
int main(int argc, char **argv)
{
	int a, num, hold;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
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
	}
	hold = hold + num;
	printf("%d\n", hold);
	return (0);
}
