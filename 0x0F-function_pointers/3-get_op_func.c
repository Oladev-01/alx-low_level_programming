#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - this is a pointer to function(s)
 * that takes two integers type as parameter
 * @s: the string to be parsed which should be the operator in this sense
 *Return: a pointer to the accepted function
 */
int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}

	printf("Error\n");
	exit(99);
}
