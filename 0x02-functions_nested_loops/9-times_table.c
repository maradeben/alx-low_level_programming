#include <stdio.h>
#include "main.h"

/**
 * times_table - mutiplier
 * Description: prints table 9
 * Return: void returns none
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if ((p / 10) == 0)
					_putchar(' ');
			}

			if (p > 9)
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');

		}
		_putchar('\n');
	}
}
