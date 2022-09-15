#include <stdio.h>
#include "main.h"

/**
 * print_numbers - short program
 * Description: prints numbers 0-9
 * Return: no return
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
