#include <stdio.h>
#include "main.h"

/**
 * _abs - abs converting function
 * Description: converts num to absolute
 * @n: a number
 * Return: absolute value of number
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
