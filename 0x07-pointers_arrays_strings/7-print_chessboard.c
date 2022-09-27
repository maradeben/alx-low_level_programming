#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array
 * Return: None
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < sizeof(a[i]); j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
