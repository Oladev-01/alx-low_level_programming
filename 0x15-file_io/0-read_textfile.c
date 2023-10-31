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
	int file_op;
	ssize_t num, a;
	char *str;

	if (filename == NULL)
		return (0);
	file_op = open(filename, O_RDONLY);
	if (file_op == -1)
		return (0);
	str = malloc(letters);
	if (str == NULL)
	{
		close(file_op);
		return (0);
	}
	num = read(file_op, str, letters);
	close(file_op);
	if (num == -1)
	{
		free(str);
		return (0);
	}
	a = write(STDOUT_FILENO, str, num);
	if (num != a)
	return (0);
	return (a);
}
