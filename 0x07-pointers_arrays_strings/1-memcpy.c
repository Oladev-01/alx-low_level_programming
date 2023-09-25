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
	unsigned int block;

	for (block = 0; block < n; block++)
	{
		dest[block] = src[block];
		block++;
	}
	dest[block] = '\0';
	return (dest);
}
