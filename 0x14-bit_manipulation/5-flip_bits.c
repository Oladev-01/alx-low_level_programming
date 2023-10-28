#include "main.h"
/**
 * flip_bits - this function returns the count
 * of the distance between two numbers
 *@n: this is the first number passed
 *@m: the second number
 *Return: the count of the difference of the two numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int count = 0;

	num = n ^ m;
	while (num > 0)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
