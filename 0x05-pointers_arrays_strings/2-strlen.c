#include "main.h"
/**
 *_strlen - entry point
 *@s: string
 *Return: returns 0
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a++);
}
