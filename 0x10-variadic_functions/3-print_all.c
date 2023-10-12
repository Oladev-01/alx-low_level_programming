#include "variadic_functions.h"
#include <stdbool.h>
/**
 *retformat - this function returns the character as c or i or f or s
 * @c: the chatracter variable to be returned
 *Return: void
 */
int retformat(char c)
{
	return (c == 'c' || c == 'i' || c == 'f' || c == 's');
}

/**
 * print_all - this function prints various data types
 * @format: this string contains the format(data type) of the arguments
 *Return: void
 *qun - this is the typedef for char*
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	bool comma = false;
	const char *str;

	va_start(ptr, format);

	str = format;

	while (*str)
	{
		if (retformat(*str))
		{
			if (comma)
				printf(", ");
			comma = true;
			if (*str == 'c')
			{
				int c = va_arg(ptr, int);

				printf("%c", c);
			}
			else if (*str == 'i')
				printf("%d", va_arg(ptr, int));
			else if (*str == 'f')
				printf("%f", (float)va_arg(ptr, double));
			if (*str == 's')
			{
				qun get = va_arg(ptr, qun);

				if (get == NULL)
					printf("(nil)");
				else
					printf("%s", get);
			}
		}
		str++;
	}
	printf("\n");
	va_end(ptr);
}
