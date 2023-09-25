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
	unsigned int block = 0;

	while (block < n)
	{
		dest[block] = src[block];
		block++;
		n--;
	}
	dest[block] = '\0';
	return (dest);
}
