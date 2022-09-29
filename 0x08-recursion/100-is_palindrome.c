#include "main.h"

int is_pal(char *s, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks palindrome
 * @s: the string
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (is_pal(s, l - 1));
}

/**
 * _strlen_recursion - strlen analog
 * @s: the string to get length
 * Return: total length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}

/**
 * is_pal - helper function
 * @s: the string
 * @l: length of string
 * Return: 1 if pal, otherwise
 */
int is_pal(char *s, int l)
{
	if (s[0] != s[l])
		return (0);
	else if (l <= 1)
		return (1);
	else
		return (is_pal(++s, l - 2));
}
