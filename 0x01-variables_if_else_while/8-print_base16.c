#include <stdio.h>

/**
 * main - short program
 * Description:print base16 alphanums
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	int i;
	char x;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
