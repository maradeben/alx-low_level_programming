#include <stdio.h>
#include "main.h"

/**
 * main - short program
 * Description: prints alphabets
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	char c;

	for (c = 'c'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
