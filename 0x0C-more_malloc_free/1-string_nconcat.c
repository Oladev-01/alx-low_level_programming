#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - this function concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the string length of s2
 * Return: the memory allocated to the pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *str;
	unsigned int i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;


	if (n >= len2)
		n = len2;


	str = (char *)malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		str[i] = s1[i];


		str[i + j] = s2[j];


	str[i + j] = '\0';

	return (str);
}
