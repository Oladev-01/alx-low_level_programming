#include "main.h"
/**
 *get_bit - this function returns the bit at an index
 *@n: this is the number passed
 *@index: this the index of the bit to be retuirned
 *Return: the bit at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num, i = n;
	unsigned int check_index = 0;

	if (i == 0)
	{
		return (0);
	}
	while (i > 0)
	{
		check_index++;
		i >>= 1;
	}
	if (index >= check_index)
		return (-1);
	num = (n >> index) & 1;
	return (num);
}
