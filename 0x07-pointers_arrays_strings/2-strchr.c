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
	char *ptr = '\0';

	for (i = 0; i != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			ptr = (s + i);
			break;
		}
	}

	return (ptr);
}
