#include "variadic_functions.h"
/**
 *sum_them_all - this function takes unspecified number
 * of arguments and adds them
 * @n: this is the fixed argument of type unsigned int
 *Return: the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i <= n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
