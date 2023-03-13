#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees a 2D grid previously created by your alloc_grid function
 * @grid: grid
 * @height: height of grid
 *
 * Return: 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
