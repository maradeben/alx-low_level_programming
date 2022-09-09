#include <stdio.h>

/**
 * main - short program
 * Description:print ints, commas and spaces using putchar
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i<9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
