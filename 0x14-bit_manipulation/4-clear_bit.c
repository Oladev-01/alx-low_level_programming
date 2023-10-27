#include "main.h"
#define BITS (sizeof(int) * 8)
/**
 * clear_bit - this function unsets the bit at given index
 *@n: this is the pointer to the number
 *@index: the given index
 *Return: 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > BITS - 1)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
