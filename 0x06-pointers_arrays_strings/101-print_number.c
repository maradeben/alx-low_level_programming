#include <stdio.h>
#include "main.h"

/**
 * print_number - short program
 * @n: number to print
 * Return: no return
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
