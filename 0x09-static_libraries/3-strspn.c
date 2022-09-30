#include "main.h"

/**
 * _strspn - _strspn analog
 * @s: search te string
 * @accept: string with characters to check
 * Return: number of matches
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0' && *(s + j) != ' '; j++)
		{
			if (*(accept + i) == *(s + j))
				count++;
		}
	}

	return (count);
}
