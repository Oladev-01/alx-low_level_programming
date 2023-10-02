#include <stdio.h>
#include <stdlib.h>
/**
 * main - this program prints the name of the argument passed to it
 * @argc: argument counter
 * @argv: argument name
 * Return: 0 for sucess
 */
int main(int argc, char *argv[])
{
	int a, sum = 0;
	int n;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			n = atoi(argv[a]);
			if (n <= 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += n;
		}
		printf("%d\n", sum);
	}
	return (0);
}
