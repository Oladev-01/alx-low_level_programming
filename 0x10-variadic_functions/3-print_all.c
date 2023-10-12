#include "variadic_functions.h"
#include <stdbool.h>
/**
 * print_all - this function prints various data types
 * @format: this string contains the format(data type) of the arguments
 *Return: void
 *qun - this is the typedef for char*
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	qun str, sp = "";
	int a = 0;

	va_start(ptr, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sp, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, qun);
					if (str != NULL)
						printf("%s%s", sp, str);
					else
						printf("(nil)");
					break;
				default:
					a++;
					continue;
			}
			sp = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(ptr);
}
