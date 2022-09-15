#include <stdio.h>
#include "main.h"

/**
 * print_triangle - short program
 * Description: print a triangle
 * @size: length of triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (k = 0; k < 1; k++)
			_putchar('#');
		_putchar('\n');
	}

	if (i == 0)
		_putchar('\n');
}
