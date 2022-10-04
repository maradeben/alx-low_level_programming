#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: of array
 * @c: initializing char
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size <= 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	while (size--)
		s[size] = c;

	return (s);
}
