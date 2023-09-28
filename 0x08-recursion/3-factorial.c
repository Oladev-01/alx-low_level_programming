#include "main.h"
/**
 *factorial - entry function
 *@n: number to find factorial for
 *Return: factorial
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 1)
	return (1);
	return ((n * factorial(n - 1)));
}
