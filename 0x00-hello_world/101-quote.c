#include <stdio.h>
#include <unistd.h>
/**
 * main - this function is one that returns output to standard error
 *
 * Return: always return 1
 */
int main(void)
{
	 const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; write(2, message, 59);
	     return (1);

}
