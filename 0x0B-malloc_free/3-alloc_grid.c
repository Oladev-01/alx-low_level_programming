#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - this function returns pointer to a 2D array
 * @width: the width of the array
 * @height: heighht of the array
 * Return: a pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, a, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = (int *)malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (j = 0; j < a; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			ptr[a][k] = 0;
		}
	}
	return (ptr);
}
