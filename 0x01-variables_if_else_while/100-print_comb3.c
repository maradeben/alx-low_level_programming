#include <stdio.h>

/**
 * main - short program
 * Description:print ints, commas and spaces using putchar
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	int i;
	int j;
	int k = 1;

	for (i = 0; i < 9; i++)
	{
		for (j = k; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i <  8) || (j < 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
