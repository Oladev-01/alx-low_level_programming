#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - this function concatenates two strings, allocating
 *memory to the concatenated string
 *@s1: the original string
 *@s2: the string to copy from and concatenate to s1
 * Return: the string content of s1 which contains the string of s2 after it
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, a = 0, b = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	s3 = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	while (a < len_s1)
	{
		s3[a] = s1[a];
		a++;
	}
	while (b < len_s2)
	{
		s3[len_s1] = s2[b];
		len_s1++;
		b++;
	}
	s3[len_s1] = '\0';
	return (s3);
}
