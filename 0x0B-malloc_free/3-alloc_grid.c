#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - malloc for 2D grid
 * @width: of grid
 * @height: of grid
 * Return: pointer to the 2D grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a = malloc(sizeof(int *) * height);

	if (width < 0 || height < 0 || a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
			if (a[i] == NULL)
				return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
