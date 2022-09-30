#include "main.h"

/**
 * _puts - analog of std put
 * Description: prints a string
 * @str: pointer to the string
 * Return: void returns none
 */

void _puts(char *str)
{
	int i = 0;

	/*while (*(str + count) != 0)*/
	while (str[i] != 0)
	{
	/*	_putchar(*(str + count));*/
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
