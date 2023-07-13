#include "search_algos.h"

/**
 * binary_search - implement
 * @array: to search
 * @size: of the array
 * @value: to search for
 * Return: index of value, 1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		middle = (int)((left + right) / 2);

		if (value < array[middle])
			right = middle - 1;
		else if (value > array[middle])
			left = middle + 1;
		else
			return (middle);
	}

	return (-1);
}
