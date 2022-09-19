#include "main.h"

/**
 * print_rev - reverse
 * Description: prints a string in reverse
 * @c: string to reverse
 * Return: void returns none
 */

void print_rev(char *c)
{
	int i = 0, count = 0;

	/* first get length of string */
	while (c[count] != '\0')
		count++;
	i = count - 1;

	/*print in reverse */
	while (i >= 0)
	{
		_putchar(c[i]);
		i--;
	}
	_putchar('\n');
}
