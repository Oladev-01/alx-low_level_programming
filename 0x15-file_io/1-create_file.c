#include "main.h"
/**
 * create_file - this function sets creates a new file, if it exists,
 * it truncates the content of the file and set the permission
 * to read and write only for the user
 *@filename: the file to be created
 *@text_content: the string to be copied into filename
 *Return: 1 for success, -1 for function fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_op, len;
	ssize_t num;

	if (filename == NULL)
		return (-1);
	file_op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_op == -1)
		return (-1);
	if (text_content == NULL)
		text_content = " ";
	len = strlen(text_content);
	num = write(file_op, text_content, len);
	close(file_op);
	if (num == -1)
		return (-1);
	return (1);
}
