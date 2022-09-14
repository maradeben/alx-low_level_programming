#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - count up
 * Description: print from given number to 98
 * @n: integer parameter
 * Return: void returns none
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}

	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ",n);
			n--;
		}
	}

	printf("98\n");

}
