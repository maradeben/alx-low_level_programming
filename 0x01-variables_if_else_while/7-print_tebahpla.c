#include <stdio.h>

/**
 * main - short program
 * Description:print lowercase alphabets in reverse
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
