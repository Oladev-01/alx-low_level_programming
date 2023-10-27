#include "main.h"
#define BITS (sizeof(int) * 8)
/**
 *get_bit - this function returns the bit at an index
 *@n: this is the number passed
 *@index: this the index of the bit to be retuirned
 *Return: the bit at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > BITS - 1)
		return (-1);
	num = (n >> index) & 1;
	return (num);
}
