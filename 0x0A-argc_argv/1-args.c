#include <stdio.h>
/**
 * main - this program prints the name of the argument passed to it
 * @argc: argument counter
 * @argv: argument name
 * Return: 0 for sucess
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%d\n", argc);
	}
	return (0);
}
