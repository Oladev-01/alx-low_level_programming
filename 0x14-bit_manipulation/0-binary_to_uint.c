#include "main.h"
/**
 * binary_to_uint - this function converts a string
 * of num (0,1) to unsigned int
 * @b: this is the string
 *Return: the converted string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, a = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		a = (a << 1) | (b[i] - '0');
	}
	return (a);
}
