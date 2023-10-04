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
	char *cat;
	int a, b, len_dest, len_src;

	len_dest = strlen(dest);
	len_src = strlen(src);
	for (a = 0; a < len_dest; a++)
	{
		cat[a] = dest[a];
	}
	for (b = 0; b < len_src; b++)
	{
		cat[len_dest] = src[b];
		len_dest++;
	}
	cat[len_dest] = '\0';
	return (cat);
}
