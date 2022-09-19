#include "main.h"

/**
 * puts2 - prints
 * Description: prints every other char in a string
 * @str: pointer to the string
 * Return: void returns none
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
