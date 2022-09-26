#include "main.h"

/**
 * _strchr - strchr analog
 * @s: search this string
 * @c: for this charncter
 * Return: pointer to address of c or NULL if absent
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
