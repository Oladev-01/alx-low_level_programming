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
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += (int)num;
	}

	printf("%d\n", sum);
	return (0);
}
