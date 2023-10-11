#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this function takes a string and
 * a pointer to a function as arguments.
 * the pointer to a function points to a void function which takes
 * a string as argument as prints the strinbg followed by a new line
 *@name: the string to be parsed into the function to be printed.
 * also parsed into the function the pointer (f) is pointing to
 *@f: the pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
