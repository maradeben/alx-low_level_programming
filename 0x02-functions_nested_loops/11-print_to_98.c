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
	int h, t, u; /* hundreds, tens & units */

	if (n < 0)
		_putchar('-');
	for (n; n <= 98; n++)
	{
		h = n / 100;
		t = n / 10;
		u = n % 10;

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
		if (n < 98)
		{
			_putchar(' ');
			_putchar(',');
		}
	}

}
