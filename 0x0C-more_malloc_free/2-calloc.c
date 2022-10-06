#include <stdlib.h>
#include "main.h"

/**
 * _calloc - calloc analog
 * @nmemb: num of elements in array
 * @size: size of each element
 * Return: pointer to allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
