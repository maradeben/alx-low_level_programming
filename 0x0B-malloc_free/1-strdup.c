#include "main.h"
#include <stdlib.h>

/**
 * _strdup - strdup analog
 * @str: string to copy
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int l = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	copy = malloc(sizeof(char) * (l + 1));
	if (copy == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';

	return (copy);
}
