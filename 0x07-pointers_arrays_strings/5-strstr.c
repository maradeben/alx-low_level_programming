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
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			char *ptr = haystack;

			while (*needle != '\0' && *haystack != '\0'  && *haystack == *needle)
			{
				haystack++;
				needle++;
			}
			if (*(haystack) == *(needle))
				return (ptr);
		}

	}

	return (NULL);
}
