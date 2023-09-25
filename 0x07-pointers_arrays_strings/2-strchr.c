#include "main.h"
/**
 *_strchr - entry function
 *@s: string
 *@c: character variable
 *Return: the first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s++);
		}
		s++;
	}
	return (0);
}

