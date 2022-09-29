#include "main.h"

int _sqrt(int n, int g);

/**
 * _sqrt_recursion - find sqrt
 * @n: number to find
 * Return: sqrt of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt(n, 0));
}

/**
 * _sqrt - helper
 * @n: the number
 * @g: guess
 * Return: the sqrt
 */

int _sqrt(int n, int g)
{
	if (g * g == n)
		return (g);
	else if (g * g < n)
		return (_sqrt(n, g + 1));
	else
		return (-1);
}
