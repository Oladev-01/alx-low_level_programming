#include "variadic_functions.h"
/**
 * print_strings - this function prints strings passsed as arguments
 * @separator: the string that separates each strings
 * @n: the number of string to be printed
 *qun - this is the typedef for char*
 *ola - this is the typedef for unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	ola i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		qun s = va_arg(ptr, qun);

		if (s == NULL)
			printf("(nil)");
		else
		printf("%s", s);
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);

}
