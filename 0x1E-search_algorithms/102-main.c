#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9};
    size_t size = sizeof(array) / sizeof(array[0]);
    printf("sizeof: %ld\n", size);

    printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 0, interpolation_search(array, size, 0));
    printf("Found %d at index: %d\n", 7, interpolation_search(array, size, 7));
    printf("Found this at index: %d\n", interpolation_search(NULL, 0, 0));
    return (EXIT_SUCCESS);
}