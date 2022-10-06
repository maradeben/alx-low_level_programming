#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate and check
 * @b: size of memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
