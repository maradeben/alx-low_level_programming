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
	int i, j, k;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}

	if (i == 0)
		_putchar('\n');
}
