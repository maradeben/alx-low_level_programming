#include "main.h"

/**
 * swap_int - swapper
 * Description: swaps values of two ints
 * @a: first vas
 * @b: second var
 * Return: void returns none
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
