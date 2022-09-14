#include <stdio.h>
#include "main.h"

/**
 * print_times_table - mutiplier
 * Description: prints table n
 * @n: integer parameter
 * Return: void returns none
 */
void print_times_table(int n)
{
	int i, j, p; /* p for product */

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					if ((p / 100) == 0)
						_putchar(' ');
					if ((p / 10) == 0)
						_putchar(' ');
				}

				if (p >= 100)
					_putchar((p / 100) + '0');
				if (p >= 10)
					_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
