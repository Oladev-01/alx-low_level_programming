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
	int num, a, count = 0;
	int str[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		num = atoi(argv[1]);
		if (num < 0)
		{
			printf("0\n");
			return (0);
		}
			for (a = 0; a < 5; a++)
			{
				while (num >= str[a])
				{
					num -= str[a];
					count++;
				}
			}
			printf("%d\n", count);
		return (0);
}
