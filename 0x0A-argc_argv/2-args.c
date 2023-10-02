#include <stdio.h>
/**
 * main - this program prints the name of the argument passed to it
 * @argc: argument counter
 * @argv: argument name
 * Return: 0 for sucess
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc >= 1)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);
}
