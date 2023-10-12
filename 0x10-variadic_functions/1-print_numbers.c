#include "variadic_functions.h"
/**
 * print_numbers - this function prints a string as well as
 * the integers passed as arguments
 *@separator: this is the string to be printed
 *@n: the first integer
  * ola - this is the typedef for unsigned int
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	ola a;

	va_start(ptr, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ptr, ola));
		if (a != n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ptr);
}
