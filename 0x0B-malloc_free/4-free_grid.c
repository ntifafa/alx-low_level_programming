#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid of 3-alloc_grid.c
 * @grid: grid to be freed
 * @height: rows of grid
 * Return: Nothing
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
