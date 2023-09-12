#include "main.h"
/**
 *_isalpha - this is the entry point
 *
 *@c: this is the declared variable
 *
 *Return: this should return 0 for success
*/
 int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);
}
