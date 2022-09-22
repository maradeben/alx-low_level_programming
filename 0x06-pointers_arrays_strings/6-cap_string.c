#include "main.h"


int in_list(int item, char list[]);

/**
 * cap_string - cap all words of string
 * @s: the string
 * Return: capped
 */

char *cap_string(char *s)
{
	int i, c = 0;
	char list[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"',
		'(', ')', '{', '}'};

	/* capitalize first char if letter */
	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		c = in_list(s[i - 1], list);
		if (c == 1 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	s[i] = '\0';

	return (s);
}

/**
 * in_list - check if item is in array
 * @item: to be checked
 * @list: the array of word separators
 * Return: 1 if True, 0 otherwise
 */

int in_list(int item, char list[])
{
	int i;

	for (i = 0; i < 12; i++)
	{
		if (list[i] == item)
			return (1);
	}

	return (0);
}
