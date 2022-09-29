#include "main.h"

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
