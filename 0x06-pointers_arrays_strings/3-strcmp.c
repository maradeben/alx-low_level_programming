#include "main.h"

/**
 * _strcmp - strcmp analog
 * Description: cmpare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the joined string
 */

int _strcmp(char *s1, char *s2)
{
	int i, l1 = 0, l2 = 0;


	while (*(s1 + l1) != '\0')
		l1++;
	while (*(s2 + l2) != '\0')
		l2++;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] <  s2[i] || l1 < l2)
			return (-15);
		else if (s1[i] >  s2[i] || l1 > l2)
			return (15);
	}

	return (0);
}
