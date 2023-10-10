#include <stdio.h>
#include "main.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - this function prints out each word in a string 
 * @str: string to iterate through
 * Return: a pointer to the string, printing each word of the string
*/
char **strtow(char *str)
{
    char **ptr;
    int a, b;
    int len = strlen(str);
    bool word = false;

    if (str == NULL || str == "")
        return (NULL);
        ptr = malloc(sizeof(char *) * len);
    for (a = 0; a < len; a++)
    {
        ptr[a] = str[a];
    }
    ptr[a] = '\0';

    for (b = 0; ptr[b] != '\0'; b++)
    {
        if (ptr[a] == ' ')
        {
            if(word)
            {
                word = false;
                printf("\n");
            }
        }
        else
        {
            if(!word)
            {
               word = true;
            }
             printf("%c", ptr[a]);
        }
    }
    printf("\n");
}
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}