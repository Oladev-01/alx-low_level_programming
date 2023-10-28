#include "main.h"
/**
 * get_endianness - this function gets the endian of an o.s
 *Return: the endian, 1 for litle
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr = (unsigned char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
		return (0);
}
