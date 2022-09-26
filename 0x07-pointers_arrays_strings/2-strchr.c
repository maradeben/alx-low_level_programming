#include "main.h"
#include <stddef.h>

/**
 * _strchr - strchr analog
 * @s: search this string
 * @c: for this charncter
 * Return: pointer to address of c or NULL if absent
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (*(s + i) != '\0')
		i++;
	for (j = 0; j <= i; j++, s++)
		if (*s == c)
			return (s);

	return (NULL);
}
