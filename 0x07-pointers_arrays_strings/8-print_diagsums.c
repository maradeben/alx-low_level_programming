#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print diagonal sums
 * @a: the array
 * @size: of array
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i, r, c;
	int diag1 = 0, diag2 = 0;

	/* first diag */
	for (i = 0; i < size; i++)
		diag1 += *(a + (i * size) + i);

	/* second diag */
	for (r = 0, c = size - 1; r < size; r++, c--)
		diag2 += *(a + (r * size) + c);

	/* print results */
	printf("%d, %d\n", diag1, diag2);
}
