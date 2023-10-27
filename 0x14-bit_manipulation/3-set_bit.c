#include "main.h"
#define BITS (sizeof(int) * 8)
/**
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > BITS - 1)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
