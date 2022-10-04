#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D grid
 * @grid: the grid
 * @height: of grid
 * Return: void returns none
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
