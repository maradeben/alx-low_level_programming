#include "search_algos.h"

/**
 * linear_search - implement linear search algo
 * @array: pointer to array to be searched
 * @size: number of elements in array
 * @value: value to be searched
 * Return: index of value if found, or -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
