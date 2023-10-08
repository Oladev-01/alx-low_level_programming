#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - this function concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the string length of s2
 * Return: the memory allocated to the pointer to theconcatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_2 = strlen(s2), a, b;
	unsigned int len_1 = strlen(s1);
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	str = malloc((len_2 + len_1 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len_1; a++)
	{
		str[a] = s1[a];
	}

	if (n >= len_2)
	{
		for (b = 0; b < len_2; b++)
		{
			str[len_1] = s2[b];
			len_1++;
		}
	}
	if (n < len_2)
	{
		for (b = 0; b < n; b++)
		{
			str[len_1] = s2[b];
			len_1++;
		}
	}
	str[len_1] = '\0';
	return (str);
}
