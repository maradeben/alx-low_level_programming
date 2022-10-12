#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - apply function to each element of array
 * @array: of numbers
 * @size: size of array
 * @action: the function passed
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
