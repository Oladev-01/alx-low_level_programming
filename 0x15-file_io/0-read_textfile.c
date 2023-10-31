#include "main.h"
/**
 * read_textfile - this fucntion reads the content
 * of a file to standard putput and retuns
 * the number of characteers printed
 *@filename: this is the file to be read
 *@letters: this is the count of the letters to e read
 *Return: the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = NULL;
	ssize_t num = 0;
	size_t i = 0, a;
	char *str, ch;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	str = malloc(letters);
	if (str == NULL)
	{
		fclose(fp);
		return (0);
	}
	while ((ch = getc(fp)) != EOF && i < letters)
	{
		str[i] = ch;
		i++;
		num++;
	}
	a = write(1, str, letters);
	if (a != letters)
	{
		fclose(fp);
		return (0);
	}
	fclose(fp);
	return (num);

}

