#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - check last digit
 * Description: computes last digit of number
 * @n: a number
 * Return: returns last digit of number
 */
int print_last_digit(int n)
{
	int last;

	last = i % 10;
	_putchar(last + '0');
	return (last);
}
