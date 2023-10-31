#include "main.h"
/**
 * append_text_to_file - this function appends string to a new file
 * @filename: this is the file
 * @text_content: the string to be appended to the file
 *Return: 1 for success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_op, len;
	ssize_t num;

	if (filename == NULL || text_content == NULL)
		return (-1);
	file_op = open(filename, O_WRONLY | O_APPEND);
	if (file_op == -1)
		return (-1);
	len = strlen(text_content);
	num = write(file_op, text_content, len);
	close(file_op);
	if (num == -1)
		return (-1);
	return (1);
}
