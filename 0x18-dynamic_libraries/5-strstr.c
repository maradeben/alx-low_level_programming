#include "main.h"
#include <stddef.h>

/**
 * _strstr - strstr analog
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to start of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	for (; *haystack != '\0'; haystack++)
	{
		i = 0;

		if (*(haystack + i)  == *(needle + i))
		{
			do {
				if (*(needle + i + 1) == '\0')
					return (haystack);
				i++;
			} while (*(haystack + i) == *(needle + i));
		}
	}

	return (NULL);
}
