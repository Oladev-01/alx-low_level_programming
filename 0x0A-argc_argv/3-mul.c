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
	int a;
	int mul = 1;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			mul *= atoi(argv[a]);
		}
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
