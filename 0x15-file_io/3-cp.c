#include "main.h"
#define BUFF_SIZE 1024
/**
 *
 *
 *
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	char buffer[BUFF_SIZE];
	ssize_t num, a;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((num = read(file_from, buffer, BUFF_SIZE)) > 0)
	{
		if (write(file_to, buffer, num) == -1)
		{
			close(file_from);
			close(file_to);
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (num == -1)
	{
		close(file_from);
		close(file_to);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close(file_from);
	close(file_to);
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close file_from %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close file_from %d\n", file_to);
		exit(100);
	}
	return (0);
}
