#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - this is the entry point which takes
 * a string as argument to the file and
 * executes corresponding function to the argument parsed
 *@argc: this is the number of arguments passed to the executable
 *@argv: this is the string passed
 *Return: an integer value
 */
int main(int argc, char *argv[])
{
	int num_1, num_2;
	char *op;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	op = argv[2];

	ptr = get_op_func(op);

	if (ptr)
	{
		int hold;

		hold = ptr(num_1, num_2);
		printf("%d\n", hold);
	}

	return (0);
}
