#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array from min to max
 * @min: smallest number
 * @max: biggest
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(min) * (1 + max - min));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}
