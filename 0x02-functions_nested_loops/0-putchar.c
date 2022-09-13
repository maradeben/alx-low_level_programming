#include <stdio.h>
#include "main.h"

/**
 * main - short program
 * Description: prints _putchar
 * Return: returns 0 when run sucessfully
 */
int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
