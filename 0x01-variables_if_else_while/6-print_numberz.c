#include <stdio.h>

/**
 * main - short program
 * Description:print ints using putchar
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
