#include "main.h"
/**
 *_memcpy - entry point
 *@dest: destination to be copied to
 *@src: copying from
 *@n: number of bytes to copy
 *Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int block = 0;
	int hold = n;

	while (block < hold)
	{
		dest[block] = src[block];
		block++;
		n--;
	}
	return (dest);
}
