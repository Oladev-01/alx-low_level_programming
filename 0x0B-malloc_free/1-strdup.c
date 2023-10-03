#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - this function retrurns a pointer to a char
 *  array and copying the string of the array in the parameter
 * to the memory allocated for the declared char array
 * @str: string to be copied, i.e the string in the parameter
 * Return: should return the string pointed with the
 * content of string in parameter
 */
char *_strdup(char *str)
{
	int len;
	int a = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	s = (char *)malloc((len + 1) * sizeof(*str));
	if (s == NULL)
	{
		return (NULL);
	}
	while (a < len)
	{
		s[a] = str[a];
		a++;
	}
	return (s);
}
