#include "main.h"
/**
 * _strlen - function to return the string length
 * @s: string
 *
 *Return: length
 */
int _strlen(char *s)
/* this variable is a temp var for the first index*/
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
	s++;
	}
	return (i); /* this will return the string length*/
}
/**
 *rev_string - entry function
 *@s: string
 *
 *Return: null
 */
/* this variable is a temp var for the first index*/
void rev_string(char *s)
{
/* this variable is a temp var for the first index*/
	int len, l, a;
	char  hold; /* this variable is a temp var for the first index*/

	a = 0;
	len = _strlen(s);
	l = len - 1;

	while (a < l)
	{
		hold = s[a];
		s[a] = s[l]; /* making the swap*/
		s[l] = hold;
		a++;
		l--;
	}


}

