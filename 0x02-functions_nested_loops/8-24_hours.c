#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - time printer
 * Description: prints minutes of day
 * Return: void returns none
 */
void jack_bauer(void)
{
	int hh, mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(':');
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar('\n');
		}
	}
}
