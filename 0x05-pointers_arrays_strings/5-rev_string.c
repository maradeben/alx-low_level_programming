#include "main.h"

/**
 * rev_string - reverse
 * Description: prints a string and its  reverse
 * @s: string to reverse
 * Return: void returns none
 */

void rev_string(char *s)
{
	int i = 0, count = 0, j = 0;
	char temp;

	/* first get length of string */
	while (s[count] != '\0')
	{
		count++;
	}
	i = count - 1;

	/*print in reverse */
	while (i >= (count / 2))
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
