#include "main.h"
#include <string.h>
/**
 * _strcat - this function concatenates a string to another string
 * @dest: destination string to be concatenated into
 * @src: source string to concatenate from
 * Return: should return the string copy of dest and src
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int len_dest, len_src;
	char *ptr;
	ptr = dest;
	
	len_dest = strlen(dest);
	len_src = strlen(src);

	for (a = 0; a < len_src; a++)
	{
		dest[len_dest] = src[a];
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (ptr);
}
