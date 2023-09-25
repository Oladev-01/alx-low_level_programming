#include "main.h"
/**
 *_strchr - entry function
 *@s: string
 *@c: character variable
 *Return: the first occurence of character
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (index >= '\0')
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
		index++;
	}
	return (0);
}
