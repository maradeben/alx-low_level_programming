#include <stdio.h>
#include "main.h"

/**
 * print_line - short program
 * Description: print a line n * '_' long
 * @n: length of line
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
