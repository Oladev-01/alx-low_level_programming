#include "main.h"
/**
 *_atoi - entry function
 *@s: string to be printed
 *Return: returns the integer from the string
 */
int _atoi(char *s)
{
	int a = 0, sign = 1, integer = 0;
	unsigned int result = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			sign *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			integer = 1;
			result = (result * 10) + (s[a] - '0');
			a++;
		}
		if (integer == 1)
		{
			break;
		}
		a++;
	}
	return (result * sign);
}
