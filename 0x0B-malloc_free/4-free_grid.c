#include "main.h"
#include <stdlib.h>
/**
 *free_grid - this program frees previously alloocated space for 2D array
 * @grid: pointer to the 2D array
 * @height: row section of the 2D array
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
