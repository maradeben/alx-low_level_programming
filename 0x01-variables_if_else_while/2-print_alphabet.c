#include <stdio.h>

/**
 * main - short program
 * Description:print lowercase alphabet
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
