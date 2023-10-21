#include "lists.h"
/**
 * printLinesBeforeMain - this function prints a statement
 * out before the main function
 *Return: void
 */
void printLinesBeforeMain(void) __attribute__((constructor));
void printLinesBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


