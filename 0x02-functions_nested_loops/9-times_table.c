#include "main.h"
/**
 *times_table - this is the entry point
 *
 *Return: should return null
 *
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int c = a * b;
			{
				if (c > 9)
