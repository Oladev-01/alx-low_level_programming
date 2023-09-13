#include "main.h"
/**
 *add - this is my entry point
 *@a: first integer
 *@b: second integer
 *Return: returns 0 for success
 */
int add(int a, int b)
{
	int sum = a + b;

	a = a % 10;
	b = b % 10;

	_putchar(sum + '0');
	return (sum);
}

