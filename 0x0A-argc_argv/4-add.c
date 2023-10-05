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
	int i, a, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *ptr;

		ptr = argv[i];
		for (a = 0; ptr[a] != '\0'; a++)
		{
			if (ptr[a] < 48 || ptr[a] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(ptr);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
