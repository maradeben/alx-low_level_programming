#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array of integers
 * @n: length of array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int half = n / 2;
	int start = 0;
	int end = n - 1;
	int temp;

	for ( ; start < half; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}
