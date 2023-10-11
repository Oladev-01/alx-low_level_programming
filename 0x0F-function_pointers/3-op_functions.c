#include "3-calc.h"
/**
 * op_add - this function adds two integers
 * @a: the first integer
 *@b: the second integer
 *Return: the result of the addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function makes subtraction between two integers
 * @a: the first integer
 *@b: the second integer
 *Return: the subtraction of the integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the multiplication of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function divides a by b
 *@a: the first integer
 *@b: the second integer
 *Return: the division of the two inteer, no remainder
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - this function calculates the remainder
 * of the divisoin of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of the division of the two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
