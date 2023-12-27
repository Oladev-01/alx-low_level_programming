#include "main.h"
/**
 *_strstr - entry function
 *@haystack: string to compare for substring
 *@needle: substring
 *Return: substring of 'needle' in 'haystack'
 */
char *_strstr(char *haystack, char *needle)
{
	char *hold1, *hold2;

	while (*haystack != '\0')
	{
		hold1 = haystack;
		hold2 = needle;


		while (*hold2 != '\0' && *hold1 == *hold2)
		{
			hold1++;
			hold2++;
		}

		if (*hold2 == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}
