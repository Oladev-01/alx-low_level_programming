#include "main.h"
/**
 *print_most_numbers - entry point
 *
 *Return: return 0
 */
 void print_most_numbers(void) 
{
  int a;
  
  for (a = 0; a <= 9; a++)
  {
    if (a != 2 && a != 4)
    putchar(a + '0');
  }
  putchar('\n');
  return 0;
}