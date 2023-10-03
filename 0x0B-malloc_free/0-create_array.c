#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - this function will be allocating memory
 * for undefined size of char array
 * @size: this is the size of the char array
 * @c: this the char array name
 * Return: a char type array
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a = 0;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (a <= size - 1)
	{
		str[a] = c;
		a++;
	}
	str[a] = '\0';
	return (str);
}
