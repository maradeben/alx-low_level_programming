#include "main.h"

/**
 * _strcpy - strcpy analog
 * Description: copies a string into another
 * @dest: the copy
 * @src: the source (original)
 * Return: bointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
