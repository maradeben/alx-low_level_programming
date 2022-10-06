#include "main.h"
#include <stdlib.h>

unsigned int _strlen(char *c);

/**
 * string_nconcat - joins first n chars
 * @s1: string 1
 * @s2: string 2
 * @n: number of chars to join
 * Return: pointer to location of new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	l1 = _strlen(s1);
	if (s2 == NULL)
		s2 = "";
	l2 = _strlen(s2);
	
	if (n >= l2)
		n = l2;
	s = malloc(l1 + n + 1);

	if (s == NULL)
		return (NULL);

	while (s1[j])
	{
		s[i] = s1[j];
		i++;
		j++;
	}

	j = 0;
	while (s2[j] && j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

/**
 * _strlen - string length
 * Description: determine length of a string
 * @c: the string
 * Return: string length
 */

unsigned int _strlen(char *c)
{
	int count = 0;

	while (*(c + count) != 0)
		count++;
	return (count);
}
