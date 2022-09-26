#include "main.h"

/**
 * _memcpy - memcpy analog
 * @dest: copy to here
 * @src: copy from here
 * @n: number of places to copy
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
