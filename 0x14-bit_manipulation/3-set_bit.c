#include "main.h"
#define BITS (sizeof(int) * 8)
/**
 * set_bit - this function sets the bit at any index to 1
 *@n: this is the pointer to the number
 *@index: this is the index of the bit to be set
 *Return: 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > BITS - 1)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
