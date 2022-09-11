#include <stdio.h>

/**
 * main - main body of the program
 * Description: prints a pattern of all 3
 * combinations of numbers without repeating
 * Return: 0 on succes
 */

int main(void)
{
	int i;
	int j;
	int k;
	int x = 1;
	int y;
	int a = 2;

	for (i = 0; i <= 7; i++)
	{
		y = a;
		a++;

		for (j = x; j <= 8; j++)
		{
			for (k = y; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if ((i < 7) || (j < 8) || (k < 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}

	putchar('\n');

	return (0);

}


