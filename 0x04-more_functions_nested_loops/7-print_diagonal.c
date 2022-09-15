#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - short program
 * Description: print a line n * '\' long
 * @n: length of line
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <=  i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
