#include "main.h"
#define BUFF_SIZE 1024
/**
 * main - this is the main function
 *@ac: this is the number of arguments passed
 *@av: this is the argument passed
 *Return: 0 in success
 */
int main(int ac, char **av)
{
	const char *file_from, *file_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	cpy(file_from, file_to);
	return (0);
}

/**
 * cpy - this functions copy from file_from to file_to
 *@file_from: this is the file to be copied from
 *@file_to: the file copying into
 *Return: void
 */
void cpy(const char *file_from, const char *file_to)
{
	int from_s, to_dest;
	char buffer[BUFF_SIZE];
	ssize_t num;

	from_s = open(file_from, O_RDONLY);
	if (from_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	to_dest = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (to_dest == -1)
	{
		close(from_s);
		handle_no_read(file_to);
	}
	while ((num = read(from_s, buffer, sizeof(buffer))) > 0)
	{
		if (write(to_dest, buffer, num) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(from_s);
			close(to_dest);
			exit(99);
		}
	}
	if (num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(from_s);
		close(to_dest);
		handle_no_read(file_to);
	}
	chmod(file_to, 0664);
	handle_close(from_s, to_dest);
}

/**
 * handle_close - this function handles closing error
 *@from_s: the pointer to the file file_from
 *@to_dest: the pointer to the file file_to
 *Return: void
 */
void handle_close(int from_s, int to_dest)
{
	if (close(from_s) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", close(from_s));
		exit(100);
	}
	if (close(to_dest) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", close(to_dest));
		exit(100);
	}
}

/**
 * handle_no_read - Handle the case where
 * the destination file lacks read permission
 * @file_to: the destination file
 *Return: void
 */
void handle_no_read(const char *file_to)
{
	struct stat check;

	if (stat(file_to, &check) == 0 && (check.st_mode & S_IRUSR))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	else
	{
		exit(0);
	}
}
