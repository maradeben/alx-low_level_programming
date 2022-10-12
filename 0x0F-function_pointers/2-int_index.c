#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - get index of array whose value matches a condition
 * @array: of numbers
 * @size: of array
 * @cmp: the comparing function
 * Return: the index of first match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
