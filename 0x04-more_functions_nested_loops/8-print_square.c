#include <stdio.h>
#include "main.h"

/**
 * print_square - short program
 * Description: print  square
 * @size: size of square
 * Return: no return
 */
void print_square(int size)
{
	int l, b; /* length & breadth */

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
