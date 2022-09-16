#include <stdio.h>
#include "main.h"

/**
 * print_number - short program
 * Description: prints numbers
 * @n: number to print
 * Return: no return
 */
void print_number(int n)
{
	int tracker = n;
	int place = 1, i, value;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		tracker *= -1;
	}

	while (tracker >= 10)
	{
		tracker /= 10;
		place *= 10;
	}

	for (i = place; i > 1;)
	{
		value = n / i;
		n %= i;
		_putchar(value + '0');
		i /= 10;
	}
	_putchar(n + '0');
	_putchar('\n');
}
