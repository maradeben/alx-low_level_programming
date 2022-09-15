#include <stdio.h>
#include "main.h"

/**
 * more_numbers - short program
 * Description: prints numbers 0-9
 * Return: no return
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
