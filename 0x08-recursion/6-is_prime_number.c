#include "main.h"
/**
*is_prime_helper - entry function
* @n : number to check if it is a prime number
* @divide: checking if it is a divisor of n
* Return: the prime number
*/
int is_prime_helper(int n, int divide)
{
	if (n < 2)
		return (0);


	if (n == 2)
		return (1);

	if (n % divide == 0)
		return (0);


	if (divide * divide > n)
		return (1);
	return (is_prime_helper(n, divide + 1));
}
/**
* is_prime_number - entry function
* @n: prime number
* Return: prime number
*/
int is_prime_number(int n)
{

	return (is_prime_helper(n, 2));
}

