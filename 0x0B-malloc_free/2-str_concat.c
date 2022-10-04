#include "main.h"
#include <stdlib.h>

/**
 * str_concat - strcat analog
 * @s1: string one
 * @s2: string two
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *joined;
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	joined = malloc(sizeof(char) * (l1 + l2 + 1));
	if (joined == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';

	return (joined);
}
