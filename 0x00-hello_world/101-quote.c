#include <stdio.h>
#include <unistd.h>
/**
 * main - this function is one that returns output to standard error
 *
 * Return: always return 1i
 */
int main(void)
{

	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
