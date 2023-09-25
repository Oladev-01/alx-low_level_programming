#include "main.h"
/**
*_memset - entry point of my local function
*@s: pointer to a char type
*@b: variable of constant value
*@n: memory of block to be filled
*with value of variable b
*Return: returns character value
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int block;

	for (block = 0; block <= (n - 1); b++)
	{
		s[block] = b;
	}
	return (s);
}
