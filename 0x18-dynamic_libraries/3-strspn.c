#include "main.h"
#include <string.h>
/**
 *_strspn - entry function
 *@s: string to check for the length of similar characters in accept
 *@accept: the string whic i will be checking for the length
 *of its similar characters in s
 *Return: returns length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int elem, index;
	unsigned int count = 0;
	unsigned int len_s = strlen(s);
	unsigned int len_a = strlen(accept);

	for (index = 0; index < len_s; index++)
	{
		for (elem = 0; elem < len_a; elem++)
		{
			if (s[index] == accept[elem])
			{
				count++;
				break;
			}
		}
		if (accept[elem] == '\0')
		{
			break;
		}
	}
	return (count);
}
