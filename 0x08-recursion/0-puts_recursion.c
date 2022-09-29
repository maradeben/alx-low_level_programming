#include "main.h"

/**
 * _puts_recursion - puts analog
 * @s: the string to print
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
