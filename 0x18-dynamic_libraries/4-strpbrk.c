#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - similar to std strpbrk
 * @s: search this string
 * @accept: find match here
 * Return:pointer to first match of s in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*s == *(accept + j))
				return (s);
		}
	}
	return (NULL);
}
