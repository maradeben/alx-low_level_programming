#include "main.h"

/**
 * _memset - memset analog
 * @s: the pointer
 * @b: the constant byte
 * @n: number of places to fill
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}

	return (s);
}
