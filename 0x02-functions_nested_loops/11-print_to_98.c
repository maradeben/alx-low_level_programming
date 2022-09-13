#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - count up
 * Description: print from given number to 98
 * @n: integer parameter
 * Return: void returns none
 */
void print_to_98(int n)
{
	int i, h, t, u; /* hundreds, tens & units */

	if (n < 0)
		_putchar('-');
	for (i = n; i <= 98; i++)
	{
		h = i / 100;
		t = i / 10;
		u = i % 10;

		if (h != 0)
		{
			if (h < 0)
				h *= -1;
			_putchar(h + '0');
		}
		if (t != 0)
		{
			if (t < 0)
				t *= -1;
			_putchar(t + '0');
		}
		if (u != 0)
		{
			if (u < 0)
				u *= -1;
			_putchar(u + '0');
		}
		if (i < 98)
		{
			_putchar(' ');
			_putchar(',');
		}
	}

}
