#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - short program
 * Description: prints alphabets
 * Return: no return
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
