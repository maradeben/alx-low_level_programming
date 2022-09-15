#include "main.h"

/**
 * print_square - Draws square
 * Description: draw square of size * size
 * @size: size of square
 * Return: no return
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
