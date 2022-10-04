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

	if (width <= 0 || height <= 0 || a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
