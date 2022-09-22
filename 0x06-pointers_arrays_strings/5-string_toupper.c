#include "main.h"

/**
 * string_toupper - convert all lowercase to upper
 * @s: string to convert
 * Return: converted
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}

	s[i] = '\0';

	return (s);
}
