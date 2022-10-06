#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloc analog
 * @ptr: pointer to previous memory
 * @old_size: space allocated for ptr
 * @new_size: size of new memory block
 * Return: ptr to memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min;
	char *new_ptr, *str;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
		min = new_size;
	else
		min = old_size;

	str = malloc(new_size);
	if (str == NULL)
		return (NULL);
	new_ptr = ptr;
	for (i = 0; i < min; i++)
		str[i] = new_ptr[i];
	free(ptr);
	return (str);
}
