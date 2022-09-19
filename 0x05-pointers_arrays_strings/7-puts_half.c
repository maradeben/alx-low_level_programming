#include "main.h"

/**
 * puts_half - print half
 * Description: prints second half of a string
 * @str: pointer to the string
 * Return: void returns none
 */

void puts_half(char *str)
{
	int i, count = 0;

	/* first get length of string */
	while (str[count] != 0)
	{
		count++;
	}
	/* count -= 1; */
	
	/* next determine half of length */
	if (count % 2 == 0)
		i = count / 2;
	else
		i = (count / 2) + 1;

	/* finally print second half of string */
	while (i < count)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
