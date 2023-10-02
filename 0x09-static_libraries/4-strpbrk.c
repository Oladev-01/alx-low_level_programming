#include "main.h"
/**
*_strpbrk - entry function
*@s: string to check for characters in 'accept'
*@accept: string to compare
*Return: first occurrence of characters in 'accept'
*/
char *_strpbrk(char *s, char *accept)
{
	char *hold;

	while (*s != '\0')
	{
		hold = accept;
		while (*hold != '\0')
		{
			if (*s == *hold)
			{
				return (s);
			}
			hold++;
		}
		s++;
	}

	return (0);
}
