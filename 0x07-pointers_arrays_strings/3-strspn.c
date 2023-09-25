#include "main.h"
/**
*_strspn - entry function
*@s: string to check for the length of similar characters in accept
*@accept: the string whic i will be checking for the length
*of its similar characters in s
*Return: returns length
*/
unsigned int _strspn(char *s, char *accept)

{

	unsigned int len = 0;

	char *hold;

	while (*s != '\0')
	{
		hold = accept;
		while (*hold != '\0')
		{
			if (*s == *hold)
			{
				len++;
				break;
			}
			hold++;
		}
		if (*hold == '\0')
		{
			break;
		}
		s++;
	}
return (len);
}
