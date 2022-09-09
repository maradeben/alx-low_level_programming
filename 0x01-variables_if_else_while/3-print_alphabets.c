#include <stdio.h>

/**
 * main - short program
 * Description:print lowercase alphabet
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
