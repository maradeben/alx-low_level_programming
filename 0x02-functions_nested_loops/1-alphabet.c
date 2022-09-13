#include <stdio.h>
#include "main.h"

/**
 * main - short program
 * Description: prints alphabets
 * Return: returns 0 when run sucessfully
 */
void print_alphabet(void)
{
	char c;

	for (c = 'c'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
