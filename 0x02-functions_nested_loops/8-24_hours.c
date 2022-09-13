#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - check last digit
 * Description: computes last digit of number
 * @n: a number
 * Return: returns last digit of number
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i <= 9)
				_putchar('0');
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
		}
	}
}
